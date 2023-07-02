import 'package:Kosmosas/pages/unityPage.dart';
import 'package:carousel_slider/carousel_slider.dart';
import 'package:easy_localization/easy_localization.dart';
import 'package:flutter/material.dart';
import 'package:url_launcher/url_launcher.dart';
import 'package:geolocator/geolocator.dart';

import '../helpers/objectProvider.dart';

class TargetCard extends StatefulWidget {
  TargetCard({required this.object});
  final ObjectOfInterest object;

  @override
  State<StatefulWidget> createState() {
    return TargetCardState(object: this.object);
  }
}

class TargetCardState extends State<TargetCard> {
  TargetCardState({required this.object});

  final CarouselController _controller = CarouselController();
  final ObjectOfInterest object;
  int _current = 0;
  bool hintMode = false;

  @override
  initState() {
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return FutureBuilder<Position>(
        future: _getCurrentPosition(),
        builder: (BuildContext context, AsyncSnapshot<Position> snapshot) {
          return Container(
              child: Column(children: [
            CarouselSlider.builder(
              itemCount: object.targets.length,
              itemBuilder:
                  (BuildContext context, int itemIndex, int pageViewIndex) =>
                      Container(
                          child: Column(
                              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                              children: [
                    object.targets[itemIndex].coverImage != null
                        ? Image(
                            image: hintMode
                                ? AssetImage(
                                    "assets/images/targets/${object.targets[itemIndex].key}.webp")
                                : AssetImage(
                                    object.targets[itemIndex].coverImage),
                            height: 300,
                          )
                        : SizedBox(),
                    Divider(
                      color: Colors.white,
                      thickness: 2.0,
                    ),
                    Text(
                        hintMode
                            ? "hint".tr() +
                                ": " +
                                "${object.targets[itemIndex].key}_hint".tr()
                            : "${object.targets[itemIndex].key}_promo".tr(),
                        textScaleFactor: 1.5,
                        style: TextStyle(
                            color: Colors.white,
                            fontWeight: FontWeight.normal)),
                    Divider(
                      color: Colors.white,
                      thickness: 2.0,
                    )
                  ])),
              options: CarouselOptions(
                  height: 500,
                  enableInfiniteScroll: false,
                  viewportFraction: 1.0,
                  onPageChanged: (index, reason) {
                    setState(() {
                      _current = index;
                    });
                  }),
            ),
            object.targets.length > 1
                ? Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: object.targets.asMap().entries.map((entry) {
                      return GestureDetector(
                        onTap: () => _controller.animateToPage(entry.key),
                        child: Container(
                          width: 12.0,
                          height: 12.0,
                          margin: EdgeInsets.symmetric(
                              vertical: 8.0, horizontal: 4.0),
                          decoration: BoxDecoration(
                              shape: BoxShape.circle,
                              color: Colors.white.withOpacity(
                                  _current == entry.key ? 0.9 : 0.4)),
                        ),
                      );
                    }).toList())
                : SizedBox(),
            SizedBox(width: 0, height: 20),
            OutlinedButton(
                onPressed: () async {
                  var params = {
                    'll':
                        '${object.coordinates.latitude},${object.coordinates.longitude}',
                    'q': object.title.split(' ').join('+')
                  };
                  var uri = Uri.https('maps.apple.com', '/', params);
                  try {
                    await launchUrl(uri);
                  } catch (e) {
                    print(e.toString());
                  }
                },
                style: OutlinedButton.styleFrom(
                  minimumSize: Size(double.infinity, 50),
                  padding: EdgeInsets.symmetric(vertical: 15, horizontal: 10),
                  side: BorderSide(width: 1.0, color: Colors.white),
                ),
                child: Text("goToObject".tr(),
                    textScaleFactor: 1.5,
                    style: TextStyle(
                        color: Colors.white, fontWeight: FontWeight.normal))),
            SizedBox(height: 20),
            Row(mainAxisAlignment: MainAxisAlignment.spaceBetween, children: [
              ElevatedButton.icon(
                  icon: Icon(Icons.camera_alt, size: 24),
                  label: Text("scan".tr()),
                  style: ButtonStyle(
                      minimumSize: MaterialStateProperty.all(Size(100, 50)),
                      backgroundColor: isClose(snapshot.data)
                          ? MaterialStateProperty.all(Colors.blue)
                          : MaterialStateProperty.all(Colors.grey)),
                  onPressed: () => {
                        Navigator.push(
                            context,
                            MaterialPageRoute(
                                builder: (context) => UnityPage(
                                    object: object, mode: UnityMode.Scan)))
                      }),
              OutlinedButton(
                  child: Text(hintMode ? "description".tr() : "whatToScan".tr(),
                      style: TextStyle(
                          color: Colors.white, fontWeight: FontWeight.normal)),
                  style: ButtonStyle(
                      minimumSize: MaterialStateProperty.all(Size(100, 50)),
                      backgroundColor: MaterialStateProperty.all(Colors.blue)),
                  onPressed: () => {setState(() => hintMode = !hintMode)}),
              SizedBox(
                  width: (MediaQuery.of(context).size.width - 40) * 0.3,
                  child: Text(getDistance(snapshot.data),
                      textScaleFactor: 1.3,
                      textAlign: TextAlign.end,
                      style: TextStyle(
                          color: Colors.white, fontWeight: FontWeight.normal)))
            ]),
            SizedBox(width: 0, height: 20)
          ]));
        });
  }

  String getDistance(Position? currentPosition) {
    return currentPosition != null
        ? (Geolocator.distanceBetween(
                        object.coordinates.latitude,
                        object.coordinates.longitude,
                        currentPosition.latitude,
                        currentPosition.longitude) /
                    1000)
                .round()
                .toString() +
            " km"
        : "- km";
  }

  bool isClose(Position? currentPosition) {
    if (currentPosition == null) {
      return false;
    }
    return Geolocator.distanceBetween(
            object.coordinates.latitude,
            object.coordinates.longitude,
            currentPosition.latitude,
            currentPosition.longitude) <
        500;
  }

  Future<bool> _handleLocationPermission() async {
    bool serviceEnabled;
    LocationPermission permission;

    serviceEnabled = await Geolocator.isLocationServiceEnabled();
    if (!serviceEnabled) {
      await this._showSimpleDialog();
      return false;
    }
    permission = await Geolocator.checkPermission();
    if (permission == LocationPermission.denied) {
      permission = await Geolocator.requestPermission();
      if (permission == LocationPermission.denied) {
        ScaffoldMessenger.of(context).showSnackBar(
            const SnackBar(content: Text('Location permissions are denied')));
        return false;
      }
    }
    if (permission == LocationPermission.deniedForever) {
      ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
          content: Text(
              'Location permissions are permanently denied, we cannot request permissions.')));
      return false;
    }
    return true;
  }

  Future<Position> _getCurrentPosition() async {
    final hasPermission = await _handleLocationPermission();
    if (!hasPermission) return throw new Exception("Location is required");
    return await Geolocator.getCurrentPosition(
        desiredAccuracy: LocationAccuracy.high);
  }

  Future<void> _showSimpleDialog() async {
    await showDialog<void>(
        context: context,
        builder: (BuildContext context) {
          return AlertDialog(
            title: Text('location_disabled'.tr()),
            content: SingleChildScrollView(
              child: ListBody(
                children: <Widget>[
                  Text('turn_on_location'.tr()),
                ],
              ),
            ),
            actions: <Widget>[
              TextButton(
                child: const Text('Ok'),
                onPressed: () {
                  Navigator.of(context).pop();
                },
              )
            ],
          );
        });
  }
}

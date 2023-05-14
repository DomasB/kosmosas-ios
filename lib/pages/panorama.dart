import 'package:flutter/material.dart';
import 'package:panorama/panorama.dart';

import '../components/menuButton.dart';
import '../helpers/objectProvider.dart';

class PanoramaPage extends StatefulWidget {
  const PanoramaPage({required this.target});
  final ObjectTarget target;

  @override
  PanoramaPageState createState() => PanoramaPageState();
}

class PanoramaPageState extends State<PanoramaPage> {
  int currentStep = 1;
  @override
  void initState() {
    super.initState();
    currentStep = 1;
  }

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    return Scaffold(
      backgroundColor: Colors.black,
      appBar: AppBar(
        backgroundColor: Colors.black,
      ),
      body: Center(
        child: Column(crossAxisAlignment: CrossAxisAlignment.center, children: [
          SizedBox(
              width: size.width,
              height: size.height -
                  (widget.target.numberOfPanoramas == 1 ? 0 : 200),
              child: Panorama(
                minZoom: 0.5,
                animSpeed: 1.0,
                sensorControl: SensorControl.Orientation,
                sensitivity: 1,
                zoom: 0.6,
                child: Image.asset(
                    'assets/images/panoramas/panorama_${widget.target.key}_$currentStep.webp'),
              )),
          widget.target.numberOfPanoramas == 1
              ? SizedBox()
              : SizedBox(
                  width: size.width,
                  height: 100,
                  child: Container(
                      alignment: Alignment.center,
                      color: Colors.black,
                      child: ListView.separated(
                          scrollDirection: Axis.horizontal,
                          shrinkWrap: true,
                          itemCount: widget.target.numberOfPanoramas,
                          separatorBuilder: (context, index) =>
                              SizedBox(width: 20),
                          itemBuilder: (BuildContext context, int index) {
                            return KMenuButton(
                                text: "${index + 1}",
                                onPressed: () => setState(() {
                                      currentStep = index + 1;
                                    }));
                          })))
        ]),
      ),
    );
  }
}

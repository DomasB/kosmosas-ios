import 'package:easy_localization/easy_localization.dart';
import 'package:flutter/material.dart';
import 'package:carousel_slider/carousel_slider.dart';

import '../components/background.dart';

class InstructionPage extends StatefulWidget {
  @override
  State<StatefulWidget> createState() {
    return InstructionPageState();
  }
}

class InstructionPageState extends State<InstructionPage> {
  int _current = 0;
  final CarouselController _controller = CarouselController();
  final List<IconData> icons = [
    Icons.volume_up,
    Icons.abc,
    Icons.video_camera_back_outlined,
    Icons.photo,
    Icons.threesixty_sharp,
    Icons.view_in_ar
  ];

  final List<String> icon_text = [
    'audio'.tr(),
    'text'.tr(),
    'video'.tr(),
    'gallery'.tr(),
    'panorama'.tr(),
    'model'.tr()
  ];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          backgroundColor: Colors.black,
        ),
        backgroundColor: Colors.transparent,
        body: KBackground(
            fullHeight: true,
            child: Column(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              children: [
                CarouselSlider.builder(
                  itemCount: 3,
                  itemBuilder: (BuildContext context, int itemIndex,
                          int pageViewIndex) =>
                      Container(
                          padding:
                              EdgeInsets.symmetric(vertical: 0, horizontal: 50),
                          child: Column(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              Text(
                                'instructions_step_${itemIndex + 1}'.tr(),
                                style:
                                    TextStyle(color: Colors.white, height: 1.2),
                                textScaleFactor: 1.4,
                                textAlign: TextAlign.justify,
                              ),
                              SizedBox(height: 20, width: 0),
                              itemIndex < 2
                                  ? Image(
                                      image: AssetImage(
                                          'assets/images/instructions/${itemIndex + 1}_${EasyLocalization.of(context).locale.toString().split("_")[0]}.jpg'),
                                      height:
                                          MediaQuery.of(context).size.height /
                                              2)
                                  : SizedBox(
                                      width: MediaQuery.of(context).size.width,
                                      height:
                                          MediaQuery.of(context).size.height /
                                              2,
                                      child: ListView.separated(
                                          itemCount: icons.length,
                                          separatorBuilder:
                                              (BuildContext context, int i) =>
                                                  SizedBox(
                                                      height: 20, width: 0),
                                          itemBuilder:
                                              (BuildContext context, int i) {
                                            return Row(children: [
                                              Icon(icons[i],
                                                  color: Colors.white,
                                                  size: 40),
                                              Text(" - ",
                                                  textScaleFactor: 1.4,
                                                  style: TextStyle(
                                                      color: Colors.white,
                                                      height: 1.2)),
                                              Text(
                                                "${icon_text[i]}",
                                                textScaleFactor: 1.4,
                                                style: TextStyle(
                                                    color: Colors.white,
                                                    height: 1.2),
                                              )
                                            ]);
                                          })),
                            ],
                          )),
                  options: CarouselOptions(
                      height: MediaQuery.of(context).size.height - 200,
                      enableInfiniteScroll: false,
                      viewportFraction: 1.0,
                      onPageChanged: (index, reason) {
                        setState(() {
                          _current = index;
                        });
                      }),
                ),
                Row(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: [1, 2, 3].asMap().entries.map((entry) {
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
                  }).toList(),
                ),
              ],
            )));
  }
}

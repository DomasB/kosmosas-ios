import 'package:easy_localization/easy_localization.dart';
import 'package:flutter/material.dart';

class MorePage extends StatelessWidget {
  MorePage();
  final ScrollController _scrollController =
      ScrollController(keepScrollOffset: false);
  final double textScaleFactor = 1.3;
  final double lineHeight = 1.4;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          backgroundColor: Colors.black,
        ),
        backgroundColor: Colors.transparent,
        body: Center(
          child: Container(
            padding: const EdgeInsets.fromLTRB(20, 20, 20, 20),
            child: RawScrollbar(
                thumbColor: Colors.white,
                mainAxisMargin: 20,
                radius: const Radius.circular(20),
                thumbVisibility: true,
                trackVisibility: true,
                thickness: 10,
                controller: _scrollController,
                child: Container(
                    decoration: const BoxDecoration(
                        color: Colors.black,
                        image: DecorationImage(
                            alignment: Alignment.topCenter,
                            image: AssetImage("assets/images/background.jpg"),
                            fit: BoxFit.fitWidth)),
                    child: SingleChildScrollView(
                        controller: _scrollController,
                        padding: const EdgeInsets.all(10),
                        child: Container(
                            padding: const EdgeInsets.all(20),
                            width: double.infinity,
                            child: Column(children: [
                              Text("read_more_main_text".tr(),
                                  style: TextStyle(
                                      color: Colors.white, height: lineHeight),
                                  textScaleFactor: textScaleFactor,
                                  textAlign: TextAlign.justify),
                              SizedBox(height: 20, width: 0),
                              RichText(
                                  text: TextSpan(
                                      style: TextStyle(
                                          color: Colors.white,
                                          height: lineHeight),
                                      children: [
                                        TextSpan(
                                            text: "read_more_creators_header"
                                                .tr(),
                                            style: const TextStyle(
                                                fontWeight: FontWeight.bold)),
                                        TextSpan(
                                            text: "read_more_creators".tr())
                                      ]),
                                  textScaleFactor: textScaleFactor,
                                  textAlign: TextAlign.justify),
                              SizedBox(height: 20, width: 0),
                              Text("project_financed_by".tr(),
                                  style: TextStyle(
                                      color: Colors.white,
                                      fontWeight: FontWeight.bold,
                                      height: lineHeight),
                                  textScaleFactor: textScaleFactor,
                                  textAlign: TextAlign.justify),
                              Text("lithuanian_council_for_culture".tr(),
                                  textScaleFactor: textScaleFactor,
                                  style: const TextStyle(color: Colors.white),
                                  textAlign: TextAlign.justify),
                              SizedBox(height: 10, width: 0),
                              Row(
                                  mainAxisAlignment:
                                      MainAxisAlignment.spaceEvenly,
                                  children: [
                                    Image(
                                      image: AssetImage(
                                          'assets/images/kulturosTaryba.jpg'),
                                      height: 100,
                                    ),
                                    Image(
                                        image: AssetImage(
                                            'assets/images/akademikai.jpg'),
                                        height: 100)
                                  ]),
                              Text("project_made_by".tr(),
                                  style: const TextStyle(
                                      color: Colors.white,
                                      fontWeight: FontWeight.bold,
                                      height: 3),
                                  textScaleFactor: textScaleFactor,
                                  textAlign: TextAlign.justify),
                              Row(
                                  mainAxisAlignment:
                                      MainAxisAlignment.spaceEvenly,
                                  children: [
                                    Image(
                                        image: AssetImage(
                                            'assets/images/logoSomething.jpg'),
                                        height: 100),
                                    Image(
                                      image: AssetImage(
                                          'assets/images/logoKF.jpg'),
                                      height: 100,
                                    )
                                  ]),
                              Text("read_more_footer".tr(),
                                  style: const TextStyle(
                                      color: Colors.white, height: 3),
                                  textScaleFactor: textScaleFactor,
                                  textAlign: TextAlign.justify),
                              Divider(
                                  color: Colors.white,
                                  height: 30,
                                  thickness: 2),
                              Text("read_more_contacts".tr(),
                                  style: TextStyle(
                                      color: Colors.white, height: lineHeight),
                                  textScaleFactor: textScaleFactor,
                                  textAlign: TextAlign.center)
                            ]))))),
          ),
        ));
  }
}

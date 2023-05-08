import 'package:Kosmosas/components/background.dart';
import 'package:easy_localization/easy_localization.dart';
import 'package:flutter/material.dart';
import 'package:Kosmosas/components/menuButton.dart';
import 'package:Kosmosas/pages/instructionPage.dart';
import 'package:Kosmosas/pages/morePage.dart';

import 'startPage.dart';

class MainMenu extends StatefulWidget {
  const MainMenu();

  @override
  State<MainMenu> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MainMenu> {
  @override
  Widget build(BuildContext context) {
    // This method is rerun every time setState is called, for instance as done
    // by the _incrementCounter method above.
    //
    // The Flutter framework has been optimized to make rerunning build methods
    // fast, so that you can just rebuild anything that needs updating rather
    // than having to individually change instances of widgets.
    return KBackground(
      withLogo: true,
      horizontalPadding: 20,
      child: Column(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: [
          Container(
              padding: EdgeInsets.symmetric(vertical: 0, horizontal: 10),
              child: Column(
                children: [
                  KMenuButton(
                    onPressed: () => {
                      Navigator.push(context,
                          MaterialPageRoute(builder: (context) => StartPage()))
                    },
                    text: "begining".tr(),
                  ),
                  getDivider(),
                  KMenuButton(
                      onPressed: () => {
                            Navigator.push(
                                context,
                                MaterialPageRoute(
                                    builder: (context) => InstructionPage()))
                          },
                      text: "instruction".tr()),
                  getDivider(),
                  KMenuButton(
                      onPressed: () => {
                            Navigator.push(
                                context,
                                MaterialPageRoute(
                                    builder: (context) => MorePage()))
                          },
                      text: "more".tr()),
                ],
              ))
        ],
      ),
    );
  }

  Widget getDivider() => const Divider(
        height: 30,
        color: Colors.white,
        thickness: 2,
      );
}

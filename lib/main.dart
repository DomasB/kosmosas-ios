import 'package:flutter/material.dart';
import 'package:Kosmosas/components/k_button.dart';
import 'package:easy_localization/easy_localization.dart';

import 'pages/mainMenu.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await EasyLocalization.ensureInitialized();

  runApp(EasyLocalization(
      child: MaterialApp(home: KosmosasApp()),
      supportedLocales: [Locale('en', 'US'), Locale('lt', 'LT')],
      fallbackLocale: Locale('en', 'US'),
      path: 'assets/translations'));
}

final RouteObserver<PageRoute> routeObserver = RouteObserver<PageRoute>();

class KosmosasApp extends StatelessWidget {
  static final GlobalKey<ScaffoldState> _scaffoldKey =
      GlobalKey<ScaffoldState>();

  Widget build(BuildContext context) {
    return MaterialApp(
        title: 'Kosmosas',
        theme: ThemeData(fontFamily: 'Sans Serif'),
        localizationsDelegates: context.localizationDelegates,
        navigatorObservers: [routeObserver],
        supportedLocales: context.supportedLocales,
        locale: context.locale,
        home: Scaffold(
          key: _scaffoldKey,
          appBar: AppBar(
            backgroundColor: Colors.black,
          ),
          body: SafeArea(
              bottom: false,
              child: Container(
                alignment: Alignment.center,
                padding: EdgeInsets.symmetric(vertical: 0, horizontal: 50),
                decoration: const BoxDecoration(
                    color: Colors.black,
                    image: DecorationImage(
                        alignment: Alignment.topCenter,
                        image: AssetImage("assets/images/background.jpg"),
                        fit: BoxFit.fitWidth)),
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                  children: [
                    Image(image: AssetImage("assets/images/title.png")),
                    Container(
                        padding:
                            EdgeInsets.symmetric(vertical: 0, horizontal: 40),
                        child: Column(
                          children: [
                            KButtonOutlined(
                              onPressed: () => setLtAndNavigate(context),
                              text: "LT",
                            ),
                            SizedBox(height: 30),
                            KButtonOutlined(
                                onPressed: () => setEnAndNavigate(context),
                                text: "EN",
                                variation: KButtonVariation.bottom),
                          ],
                        ))
                  ],
                ),
              )),
        ));
  }

  Future<void> setLtAndNavigate(BuildContext context) async {
    await context.setLocale(Locale('lt', 'LT'));
    Future.delayed(Duration(milliseconds: 100), () {
      Navigator.push(
          context,
          PageRouteBuilder(
              pageBuilder: (context, _, __) => MainMenu(),
              transitionDuration: Duration.zero,
              reverseTransitionDuration: Duration.zero));
    });
  }

  Future<void> setEnAndNavigate(BuildContext context) async {
    await context.setLocale(Locale('en', 'US'));
    Future.delayed(Duration(milliseconds: 100), () {
      Navigator.push(
          context,
          PageRouteBuilder(
              pageBuilder: (context, _, __) => MainMenu(),
              transitionDuration: Duration.zero,
              reverseTransitionDuration: Duration.zero));
    });
  }
}

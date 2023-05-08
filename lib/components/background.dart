import 'package:flutter/material.dart';

class KBackground extends StatelessWidget {
  const KBackground(
      {this.child,
      this.withLogo = false,
      this.fullHeight = false,
      this.horizontalPadding = 0});

  final Widget child;
  final bool withLogo;
  final bool fullHeight;
  final double horizontalPadding;

  @override
  Widget build(BuildContext context) {
    return LayoutBuilder(
        builder: (BuildContext context, BoxConstraints constraints) {
      return Stack(alignment: Alignment.topCenter, children: [
        Container(
            padding: EdgeInsets.fromLTRB(0, constraints.maxHeight * 0.05, 0, 0),
            child: Container(
                decoration: const BoxDecoration(
                    color: Colors.black,
                    image: DecorationImage(
                        alignment: Alignment.topCenter,
                        image: AssetImage("assets/images/background.jpg"),
                        fit: BoxFit.fitWidth)),
                height: constraints.maxHeight / 2,
                width: constraints.maxWidth - 100,
                alignment: Alignment.center,
                child: withLogo
                    ? Container(
                        padding: EdgeInsets.symmetric(horizontal: 20),
                        child:
                            Image(image: AssetImage("assets/images/title.png")))
                    : SizedBox())),
        Container(
            padding: EdgeInsets.fromLTRB(
                horizontalPadding,
                fullHeight
                    ? 0
                    : constraints.maxHeight - constraints.maxHeight * 0.7,
                horizontalPadding,
                0),
            child: child)
      ]);
    });
  }
}

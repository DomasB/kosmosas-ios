import 'package:flutter/material.dart';

class KMenuButton extends StatelessWidget {
  const KMenuButton({this.onPressed, this.text = ''});

  final GestureTapCallback onPressed;
  final String text;

  @override
  Widget build(BuildContext context) {
    return OutlinedButton(
      onPressed: onPressed,
      child: Text(text.toUpperCase(),
          textScaleFactor: 2,
          style: TextStyle(color: Colors.white, fontWeight: FontWeight.normal)),
    );
  }
}

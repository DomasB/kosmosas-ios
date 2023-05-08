import 'package:easy_localization/easy_localization.dart';
import 'package:flutter/material.dart';
import 'package:Kosmosas/helpers/objectProvider.dart';

class TextPage extends StatelessWidget {
  TextPage({this.target});
  final ScrollController _scrollController =
      ScrollController(keepScrollOffset: false);
  final ObjectTarget target;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          backgroundColor: Colors.black,
        ),
        backgroundColor: Colors.black,
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
                    decoration: BoxDecoration(
                        color: Colors.white.withAlpha(60),
                        border: Border.all(
                          color: Colors.white.withAlpha(150),
                        ),
                        borderRadius:
                            const BorderRadius.all(Radius.circular(20))),
                    child: SingleChildScrollView(
                        controller: _scrollController,
                        padding: const EdgeInsets.all(10),
                        child: Container(
                            padding: const EdgeInsets.all(20),
                            width: double.infinity,
                            child: Text('text_${target.key}'.tr(),
                                style: const TextStyle(
                                    fontSize: 20,
                                    height: 1.5,
                                    color: Colors.white),
                                textAlign: TextAlign.justify))))),
          ),
        ));
  }
}

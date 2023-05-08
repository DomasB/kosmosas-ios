import 'package:easy_localization/easy_localization.dart';
import 'package:flutter/material.dart';
import 'package:Kosmosas/components/k_button.dart';
import 'package:Kosmosas/helpers/objectProvider.dart';
import 'package:Kosmosas/pages/gallery.dart';
import 'package:Kosmosas/pages/textPage.dart';
import 'package:Kosmosas/pages/unityPage.dart';

import 'playerPage.dart';
import 'panorama.dart';

class TargetPage extends StatelessWidget {
  TargetPage({this.object, this.objectTarget});
  final ObjectOfInterest object;
  final ObjectTarget objectTarget;

  final Map<DataType, IconData> iconByDataType = {
    DataType.audio: Icons.volume_up,
    DataType.text: Icons.abc,
    DataType.video: Icons.video_camera_back_outlined,
    DataType.gallery: Icons.photo,
    DataType.panorama: Icons.threesixty_sharp,
    DataType.model: Icons.view_in_ar
  };

  List<Widget> getButtons(BuildContext context) {
    return this
        .objectTarget
        .dataTypes
        .map((o) => new KButtonOutlined(
            onPressed: () => {
                  if (o == DataType.panorama)
                    {
                      Navigator.push(
                          context,
                          MaterialPageRoute(
                              builder: (context) =>
                                  PanoramaPage(target: this.objectTarget)))
                    }
                  else if (o == DataType.gallery)
                    {
                      Navigator.push(
                          context,
                          MaterialPageRoute(
                              builder: (context) =>
                                  GalleryPage(target: this.objectTarget)))
                    }
                  else if (o == DataType.text)
                    {
                      Navigator.push(
                          context,
                          MaterialPageRoute(
                              builder: (context) =>
                                  TextPage(target: this.objectTarget)))
                    }
                  else if (o == DataType.audio)
                    {
                      Navigator.push(
                          context,
                          MaterialPageRoute(
                              builder: (context) => PlayerPage(
                                    target: this.objectTarget,
                                    language: EasyLocalization.of(context)
                                        .locale
                                        .toString()
                                        .split("_")[0],
                                  )))
                    }
                  else if (o == DataType.video)
                    {
                      Navigator.push(
                          context,
                          MaterialPageRoute(
                              builder: (context) => UnityPage(
                                    object: this.object,
                                    mode: UnityMode.Video,
                                    targetName: this.objectTarget.key,
                                  )))
                    }
                  else if (o == DataType.model)
                    {
                      Navigator.push(
                          context,
                          MaterialPageRoute(
                              builder: (context) => UnityPage(
                                    object: this.object,
                                    mode: UnityMode.Model,
                                    targetName: this.objectTarget.key,
                                  )))
                    }
                },
            icon: Icon(
              iconByDataType[o],
              color: Colors.white,
              size: 40,
            )))
        .toList();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          backgroundColor: Colors.black,
        ),
        backgroundColor: Colors.transparent,
        body: Container(
          alignment: Alignment.center,
          padding: EdgeInsets.symmetric(vertical: 20, horizontal: 100),
          decoration: const BoxDecoration(color: Colors.black),
          child: Column(
              mainAxisAlignment: MainAxisAlignment.spaceAround,
              children: getButtons(context)),
        ));
  }
}

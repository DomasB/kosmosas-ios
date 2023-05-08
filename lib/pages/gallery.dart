import 'package:easy_localization/easy_localization.dart';
import 'package:flutter/material.dart';
import 'package:flutter_image_slideshow/flutter_image_slideshow.dart';

import '../helpers/objectProvider.dart';

class GalleryPage extends StatelessWidget {
  const GalleryPage({this.target});

  final ObjectTarget target;

  List<Widget> getImages() {
    List<Widget> listOfImages = [];
    for (var i = 0; i < target.numberOfImages; i++) {
      listOfImages.add(Column(
        mainAxisAlignment: MainAxisAlignment.spaceAround,
        children: [
          Image.asset(
            'assets/images/gallery/${target.key}_${i + 1}.webp',
            fit: BoxFit.contain,
          ),
          Text(
            'image_${target.key}_${i + 1}'.tr(),
            style: TextStyle(color: Colors.white),
          )
        ],
      ));
    }
    return listOfImages;
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(backgroundColor: Colors.black),
        body: Container(
            color: Colors.black,
            child: ImageSlideshow(
                height: double.infinity, children: getImages())));
  }
}

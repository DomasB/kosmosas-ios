import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:Kosmosas/helpers/objectProvider.dart';

import '../main.dart';
import 'targetPage.dart';

enum UnityMode { Scan, Model, Video }

class UnityPage extends StatefulWidget {
  UnityPage({this.object, this.mode, this.targetName = ''});

  ObjectOfInterest object;
  UnityMode mode;
  String targetName;

  @override
  UnityPageState createState() =>
      UnityPageState(object: object, mode: mode, targetName: targetName);
}

class UnityPageState extends State<UnityPage> with RouteAware {
  UnityPageState({this.object, this.mode, this.targetName});
  ObjectOfInterest object;
  UnityMode mode;
  String targetName;
  UnityWidgetController _unityWidgetController;

  Widget build(BuildContext context) {
    return WillPopScope(
        onWillPop: () async {
          this.object.targets.forEach((o) {
            this._unityWidgetController.postMessage(o.key, 'Scan', null);
          });
          return true;
        },
        child: Scaffold(
            appBar: AppBar(
              backgroundColor: Colors.black,
            ),
            body: SafeArea(
              bottom: false,
              child: UnityWidget(
                onUnityCreated: onUnityCreated,
                onUnityMessage: (message) =>
                    openTargetList(context, message.toString()),
                onUnityUnloaded: () {
                  this.object.targets.forEach((o) {
                    this
                        ._unityWidgetController
                        .postMessage(o.key, 'Scan', null);
                  });
                },
                onUnitySceneLoaded: (scene) {
                  this.object.targets.forEach((o) {
                    this
                        ._unityWidgetController
                        .postMessage(o.key, 'Scan', null);
                  });
                },
              ),
            )));
  }

  //Callback that connects the created controller to the unity controller
  void onUnityCreated(controller) {
    this._unityWidgetController = controller;
    var mode = this.mode.toString().split('.')[1];
    this.object.targets.forEach((o) {
      this._unityWidgetController.postMessage(o.key, mode, null);
    });
    if (this.mode == UnityMode.Video) {
      this
          ._unityWidgetController
          .postMessage(this.targetName, 'ShowVideo', null);
    }
    if (this.mode == UnityMode.Model) {
      this._unityWidgetController.postMessage(this.targetName, 'Show3D', null);
    }
  }

  void openTargetList(BuildContext context, String message) {
    if (this.mode != UnityMode.Scan) {
      return;
    }
    var target = object.targets.firstWhere((o) => o.key == message);
    if (target != null && ModalRoute.of(context).isCurrent) {
      Navigator.push(
          context,
          MaterialPageRoute(
              builder: (context) =>
                  TargetPage(object: object, objectTarget: target)));
    }
  }

  @override
  void didChangeDependencies() {
    super.didChangeDependencies();
    routeObserver.subscribe(this, ModalRoute.of(context) as PageRoute);
  }

  @override
  void didPopNext() {
    this.object.targets.forEach((o) {
      this._unityWidgetController.postMessage(o.key, 'Scan', null);
    });
  }

  @override
  void dispose() {
    routeObserver.unsubscribe(this);
    super.dispose();
  }
}

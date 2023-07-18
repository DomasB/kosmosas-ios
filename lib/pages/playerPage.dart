import 'package:flutter/material.dart';
import 'package:Kosmosas/helpers/objectProvider.dart';

import 'package:assets_audio_player/assets_audio_player.dart';

import '../components/player_controls.dart';
import '../components/position_seek_widget.dart';

class PlayerPage extends StatefulWidget {
  const PlayerPage({required this.target, required this.language});

  final ObjectTarget target;
  final String language;

  @override
  _PlayerState createState() =>
      _PlayerState(target: target, language: language);
}

class _PlayerState extends State<PlayerPage> {
  _PlayerState({required this.target, required this.language});

  late AssetsAudioPlayer _audioPlayer;
  final ObjectTarget target;
  final String language;

  Future<void> play() async {
    _audioPlayer.play();
  }

  void openPlayer() async {
    await _audioPlayer.open(
        Audio(language == "lt"
            ? "assets/audio/${language}-${target.key}.mp3"
            : "assets/audio/${language}_${target.key}.mp3"),
        showNotification: false,
        autoStart: false);
    _audioPlayer.play();
  }

  @override
  void initState() {
    super.initState();
    _audioPlayer = AssetsAudioPlayer.newPlayer();
    openPlayer();
    // Set a sequence of audio sources that will be played by the audio player.
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Colors.black,
        appBar: AppBar(
          backgroundColor: Colors.black,
        ),
        body: Container(
            padding: EdgeInsets.all(50),
            child: Container(
                alignment: Alignment.center,
                decoration: const BoxDecoration(
                    color: Colors.black,
                    image: DecorationImage(
                        alignment: Alignment.topCenter,
                        image: AssetImage("assets/images/background.jpg"),
                        fit: BoxFit.fitWidth)),
                child: Center(
                    child: Column(
                        mainAxisAlignment: MainAxisAlignment.end,
                        children: [
                      _audioPlayer.builderCurrent(
                          builder: (context, Playing playing) {
                        return Column(children: <Widget>[
                          _audioPlayer.builderLoopMode(
                            builder: (context, loopMode) {
                              return PlayerBuilder.isPlaying(
                                  player: _audioPlayer,
                                  builder: (context, isPlaying) {
                                    return PlayingControls(
                                      isPlaying: isPlaying,
                                      onPlay: () {
                                        _audioPlayer.playOrPause();
                                      },
                                    );
                                  });
                            },
                          ),
                          _audioPlayer.builderRealtimePlayingInfos(
                              builder: (context, RealtimePlayingInfos infos) {
                            // ignore: unnecessary_null_comparison
                            if (infos == null) {
                              return const SizedBox();
                            }
                            //print('infos: $infos');
                            return PositionSeekWidget(
                              currentPosition: infos.currentPosition,
                              duration: infos.duration,
                              seekTo: (to) {
                                _audioPlayer.seek(to);
                              },
                            );
                          })
                        ]);
                      })
                    ])))));
  }

  @override
  void dispose() {
    _audioPlayer.dispose();
    super.dispose();
  }
}

import 'package:flutter/material.dart';

class PlayingControls extends StatelessWidget {
  final bool isPlaying;
  final Function() onPlay;

  const PlayingControls({required this.isPlaying, required this.onPlay});

  @override
  Widget build(BuildContext context) {
    return MaterialButton(
      onPressed: onPlay,
      animationDuration: Duration.zero,
      shape: const CircleBorder(),
      padding: const EdgeInsets.all(16),
      child: Icon(isPlaying ? Icons.pause_circle : Icons.play_circle,
          size: 130, color: Colors.white),
    );
  }
}

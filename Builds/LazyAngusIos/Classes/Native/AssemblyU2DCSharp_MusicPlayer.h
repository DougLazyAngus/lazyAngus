#pragma once
#include <stdint.h>
// UnityEngine.AudioSource
struct AudioSource_t553;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MusicPlayer
struct  MusicPlayer_t554  : public MonoBehaviour_t13
{
	// System.Boolean MusicPlayer::registeredForEvents
	bool ___registeredForEvents_2;
	// UnityEngine.AudioSource MusicPlayer::gameMusic
	AudioSource_t553 * ___gameMusic_3;
	// UnityEngine.AudioSource MusicPlayer::menuMusic
	AudioSource_t553 * ___menuMusic_4;
	// UnityEngine.AudioSource MusicPlayer::realAngusMusic
	AudioSource_t553 * ___realAngusMusic_5;
	// UnityEngine.AudioSource MusicPlayer::boostMusic
	AudioSource_t553 * ___boostMusic_6;
	// UnityEngine.AudioSource MusicPlayer::currentMusic
	AudioSource_t553 * ___currentMusic_7;
};

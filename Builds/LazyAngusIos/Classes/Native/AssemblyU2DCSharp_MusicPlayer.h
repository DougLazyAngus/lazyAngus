﻿#pragma once
#include <stdint.h>
// UnityEngine.AudioSource
struct AudioSource_t393;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MusicPlayer
struct  MusicPlayer_t462  : public MonoBehaviour_t67
{
	// System.Boolean MusicPlayer::registeredForEvents
	bool ___registeredForEvents_2;
	// UnityEngine.AudioSource MusicPlayer::gameMusic
	AudioSource_t393 * ___gameMusic_3;
	// UnityEngine.AudioSource MusicPlayer::menuMusic
	AudioSource_t393 * ___menuMusic_4;
	// UnityEngine.AudioSource MusicPlayer::currentMusic
	AudioSource_t393 * ___currentMusic_5;
	// System.Collections.IEnumerator MusicPlayer::playCuedMusic
	Object_t * ___playCuedMusic_6;
};

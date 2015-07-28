#pragma once
#include <stdint.h>
// UnityEngine.AudioSource
struct AudioSource_t562;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MusicPlayer
struct  MusicPlayer_t563  : public MonoBehaviour_t13
{
	// System.Boolean MusicPlayer::registeredForEvents
	bool ___registeredForEvents_2;
	// UnityEngine.AudioSource MusicPlayer::gameMusic
	AudioSource_t562 * ___gameMusic_3;
	// UnityEngine.AudioSource MusicPlayer::menuMusic
	AudioSource_t562 * ___menuMusic_4;
	// UnityEngine.AudioSource MusicPlayer::currentMusic
	AudioSource_t562 * ___currentMusic_5;
	// System.Collections.IEnumerator MusicPlayer::playCuedMusic
	Object_t * ___playCuedMusic_6;
};

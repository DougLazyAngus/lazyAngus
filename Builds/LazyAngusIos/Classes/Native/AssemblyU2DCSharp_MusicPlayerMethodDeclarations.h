#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MusicPlayer
struct MusicPlayer_t572;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.AudioSource
struct AudioSource_t571;

// System.Void MusicPlayer::.ctor()
extern "C" void MusicPlayer__ctor_m3059 (MusicPlayer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::Start()
extern "C" void MusicPlayer_Start_m3060 (MusicPlayer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnDestroy()
extern "C" void MusicPlayer_OnDestroy_m3061 (MusicPlayer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::RegisterForEvents()
extern "C" void MusicPlayer_RegisterForEvents_m3062 (MusicPlayer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::UnregisterForEvents()
extern "C" void MusicPlayer_UnregisterForEvents_m3063 (MusicPlayer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnGamePhaseChanged()
extern "C" void MusicPlayer_OnGamePhaseChanged_m3064 (MusicPlayer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnMusicMuteChanged()
extern "C" void MusicPlayer_OnMusicMuteChanged_m3065 (MusicPlayer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::UpdateAllMusic()
extern "C" void MusicPlayer_UpdateAllMusic_m3066 (MusicPlayer_t572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MusicPlayer::PlayMusic(UnityEngine.AudioSource)
extern "C" Object_t * MusicPlayer_PlayMusic_m3067 (MusicPlayer_t572 * __this, AudioSource_t571 * ___music, const MethodInfo* method) IL2CPP_METHOD_ATTR;

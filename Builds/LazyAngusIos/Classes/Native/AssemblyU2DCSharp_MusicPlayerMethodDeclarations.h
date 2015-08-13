#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MusicPlayer
struct MusicPlayer_t612;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.AudioSource
struct AudioSource_t611;

// System.Void MusicPlayer::.ctor()
extern "C" void MusicPlayer__ctor_m3263 (MusicPlayer_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::Start()
extern "C" void MusicPlayer_Start_m3264 (MusicPlayer_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnDestroy()
extern "C" void MusicPlayer_OnDestroy_m3265 (MusicPlayer_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::RegisterForEvents()
extern "C" void MusicPlayer_RegisterForEvents_m3266 (MusicPlayer_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::UnregisterForEvents()
extern "C" void MusicPlayer_UnregisterForEvents_m3267 (MusicPlayer_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnGamePhaseChanged()
extern "C" void MusicPlayer_OnGamePhaseChanged_m3268 (MusicPlayer_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnMusicMuteChanged()
extern "C" void MusicPlayer_OnMusicMuteChanged_m3269 (MusicPlayer_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::UpdateAllMusic()
extern "C" void MusicPlayer_UpdateAllMusic_m3270 (MusicPlayer_t612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MusicPlayer::PlayMusic(UnityEngine.AudioSource)
extern "C" Object_t * MusicPlayer_PlayMusic_m3271 (MusicPlayer_t612 * __this, AudioSource_t611 * ___music, const MethodInfo* method) IL2CPP_METHOD_ATTR;

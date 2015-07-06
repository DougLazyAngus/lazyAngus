#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MusicPlayer
struct MusicPlayer_t462;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.AudioSource
struct AudioSource_t393;

// System.Void MusicPlayer::.ctor()
extern "C" void MusicPlayer__ctor_m2148 (MusicPlayer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::Start()
extern "C" void MusicPlayer_Start_m2149 (MusicPlayer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnDestroy()
extern "C" void MusicPlayer_OnDestroy_m2150 (MusicPlayer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::RegisterForEvents()
extern "C" void MusicPlayer_RegisterForEvents_m2151 (MusicPlayer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::UnregisterForEvents()
extern "C" void MusicPlayer_UnregisterForEvents_m2152 (MusicPlayer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnGamePhaseChanged()
extern "C" void MusicPlayer_OnGamePhaseChanged_m2153 (MusicPlayer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnMusicMuteChanged()
extern "C" void MusicPlayer_OnMusicMuteChanged_m2154 (MusicPlayer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::UpdateAllMusic()
extern "C" void MusicPlayer_UpdateAllMusic_m2155 (MusicPlayer_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MusicPlayer::PlayMusic(UnityEngine.AudioSource)
extern "C" Object_t * MusicPlayer_PlayMusic_m2156 (MusicPlayer_t462 * __this, AudioSource_t393 * ___music, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MusicPlayer
struct MusicPlayer_t554;
// UnityEngine.AudioSource
struct AudioSource_t553;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void MusicPlayer::.ctor()
extern "C" void MusicPlayer__ctor_m3004 (MusicPlayer_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::Start()
extern "C" void MusicPlayer_Start_m3005 (MusicPlayer_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnDestroy()
extern "C" void MusicPlayer_OnDestroy_m3006 (MusicPlayer_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::RegisterForEvents()
extern "C" void MusicPlayer_RegisterForEvents_m3007 (MusicPlayer_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::UnregisterForEvents()
extern "C" void MusicPlayer_UnregisterForEvents_m3008 (MusicPlayer_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnGamePhaseChanged()
extern "C" void MusicPlayer_OnGamePhaseChanged_m3009 (MusicPlayer_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnMusicMuteChanged()
extern "C" void MusicPlayer_OnMusicMuteChanged_m3010 (MusicPlayer_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnBoostActive(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void MusicPlayer_OnBoostActive_m3011 (MusicPlayer_t554 * __this, int32_t ___newBoost, int32_t ___oldBoost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::OnPauseChanged()
extern "C" void MusicPlayer_OnPauseChanged_m3012 (MusicPlayer_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::UpdateAllMusic()
extern "C" void MusicPlayer_UpdateAllMusic_m3013 (MusicPlayer_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::FadeOutMusic(UnityEngine.AudioSource)
extern "C" void MusicPlayer_FadeOutMusic_m3014 (MusicPlayer_t554 * __this, AudioSource_t553 * ___music, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MusicPlayer::FadeInMusic(UnityEngine.AudioSource)
extern "C" void MusicPlayer_FadeInMusic_m3015 (MusicPlayer_t554 * __this, AudioSource_t553 * ___music, const MethodInfo* method) IL2CPP_METHOD_ATTR;

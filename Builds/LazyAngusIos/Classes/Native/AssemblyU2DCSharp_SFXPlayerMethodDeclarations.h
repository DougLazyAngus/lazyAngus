#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SFXPlayer
struct SFXPlayer_t597;
// System.String
struct String_t;
// SFXPlayer/SFXType[]
struct SFXTypeU5BU5D_t596;
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXType.h"

// System.Void SFXPlayer::.ctor()
extern "C" void SFXPlayer__ctor_m3215 (SFXPlayer_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SFXPlayer SFXPlayer::get_instance()
extern "C" SFXPlayer_t597 * SFXPlayer_get_instance_m3216 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::set_instance(SFXPlayer)
extern "C" void SFXPlayer_set_instance_m3217 (Object_t * __this /* static, unused */, SFXPlayer_t597 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::Awake()
extern "C" void SFXPlayer_Awake_m3218 (SFXPlayer_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::LoadAudioSources()
extern "C" void SFXPlayer_LoadAudioSources_m3219 (SFXPlayer_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::LoadAudioSource(SFXPlayer/SFXType,System.String)
extern "C" void SFXPlayer_LoadAudioSource_m3220 (SFXPlayer_t597 * __this, int32_t ___type, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::Play(SFXPlayer/SFXType)
extern "C" void SFXPlayer_Play_m3221 (SFXPlayer_t597 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::PlayDelayed(SFXPlayer/SFXType,System.Single)
extern "C" void SFXPlayer_PlayDelayed_m3222 (SFXPlayer_t597 * __this, int32_t ___type, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::PlayRandom(SFXPlayer/SFXType[],System.Single)
extern "C" void SFXPlayer_PlayRandom_m3223 (SFXPlayer_t597 * __this, SFXTypeU5BU5D_t596* ___types, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::Start()
extern "C" void SFXPlayer_Start_m3224 (SFXPlayer_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::OnDestroy()
extern "C" void SFXPlayer_OnDestroy_m3225 (SFXPlayer_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::RegisterForEvents()
extern "C" void SFXPlayer_RegisterForEvents_m3226 (SFXPlayer_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::UnregisterForEvents()
extern "C" void SFXPlayer_UnregisterForEvents_m3227 (SFXPlayer_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::OnSoundMuteChanged()
extern "C" void SFXPlayer_OnSoundMuteChanged_m3228 (SFXPlayer_t597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

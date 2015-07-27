#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SFXPlayer
struct SFXPlayer_t543;
// System.String
struct String_t;
// SFXPlayer/SFXType[]
struct SFXTypeU5BU5D_t542;
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXType.h"

// System.Void SFXPlayer::.ctor()
extern "C" void SFXPlayer__ctor_m2865 (SFXPlayer_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SFXPlayer SFXPlayer::get_instance()
extern "C" SFXPlayer_t543 * SFXPlayer_get_instance_m2866 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::set_instance(SFXPlayer)
extern "C" void SFXPlayer_set_instance_m2867 (Object_t * __this /* static, unused */, SFXPlayer_t543 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::Awake()
extern "C" void SFXPlayer_Awake_m2868 (SFXPlayer_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::LoadAudioSources()
extern "C" void SFXPlayer_LoadAudioSources_m2869 (SFXPlayer_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::LoadAudioSource(SFXPlayer/SFXType,System.String)
extern "C" void SFXPlayer_LoadAudioSource_m2870 (SFXPlayer_t543 * __this, int32_t ___type, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::Play(SFXPlayer/SFXType)
extern "C" void SFXPlayer_Play_m2871 (SFXPlayer_t543 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::PlayDelayed(SFXPlayer/SFXType,System.Single)
extern "C" void SFXPlayer_PlayDelayed_m2872 (SFXPlayer_t543 * __this, int32_t ___type, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::PlayRandom(SFXPlayer/SFXType[],System.Single)
extern "C" void SFXPlayer_PlayRandom_m2873 (SFXPlayer_t543 * __this, SFXTypeU5BU5D_t542* ___types, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::Start()
extern "C" void SFXPlayer_Start_m2874 (SFXPlayer_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::OnDestroy()
extern "C" void SFXPlayer_OnDestroy_m2875 (SFXPlayer_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::RegisterForEvents()
extern "C" void SFXPlayer_RegisterForEvents_m2876 (SFXPlayer_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::UnregisterForEvents()
extern "C" void SFXPlayer_UnregisterForEvents_m2877 (SFXPlayer_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SFXPlayer::OnSoundMuteChanged()
extern "C" void SFXPlayer_OnSoundMuteChanged_m2878 (SFXPlayer_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

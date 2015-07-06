#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController
struct SoundController_t486;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t484;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t485;

// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m2300 (SoundController_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_add_SoundMuteChanged_m2301 (SoundController_t486 * __this, SoundMuteChangedEventHandler_t484 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_remove_SoundMuteChanged_m2302 (SoundController_t486 * __this, SoundMuteChangedEventHandler_t484 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_add_MusicMuteChanged_m2303 (SoundController_t486 * __this, MusicMuteChangedEventHandler_t485 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_remove_MusicMuteChanged_m2304 (SoundController_t486 * __this, MusicMuteChangedEventHandler_t485 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m2305 (SoundController_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m2306 (SoundController_t486 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m2307 (SoundController_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m2308 (SoundController_t486 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Awake()
extern "C" void SoundController_Awake_m2309 (SoundController_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Start()
extern "C" void SoundController_Start_m2310 (SoundController_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleSoundsMuted()
extern "C" void SoundController_ToggleSoundsMuted_m2311 (SoundController_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleMusicMuted()
extern "C" void SoundController_ToggleMusicMuted_m2312 (SoundController_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

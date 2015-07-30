#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController
struct SoundController_t609;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t607;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t608;

// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m3271 (SoundController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_add_SoundMuteChanged_m3272 (SoundController_t609 * __this, SoundMuteChangedEventHandler_t607 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_remove_SoundMuteChanged_m3273 (SoundController_t609 * __this, SoundMuteChangedEventHandler_t607 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_add_MusicMuteChanged_m3274 (SoundController_t609 * __this, MusicMuteChangedEventHandler_t608 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_remove_MusicMuteChanged_m3275 (SoundController_t609 * __this, MusicMuteChangedEventHandler_t608 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m3276 (SoundController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m3277 (SoundController_t609 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m3278 (SoundController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m3279 (SoundController_t609 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Awake()
extern "C" void SoundController_Awake_m3280 (SoundController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Start()
extern "C" void SoundController_Start_m3281 (SoundController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleSoundsMuted()
extern "C" void SoundController_ToggleSoundsMuted_m3282 (SoundController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleMusicMuted()
extern "C" void SoundController_ToggleMusicMuted_m3283 (SoundController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::SuppressSounds()
extern "C" void SoundController_SuppressSounds_m3284 (SoundController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::UnsuppressSounds()
extern "C" void SoundController_UnsuppressSounds_m3285 (SoundController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

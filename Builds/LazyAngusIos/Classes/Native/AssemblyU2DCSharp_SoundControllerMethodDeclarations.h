#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController
struct SoundController_t600;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t598;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t599;

// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m3233 (SoundController_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_add_SoundMuteChanged_m3234 (SoundController_t600 * __this, SoundMuteChangedEventHandler_t598 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_remove_SoundMuteChanged_m3235 (SoundController_t600 * __this, SoundMuteChangedEventHandler_t598 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_add_MusicMuteChanged_m3236 (SoundController_t600 * __this, MusicMuteChangedEventHandler_t599 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_remove_MusicMuteChanged_m3237 (SoundController_t600 * __this, MusicMuteChangedEventHandler_t599 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m3238 (SoundController_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m3239 (SoundController_t600 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m3240 (SoundController_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m3241 (SoundController_t600 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Awake()
extern "C" void SoundController_Awake_m3242 (SoundController_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Start()
extern "C" void SoundController_Start_m3243 (SoundController_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleSoundsMuted()
extern "C" void SoundController_ToggleSoundsMuted_m3244 (SoundController_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleMusicMuted()
extern "C" void SoundController_ToggleMusicMuted_m3245 (SoundController_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::SuppressSounds()
extern "C" void SoundController_SuppressSounds_m3246 (SoundController_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::UnsuppressSounds()
extern "C" void SoundController_UnsuppressSounds_m3247 (SoundController_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

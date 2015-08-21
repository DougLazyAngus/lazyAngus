#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController
struct SoundController_t649;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t647;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t648;

// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m3489 (SoundController_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_add_SoundMuteChanged_m3490 (SoundController_t649 * __this, SoundMuteChangedEventHandler_t647 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_remove_SoundMuteChanged_m3491 (SoundController_t649 * __this, SoundMuteChangedEventHandler_t647 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_add_MusicMuteChanged_m3492 (SoundController_t649 * __this, MusicMuteChangedEventHandler_t648 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_remove_MusicMuteChanged_m3493 (SoundController_t649 * __this, MusicMuteChangedEventHandler_t648 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m3494 (SoundController_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m3495 (SoundController_t649 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m3496 (SoundController_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m3497 (SoundController_t649 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Awake()
extern "C" void SoundController_Awake_m3498 (SoundController_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Start()
extern "C" void SoundController_Start_m3499 (SoundController_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleSoundsMuted()
extern "C" void SoundController_ToggleSoundsMuted_m3500 (SoundController_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleMusicMuted()
extern "C" void SoundController_ToggleMusicMuted_m3501 (SoundController_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::SuppressSounds()
extern "C" void SoundController_SuppressSounds_m3502 (SoundController_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::UnsuppressSounds()
extern "C" void SoundController_UnsuppressSounds_m3503 (SoundController_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

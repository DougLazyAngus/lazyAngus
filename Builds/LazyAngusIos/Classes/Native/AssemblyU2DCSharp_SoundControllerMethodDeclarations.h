#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController
struct SoundController_t670;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t668;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t669;

// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m3668 (SoundController_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_add_SoundMuteChanged_m3669 (SoundController_t670 * __this, SoundMuteChangedEventHandler_t668 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_remove_SoundMuteChanged_m3670 (SoundController_t670 * __this, SoundMuteChangedEventHandler_t668 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_add_MusicMuteChanged_m3671 (SoundController_t670 * __this, MusicMuteChangedEventHandler_t669 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_remove_MusicMuteChanged_m3672 (SoundController_t670 * __this, MusicMuteChangedEventHandler_t669 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m3673 (SoundController_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m3674 (SoundController_t670 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m3675 (SoundController_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m3676 (SoundController_t670 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Awake()
extern "C" void SoundController_Awake_m3677 (SoundController_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Start()
extern "C" void SoundController_Start_m3678 (SoundController_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleSoundsMuted()
extern "C" void SoundController_ToggleSoundsMuted_m3679 (SoundController_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleMusicMuted()
extern "C" void SoundController_ToggleMusicMuted_m3680 (SoundController_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::SuppressSounds()
extern "C" void SoundController_SuppressSounds_m3681 (SoundController_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::UnsuppressSounds()
extern "C" void SoundController_UnsuppressSounds_m3682 (SoundController_t670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

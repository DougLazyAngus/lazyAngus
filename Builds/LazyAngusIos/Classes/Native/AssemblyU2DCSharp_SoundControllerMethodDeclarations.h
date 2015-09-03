#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController
struct SoundController_t669;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t667;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t668;

// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m3655 (SoundController_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_add_SoundMuteChanged_m3656 (SoundController_t669 * __this, SoundMuteChangedEventHandler_t667 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_remove_SoundMuteChanged_m3657 (SoundController_t669 * __this, SoundMuteChangedEventHandler_t667 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_add_MusicMuteChanged_m3658 (SoundController_t669 * __this, MusicMuteChangedEventHandler_t668 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_remove_MusicMuteChanged_m3659 (SoundController_t669 * __this, MusicMuteChangedEventHandler_t668 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m3660 (SoundController_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m3661 (SoundController_t669 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m3662 (SoundController_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m3663 (SoundController_t669 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Awake()
extern "C" void SoundController_Awake_m3664 (SoundController_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Start()
extern "C" void SoundController_Start_m3665 (SoundController_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleSoundsMuted()
extern "C" void SoundController_ToggleSoundsMuted_m3666 (SoundController_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleMusicMuted()
extern "C" void SoundController_ToggleMusicMuted_m3667 (SoundController_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::SuppressSounds()
extern "C" void SoundController_SuppressSounds_m3668 (SoundController_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::UnsuppressSounds()
extern "C" void SoundController_UnsuppressSounds_m3669 (SoundController_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

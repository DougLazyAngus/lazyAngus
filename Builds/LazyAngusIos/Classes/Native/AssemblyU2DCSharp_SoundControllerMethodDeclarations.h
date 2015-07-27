#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController
struct SoundController_t555;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t553;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t554;

// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m2930 (SoundController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_add_SoundMuteChanged_m2931 (SoundController_t555 * __this, SoundMuteChangedEventHandler_t553 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_remove_SoundMuteChanged_m2932 (SoundController_t555 * __this, SoundMuteChangedEventHandler_t553 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_add_MusicMuteChanged_m2933 (SoundController_t555 * __this, MusicMuteChangedEventHandler_t554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_remove_MusicMuteChanged_m2934 (SoundController_t555 * __this, MusicMuteChangedEventHandler_t554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m2935 (SoundController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m2936 (SoundController_t555 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m2937 (SoundController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m2938 (SoundController_t555 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Awake()
extern "C" void SoundController_Awake_m2939 (SoundController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Start()
extern "C" void SoundController_Start_m2940 (SoundController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleSoundsMuted()
extern "C" void SoundController_ToggleSoundsMuted_m2941 (SoundController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleMusicMuted()
extern "C" void SoundController_ToggleMusicMuted_m2942 (SoundController_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

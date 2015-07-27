#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SoundController
struct SoundController_t556;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t554;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t555;

// System.Void SoundController::.ctor()
extern "C" void SoundController__ctor_m2937 (SoundController_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_add_SoundMuteChanged_m2938 (SoundController_t556 * __this, SoundMuteChangedEventHandler_t554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_SoundMuteChanged(SoundController/SoundMuteChangedEventHandler)
extern "C" void SoundController_remove_SoundMuteChanged_m2939 (SoundController_t556 * __this, SoundMuteChangedEventHandler_t554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::add_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_add_MusicMuteChanged_m2940 (SoundController_t556 * __this, MusicMuteChangedEventHandler_t555 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::remove_MusicMuteChanged(SoundController/MusicMuteChangedEventHandler)
extern "C" void SoundController_remove_MusicMuteChanged_m2941 (SoundController_t556 * __this, MusicMuteChangedEventHandler_t555 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_sfxMuted()
extern "C" bool SoundController_get_sfxMuted_m2942 (SoundController_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_sfxMuted(System.Boolean)
extern "C" void SoundController_set_sfxMuted_m2943 (SoundController_t556 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundController::get_musicMuted()
extern "C" bool SoundController_get_musicMuted_m2944 (SoundController_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::set_musicMuted(System.Boolean)
extern "C" void SoundController_set_musicMuted_m2945 (SoundController_t556 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Awake()
extern "C" void SoundController_Awake_m2946 (SoundController_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::Start()
extern "C" void SoundController_Start_m2947 (SoundController_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleSoundsMuted()
extern "C" void SoundController_ToggleSoundsMuted_m2948 (SoundController_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundController::ToggleMusicMuted()
extern "C" void SoundController_ToggleMusicMuted_m2949 (SoundController_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

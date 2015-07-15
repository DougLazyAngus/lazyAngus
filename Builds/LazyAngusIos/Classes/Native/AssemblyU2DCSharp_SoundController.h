#pragma once
#include <stdint.h>
// System.String
struct String_t;
// SoundController
struct SoundController_t508;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t506;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t507;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SoundController
struct  SoundController_t508  : public MonoBehaviour_t67
{
	// SoundController/SoundMuteChangedEventHandler SoundController::SoundMuteChanged
	SoundMuteChangedEventHandler_t506 * ___SoundMuteChanged_5;
	// SoundController/MusicMuteChangedEventHandler SoundController::MusicMuteChanged
	MusicMuteChangedEventHandler_t507 * ___MusicMuteChanged_6;
	// System.Boolean SoundController::<sfxMuted>k__BackingField
	bool ___U3CsfxMutedU3Ek__BackingField_7;
	// System.Boolean SoundController::<musicMuted>k__BackingField
	bool ___U3CmusicMutedU3Ek__BackingField_8;
};
struct SoundController_t508_StaticFields{
	// SoundController SoundController::instance
	SoundController_t508 * ___instance_4;
};

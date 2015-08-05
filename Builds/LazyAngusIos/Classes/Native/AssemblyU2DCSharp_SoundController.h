#pragma once
#include <stdint.h>
// System.String
struct String_t;
// SoundController
struct SoundController_t609;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t607;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t608;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SoundController
struct  SoundController_t609  : public MonoBehaviour_t13
{
	// SoundController/SoundMuteChangedEventHandler SoundController::SoundMuteChanged
	SoundMuteChangedEventHandler_t607 * ___SoundMuteChanged_5;
	// SoundController/MusicMuteChangedEventHandler SoundController::MusicMuteChanged
	MusicMuteChangedEventHandler_t608 * ___MusicMuteChanged_6;
	// System.Boolean SoundController::<sfxMuted>k__BackingField
	bool ___U3CsfxMutedU3Ek__BackingField_7;
	// System.Boolean SoundController::<musicMuted>k__BackingField
	bool ___U3CmusicMutedU3Ek__BackingField_8;
};
struct SoundController_t609_StaticFields{
	// SoundController SoundController::instance
	SoundController_t609 * ___instance_4;
};

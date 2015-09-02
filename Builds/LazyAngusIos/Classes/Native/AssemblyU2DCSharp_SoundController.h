#pragma once
#include <stdint.h>
// System.String
struct String_t;
// SoundController
struct SoundController_t669;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t667;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t668;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SoundController
struct  SoundController_t669  : public MonoBehaviour_t13
{
	// SoundController/SoundMuteChangedEventHandler SoundController::SoundMuteChanged
	SoundMuteChangedEventHandler_t667 * ___SoundMuteChanged_5;
	// SoundController/MusicMuteChangedEventHandler SoundController::MusicMuteChanged
	MusicMuteChangedEventHandler_t668 * ___MusicMuteChanged_6;
	// System.Boolean SoundController::<sfxMuted>k__BackingField
	bool ___U3CsfxMutedU3Ek__BackingField_7;
	// System.Boolean SoundController::<musicMuted>k__BackingField
	bool ___U3CmusicMutedU3Ek__BackingField_8;
};
struct SoundController_t669_StaticFields{
	// SoundController SoundController::instance
	SoundController_t669 * ___instance_4;
};

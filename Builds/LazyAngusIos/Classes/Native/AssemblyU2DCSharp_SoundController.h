#pragma once
#include <stdint.h>
// System.String
struct String_t;
// SoundController
struct SoundController_t555;
// SoundController/SoundMuteChangedEventHandler
struct SoundMuteChangedEventHandler_t553;
// SoundController/MusicMuteChangedEventHandler
struct MusicMuteChangedEventHandler_t554;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SoundController
struct  SoundController_t555  : public MonoBehaviour_t67
{
	// SoundController/SoundMuteChangedEventHandler SoundController::SoundMuteChanged
	SoundMuteChangedEventHandler_t553 * ___SoundMuteChanged_5;
	// SoundController/MusicMuteChangedEventHandler SoundController::MusicMuteChanged
	MusicMuteChangedEventHandler_t554 * ___MusicMuteChanged_6;
	// System.Boolean SoundController::<sfxMuted>k__BackingField
	bool ___U3CsfxMutedU3Ek__BackingField_7;
	// System.Boolean SoundController::<musicMuted>k__BackingField
	bool ___U3CmusicMutedU3Ek__BackingField_8;
};
struct SoundController_t555_StaticFields{
	// SoundController SoundController::instance
	SoundController_t555 * ___instance_4;
};

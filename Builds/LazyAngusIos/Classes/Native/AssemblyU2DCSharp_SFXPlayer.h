#pragma once
#include <stdint.h>
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t593;
// SFXPlayer/SFXType[]
struct SFXTypeU5BU5D_t594;
// SFXPlayer
struct SFXPlayer_t595;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SFXPlayer
struct  SFXPlayer_t595  : public MonoBehaviour_t13
{
	// UnityEngine.AudioSource[] SFXPlayer::audioSources
	AudioSourceU5BU5D_t593* ___audioSources_2;
	// System.Boolean SFXPlayer::registeredForEvents
	bool ___registeredForEvents_3;
	// SFXPlayer/SFXType[] SFXPlayer::deadMouseIds
	SFXTypeU5BU5D_t594* ___deadMouseIds_4;
	// SFXPlayer/SFXType[] SFXPlayer::slapIds
	SFXTypeU5BU5D_t594* ___slapIds_5;
};
struct SFXPlayer_t595_StaticFields{
	// SFXPlayer SFXPlayer::<instance>k__BackingField
	SFXPlayer_t595 * ___U3CinstanceU3Ek__BackingField_6;
};

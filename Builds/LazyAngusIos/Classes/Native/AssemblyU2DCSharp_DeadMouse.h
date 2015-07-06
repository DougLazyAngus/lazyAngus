#pragma once
#include <stdint.h>
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t404;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t405;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t406;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DeadMouse
struct  DeadMouse_t407  : public MonoBehaviour_t67
{
	// UnityEngine.SpriteRenderer DeadMouse::spriteRenderer
	SpriteRenderer_t404 * ___spriteRenderer_2;
	// UnityEngine.Sprite[] DeadMouse::baseSprites
	SpriteU5BU5D_t405* ___baseSprites_3;
	// System.Single DeadMouse::staticLifespan
	float ___staticLifespan_4;
	// System.Single DeadMouse::fadingLifespan
	float ___fadingLifespan_5;
	// System.Boolean DeadMouse::initialized
	bool ___initialized_6;
	// System.Single DeadMouse::startTime
	float ___startTime_7;
	// System.Single DeadMouse::deadMouseZ
	float ___deadMouseZ_8;
	// UnityEngine.AudioSource[] DeadMouse::audioSources
	AudioSourceU5BU5D_t406* ___audioSources_9;
};

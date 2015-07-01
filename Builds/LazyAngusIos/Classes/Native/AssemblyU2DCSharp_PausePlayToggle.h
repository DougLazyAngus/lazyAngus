#pragma once
#include <stdint.h>
// UnityEngine.UI.Image
struct Image_t441;
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.Sprite
struct Sprite_t394;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PausePlayToggle
struct  PausePlayToggle_t453  : public MonoBehaviour_t67
{
	// UnityEngine.UI.Image PausePlayToggle::pausePlayButtonImage
	Image_t441 * ___pausePlayButtonImage_2;
	// UnityEngine.GameObject PausePlayToggle::overlay
	GameObject_t284 * ___overlay_3;
	// UnityEngine.Sprite PausePlayToggle::pauseSprite
	Sprite_t394 * ___pauseSprite_4;
	// UnityEngine.Sprite PausePlayToggle::playSprite
	Sprite_t394 * ___playSprite_5;
	// System.Boolean PausePlayToggle::registeredForEvents
	bool ___registeredForEvents_6;
};

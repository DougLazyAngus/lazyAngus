#pragma once
#include <stdint.h>
// UnityEngine.UI.Image
struct Image_t448;
// UnityEngine.Sprite
struct Sprite_t394;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PausePlayToggle
struct  PausePlayToggle_t465  : public MonoBehaviour_t67
{
	// UnityEngine.UI.Image PausePlayToggle::pausePlayButtonImage
	Image_t448 * ___pausePlayButtonImage_2;
	// UnityEngine.Sprite PausePlayToggle::pauseSprite
	Sprite_t394 * ___pauseSprite_3;
	// UnityEngine.Sprite PausePlayToggle::playSprite
	Sprite_t394 * ___playSprite_4;
	// System.Boolean PausePlayToggle::registeredForEvents
	bool ___registeredForEvents_5;
};

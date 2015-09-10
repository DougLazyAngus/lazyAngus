#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t498;
// UnityEngine.UI.Image
struct Image_t499;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BoostButton
struct  BoostButton_t496  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Text BoostButton::levelLockText
	Text_t498 * ___levelLockText_2;
	// UnityEngine.UI.Image BoostButton::levelLockImage
	Image_t499 * ___levelLockImage_3;
	// UnityEngine.UI.Text BoostButton::costText
	Text_t498 * ___costText_4;
	// UnityEngine.UI.Image BoostButton::image
	Image_t499 * ___image_5;
	// BoostConfig/BoostType BoostButton::boostType
	int32_t ___boostType_6;
	// System.Int32 BoostButton::priceInTreats
	int32_t ___priceInTreats_7;
	// System.Boolean BoostButton::registeredForEvents
	bool ___registeredForEvents_8;
	// UnityEngine.Color BoostButton::enabledColor
	Color_t325  ___enabledColor_9;
	// UnityEngine.Color BoostButton::disabledColor
	Color_t325  ___disabledColor_10;
	// System.Boolean BoostButton::buttonDirty
	bool ___buttonDirty_11;
};

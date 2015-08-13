#pragma once
#include <stdint.h>
// UnityEngine.UI.Button
struct Button_t499;
// UnityEngine.UI.Text
struct Text_t500;
// UnityEngine.UI.Image
struct Image_t501;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostButton
struct  BoostButton_t497  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Button BoostButton::button
	Button_t499 * ___button_2;
	// UnityEngine.UI.Text BoostButton::levelLockText
	Text_t500 * ___levelLockText_3;
	// UnityEngine.UI.Image BoostButton::levelLockImage
	Image_t501 * ___levelLockImage_4;
	// UnityEngine.UI.Text BoostButton::costText
	Text_t500 * ___costText_5;
	// BoostConfig/BoostType BoostButton::boostType
	int32_t ___boostType_6;
	// System.Int32 BoostButton::priceInTreats
	int32_t ___priceInTreats_7;
	// System.Boolean BoostButton::registeredForEvents
	bool ___registeredForEvents_8;
	// System.Boolean BoostButton::buttonDirty
	bool ___buttonDirty_9;
};

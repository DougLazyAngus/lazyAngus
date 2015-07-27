#pragma once
#include <stdint.h>
// UnityEngine.UI.Button
struct Button_t423;
// UnityEngine.UI.Text
struct Text_t424;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostButton/BoostButtonMode
#include "AssemblyU2DCSharp_BoostButton_BoostButtonMode.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostButton
struct  BoostButton_t421  : public MonoBehaviour_t66
{
	// BoostButton/BoostButtonMode BoostButton::mode
	int32_t ___mode_2;
	// UnityEngine.UI.Button BoostButton::button
	Button_t423 * ___button_3;
	// UnityEngine.UI.Text BoostButton::buttonText
	Text_t424 * ___buttonText_4;
	// UnityEngine.UI.Text BoostButton::countText
	Text_t424 * ___countText_5;
	// UnityEngine.UI.Text BoostButton::restrictionText
	Text_t424 * ___restrictionText_6;
	// BoostConfig/BoostType BoostButton::boostType
	int32_t ___boostType_7;
	// System.Int32 BoostButton::priceInTreats
	int32_t ___priceInTreats_8;
	// System.Boolean BoostButton::registeredForEvents
	bool ___registeredForEvents_9;
	// System.Boolean BoostButton::buttonDirty
	bool ___buttonDirty_10;
};

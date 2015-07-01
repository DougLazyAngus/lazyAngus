#pragma once
#include <stdint.h>
// UnityEngine.UI.Button
struct Button_t380;
// UnityEngine.UI.Text
struct Text_t381;
// PlayerStats
struct PlayerStats_t382;
// BoostConfig
struct BoostConfig_t373;
// GameController
struct GameController_t383;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostButton/BoostButtonMode
#include "AssemblyU2DCSharp_BoostButton_BoostButtonMode.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostButton
struct  BoostButton_t378  : public MonoBehaviour_t67
{
	// BoostButton/BoostButtonMode BoostButton::mode
	int32_t ___mode_2;
	// UnityEngine.UI.Button BoostButton::button
	Button_t380 * ___button_3;
	// UnityEngine.UI.Text BoostButton::buttonText
	Text_t381 * ___buttonText_4;
	// UnityEngine.UI.Text BoostButton::countText
	Text_t381 * ___countText_5;
	// UnityEngine.UI.Text BoostButton::restrictionText
	Text_t381 * ___restrictionText_6;
	// BoostConfig/BoostType BoostButton::boostType
	int32_t ___boostType_7;
	// PlayerStats BoostButton::playerStats
	PlayerStats_t382 * ___playerStats_8;
	// BoostConfig BoostButton::boostConfig
	BoostConfig_t373 * ___boostConfig_9;
	// GameController BoostButton::gameController
	GameController_t383 * ___gameController_10;
	// System.Int32 BoostButton::priceInTreats
	int32_t ___priceInTreats_11;
	// System.Boolean BoostButton::registeredForEvents
	bool ___registeredForEvents_12;
	// System.Boolean BoostButton::buttonDirty
	bool ___buttonDirty_13;
};

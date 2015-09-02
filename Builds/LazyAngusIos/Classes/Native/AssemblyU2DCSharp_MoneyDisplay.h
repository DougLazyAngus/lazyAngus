#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t502;
// PlayerStats
struct PlayerStats_t516;
// DistortForEffect
struct DistortForEffect_t537;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MoneyDisplay
struct  MoneyDisplay_t594  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Text MoneyDisplay::moneyText
	Text_t502 * ___moneyText_2;
	// PlayerStats MoneyDisplay::playerStats
	PlayerStats_t516 * ___playerStats_3;
	// System.Boolean MoneyDisplay::registerdForEvents
	bool ___registerdForEvents_4;
	// DistortForEffect MoneyDisplay::distortForEffect
	DistortForEffect_t537 * ___distortForEffect_5;
};

#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t500;
// DistortForEffect
struct DistortForEffect_t533;
// PlayerStats
struct PlayerStats_t513;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrackMoney
struct  TrackMoney_t663  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Text TrackMoney::moneyText
	Text_t500 * ___moneyText_2;
	// DistortForEffect TrackMoney::distortForEffect
	DistortForEffect_t533 * ___distortForEffect_3;
	// PlayerStats TrackMoney::playerStats
	PlayerStats_t513 * ___playerStats_4;
	// System.Boolean TrackMoney::registerdForEvents
	bool ___registerdForEvents_5;
};

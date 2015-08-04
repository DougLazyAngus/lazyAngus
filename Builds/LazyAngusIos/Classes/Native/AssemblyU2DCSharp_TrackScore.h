#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t462;
// DistortForEffect
struct DistortForEffect_t494;
// PlayerStats
struct PlayerStats_t474;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrackScore
struct  TrackScore_t618  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Text TrackScore::scoreText
	Text_t462 * ___scoreText_2;
	// DistortForEffect TrackScore::distortForEffect
	DistortForEffect_t494 * ___distortForEffect_3;
	// PlayerStats TrackScore::playerStats
	PlayerStats_t474 * ___playerStats_4;
	// System.Boolean TrackScore::registerdForEvents
	bool ___registerdForEvents_5;
};

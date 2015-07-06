#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t380;
// DistortForEffect
struct DistortForEffect_t413;
// PlayerStats
struct PlayerStats_t391;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrackScore
struct  TrackScore_t493  : public MonoBehaviour_t67
{
	// UnityEngine.UI.Text TrackScore::scoreText
	Text_t380 * ___scoreText_2;
	// DistortForEffect TrackScore::distortForEffect
	DistortForEffect_t413 * ___distortForEffect_3;
	// PlayerStats TrackScore::playerStats
	PlayerStats_t391 * ___playerStats_4;
	// System.Boolean TrackScore::registerdForEvents
	bool ___registerdForEvents_5;
};

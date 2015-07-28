#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t464;
// DistortForEffect
struct DistortForEffect_t492;
// PlayerStats
struct PlayerStats_t475;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrackScore
struct  TrackScore_t608  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Text TrackScore::scoreText
	Text_t464 * ___scoreText_2;
	// DistortForEffect TrackScore::distortForEffect
	DistortForEffect_t492 * ___distortForEffect_3;
	// PlayerStats TrackScore::playerStats
	PlayerStats_t475 * ___playerStats_4;
	// System.Boolean TrackScore::registerdForEvents
	bool ___registerdForEvents_5;
};

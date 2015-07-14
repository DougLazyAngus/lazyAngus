#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t381;
// DistortForEffect
struct DistortForEffect_t412;
// PlayerStats
struct PlayerStats_t396;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrackScore
struct  TrackScore_t514  : public MonoBehaviour_t67
{
	// UnityEngine.UI.Text TrackScore::scoreText
	Text_t381 * ___scoreText_2;
	// DistortForEffect TrackScore::distortForEffect
	DistortForEffect_t412 * ___distortForEffect_3;
	// PlayerStats TrackScore::playerStats
	PlayerStats_t396 * ___playerStats_4;
	// System.Boolean TrackScore::registerdForEvents
	bool ___registerdForEvents_5;
};

#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t424;
// DistortForEffect
struct DistortForEffect_t450;
// PlayerStats
struct PlayerStats_t435;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrackScore
struct  TrackScore_t564  : public MonoBehaviour_t66
{
	// UnityEngine.UI.Text TrackScore::scoreText
	Text_t424 * ___scoreText_2;
	// DistortForEffect TrackScore::distortForEffect
	DistortForEffect_t450 * ___distortForEffect_3;
	// PlayerStats TrackScore::playerStats
	PlayerStats_t435 * ___playerStats_4;
	// System.Boolean TrackScore::registerdForEvents
	bool ___registerdForEvents_5;
};

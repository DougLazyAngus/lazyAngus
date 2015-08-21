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
// TrackScore
struct  TrackScore_t664  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Text TrackScore::scoreText
	Text_t500 * ___scoreText_2;
	// DistortForEffect TrackScore::distortForEffect
	DistortForEffect_t533 * ___distortForEffect_3;
	// PlayerStats TrackScore::playerStats
	PlayerStats_t513 * ___playerStats_4;
	// System.Boolean TrackScore::registerdForEvents
	bool ___registerdForEvents_5;
};

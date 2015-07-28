#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t465;
// DistortForEffect
struct DistortForEffect_t493;
// PlayerStats
struct PlayerStats_t476;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrackScore
struct  TrackScore_t609  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Text TrackScore::scoreText
	Text_t465 * ___scoreText_2;
	// DistortForEffect TrackScore::distortForEffect
	DistortForEffect_t493 * ___distortForEffect_3;
	// PlayerStats TrackScore::playerStats
	PlayerStats_t476 * ___playerStats_4;
	// System.Boolean TrackScore::registerdForEvents
	bool ___registerdForEvents_5;
};

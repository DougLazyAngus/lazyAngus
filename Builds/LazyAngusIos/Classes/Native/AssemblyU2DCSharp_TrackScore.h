#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t422;
// DistortForEffect
struct DistortForEffect_t448;
// PlayerStats
struct PlayerStats_t433;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrackScore
struct  TrackScore_t563  : public MonoBehaviour_t67
{
	// UnityEngine.UI.Text TrackScore::scoreText
	Text_t422 * ___scoreText_2;
	// DistortForEffect TrackScore::distortForEffect
	DistortForEffect_t448 * ___distortForEffect_3;
	// PlayerStats TrackScore::playerStats
	PlayerStats_t433 * ___playerStats_4;
	// System.Boolean TrackScore::registerdForEvents
	bool ___registerdForEvents_5;
};

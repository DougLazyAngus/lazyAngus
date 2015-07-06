#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t380;
// UnityEngine.UI.Image
struct Image_t448;
// DistortForEffect
struct DistortForEffect_t413;
// GameController
struct GameController_t392;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LevelEndTitlesLayout
struct  LevelEndTitlesLayout_t449  : public MonoBehaviour_t67
{
	// UnityEngine.UI.Text LevelEndTitlesLayout::waveTitleText
	Text_t380 * ___waveTitleText_2;
	// UnityEngine.UI.Text LevelEndTitlesLayout::waveCountText
	Text_t380 * ___waveCountText_3;
	// UnityEngine.UI.Text LevelEndTitlesLayout::waveSpecialText
	Text_t380 * ___waveSpecialText_4;
	// UnityEngine.UI.Image LevelEndTitlesLayout::waveSpecialImage
	Image_t448 * ___waveSpecialImage_5;
	// System.Boolean LevelEndTitlesLayout::registerdForEvents
	bool ___registerdForEvents_6;
	// DistortForEffect LevelEndTitlesLayout::distortForEffect
	DistortForEffect_t413 * ___distortForEffect_7;
	// GameController LevelEndTitlesLayout::gameController
	GameController_t392 * ___gameController_8;
	// System.Boolean LevelEndTitlesLayout::started
	bool ___started_9;
	// System.Boolean LevelEndTitlesLayout::waveDirty
	bool ___waveDirty_10;
};

#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t424;
// UnityEngine.UI.Image
struct Image_t498;
// DistortForEffect
struct DistortForEffect_t450;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LevelEndTitlesLayout
struct  LevelEndTitlesLayout_t499  : public MonoBehaviour_t66
{
	// UnityEngine.UI.Text LevelEndTitlesLayout::waveTitleText
	Text_t424 * ___waveTitleText_2;
	// UnityEngine.UI.Text LevelEndTitlesLayout::waveCountText
	Text_t424 * ___waveCountText_3;
	// UnityEngine.UI.Text LevelEndTitlesLayout::waveSpecialText
	Text_t424 * ___waveSpecialText_4;
	// UnityEngine.UI.Image LevelEndTitlesLayout::waveSpecialImage
	Image_t498 * ___waveSpecialImage_5;
	// System.Boolean LevelEndTitlesLayout::registerdForEvents
	bool ___registerdForEvents_6;
	// DistortForEffect LevelEndTitlesLayout::distortForEffect
	DistortForEffect_t450 * ___distortForEffect_7;
	// System.Boolean LevelEndTitlesLayout::started
	bool ___started_8;
	// System.Boolean LevelEndTitlesLayout::waveDirty
	bool ___waveDirty_9;
};

#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t502;
// UnityEngine.UI.Image
struct Image_t503;
// DistortForEffect
struct DistortForEffect_t537;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LevelEndTitlesLayout
struct  LevelEndTitlesLayout_t593  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Text LevelEndTitlesLayout::waveTitleText
	Text_t502 * ___waveTitleText_2;
	// UnityEngine.UI.Text LevelEndTitlesLayout::waveCountText
	Text_t502 * ___waveCountText_3;
	// UnityEngine.UI.Text LevelEndTitlesLayout::waveSpecialText
	Text_t502 * ___waveSpecialText_4;
	// UnityEngine.UI.Image LevelEndTitlesLayout::waveSpecialImage
	Image_t503 * ___waveSpecialImage_5;
	// System.Boolean LevelEndTitlesLayout::registerdForEvents
	bool ___registerdForEvents_6;
	// DistortForEffect LevelEndTitlesLayout::distortForEffect
	DistortForEffect_t537 * ___distortForEffect_7;
	// System.Boolean LevelEndTitlesLayout::waveDirty
	bool ___waveDirty_8;
	// System.Boolean LevelEndTitlesLayout::started
	bool ___started_9;
};

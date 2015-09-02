#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.RectTransform
struct RectTransform_t545;
// UnityEngine.UI.Image
struct Image_t503;
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElement.h"
// TimerWidget
struct  TimerWidget_t623  : public WorldRelativeGUIElement_t550
{
	// UnityEngine.GameObject TimerWidget::worldCanvasGameObject
	GameObject_t352 * ___worldCanvasGameObject_7;
	// UnityEngine.RectTransform TimerWidget::rectTransform
	RectTransform_t545 * ___rectTransform_8;
	// System.Single TimerWidget::actualCanvasSizePixels
	float ___actualCanvasSizePixels_9;
	// System.Single TimerWidget::desiredScaleNormal
	float ___desiredScaleNormal_10;
	// System.Single TimerWidget::desiredScaleBig
	float ___desiredScaleBig_11;
	// System.Boolean TimerWidget::initialized
	bool ___initialized_12;
	// System.Single TimerWidget::lifespan
	float ___lifespan_13;
	// System.Single TimerWidget::startTime
	float ___startTime_14;
	// UnityEngine.UI.Image TimerWidget::image
	Image_t503 * ___image_15;
};

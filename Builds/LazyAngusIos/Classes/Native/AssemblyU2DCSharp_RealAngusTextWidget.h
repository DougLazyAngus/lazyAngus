#pragma once
#include <stdint.h>
// UnityEngine.UI.Text
struct Text_t502;
// UnityEngine.RectTransform
struct RectTransform_t545;
// InOutTransitioner
struct InOutTransitioner_t576;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// RealAngusTextWidget
struct  RealAngusTextWidget_t641  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Text RealAngusTextWidget::mainText
	Text_t502 * ___mainText_2;
	// UnityEngine.Vector3 RealAngusTextWidget::onscreenPosition
	Vector3_t538  ___onscreenPosition_3;
	// UnityEngine.Vector3 RealAngusTextWidget::offscreenPosition
	Vector3_t538  ___offscreenPosition_4;
	// System.Single RealAngusTextWidget::offscreenRotation
	float ___offscreenRotation_5;
	// System.Single RealAngusTextWidget::onscreenRotation
	float ___onscreenRotation_6;
	// UnityEngine.RectTransform RealAngusTextWidget::rectTransform
	RectTransform_t545 * ___rectTransform_7;
	// InOutTransitioner RealAngusTextWidget::transitioner
	InOutTransitioner_t576 * ___transitioner_8;
};

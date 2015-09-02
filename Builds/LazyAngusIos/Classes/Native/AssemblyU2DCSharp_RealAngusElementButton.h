#pragma once
#include <stdint.h>
// UnityEngine.UI.Image
struct Image_t503;
// DistortForEffect
struct DistortForEffect_t537;
// RealAngusElementButton/ButtonHandler
struct ButtonHandler_t645;
// RealAngusItemDesc
struct RealAngusItemDesc_t646;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// RealAngusElementButton
struct  RealAngusElementButton_t639  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Image RealAngusElementButton::photoImage
	Image_t503 * ___photoImage_2;
	// UnityEngine.UI.Image RealAngusElementButton::frameImage
	Image_t503 * ___frameImage_3;
	// UnityEngine.UI.Image RealAngusElementButton::shadowImage
	Image_t503 * ___shadowImage_4;
	// UnityEngine.UI.Image RealAngusElementButton::lockImage
	Image_t503 * ___lockImage_5;
	// System.Single RealAngusElementButton::pauseBeforePulsing
	float ___pauseBeforePulsing_6;
	// System.Single RealAngusElementButton::startTransitionTime
	float ___startTransitionTime_7;
	// System.Boolean RealAngusElementButton::transitioning
	bool ___transitioning_8;
	// DistortForEffect RealAngusElementButton::distortForEffect
	DistortForEffect_t537 * ___distortForEffect_9;
	// RealAngusElementButton/ButtonHandler RealAngusElementButton::OnButtonClicked
	ButtonHandler_t645 * ___OnButtonClicked_10;
	// RealAngusElementButton/ButtonHandler RealAngusElementButton::OnTransitionComplete
	ButtonHandler_t645 * ___OnTransitionComplete_11;
	// UnityEngine.Vector2 RealAngusElementButton::homePosition
	Vector2_t110  ___homePosition_12;
	// System.Single RealAngusElementButton::homeRotation
	float ___homeRotation_13;
	// UnityEngine.Vector2 RealAngusElementButton::selectedPosition
	Vector2_t110  ___selectedPosition_14;
	// System.Single RealAngusElementButton::selectedRotation
	float ___selectedRotation_15;
	// System.Single RealAngusElementButton::selectedScale
	float ___selectedScale_16;
	// RealAngusItemDesc RealAngusElementButton::<raid>k__BackingField
	RealAngusItemDesc_t646 * ___U3CraidU3Ek__BackingField_17;
	// System.Boolean RealAngusElementButton::<selected>k__BackingField
	bool ___U3CselectedU3Ek__BackingField_18;
};

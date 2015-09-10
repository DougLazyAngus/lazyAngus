#pragma once
#include <stdint.h>
// UnityEngine.UI.Image
struct Image_t499;
// UnityEngine.GameObject
struct GameObject_t352;
// DistortForEffect
struct DistortForEffect_t535;
// RealAngusElementButton/ButtonHandler
struct ButtonHandler_t569;
// InOutTransitioner
struct InOutTransitioner_t570;
// RealAngusItemDesc
struct RealAngusItemDesc_t571;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// RealAngusElementButton
struct  RealAngusElementButton_t568  : public MonoBehaviour_t13
{
	// UnityEngine.UI.Image RealAngusElementButton::photoImage
	Image_t499 * ___photoImage_2;
	// UnityEngine.UI.Image RealAngusElementButton::frameImage
	Image_t499 * ___frameImage_3;
	// UnityEngine.UI.Image RealAngusElementButton::shadowImage
	Image_t499 * ___shadowImage_4;
	// UnityEngine.GameObject RealAngusElementButton::lockWidgetGameObject
	GameObject_t352 * ___lockWidgetGameObject_5;
	// System.Single RealAngusElementButton::pauseBeforePulsing
	float ___pauseBeforePulsing_6;
	// DistortForEffect RealAngusElementButton::distortForEffect
	DistortForEffect_t535 * ___distortForEffect_7;
	// RealAngusElementButton/ButtonHandler RealAngusElementButton::OnButtonClicked
	ButtonHandler_t569 * ___OnButtonClicked_8;
	// RealAngusElementButton/ButtonHandler RealAngusElementButton::OnTransitionComplete
	ButtonHandler_t569 * ___OnTransitionComplete_9;
	// UnityEngine.Vector2 RealAngusElementButton::homePosition
	Vector2_t110  ___homePosition_10;
	// System.Single RealAngusElementButton::homeRotation
	float ___homeRotation_11;
	// UnityEngine.Vector2 RealAngusElementButton::selectedPosition
	Vector2_t110  ___selectedPosition_12;
	// System.Single RealAngusElementButton::selectedRotation
	float ___selectedRotation_13;
	// System.Single RealAngusElementButton::selectedScale
	float ___selectedScale_14;
	// InOutTransitioner RealAngusElementButton::transitioner
	InOutTransitioner_t570 * ___transitioner_15;
	// RealAngusItemDesc RealAngusElementButton::<raid>k__BackingField
	RealAngusItemDesc_t571 * ___U3CraidU3Ek__BackingField_16;
};

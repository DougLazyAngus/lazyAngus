#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t543;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t544;
// UnityEngine.UI.Image
struct Image_t501;
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElement.h"
// FlyingAnimation
struct  FlyingAnimation_t545  : public WorldRelativeGUIElement_t546
{
	// UnityEngine.RectTransform FlyingAnimation::myRectTransform
	RectTransform_t543 * ___myRectTransform_7;
	// UnityEngine.Vector3[] FlyingAnimation::points
	Vector3U5BU5D_t544* ___points_8;
	// System.Single FlyingAnimation::startTime
	float ___startTime_9;
	// System.Boolean FlyingAnimation::running
	bool ___running_10;
	// System.Single FlyingAnimation::startScale
	float ___startScale_11;
	// System.Single FlyingAnimation::endScale
	float ___endScale_12;
	// System.Single FlyingAnimation::extraBulgeScale
	float ___extraBulgeScale_13;
	// UnityEngine.UI.Image FlyingAnimation::image
	Image_t501 * ___image_14;
};

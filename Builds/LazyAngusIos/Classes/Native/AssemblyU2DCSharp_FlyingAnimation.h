#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t573;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t690;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Canvas
struct Canvas_t691;
// UnityEngine.Camera
struct Camera_t532;
// UnityEngine.UI.Image
struct Image_t499;
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElement.h"
// FlyingAnimation
struct  FlyingAnimation_t692  : public WorldRelativeGUIElement_t597
{
	// UnityEngine.RectTransform FlyingAnimation::myRectTransform
	RectTransform_t573 * ___myRectTransform_7;
	// UnityEngine.RectTransform FlyingAnimation::imageRectTransform
	RectTransform_t573 * ___imageRectTransform_8;
	// UnityEngine.Vector3[] FlyingAnimation::points
	Vector3U5BU5D_t690* ___points_9;
	// System.Single FlyingAnimation::startTime
	float ___startTime_10;
	// System.Boolean FlyingAnimation::running
	bool ___running_11;
	// System.Single FlyingAnimation::startScale
	float ___startScale_12;
	// System.Single FlyingAnimation::endScale
	float ___endScale_13;
	// System.Single FlyingAnimation::extraBulgeScale
	float ___extraBulgeScale_14;
	// UnityEngine.GameObject FlyingAnimation::uxCanvasGameObject
	GameObject_t352 * ___uxCanvasGameObject_15;
	// UnityEngine.Canvas FlyingAnimation::uxCanvas
	Canvas_t691 * ___uxCanvas_16;
	// UnityEngine.Camera FlyingAnimation::uxCamera
	Camera_t532 * ___uxCamera_17;
	// UnityEngine.UI.Image FlyingAnimation::image
	Image_t499 * ___image_18;
};

#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t541;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t542;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Canvas
struct Canvas_t543;
// UnityEngine.Camera
struct Camera_t544;
// UnityEngine.UI.Image
struct Image_t501;
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElement.h"
// FlyingAnimation
struct  FlyingAnimation_t545  : public WorldRelativeGUIElement_t546
{
	// UnityEngine.RectTransform FlyingAnimation::myRectTransform
	RectTransform_t541 * ___myRectTransform_7;
	// UnityEngine.RectTransform FlyingAnimation::imageRectTransform
	RectTransform_t541 * ___imageRectTransform_8;
	// UnityEngine.Vector3[] FlyingAnimation::points
	Vector3U5BU5D_t542* ___points_9;
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
	Canvas_t543 * ___uxCanvas_16;
	// UnityEngine.Camera FlyingAnimation::uxCamera
	Camera_t544 * ___uxCamera_17;
	// UnityEngine.UI.Image FlyingAnimation::image
	Image_t501 * ___image_18;
};

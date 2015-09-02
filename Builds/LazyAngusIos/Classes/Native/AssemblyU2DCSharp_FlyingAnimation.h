#pragma once
#include <stdint.h>
// UnityEngine.RectTransform
struct RectTransform_t545;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t546;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Canvas
struct Canvas_t547;
// UnityEngine.Camera
struct Camera_t548;
// UnityEngine.UI.Image
struct Image_t503;
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElement.h"
// FlyingAnimation
struct  FlyingAnimation_t549  : public WorldRelativeGUIElement_t550
{
	// UnityEngine.RectTransform FlyingAnimation::myRectTransform
	RectTransform_t545 * ___myRectTransform_7;
	// UnityEngine.RectTransform FlyingAnimation::imageRectTransform
	RectTransform_t545 * ___imageRectTransform_8;
	// UnityEngine.Vector3[] FlyingAnimation::points
	Vector3U5BU5D_t546* ___points_9;
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
	Canvas_t547 * ___uxCanvas_16;
	// UnityEngine.Camera FlyingAnimation::uxCamera
	Camera_t548 * ___uxCamera_17;
	// UnityEngine.UI.Image FlyingAnimation::image
	Image_t503 * ___image_18;
};

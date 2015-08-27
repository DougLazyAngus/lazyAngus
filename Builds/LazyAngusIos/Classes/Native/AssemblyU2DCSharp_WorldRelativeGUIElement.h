#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t545;
// UnityEngine.Canvas
struct Canvas_t544;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// WorldRelativeGUIElement
struct  WorldRelativeGUIElement_t547  : public MonoBehaviour_t13
{
	// UnityEngine.Camera WorldRelativeGUIElement::worldCamera
	Camera_t545 * ___worldCamera_2;
	// UnityEngine.Canvas WorldRelativeGUIElement::parentCanvas
	Canvas_t544 * ___parentCanvas_3;
	// UnityEngine.Camera WorldRelativeGUIElement::parentCamera
	Camera_t545 * ___parentCamera_4;
	// System.Single WorldRelativeGUIElement::parentCanvasWidth
	float ___parentCanvasWidth_5;
	// System.Single WorldRelativeGUIElement::parentCanvasHeight
	float ___parentCanvasHeight_6;
};

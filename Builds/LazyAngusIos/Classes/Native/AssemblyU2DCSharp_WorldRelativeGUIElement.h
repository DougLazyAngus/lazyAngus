#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t530;
// UnityEngine.Canvas
struct Canvas_t628;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// WorldRelativeGUIElement
struct  WorldRelativeGUIElement_t505  : public MonoBehaviour_t13
{
	// UnityEngine.Camera WorldRelativeGUIElement::worldCamera
	Camera_t530 * ___worldCamera_2;
	// UnityEngine.Canvas WorldRelativeGUIElement::parentCanvas
	Canvas_t628 * ___parentCanvas_3;
	// UnityEngine.Camera WorldRelativeGUIElement::parentCamera
	Camera_t530 * ___parentCamera_4;
	// System.Single WorldRelativeGUIElement::parentCanvasWidth
	float ___parentCanvasWidth_5;
	// System.Single WorldRelativeGUIElement::parentCanvasHeight
	float ___parentCanvasHeight_6;
};

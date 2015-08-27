#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t545;
// SizeCamera
struct SizeCamera_t516;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ZoomCamera
struct  ZoomCamera_t643  : public MonoBehaviour_t13
{
	// System.Single ZoomCamera::zoomOutScale
	float ___zoomOutScale_2;
	// System.Single ZoomCamera::zoomInScale
	float ___zoomInScale_3;
	// System.Single ZoomCamera::phaseStartTime
	float ___phaseStartTime_4;
	// UnityEngine.Camera ZoomCamera::myCamera
	Camera_t545 * ___myCamera_5;
	// SizeCamera ZoomCamera::mySizeCamera
	SizeCamera_t516 * ___mySizeCamera_6;
	// System.Boolean ZoomCamera::registeredForEvents
	bool ___registeredForEvents_7;
};

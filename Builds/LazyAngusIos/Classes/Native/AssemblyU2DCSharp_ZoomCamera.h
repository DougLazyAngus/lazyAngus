#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t548;
// SizeCamera
struct SizeCamera_t519;
// BounceLerp
#include "AssemblyU2DCSharp_BounceLerp.h"
// ZoomCamera
struct  ZoomCamera_t664  : public BounceLerp_t515
{
	// System.Single ZoomCamera::zoomOutScale
	float ___zoomOutScale_7;
	// System.Single ZoomCamera::phaseStartTime
	float ___phaseStartTime_8;
	// System.Single ZoomCamera::timeToStartZooming
	float ___timeToStartZooming_9;
	// UnityEngine.Camera ZoomCamera::myCamera
	Camera_t548 * ___myCamera_10;
	// SizeCamera ZoomCamera::mySizeCamera
	SizeCamera_t519 * ___mySizeCamera_11;
	// System.Boolean ZoomCamera::registeredForEvents
	bool ___registeredForEvents_12;
	// System.Boolean ZoomCamera::zooming
	bool ___zooming_13;
};

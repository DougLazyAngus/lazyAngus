#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t545;
// ZoomCamera
struct ZoomCamera_t643;
// SizeCamera/CameraConfiguredHandler
struct CameraConfiguredHandler_t642;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SizeCamera
struct  SizeCamera_t516  : public MonoBehaviour_t13
{
	// System.Single SizeCamera::minWorldAspectRatio
	float ___minWorldAspectRatio_2;
	// System.Single SizeCamera::targetWorldHalfHeight
	float ___targetWorldHalfHeight_3;
	// System.Single SizeCamera::screenPixelsTopToIgnore
	float ___screenPixelsTopToIgnore_4;
	// System.Single SizeCamera::screenPixelsBottomToIgnore
	float ___screenPixelsBottomToIgnore_5;
	// System.Single SizeCamera::finalWorldHalfHeight
	float ___finalWorldHalfHeight_6;
	// System.Single SizeCamera::phaseStartTime
	float ___phaseStartTime_7;
	// UnityEngine.Camera SizeCamera::myCamera
	Camera_t545 * ___myCamera_8;
	// ZoomCamera SizeCamera::myZoomCamera
	ZoomCamera_t643 * ___myZoomCamera_9;
	// System.Boolean SizeCamera::registeredForEvents
	bool ___registeredForEvents_10;
	// System.Single SizeCamera::finalAspectRatio
	float ___finalAspectRatio_11;
	// SizeCamera/CameraConfiguredHandler SizeCamera::CameraConfigured
	CameraConfiguredHandler_t642 * ___CameraConfigured_12;
};

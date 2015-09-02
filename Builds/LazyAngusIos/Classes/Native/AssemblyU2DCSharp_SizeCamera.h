#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t548;
// ZoomCamera
struct ZoomCamera_t660;
// SizeCamera/CameraConfiguredHandler
struct CameraConfiguredHandler_t659;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SizeCamera
struct  SizeCamera_t519  : public MonoBehaviour_t13
{
	// System.Single SizeCamera::minWorldAspectRatio
	float ___minWorldAspectRatio_2;
	// System.Single SizeCamera::targetWorldHalfHeight
	float ___targetWorldHalfHeight_3;
	// System.Single SizeCamera::screenPixelsTopCameraSlop
	float ___screenPixelsTopCameraSlop_4;
	// System.Single SizeCamera::screenPixelsBottomToIgnore
	float ___screenPixelsBottomToIgnore_5;
	// System.Single SizeCamera::phaseStartTime
	float ___phaseStartTime_6;
	// UnityEngine.Camera SizeCamera::myCamera
	Camera_t548 * ___myCamera_7;
	// ZoomCamera SizeCamera::myZoomCamera
	ZoomCamera_t660 * ___myZoomCamera_8;
	// System.Boolean SizeCamera::registeredForEvents
	bool ___registeredForEvents_9;
	// System.Single SizeCamera::finalAspectRatio
	float ___finalAspectRatio_10;
	// SizeCamera/CameraConfiguredHandler SizeCamera::CameraConfigured
	CameraConfiguredHandler_t659 * ___CameraConfigured_11;
	// System.Single SizeCamera::<finalActualWorldHalfHeight>k__BackingField
	float ___U3CfinalActualWorldHalfHeightU3Ek__BackingField_12;
};

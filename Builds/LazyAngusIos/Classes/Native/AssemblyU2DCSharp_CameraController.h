#pragma once
#include <stdint.h>
// SizeCamera
struct SizeCamera_t587;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t607;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CameraController
struct  CameraController_t608  : public MonoBehaviour_t13
{
	// SizeCamera CameraController::worldCamera
	SizeCamera_t587 * ___worldCamera_2;
	// SizeCamera CameraController::uxCamera
	SizeCamera_t587 * ___uxCamera_3;
	// UnityEngine.UI.CanvasScaler CameraController::constantUXCanvas
	CanvasScaler_t607 * ___constantUXCanvas_4;
	// System.Single CameraController::actualHUDPixelHeight
	float ___actualHUDPixelHeight_5;
	// System.Single CameraController::minHUDAspectRatio
	float ___minHUDAspectRatio_6;
};

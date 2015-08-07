#pragma once
#include <stdint.h>
// SizeCamera
struct SizeCamera_t478;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t479;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CameraController
struct  CameraController_t480  : public MonoBehaviour_t13
{
	// SizeCamera CameraController::worldCamera
	SizeCamera_t478 * ___worldCamera_2;
	// SizeCamera CameraController::uxCamera
	SizeCamera_t478 * ___uxCamera_3;
	// UnityEngine.UI.CanvasScaler CameraController::constantUXCanvas
	CanvasScaler_t479 * ___constantUXCanvas_4;
	// System.Single CameraController::actualHUDPixelHeight
	float ___actualHUDPixelHeight_5;
	// System.Single CameraController::minHUDAspectRatio
	float ___minHUDAspectRatio_6;
};

#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t310;
// UnityEngine.RectTransform
struct RectTransform_t572;
// UnityEngine.Canvas
struct Canvas_t416;
// UnityEngine.Camera
struct Camera_t479;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// WorldObjectFollower
struct  WorldObjectFollower_t573  : public MonoBehaviour_t67
{
	// UnityEngine.GameObject WorldObjectFollower::objectToFollow
	GameObject_t310 * ___objectToFollow_2;
	// UnityEngine.RectTransform WorldObjectFollower::myRectTransform
	RectTransform_t572 * ___myRectTransform_3;
	// UnityEngine.Canvas WorldObjectFollower::worldCanvas
	Canvas_t416 * ___worldCanvas_4;
	// UnityEngine.Camera WorldObjectFollower::worldCamera
	Camera_t479 * ___worldCamera_5;
	// System.Single WorldObjectFollower::canvasWidth
	float ___canvasWidth_6;
	// System.Single WorldObjectFollower::canvasHeight
	float ___canvasHeight_7;
	// System.Boolean WorldObjectFollower::followeeMoves
	bool ___followeeMoves_8;
	// System.Boolean WorldObjectFollower::positionDirty
	bool ___positionDirty_9;
	// UnityEngine.Vector3 WorldObjectFollower::offset
	Vector3_t449  ___offset_10;
	// System.Single WorldObjectFollower::rotation
	float ___rotation_11;
};

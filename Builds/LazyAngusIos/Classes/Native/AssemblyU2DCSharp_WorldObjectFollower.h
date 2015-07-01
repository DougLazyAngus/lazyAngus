#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.RectTransform
struct RectTransform_t477;
// UnityEngine.Canvas
struct Canvas_t375;
// UnityEngine.Camera
struct Camera_t428;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// WorldObjectFollower
struct  WorldObjectFollower_t478  : public MonoBehaviour_t67
{
	// UnityEngine.GameObject WorldObjectFollower::objectToFollow
	GameObject_t284 * ___objectToFollow_2;
	// UnityEngine.RectTransform WorldObjectFollower::myRectTransform
	RectTransform_t477 * ___myRectTransform_3;
	// UnityEngine.Canvas WorldObjectFollower::worldCanvas
	Canvas_t375 * ___worldCanvas_4;
	// UnityEngine.Camera WorldObjectFollower::worldCamera
	Camera_t428 * ___worldCamera_5;
	// System.Single WorldObjectFollower::canvasWidth
	float ___canvasWidth_6;
	// System.Single WorldObjectFollower::canvasHeight
	float ___canvasHeight_7;
	// System.Boolean WorldObjectFollower::followeeMoves
	bool ___followeeMoves_8;
	// System.Boolean WorldObjectFollower::positionDirty
	bool ___positionDirty_9;
	// UnityEngine.Vector3 WorldObjectFollower::offset
	Vector3_t412  ___offset_10;
	// System.Single WorldObjectFollower::rotation
	float ___rotation_11;
};

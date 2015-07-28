#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.RectTransform
struct RectTransform_t618;
// UnityEngine.Canvas
struct Canvas_t459;
// UnityEngine.Camera
struct Camera_t524;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// WorldObjectFollower
struct  WorldObjectFollower_t619  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject WorldObjectFollower::objectToFollow
	GameObject_t352 * ___objectToFollow_2;
	// UnityEngine.RectTransform WorldObjectFollower::myRectTransform
	RectTransform_t618 * ___myRectTransform_3;
	// UnityEngine.Canvas WorldObjectFollower::worldCanvas
	Canvas_t459 * ___worldCanvas_4;
	// UnityEngine.Camera WorldObjectFollower::worldCamera
	Camera_t524 * ___worldCamera_5;
	// System.Single WorldObjectFollower::canvasWidth
	float ___canvasWidth_6;
	// System.Single WorldObjectFollower::canvasHeight
	float ___canvasHeight_7;
	// System.Boolean WorldObjectFollower::followeeMoves
	bool ___followeeMoves_8;
	// System.Boolean WorldObjectFollower::positionDirty
	bool ___positionDirty_9;
	// UnityEngine.Vector3 WorldObjectFollower::offset
	Vector3_t494  ___offset_10;
	// System.Single WorldObjectFollower::rotation
	float ___rotation_11;
};

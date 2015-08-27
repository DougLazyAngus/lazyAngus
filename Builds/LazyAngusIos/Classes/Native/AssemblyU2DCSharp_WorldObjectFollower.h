﻿#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.RectTransform
struct RectTransform_t542;
// WorldRelativeGUIElement
#include "AssemblyU2DCSharp_WorldRelativeGUIElement.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// WorldObjectFollower
struct  WorldObjectFollower_t675  : public WorldRelativeGUIElement_t547
{
	// UnityEngine.GameObject WorldObjectFollower::objectToFollow
	GameObject_t352 * ___objectToFollow_7;
	// UnityEngine.RectTransform WorldObjectFollower::myRectTransform
	RectTransform_t542 * ___myRectTransform_8;
	// System.Boolean WorldObjectFollower::followeeMoves
	bool ___followeeMoves_9;
	// System.Boolean WorldObjectFollower::positionDirty
	bool ___positionDirty_10;
	// UnityEngine.Vector3 WorldObjectFollower::offset
	Vector3_t535  ___offset_11;
	// System.Single WorldObjectFollower::rotation
	float ___rotation_12;
};

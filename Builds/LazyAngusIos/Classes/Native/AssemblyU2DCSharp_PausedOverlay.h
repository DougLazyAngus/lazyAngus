﻿#pragma once
#include <stdint.h>
// PausedOverlay
struct PausedOverlay_t568;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.UI.Button
struct Button_t464;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PausedOverlay
struct  PausedOverlay_t568  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject PausedOverlay::overlay
	GameObject_t352 * ___overlay_3;
	// UnityEngine.UI.Button PausedOverlay::bigPlayButton
	Button_t464 * ___bigPlayButton_4;
	// UnityEngine.GameObject PausedOverlay::childElement
	GameObject_t352 * ___childElement_5;
	// System.Boolean PausedOverlay::registeredForEvents
	bool ___registeredForEvents_6;
};
struct PausedOverlay_t568_StaticFields{
	// PausedOverlay PausedOverlay::instance
	PausedOverlay_t568 * ___instance_2;
};

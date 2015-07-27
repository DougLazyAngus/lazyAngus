#pragma once
#include <stdint.h>
// PausedOverlay
struct PausedOverlay_t523;
// UnityEngine.GameObject
struct GameObject_t312;
// UnityEngine.UI.Button
struct Button_t423;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PausedOverlay
struct  PausedOverlay_t523  : public MonoBehaviour_t66
{
	// UnityEngine.GameObject PausedOverlay::overlay
	GameObject_t312 * ___overlay_3;
	// UnityEngine.UI.Button PausedOverlay::bigPlayButton
	Button_t423 * ___bigPlayButton_4;
	// UnityEngine.GameObject PausedOverlay::childElement
	GameObject_t312 * ___childElement_5;
	// System.Boolean PausedOverlay::registeredForEvents
	bool ___registeredForEvents_6;
};
struct PausedOverlay_t523_StaticFields{
	// PausedOverlay PausedOverlay::instance
	PausedOverlay_t523 * ___instance_2;
};

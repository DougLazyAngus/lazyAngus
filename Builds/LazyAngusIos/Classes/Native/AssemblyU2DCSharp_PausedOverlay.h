#pragma once
#include <stdint.h>
// PausedOverlay
struct PausedOverlay_t521;
// UnityEngine.GameObject
struct GameObject_t310;
// UnityEngine.UI.Button
struct Button_t421;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PausedOverlay
struct  PausedOverlay_t521  : public MonoBehaviour_t67
{
	// UnityEngine.GameObject PausedOverlay::overlay
	GameObject_t310 * ___overlay_3;
	// UnityEngine.UI.Button PausedOverlay::bigPlayButton
	Button_t421 * ___bigPlayButton_4;
	// UnityEngine.GameObject PausedOverlay::childElement
	GameObject_t310 * ___childElement_5;
	// System.Boolean PausedOverlay::registeredForEvents
	bool ___registeredForEvents_6;
};
struct PausedOverlay_t521_StaticFields{
	// PausedOverlay PausedOverlay::instance
	PausedOverlay_t521 * ___instance_2;
};

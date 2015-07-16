#pragma once
#include <stdint.h>
// PausedOverlay
struct PausedOverlay_t482;
// UnityEngine.GameObject
struct GameObject_t284;
// UnityEngine.UI.Button
struct Button_t380;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PausedOverlay
struct  PausedOverlay_t482  : public MonoBehaviour_t67
{
	// UnityEngine.GameObject PausedOverlay::overlay
	GameObject_t284 * ___overlay_3;
	// UnityEngine.UI.Button PausedOverlay::bigPlayButton
	Button_t380 * ___bigPlayButton_4;
	// UnityEngine.GameObject PausedOverlay::childElement
	GameObject_t284 * ___childElement_5;
	// System.Boolean PausedOverlay::registeredForEvents
	bool ___registeredForEvents_6;
};
struct PausedOverlay_t482_StaticFields{
	// PausedOverlay PausedOverlay::instance
	PausedOverlay_t482 * ___instance_2;
};

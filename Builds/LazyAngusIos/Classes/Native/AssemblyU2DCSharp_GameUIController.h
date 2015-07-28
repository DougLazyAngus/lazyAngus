#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// GameUI[]
struct GameUIU5BU5D_t512;
// GameUIController
struct GameUIController_t514;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameUIController
struct  GameUIController_t514  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject GameUIController::welcomeUIGameObject
	GameObject_t352 * ___welcomeUIGameObject_2;
	// UnityEngine.GameObject GameUIController::levelEndUIGameObject
	GameObject_t352 * ___levelEndUIGameObject_3;
	// UnityEngine.GameObject GameUIController::levelPlayUIGameObject
	GameObject_t352 * ___levelPlayUIGameObject_4;
	// UnityEngine.GameObject GameUIController::gameOverUIGameObject
	GameObject_t352 * ___gameOverUIGameObject_5;
	// GameUI[] GameUIController::gameUIs
	GameUIU5BU5D_t512* ___gameUIs_6;
	// System.Boolean GameUIController::registeredForEvents
	bool ___registeredForEvents_7;
};
struct GameUIController_t514_StaticFields{
	// GameUIController GameUIController::<instance>k__BackingField
	GameUIController_t514 * ___U3CinstanceU3Ek__BackingField_8;
};

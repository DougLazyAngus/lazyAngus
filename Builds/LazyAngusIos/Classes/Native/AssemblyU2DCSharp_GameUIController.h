#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// GameUI[]
struct GameUIU5BU5D_t566;
// GameUIController
struct GameUIController_t568;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameUIController
struct  GameUIController_t568  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject GameUIController::welcomeUIGameObject
	GameObject_t352 * ___welcomeUIGameObject_2;
	// UnityEngine.GameObject GameUIController::levelEndUIGameObject
	GameObject_t352 * ___levelEndUIGameObject_3;
	// UnityEngine.GameObject GameUIController::gameOverUIGameObject
	GameObject_t352 * ___gameOverUIGameObject_4;
	// UnityEngine.GameObject GameUIController::realAngusUIGameObject
	GameObject_t352 * ___realAngusUIGameObject_5;
	// GameUI[] GameUIController::gameUIs
	GameUIU5BU5D_t566* ___gameUIs_6;
	// System.Boolean GameUIController::registeredForEvents
	bool ___registeredForEvents_7;
};
struct GameUIController_t568_StaticFields{
	// GameUIController GameUIController::<instance>k__BackingField
	GameUIController_t568 * ___U3CinstanceU3Ek__BackingField_8;
};

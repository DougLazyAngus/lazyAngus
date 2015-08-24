#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// GameUI[]
struct GameUIU5BU5D_t563;
// GameUIController
struct GameUIController_t565;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameUIController
struct  GameUIController_t565  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject GameUIController::welcomeUIGameObject
	GameObject_t352 * ___welcomeUIGameObject_2;
	// UnityEngine.GameObject GameUIController::levelEndUIGameObject
	GameObject_t352 * ___levelEndUIGameObject_3;
	// UnityEngine.GameObject GameUIController::gameOverUIGameObject
	GameObject_t352 * ___gameOverUIGameObject_4;
	// GameUI[] GameUIController::gameUIs
	GameUIU5BU5D_t563* ___gameUIs_5;
	// System.Boolean GameUIController::registeredForEvents
	bool ___registeredForEvents_6;
};
struct GameUIController_t565_StaticFields{
	// GameUIController GameUIController::<instance>k__BackingField
	GameUIController_t565 * ___U3CinstanceU3Ek__BackingField_7;
};

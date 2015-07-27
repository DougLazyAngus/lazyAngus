#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t312;
// GameUI[]
struct GameUIU5BU5D_t470;
// GameUIController
struct GameUIController_t472;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameUIController
struct  GameUIController_t472  : public MonoBehaviour_t66
{
	// UnityEngine.GameObject GameUIController::welcomeUIGameObject
	GameObject_t312 * ___welcomeUIGameObject_2;
	// UnityEngine.GameObject GameUIController::levelEndUIGameObject
	GameObject_t312 * ___levelEndUIGameObject_3;
	// UnityEngine.GameObject GameUIController::levelPlayUIGameObject
	GameObject_t312 * ___levelPlayUIGameObject_4;
	// UnityEngine.GameObject GameUIController::gameOverUIGameObject
	GameObject_t312 * ___gameOverUIGameObject_5;
	// GameUI[] GameUIController::gameUIs
	GameUIU5BU5D_t470* ___gameUIs_6;
	// System.Boolean GameUIController::registeredForEvents
	bool ___registeredForEvents_7;
};
struct GameUIController_t472_StaticFields{
	// GameUIController GameUIController::<instance>k__BackingField
	GameUIController_t472 * ___U3CinstanceU3Ek__BackingField_8;
};

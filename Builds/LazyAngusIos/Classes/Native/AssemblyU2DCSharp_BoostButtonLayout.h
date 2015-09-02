#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// System.Collections.Generic.List`1<BoostButton>
struct List_1_t506;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t507;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostButtonLayout
struct  BoostButtonLayout_t504  : public MonoBehaviour_t13
{
	// System.Single BoostButtonLayout::boostButtonYOffset
	float ___boostButtonYOffset_2;
	// UnityEngine.GameObject BoostButtonLayout::boostButtonPrototype
	GameObject_t352 * ___boostButtonPrototype_3;
	// System.Collections.Generic.List`1<BoostButton> BoostButtonLayout::boostButtons
	List_1_t506 * ___boostButtons_4;
	// UnityEngine.GameObject[] BoostButtonLayout::boostButtonGameObjects
	GameObjectU5BU5D_t507* ___boostButtonGameObjects_5;
	// System.Boolean BoostButtonLayout::treatsTextDirty
	bool ___treatsTextDirty_6;
	// System.Boolean BoostButtonLayout::levelTextDirty
	bool ___levelTextDirty_7;
};

#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t310;
// UnityEngine.Canvas
struct Canvas_t416;
// System.Collections.Generic.List`1<BoostButton>
struct List_1_t423;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t424;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostButtonLayout
struct  BoostButtonLayout_t425  : public MonoBehaviour_t67
{
	// System.Single BoostButtonLayout::boostButtonYOffset
	float ___boostButtonYOffset_2;
	// UnityEngine.GameObject BoostButtonLayout::boostButtonPrototype
	GameObject_t310 * ___boostButtonPrototype_3;
	// UnityEngine.Canvas BoostButtonLayout::containingCanvas
	Canvas_t416 * ___containingCanvas_4;
	// System.Collections.Generic.List`1<BoostButton> BoostButtonLayout::boostButtons
	List_1_t423 * ___boostButtons_5;
	// UnityEngine.GameObject[] BoostButtonLayout::boostButtonGameObjects
	GameObjectU5BU5D_t424* ___boostButtonGameObjects_6;
	// System.Boolean BoostButtonLayout::treatsTextDirty
	bool ___treatsTextDirty_7;
	// System.Boolean BoostButtonLayout::levelTextDirty
	bool ___levelTextDirty_8;
	// System.Boolean BoostButtonLayout::started
	bool ___started_9;
};

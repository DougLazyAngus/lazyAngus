#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Canvas
struct Canvas_t458;
// System.Collections.Generic.List`1<BoostButton>
struct List_1_t465;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t466;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoostButtonLayout
struct  BoostButtonLayout_t467  : public MonoBehaviour_t13
{
	// System.Single BoostButtonLayout::boostButtonYOffset
	float ___boostButtonYOffset_2;
	// UnityEngine.GameObject BoostButtonLayout::boostButtonPrototype
	GameObject_t352 * ___boostButtonPrototype_3;
	// UnityEngine.Canvas BoostButtonLayout::containingCanvas
	Canvas_t458 * ___containingCanvas_4;
	// System.Collections.Generic.List`1<BoostButton> BoostButtonLayout::boostButtons
	List_1_t465 * ___boostButtons_5;
	// UnityEngine.GameObject[] BoostButtonLayout::boostButtonGameObjects
	GameObjectU5BU5D_t466* ___boostButtonGameObjects_6;
	// System.Boolean BoostButtonLayout::treatsTextDirty
	bool ___treatsTextDirty_7;
	// System.Boolean BoostButtonLayout::levelTextDirty
	bool ___levelTextDirty_8;
	// System.Boolean BoostButtonLayout::started
	bool ___started_9;
};

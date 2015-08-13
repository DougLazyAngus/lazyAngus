#pragma once
#include <stdint.h>
// UnityEngine.Renderer
struct Renderer_t604;
// UnityEngine.Material[]
struct MaterialU5BU5D_t652;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TailController
struct  TailController_t653  : public MonoBehaviour_t13
{
	// UnityEngine.Renderer TailController::tailRenderer
	Renderer_t604 * ___tailRenderer_2;
	// UnityEngine.Material[] TailController::tailMaterials
	MaterialU5BU5D_t652* ___tailMaterials_3;
	// System.Single TailController::cycleTime
	float ___cycleTime_4;
	// System.Int32 TailController::numFrames
	int32_t ___numFrames_5;
	// UnityEngine.Material[] TailController::currentMaterial
	MaterialU5BU5D_t652* ___currentMaterial_6;
};

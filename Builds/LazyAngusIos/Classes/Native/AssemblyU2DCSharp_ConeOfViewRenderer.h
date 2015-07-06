#pragma once
#include <stdint.h>
// UnityEngine.Mesh
struct Mesh_t399;
// UnityEngine.Material
struct Material_t400;
// TweakableParams
struct TweakableParams_t401;
// BoostConfig
struct BoostConfig_t372;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConeOfViewRenderer
struct  ConeOfViewRenderer_t402  : public MonoBehaviour_t67
{
	// UnityEngine.Mesh ConeOfViewRenderer::viewMesh
	Mesh_t399 * ___viewMesh_2;
	// UnityEngine.Material ConeOfViewRenderer::viewMaterial
	Material_t400 * ___viewMaterial_3;
	// System.Int32 ConeOfViewRenderer::numTriangles
	int32_t ___numTriangles_4;
	// TweakableParams ConeOfViewRenderer::tweakableParams
	TweakableParams_t401 * ___tweakableParams_5;
	// BoostConfig ConeOfViewRenderer::boostConfig
	BoostConfig_t372 * ___boostConfig_6;
	// System.Boolean ConeOfViewRenderer::registeredForEvents
	bool ___registeredForEvents_7;
	// System.Single ConeOfViewRenderer::<actualAngleRange>k__BackingField
	float ___U3CactualAngleRangeU3Ek__BackingField_8;
};

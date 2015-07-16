#pragma once
#include <stdint.h>
// UnityEngine.Mesh
struct Mesh_t400;
// UnityEngine.Material
struct Material_t401;
// BoostConfig
struct BoostConfig_t373;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConeOfViewRenderer
struct  ConeOfViewRenderer_t402  : public MonoBehaviour_t67
{
	// UnityEngine.Mesh ConeOfViewRenderer::viewMesh
	Mesh_t400 * ___viewMesh_2;
	// UnityEngine.Material ConeOfViewRenderer::viewMaterial
	Material_t401 * ___viewMaterial_3;
	// System.Int32 ConeOfViewRenderer::numTriangles
	int32_t ___numTriangles_4;
	// BoostConfig ConeOfViewRenderer::boostConfig
	BoostConfig_t373 * ___boostConfig_5;
	// System.Boolean ConeOfViewRenderer::registeredForEvents
	bool ___registeredForEvents_6;
	// System.Single ConeOfViewRenderer::<actualAngleRange>k__BackingField
	float ___U3CactualAngleRangeU3Ek__BackingField_7;
};

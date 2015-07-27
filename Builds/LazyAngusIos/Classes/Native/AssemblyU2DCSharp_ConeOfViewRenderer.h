#pragma once
#include <stdint.h>
// UnityEngine.Mesh
struct Mesh_t439;
// UnityEngine.Material
struct Material_t440;
// BoostConfig
struct BoostConfig_t416;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConeOfViewRenderer
struct  ConeOfViewRenderer_t441  : public MonoBehaviour_t66
{
	// UnityEngine.Mesh ConeOfViewRenderer::viewMesh
	Mesh_t439 * ___viewMesh_2;
	// UnityEngine.Material ConeOfViewRenderer::viewMaterial
	Material_t440 * ___viewMaterial_3;
	// System.Int32 ConeOfViewRenderer::numTriangles
	int32_t ___numTriangles_4;
	// BoostConfig ConeOfViewRenderer::boostConfig
	BoostConfig_t416 * ___boostConfig_5;
	// System.Boolean ConeOfViewRenderer::registeredForEvents
	bool ___registeredForEvents_6;
	// System.Single ConeOfViewRenderer::<actualAngleRange>k__BackingField
	float ___U3CactualAngleRangeU3Ek__BackingField_7;
};

#pragma once
#include <stdint.h>
// UnityEngine.Mesh
struct Mesh_t482;
// UnityEngine.Material
struct Material_t483;
// BoostConfig
struct BoostConfig_t456;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConeOfViewRenderer
struct  ConeOfViewRenderer_t484  : public MonoBehaviour_t13
{
	// UnityEngine.Mesh ConeOfViewRenderer::viewMesh
	Mesh_t482 * ___viewMesh_2;
	// UnityEngine.Material ConeOfViewRenderer::viewMaterial
	Material_t483 * ___viewMaterial_3;
	// System.Int32 ConeOfViewRenderer::numTriangles
	int32_t ___numTriangles_4;
	// BoostConfig ConeOfViewRenderer::boostConfig
	BoostConfig_t456 * ___boostConfig_5;
	// System.Boolean ConeOfViewRenderer::registeredForEvents
	bool ___registeredForEvents_6;
	// System.Single ConeOfViewRenderer::<actualAngleRange>k__BackingField
	float ___U3CactualAngleRangeU3Ek__BackingField_7;
};

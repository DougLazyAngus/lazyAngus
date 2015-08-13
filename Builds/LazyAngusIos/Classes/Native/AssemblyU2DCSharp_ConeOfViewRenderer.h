#pragma once
#include <stdint.h>
// UnityEngine.Mesh
struct Mesh_t522;
// UnityEngine.Material
struct Material_t523;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConeOfViewRenderer
struct  ConeOfViewRenderer_t520  : public MonoBehaviour_t13
{
	// UnityEngine.Mesh ConeOfViewRenderer::viewMesh
	Mesh_t522 * ___viewMesh_2;
	// UnityEngine.Material ConeOfViewRenderer::viewMaterial
	Material_t523 * ___viewMaterial_3;
	// System.Int32 ConeOfViewRenderer::numTriangles
	int32_t ___numTriangles_4;
	// System.Boolean ConeOfViewRenderer::initialized
	bool ___initialized_5;
};

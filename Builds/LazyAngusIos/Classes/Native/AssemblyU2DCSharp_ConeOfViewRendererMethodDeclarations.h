#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConeOfViewRenderer
struct ConeOfViewRenderer_t484;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void ConeOfViewRenderer::.ctor()
extern "C" void ConeOfViewRenderer__ctor_m2628 (ConeOfViewRenderer_t484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ConeOfViewRenderer::get_actualAngleRange()
extern "C" float ConeOfViewRenderer_get_actualAngleRange_m2629 (ConeOfViewRenderer_t484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewRenderer_set_actualAngleRange_m2630 (ConeOfViewRenderer_t484 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::Awake()
extern "C" void ConeOfViewRenderer_Awake_m2631 (ConeOfViewRenderer_t484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::Start()
extern "C" void ConeOfViewRenderer_Start_m2632 (ConeOfViewRenderer_t484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::OnDestroy()
extern "C" void ConeOfViewRenderer_OnDestroy_m2633 (ConeOfViewRenderer_t484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::RegisterForEvents()
extern "C" void ConeOfViewRenderer_RegisterForEvents_m2634 (ConeOfViewRenderer_t484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::UnregisterForEvents()
extern "C" void ConeOfViewRenderer_UnregisterForEvents_m2635 (ConeOfViewRenderer_t484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewRenderer_OnBoostUsageChanged_m2636 (ConeOfViewRenderer_t484 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::CreateViewMeshForAngleRange(System.Single)
extern "C" void ConeOfViewRenderer_CreateViewMeshForAngleRange_m2637 (ConeOfViewRenderer_t484 * __this, float ___angleRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;

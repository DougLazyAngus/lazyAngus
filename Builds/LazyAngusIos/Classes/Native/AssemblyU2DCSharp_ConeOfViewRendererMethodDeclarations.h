#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConeOfViewRenderer
struct ConeOfViewRenderer_t441;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void ConeOfViewRenderer::.ctor()
extern "C" void ConeOfViewRenderer__ctor_m2344 (ConeOfViewRenderer_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ConeOfViewRenderer::get_actualAngleRange()
extern "C" float ConeOfViewRenderer_get_actualAngleRange_m2345 (ConeOfViewRenderer_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewRenderer_set_actualAngleRange_m2346 (ConeOfViewRenderer_t441 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::Awake()
extern "C" void ConeOfViewRenderer_Awake_m2347 (ConeOfViewRenderer_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::Start()
extern "C" void ConeOfViewRenderer_Start_m2348 (ConeOfViewRenderer_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::OnDestroy()
extern "C" void ConeOfViewRenderer_OnDestroy_m2349 (ConeOfViewRenderer_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::RegisterForEvents()
extern "C" void ConeOfViewRenderer_RegisterForEvents_m2350 (ConeOfViewRenderer_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::UnregisterForEvents()
extern "C" void ConeOfViewRenderer_UnregisterForEvents_m2351 (ConeOfViewRenderer_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewRenderer_OnBoostUsageChanged_m2352 (ConeOfViewRenderer_t441 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::CreateViewMeshForAngleRange(System.Single)
extern "C" void ConeOfViewRenderer_CreateViewMeshForAngleRange_m2353 (ConeOfViewRenderer_t441 * __this, float ___angleRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;

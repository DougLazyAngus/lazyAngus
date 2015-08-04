#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConeOfViewRenderer
struct ConeOfViewRenderer_t482;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void ConeOfViewRenderer::.ctor()
extern "C" void ConeOfViewRenderer__ctor_m2613 (ConeOfViewRenderer_t482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ConeOfViewRenderer::get_actualAngleRange()
extern "C" float ConeOfViewRenderer_get_actualAngleRange_m2614 (ConeOfViewRenderer_t482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewRenderer_set_actualAngleRange_m2615 (ConeOfViewRenderer_t482 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::Awake()
extern "C" void ConeOfViewRenderer_Awake_m2616 (ConeOfViewRenderer_t482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::Start()
extern "C" void ConeOfViewRenderer_Start_m2617 (ConeOfViewRenderer_t482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::OnDestroy()
extern "C" void ConeOfViewRenderer_OnDestroy_m2618 (ConeOfViewRenderer_t482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::RegisterForEvents()
extern "C" void ConeOfViewRenderer_RegisterForEvents_m2619 (ConeOfViewRenderer_t482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::UnregisterForEvents()
extern "C" void ConeOfViewRenderer_UnregisterForEvents_m2620 (ConeOfViewRenderer_t482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewRenderer_OnBoostUsageChanged_m2621 (ConeOfViewRenderer_t482 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewRenderer::CreateViewMeshForAngleRange(System.Single)
extern "C" void ConeOfViewRenderer_CreateViewMeshForAngleRange_m2622 (ConeOfViewRenderer_t482 * __this, float ___angleRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;

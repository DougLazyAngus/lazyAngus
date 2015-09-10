#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConeOfViewController
struct ConeOfViewController_t609;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void ConeOfViewController::.ctor()
extern "C" void ConeOfViewController__ctor_m3263 (ConeOfViewController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ConeOfViewController::get_actualAngleRange()
extern "C" float ConeOfViewController_get_actualAngleRange_m3264 (ConeOfViewController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewController_set_actualAngleRange_m3265 (ConeOfViewController_t609 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::Awake()
extern "C" void ConeOfViewController_Awake_m3266 (ConeOfViewController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::Start()
extern "C" void ConeOfViewController_Start_m3267 (ConeOfViewController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::OnDestroy()
extern "C" void ConeOfViewController_OnDestroy_m3268 (ConeOfViewController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::RegisterForEvents()
extern "C" void ConeOfViewController_RegisterForEvents_m3269 (ConeOfViewController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::UnregisterForEvents()
extern "C" void ConeOfViewController_UnregisterForEvents_m3270 (ConeOfViewController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewController_OnBoostUsageChanged_m3271 (ConeOfViewController_t609 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConeOfViewController::MaybeUpdateAngleRange()
extern "C" bool ConeOfViewController_MaybeUpdateAngleRange_m3272 (ConeOfViewController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::UpdateCones()
extern "C" void ConeOfViewController_UpdateCones_m3273 (ConeOfViewController_t609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

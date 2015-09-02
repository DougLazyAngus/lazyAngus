#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConeOfViewController
struct ConeOfViewController_t524;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void ConeOfViewController::.ctor()
extern "C" void ConeOfViewController__ctor_m2835 (ConeOfViewController_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ConeOfViewController::get_actualAngleRange()
extern "C" float ConeOfViewController_get_actualAngleRange_m2836 (ConeOfViewController_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewController_set_actualAngleRange_m2837 (ConeOfViewController_t524 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::Awake()
extern "C" void ConeOfViewController_Awake_m2838 (ConeOfViewController_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::Start()
extern "C" void ConeOfViewController_Start_m2839 (ConeOfViewController_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::OnDestroy()
extern "C" void ConeOfViewController_OnDestroy_m2840 (ConeOfViewController_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::RegisterForEvents()
extern "C" void ConeOfViewController_RegisterForEvents_m2841 (ConeOfViewController_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::UnregisterForEvents()
extern "C" void ConeOfViewController_UnregisterForEvents_m2842 (ConeOfViewController_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewController_OnBoostUsageChanged_m2843 (ConeOfViewController_t524 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConeOfViewController::MaybeUpdateAngleRange()
extern "C" bool ConeOfViewController_MaybeUpdateAngleRange_m2844 (ConeOfViewController_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConeOfViewController::UpdateCones()
extern "C" void ConeOfViewController_UpdateCones_m2845 (ConeOfViewController_t524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

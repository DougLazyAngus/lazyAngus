#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostButtonLayout
struct BoostButtonLayout_t384;
// BoostButton
struct BoostButton_t378;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostButtonLayout::.ctor()
extern "C" void BoostButtonLayout__ctor_m1823 (BoostButtonLayout_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::Awake()
extern "C" void BoostButtonLayout_Awake_m1824 (BoostButtonLayout_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::Start()
extern "C" void BoostButtonLayout_Start_m1825 (BoostButtonLayout_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::OnEnable()
extern "C" void BoostButtonLayout_OnEnable_m1826 (BoostButtonLayout_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::AddBoostButtons()
extern "C" void BoostButtonLayout_AddBoostButtons_m1827 (BoostButtonLayout_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::AddBoostButtonForType(BoostConfig/BoostType)
extern "C" void BoostButtonLayout_AddBoostButtonForType_m1828 (BoostButtonLayout_t384 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::LayoutBoostButtons()
extern "C" void BoostButtonLayout_LayoutBoostButtons_m1829 (BoostButtonLayout_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::RefreshBoostButtons()
extern "C" void BoostButtonLayout_RefreshBoostButtons_m1830 (BoostButtonLayout_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostButton BoostButtonLayout::GetButtonForBoost(BoostConfig/BoostType)
extern "C" BoostButton_t378 * BoostButtonLayout_GetButtonForBoost_m1831 (BoostButtonLayout_t384 * __this, int32_t ___boostType, const MethodInfo* method) IL2CPP_METHOD_ATTR;

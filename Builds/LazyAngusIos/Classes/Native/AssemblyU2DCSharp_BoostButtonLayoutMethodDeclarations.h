#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostButtonLayout
struct BoostButtonLayout_t383;
// BoostButton
struct BoostButton_t377;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostButtonLayout::.ctor()
extern "C" void BoostButtonLayout__ctor_m1816 (BoostButtonLayout_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::Awake()
extern "C" void BoostButtonLayout_Awake_m1817 (BoostButtonLayout_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::Start()
extern "C" void BoostButtonLayout_Start_m1818 (BoostButtonLayout_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::OnEnable()
extern "C" void BoostButtonLayout_OnEnable_m1819 (BoostButtonLayout_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::AddBoostButtons()
extern "C" void BoostButtonLayout_AddBoostButtons_m1820 (BoostButtonLayout_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::AddBoostButtonForType(BoostConfig/BoostType)
extern "C" void BoostButtonLayout_AddBoostButtonForType_m1821 (BoostButtonLayout_t383 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::LayoutBoostButtons()
extern "C" void BoostButtonLayout_LayoutBoostButtons_m1822 (BoostButtonLayout_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::RefreshBoostButtons()
extern "C" void BoostButtonLayout_RefreshBoostButtons_m1823 (BoostButtonLayout_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostButton BoostButtonLayout::GetButtonForBoost(BoostConfig/BoostType)
extern "C" BoostButton_t377 * BoostButtonLayout_GetButtonForBoost_m1824 (BoostButtonLayout_t383 * __this, int32_t ___boostType, const MethodInfo* method) IL2CPP_METHOD_ATTR;

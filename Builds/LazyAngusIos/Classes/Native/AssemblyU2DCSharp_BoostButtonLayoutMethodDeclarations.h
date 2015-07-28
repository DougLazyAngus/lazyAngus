#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostButtonLayout
struct BoostButtonLayout_t468;
// BoostButton
struct BoostButton_t462;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostButtonLayout::.ctor()
extern "C" void BoostButtonLayout__ctor_m2573 (BoostButtonLayout_t468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::Awake()
extern "C" void BoostButtonLayout_Awake_m2574 (BoostButtonLayout_t468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::Start()
extern "C" void BoostButtonLayout_Start_m2575 (BoostButtonLayout_t468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::OnEnable()
extern "C" void BoostButtonLayout_OnEnable_m2576 (BoostButtonLayout_t468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::AddBoostButtons()
extern "C" void BoostButtonLayout_AddBoostButtons_m2577 (BoostButtonLayout_t468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::AddBoostButtonForType(BoostConfig/BoostType)
extern "C" void BoostButtonLayout_AddBoostButtonForType_m2578 (BoostButtonLayout_t468 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::LayoutBoostButtons()
extern "C" void BoostButtonLayout_LayoutBoostButtons_m2579 (BoostButtonLayout_t468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::RefreshBoostButtons()
extern "C" void BoostButtonLayout_RefreshBoostButtons_m2580 (BoostButtonLayout_t468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostButton BoostButtonLayout::GetButtonForBoost(BoostConfig/BoostType)
extern "C" BoostButton_t462 * BoostButtonLayout_GetButtonForBoost_m2581 (BoostButtonLayout_t468 * __this, int32_t ___boostType, const MethodInfo* method) IL2CPP_METHOD_ATTR;

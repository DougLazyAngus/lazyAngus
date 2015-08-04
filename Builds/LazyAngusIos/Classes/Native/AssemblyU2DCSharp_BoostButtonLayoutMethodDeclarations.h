#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostButtonLayout
struct BoostButtonLayout_t466;
// BoostButton
struct BoostButton_t459;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostButtonLayout::.ctor()
extern "C" void BoostButtonLayout__ctor_m2559 (BoostButtonLayout_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::Awake()
extern "C" void BoostButtonLayout_Awake_m2560 (BoostButtonLayout_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::ConfirmLayoutComplete()
extern "C" void BoostButtonLayout_ConfirmLayoutComplete_m2561 (BoostButtonLayout_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::AddBoostButtons()
extern "C" void BoostButtonLayout_AddBoostButtons_m2562 (BoostButtonLayout_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::AddBoostButtonForType(BoostConfig/BoostType)
extern "C" void BoostButtonLayout_AddBoostButtonForType_m2563 (BoostButtonLayout_t466 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::LayoutBoostButtons()
extern "C" void BoostButtonLayout_LayoutBoostButtons_m2564 (BoostButtonLayout_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButtonLayout::RefreshBoostButtons()
extern "C" void BoostButtonLayout_RefreshBoostButtons_m2565 (BoostButtonLayout_t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostButton BoostButtonLayout::GetButtonForBoost(BoostConfig/BoostType)
extern "C" BoostButton_t459 * BoostButtonLayout_GetButtonForBoost_m2566 (BoostButtonLayout_t466 * __this, int32_t ___boostType, const MethodInfo* method) IL2CPP_METHOD_ATTR;

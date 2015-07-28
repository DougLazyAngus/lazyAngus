#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostButton
struct BoostButton_t462;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostButton::.ctor()
extern "C" void BoostButton__ctor_m2553 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::Start()
extern "C" void BoostButton_Start_m2554 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::Update()
extern "C" void BoostButton_Update_m2555 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RegisterForEvents()
extern "C" void BoostButton_RegisterForEvents_m2556 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::UnregisterForEvents()
extern "C" void BoostButton_UnregisterForEvents_m2557 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnDestroy()
extern "C" void BoostButton_OnDestroy_m2558 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::ConfigureForType(BoostConfig/BoostType)
extern "C" void BoostButton_ConfigureForType_m2559 (BoostButton_t462 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshButton()
extern "C" void BoostButton_RefreshButton_m2560 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshForBuyAndUse()
extern "C" void BoostButton_RefreshForBuyAndUse_m2561 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshForBuy()
extern "C" void BoostButton_RefreshForBuy_m2562 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshForUse()
extern "C" void BoostButton_RefreshForUse_m2563 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig/BoostType BoostButton::GetBoostType()
extern "C" int32_t BoostButton_GetBoostType_m2564 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnGameLevelChanged()
extern "C" void BoostButton_OnGameLevelChanged_m2565 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnGamePhaseChanged()
extern "C" void BoostButton_OnGamePhaseChanged_m2566 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::CheckForLevelUnlockEffects()
extern "C" void BoostButton_CheckForLevelUnlockEffects_m2567 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostsChanged()
extern "C" void BoostButton_OnBoostsChanged_m2568 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUsageChanged_m2569 (BoostButton_t462 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnTreatsChanged()
extern "C" void BoostButton_OnTreatsChanged_m2570 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostUnlocked(BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUnlocked_m2571 (BoostButton_t462 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BoostButton::TriggerDistortionEffect()
extern "C" Object_t * BoostButton_TriggerDistortionEffect_m2572 (BoostButton_t462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

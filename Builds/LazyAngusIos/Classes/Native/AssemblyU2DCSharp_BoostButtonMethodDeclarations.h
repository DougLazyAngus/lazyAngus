#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostButton
struct BoostButton_t377;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostButton::.ctor()
extern "C" void BoostButton__ctor_m1796 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::Start()
extern "C" void BoostButton_Start_m1797 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::Update()
extern "C" void BoostButton_Update_m1798 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RegisterForEvents()
extern "C" void BoostButton_RegisterForEvents_m1799 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::UnregisterForEvents()
extern "C" void BoostButton_UnregisterForEvents_m1800 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnDestroy()
extern "C" void BoostButton_OnDestroy_m1801 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::ConfigureForType(BoostConfig/BoostType)
extern "C" void BoostButton_ConfigureForType_m1802 (BoostButton_t377 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshButton()
extern "C" void BoostButton_RefreshButton_m1803 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshForBuyAndUse()
extern "C" void BoostButton_RefreshForBuyAndUse_m1804 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshForBuy()
extern "C" void BoostButton_RefreshForBuy_m1805 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshForUse()
extern "C" void BoostButton_RefreshForUse_m1806 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig/BoostType BoostButton::GetBoostType()
extern "C" int32_t BoostButton_GetBoostType_m1807 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnGameLevelChanged()
extern "C" void BoostButton_OnGameLevelChanged_m1808 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnGamePhaseChanged()
extern "C" void BoostButton_OnGamePhaseChanged_m1809 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::CheckForLevelUnlockEffects()
extern "C" void BoostButton_CheckForLevelUnlockEffects_m1810 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostsChanged()
extern "C" void BoostButton_OnBoostsChanged_m1811 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUsageChanged_m1812 (BoostButton_t377 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnTreatsChanged()
extern "C" void BoostButton_OnTreatsChanged_m1813 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostUnlocked(BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUnlocked_m1814 (BoostButton_t377 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BoostButton::TriggerDistortionEffect()
extern "C" Object_t * BoostButton_TriggerDistortionEffect_m1815 (BoostButton_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

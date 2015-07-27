#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostButton
struct BoostButton_t421;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostButton::.ctor()
extern "C" void BoostButton__ctor_m2271 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::Start()
extern "C" void BoostButton_Start_m2272 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::Update()
extern "C" void BoostButton_Update_m2273 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RegisterForEvents()
extern "C" void BoostButton_RegisterForEvents_m2274 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::UnregisterForEvents()
extern "C" void BoostButton_UnregisterForEvents_m2275 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnDestroy()
extern "C" void BoostButton_OnDestroy_m2276 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::ConfigureForType(BoostConfig/BoostType)
extern "C" void BoostButton_ConfigureForType_m2277 (BoostButton_t421 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshButton()
extern "C" void BoostButton_RefreshButton_m2278 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshForBuyAndUse()
extern "C" void BoostButton_RefreshForBuyAndUse_m2279 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshForBuy()
extern "C" void BoostButton_RefreshForBuy_m2280 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshForUse()
extern "C" void BoostButton_RefreshForUse_m2281 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig/BoostType BoostButton::GetBoostType()
extern "C" int32_t BoostButton_GetBoostType_m2282 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnGameLevelChanged()
extern "C" void BoostButton_OnGameLevelChanged_m2283 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnGamePhaseChanged()
extern "C" void BoostButton_OnGamePhaseChanged_m2284 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::CheckForLevelUnlockEffects()
extern "C" void BoostButton_CheckForLevelUnlockEffects_m2285 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostsChanged()
extern "C" void BoostButton_OnBoostsChanged_m2286 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUsageChanged_m2287 (BoostButton_t421 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnTreatsChanged()
extern "C" void BoostButton_OnTreatsChanged_m2288 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostUnlocked(BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUnlocked_m2289 (BoostButton_t421 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BoostButton::TriggerDistortionEffect()
extern "C" Object_t * BoostButton_TriggerDistortionEffect_m2290 (BoostButton_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

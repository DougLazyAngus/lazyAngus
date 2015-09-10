#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostButton
struct BoostButton_t496;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostButton::.ctor()
extern "C" void BoostButton__ctor_m2733 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::Awake()
extern "C" void BoostButton_Awake_m2734 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::Start()
extern "C" void BoostButton_Start_m2735 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::Update()
extern "C" void BoostButton_Update_m2736 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RegisterForEvents()
extern "C" void BoostButton_RegisterForEvents_m2737 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::UnregisterForEvents()
extern "C" void BoostButton_UnregisterForEvents_m2738 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnDestroy()
extern "C" void BoostButton_OnDestroy_m2739 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::ConfigureForType(BoostConfig/BoostType)
extern "C" void BoostButton_ConfigureForType_m2740 (BoostButton_t496 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BoostButton::GetLevelLock()
extern "C" int32_t BoostButton_GetLevelLock_m2741 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BoostButton::BoostIsUnlocked()
extern "C" bool BoostButton_BoostIsUnlocked_m2742 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BoostButton::CanAffordBoost()
extern "C" bool BoostButton_CanAffordBoost_m2743 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BoostButton::CanUseBoost()
extern "C" bool BoostButton_CanUseBoost_m2744 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::RefreshButton()
extern "C" void BoostButton_RefreshButton_m2745 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig/BoostType BoostButton::GetBoostType()
extern "C" int32_t BoostButton_GetBoostType_m2746 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnGameLevelChanged()
extern "C" void BoostButton_OnGameLevelChanged_m2747 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnGamePhaseChanged()
extern "C" void BoostButton_OnGamePhaseChanged_m2748 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::CheckForLevelUnlockEffects()
extern "C" void BoostButton_CheckForLevelUnlockEffects_m2749 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostsChanged()
extern "C" void BoostButton_OnBoostsChanged_m2750 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUsageChanged_m2751 (BoostButton_t496 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostButton::OnTreatsChanged()
extern "C" void BoostButton_OnTreatsChanged_m2752 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BoostButton::TriggerDistortionEffect()
extern "C" Object_t * BoostButton_TriggerDistortionEffect_m2753 (BoostButton_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

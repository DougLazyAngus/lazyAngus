#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostConfig
struct BoostConfig_t496;
// BoostConfig/BoostActiveEventHandler
struct BoostActiveEventHandler_t509;
// UnityEngine.Sprite
struct Sprite_t512;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostConfig::.ctor()
extern "C" void BoostConfig__ctor_m2799 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::add_BoostActive(BoostConfig/BoostActiveEventHandler)
extern "C" void BoostConfig_add_BoostActive_m2800 (BoostConfig_t496 * __this, BoostActiveEventHandler_t509 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::remove_BoostActive(BoostConfig/BoostActiveEventHandler)
extern "C" void BoostConfig_remove_BoostActive_m2801 (BoostConfig_t496 * __this, BoostActiveEventHandler_t509 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig BoostConfig::get_instance()
extern "C" BoostConfig_t496 * BoostConfig_get_instance_m2802 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::set_instance(BoostConfig)
extern "C" void BoostConfig_set_instance_m2803 (Object_t * __this /* static, unused */, BoostConfig_t496 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig/BoostType BoostConfig::get_activeBoost()
extern "C" int32_t BoostConfig_get_activeBoost_m2804 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::set_activeBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_set_activeBoost_m2805 (BoostConfig_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::Awake()
extern "C" void BoostConfig_Awake_m2806 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::Start()
extern "C" void BoostConfig_Start_m2807 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::OnDestroy()
extern "C" void BoostConfig_OnDestroy_m2808 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::RegisterForEvents()
extern "C" void BoostConfig_RegisterForEvents_m2809 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::UnregisterForEvents()
extern "C" void BoostConfig_UnregisterForEvents_m2810 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::OnGamePhaseChanged()
extern "C" void BoostConfig_OnGamePhaseChanged_m2811 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::LoadBoostDescs()
extern "C" void BoostConfig_LoadBoostDescs_m2812 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite BoostConfig::GetButtonImageForType(BoostConfig/BoostType)
extern "C" Sprite_t512 * BoostConfig_GetButtonImageForType_m2813 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite BoostConfig::GetIntroImageForType(BoostConfig/BoostType)
extern "C" Sprite_t512 * BoostConfig_GetIntroImageForType_m2814 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BoostConfig::GetTitleForType(BoostConfig/BoostType)
extern "C" String_t* BoostConfig_GetTitleForType_m2815 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BoostConfig::GetCurrentPriceForBoost(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetCurrentPriceForBoost_m2816 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BoostConfig::GetBoostTime(BoostConfig/BoostType)
extern "C" float BoostConfig_GetBoostTime_m2817 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::CancelBoosts()
extern "C" void BoostConfig_CancelBoosts_m2818 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::ExecuteBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_ExecuteBoost_m2819 (BoostConfig_t496 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BoostConfig::WaitThenCleanup(System.Single)
extern "C" Object_t * BoostConfig_WaitThenCleanup_m2820 (BoostConfig_t496 * __this, float ___pauseTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::CleanupActiveBoost()
extern "C" void BoostConfig_CleanupActiveBoost_m2821 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BoostConfig::GetActiveBoostFractionUsed()
extern "C" float BoostConfig_GetActiveBoostFractionUsed_m2822 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BoostConfig::IsBoostActive()
extern "C" bool BoostConfig_IsBoostActive_m2823 (BoostConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

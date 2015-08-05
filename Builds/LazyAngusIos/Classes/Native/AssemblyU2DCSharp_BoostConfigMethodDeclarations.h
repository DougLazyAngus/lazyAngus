#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostConfig
struct BoostConfig_t456;
// BoostConfig/BoostActiveEventHandler
struct BoostActiveEventHandler_t469;
// UnityEngine.Sprite
struct Sprite_t472;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostConfig::.ctor()
extern "C" void BoostConfig__ctor_m2585 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::add_BoostActive(BoostConfig/BoostActiveEventHandler)
extern "C" void BoostConfig_add_BoostActive_m2586 (BoostConfig_t456 * __this, BoostActiveEventHandler_t469 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::remove_BoostActive(BoostConfig/BoostActiveEventHandler)
extern "C" void BoostConfig_remove_BoostActive_m2587 (BoostConfig_t456 * __this, BoostActiveEventHandler_t469 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig BoostConfig::get_instance()
extern "C" BoostConfig_t456 * BoostConfig_get_instance_m2588 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::set_instance(BoostConfig)
extern "C" void BoostConfig_set_instance_m2589 (Object_t * __this /* static, unused */, BoostConfig_t456 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig/BoostType BoostConfig::get_activeBoost()
extern "C" int32_t BoostConfig_get_activeBoost_m2590 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::set_activeBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_set_activeBoost_m2591 (BoostConfig_t456 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::Awake()
extern "C" void BoostConfig_Awake_m2592 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::Start()
extern "C" void BoostConfig_Start_m2593 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::OnDestroy()
extern "C" void BoostConfig_OnDestroy_m2594 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::RegisterForEvents()
extern "C" void BoostConfig_RegisterForEvents_m2595 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::UnregisterForEvents()
extern "C" void BoostConfig_UnregisterForEvents_m2596 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::OnGamePhaseChanged()
extern "C" void BoostConfig_OnGamePhaseChanged_m2597 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::LoadBoostDescs()
extern "C" void BoostConfig_LoadBoostDescs_m2598 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite BoostConfig::GetButtonImageForType(BoostConfig/BoostType)
extern "C" Sprite_t472 * BoostConfig_GetButtonImageForType_m2599 (BoostConfig_t456 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite BoostConfig::GetIntroImageForType(BoostConfig/BoostType)
extern "C" Sprite_t472 * BoostConfig_GetIntroImageForType_m2600 (BoostConfig_t456 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BoostConfig::GetTitleForType(BoostConfig/BoostType)
extern "C" String_t* BoostConfig_GetTitleForType_m2601 (BoostConfig_t456 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BoostConfig::GetCurrentPriceForBoost(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetCurrentPriceForBoost_m2602 (BoostConfig_t456 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BoostConfig::GetBoostTime(BoostConfig/BoostType)
extern "C" float BoostConfig_GetBoostTime_m2603 (BoostConfig_t456 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::CancelBoosts()
extern "C" void BoostConfig_CancelBoosts_m2604 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::ExecuteBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_ExecuteBoost_m2605 (BoostConfig_t456 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BoostConfig::WaitThenCleanup(System.Single)
extern "C" Object_t * BoostConfig_WaitThenCleanup_m2606 (BoostConfig_t456 * __this, float ___pauseTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::CleanupActiveBoost()
extern "C" void BoostConfig_CleanupActiveBoost_m2607 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BoostConfig::GetActiveBoostFractionUsed()
extern "C" float BoostConfig_GetActiveBoostFractionUsed_m2608 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BoostConfig::IsBoostActive()
extern "C" bool BoostConfig_IsBoostActive_m2609 (BoostConfig_t456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

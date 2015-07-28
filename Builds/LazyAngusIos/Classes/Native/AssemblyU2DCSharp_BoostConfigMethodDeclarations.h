#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostConfig
struct BoostConfig_t457;
// BoostConfig/BoostActiveEventHandler
struct BoostActiveEventHandler_t470;
// UnityEngine.Sprite
struct Sprite_t473;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostConfig::.ctor()
extern "C" void BoostConfig__ctor_m2592 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::add_BoostActive(BoostConfig/BoostActiveEventHandler)
extern "C" void BoostConfig_add_BoostActive_m2593 (BoostConfig_t457 * __this, BoostActiveEventHandler_t470 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::remove_BoostActive(BoostConfig/BoostActiveEventHandler)
extern "C" void BoostConfig_remove_BoostActive_m2594 (BoostConfig_t457 * __this, BoostActiveEventHandler_t470 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig BoostConfig::get_instance()
extern "C" BoostConfig_t457 * BoostConfig_get_instance_m2595 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::set_instance(BoostConfig)
extern "C" void BoostConfig_set_instance_m2596 (Object_t * __this /* static, unused */, BoostConfig_t457 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig/BoostType BoostConfig::get_activeBoost()
extern "C" int32_t BoostConfig_get_activeBoost_m2597 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::set_activeBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_set_activeBoost_m2598 (BoostConfig_t457 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::Awake()
extern "C" void BoostConfig_Awake_m2599 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::Start()
extern "C" void BoostConfig_Start_m2600 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::OnDestroy()
extern "C" void BoostConfig_OnDestroy_m2601 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::RegisterForEvents()
extern "C" void BoostConfig_RegisterForEvents_m2602 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::UnregisterForEvents()
extern "C" void BoostConfig_UnregisterForEvents_m2603 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::OnGamePhaseChanged()
extern "C" void BoostConfig_OnGamePhaseChanged_m2604 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::LoadBoostDescs()
extern "C" void BoostConfig_LoadBoostDescs_m2605 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite BoostConfig::GetButtonImageForType(BoostConfig/BoostType)
extern "C" Sprite_t473 * BoostConfig_GetButtonImageForType_m2606 (BoostConfig_t457 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite BoostConfig::GetIntroImageForType(BoostConfig/BoostType)
extern "C" Sprite_t473 * BoostConfig_GetIntroImageForType_m2607 (BoostConfig_t457 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BoostConfig::GetTitleForType(BoostConfig/BoostType)
extern "C" String_t* BoostConfig_GetTitleForType_m2608 (BoostConfig_t457 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BoostConfig::GetCurrentPriceForBoost(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetCurrentPriceForBoost_m2609 (BoostConfig_t457 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BoostConfig::GetBoostTime(BoostConfig/BoostType)
extern "C" float BoostConfig_GetBoostTime_m2610 (BoostConfig_t457 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::CancelBoosts()
extern "C" void BoostConfig_CancelBoosts_m2611 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::ExecuteBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_ExecuteBoost_m2612 (BoostConfig_t457 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BoostConfig::WaitThenCleanup(System.Single)
extern "C" Object_t * BoostConfig_WaitThenCleanup_m2613 (BoostConfig_t457 * __this, float ___pauseTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::CleanupActiveBoost()
extern "C" void BoostConfig_CleanupActiveBoost_m2614 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BoostConfig::GetActiveBoostFractionUsed()
extern "C" float BoostConfig_GetActiveBoostFractionUsed_m2615 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BoostConfig::IsBoostActive()
extern "C" bool BoostConfig_IsBoostActive_m2616 (BoostConfig_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

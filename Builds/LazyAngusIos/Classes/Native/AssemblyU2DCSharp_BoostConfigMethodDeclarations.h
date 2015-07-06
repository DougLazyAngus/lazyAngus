#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BoostConfig
struct BoostConfig_t372;
// BoostConfig/BoostActiveEventHandler
struct BoostActiveEventHandler_t387;
// UnityEngine.Sprite
struct Sprite_t394;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void BoostConfig::.ctor()
extern "C" void BoostConfig__ctor_m1835 (BoostConfig_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::add_BoostActive(BoostConfig/BoostActiveEventHandler)
extern "C" void BoostConfig_add_BoostActive_m1836 (BoostConfig_t372 * __this, BoostActiveEventHandler_t387 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::remove_BoostActive(BoostConfig/BoostActiveEventHandler)
extern "C" void BoostConfig_remove_BoostActive_m1837 (BoostConfig_t372 * __this, BoostActiveEventHandler_t387 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig BoostConfig::get_instance()
extern "C" BoostConfig_t372 * BoostConfig_get_instance_m1838 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::set_instance(BoostConfig)
extern "C" void BoostConfig_set_instance_m1839 (Object_t * __this /* static, unused */, BoostConfig_t372 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BoostConfig/BoostType BoostConfig::get_activeBoost()
extern "C" int32_t BoostConfig_get_activeBoost_m1840 (BoostConfig_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::set_activeBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_set_activeBoost_m1841 (BoostConfig_t372 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::Awake()
extern "C" void BoostConfig_Awake_m1842 (BoostConfig_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::LoadBoostDescs()
extern "C" void BoostConfig_LoadBoostDescs_m1843 (BoostConfig_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::Start()
extern "C" void BoostConfig_Start_m1844 (BoostConfig_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite BoostConfig::GetButtonImageForType(BoostConfig/BoostType)
extern "C" Sprite_t394 * BoostConfig_GetButtonImageForType_m1845 (BoostConfig_t372 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite BoostConfig::GetIntroImageForType(BoostConfig/BoostType)
extern "C" Sprite_t394 * BoostConfig_GetIntroImageForType_m1846 (BoostConfig_t372 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BoostConfig::GetTitleForType(BoostConfig/BoostType)
extern "C" String_t* BoostConfig_GetTitleForType_m1847 (BoostConfig_t372 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BoostConfig::GetCurrentPriceForBoost(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetCurrentPriceForBoost_m1848 (BoostConfig_t372 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BoostConfig::GetLevelLock(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetLevelLock_m1849 (BoostConfig_t372 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BoostConfig::GetBoostTime(BoostConfig/BoostType)
extern "C" float BoostConfig_GetBoostTime_m1850 (BoostConfig_t372 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::CancelBoosts()
extern "C" void BoostConfig_CancelBoosts_m1851 (BoostConfig_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::ExecuteBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_ExecuteBoost_m1852 (BoostConfig_t372 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BoostConfig::WaitThenCleanup(System.Single)
extern "C" Object_t * BoostConfig_WaitThenCleanup_m1853 (BoostConfig_t372 * __this, float ___pauseTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoostConfig::CleanupActiveBoost()
extern "C" void BoostConfig_CleanupActiveBoost_m1854 (BoostConfig_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BoostConfig::GetActiveBoostFractionUsed()
extern "C" float BoostConfig_GetActiveBoostFractionUsed_m1855 (BoostConfig_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BoostConfig::IsBoostActive()
extern "C" bool BoostConfig_IsBoostActive_m1856 (BoostConfig_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

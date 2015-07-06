#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerStats
struct PlayerStats_t391;
// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t473;
// PlayerStats/TreatsChangedEventHandler
struct TreatsChangedEventHandler_t474;
// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t475;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m2237 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern "C" void PlayerStats_add_ScoreChanged_m2238 (PlayerStats_t391 * __this, ScoreChangedEventHandler_t473 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern "C" void PlayerStats_remove_ScoreChanged_m2239 (PlayerStats_t391 * __this, ScoreChangedEventHandler_t473 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_TreatsChanged(PlayerStats/TreatsChangedEventHandler)
extern "C" void PlayerStats_add_TreatsChanged_m2240 (PlayerStats_t391 * __this, TreatsChangedEventHandler_t474 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_TreatsChanged(PlayerStats/TreatsChangedEventHandler)
extern "C" void PlayerStats_remove_TreatsChanged_m2241 (PlayerStats_t391 * __this, TreatsChangedEventHandler_t474 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern "C" void PlayerStats_add_BoostsChanged_m2242 (PlayerStats_t391 * __this, BoostsChangedEventHandler_t475 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern "C" void PlayerStats_remove_BoostsChanged_m2243 (PlayerStats_t391 * __this, BoostsChangedEventHandler_t475 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerStats PlayerStats::get_instance()
extern "C" PlayerStats_t391 * PlayerStats_get_instance_m2244 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_instance(PlayerStats)
extern "C" void PlayerStats_set_instance_m2245 (Object_t * __this /* static, unused */, PlayerStats_t391 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m2246 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m2247 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m2248 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::RegisterForEvents()
extern "C" void PlayerStats_RegisterForEvents_m2249 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::UnregisterForEvents()
extern "C" void PlayerStats_UnregisterForEvents_m2250 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m2251 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m2252 (PlayerStats_t391 * __this, int32_t ___increment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Reset()
extern "C" void PlayerStats_Reset_m2253 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m2254 (PlayerStats_t391 * __this, int32_t ___price, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::EarnTreats(System.Int32)
extern "C" void PlayerStats_EarnTreats_m2255 (PlayerStats_t391 * __this, int32_t ___earnedTreats, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::SpendTreats(System.Int32)
extern "C" void PlayerStats_SpendTreats_m2256 (PlayerStats_t391 * __this, int32_t ___spentTreats, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetScore()
extern "C" int32_t PlayerStats_GetScore_m2257 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetTreats()
extern "C" int32_t PlayerStats_GetTreats_m2258 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m2259 (PlayerStats_t391 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetAvailableBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m2260 (PlayerStats_t391 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::AddBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_AddBoost_m2261 (PlayerStats_t391 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m2262 (PlayerStats_t391 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetHighScore()
extern "C" int32_t PlayerStats_GetHighScore_m2263 (PlayerStats_t391 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::SetHighScore(System.Int32)
extern "C" void PlayerStats_SetHighScore_m2264 (PlayerStats_t391 * __this, int32_t ___highScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;

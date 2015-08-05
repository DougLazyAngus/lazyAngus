#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerStats
struct PlayerStats_t475;
// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t585;
// PlayerStats/MoneyChangedEventHandler
struct MoneyChangedEventHandler_t586;
// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t587;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m3155 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern "C" void PlayerStats_add_ScoreChanged_m3156 (PlayerStats_t475 * __this, ScoreChangedEventHandler_t585 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern "C" void PlayerStats_remove_ScoreChanged_m3157 (PlayerStats_t475 * __this, ScoreChangedEventHandler_t585 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern "C" void PlayerStats_add_MoneyChanged_m3158 (PlayerStats_t475 * __this, MoneyChangedEventHandler_t586 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern "C" void PlayerStats_remove_MoneyChanged_m3159 (PlayerStats_t475 * __this, MoneyChangedEventHandler_t586 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern "C" void PlayerStats_add_BoostsChanged_m3160 (PlayerStats_t475 * __this, BoostsChangedEventHandler_t587 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern "C" void PlayerStats_remove_BoostsChanged_m3161 (PlayerStats_t475 * __this, BoostsChangedEventHandler_t587 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::get_gameScore()
extern "C" int32_t PlayerStats_get_gameScore_m3162 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_gameScore(System.Int32)
extern "C" void PlayerStats_set_gameScore_m3163 (PlayerStats_t475 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::get_money()
extern "C" int32_t PlayerStats_get_money_m3164 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_money(System.Int32)
extern "C" void PlayerStats_set_money_m3165 (PlayerStats_t475 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerStats PlayerStats::get_instance()
extern "C" PlayerStats_t475 * PlayerStats_get_instance_m3166 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_instance(PlayerStats)
extern "C" void PlayerStats_set_instance_m3167 (Object_t * __this /* static, unused */, PlayerStats_t475 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m3168 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m3169 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m3170 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::RegisterForEvents()
extern "C" void PlayerStats_RegisterForEvents_m3171 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::UnregisterForEvents()
extern "C" void PlayerStats_UnregisterForEvents_m3172 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m3173 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m3174 (PlayerStats_t475 * __this, int32_t ___increment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Reset()
extern "C" void PlayerStats_Reset_m3175 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m3176 (PlayerStats_t475 * __this, int32_t ___price, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::EarnMoney(System.Int32)
extern "C" void PlayerStats_EarnMoney_m3177 (PlayerStats_t475 * __this, int32_t ___earnedMoney, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::SpendMoney(System.Int32)
extern "C" void PlayerStats_SpendMoney_m3178 (PlayerStats_t475 * __this, int32_t ___spentMoney, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m3179 (PlayerStats_t475 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetAvailableBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m3180 (PlayerStats_t475 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::AddBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_AddBoost_m3181 (PlayerStats_t475 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m3182 (PlayerStats_t475 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetHighScore()
extern "C" int32_t PlayerStats_GetHighScore_m3183 (PlayerStats_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::SetHighScore(System.Int32)
extern "C" void PlayerStats_SetHighScore_m3184 (PlayerStats_t475 * __this, int32_t ___highScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;

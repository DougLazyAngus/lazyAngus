#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerStats
struct PlayerStats_t513;
// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t626;
// PlayerStats/MoneyChangedEventHandler
struct MoneyChangedEventHandler_t627;
// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t628;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m3365 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern "C" void PlayerStats_add_ScoreChanged_m3366 (PlayerStats_t513 * __this, ScoreChangedEventHandler_t626 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern "C" void PlayerStats_remove_ScoreChanged_m3367 (PlayerStats_t513 * __this, ScoreChangedEventHandler_t626 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern "C" void PlayerStats_add_MoneyChanged_m3368 (PlayerStats_t513 * __this, MoneyChangedEventHandler_t627 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern "C" void PlayerStats_remove_MoneyChanged_m3369 (PlayerStats_t513 * __this, MoneyChangedEventHandler_t627 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern "C" void PlayerStats_add_BoostsChanged_m3370 (PlayerStats_t513 * __this, BoostsChangedEventHandler_t628 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern "C" void PlayerStats_remove_BoostsChanged_m3371 (PlayerStats_t513 * __this, BoostsChangedEventHandler_t628 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::get_gameScore()
extern "C" int32_t PlayerStats_get_gameScore_m3372 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_gameScore(System.Int32)
extern "C" void PlayerStats_set_gameScore_m3373 (PlayerStats_t513 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::get_money()
extern "C" int32_t PlayerStats_get_money_m3374 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_money(System.Int32)
extern "C" void PlayerStats_set_money_m3375 (PlayerStats_t513 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerStats PlayerStats::get_instance()
extern "C" PlayerStats_t513 * PlayerStats_get_instance_m3376 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_instance(PlayerStats)
extern "C" void PlayerStats_set_instance_m3377 (Object_t * __this /* static, unused */, PlayerStats_t513 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m3378 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m3379 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m3380 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::RegisterForEvents()
extern "C" void PlayerStats_RegisterForEvents_m3381 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::UnregisterForEvents()
extern "C" void PlayerStats_UnregisterForEvents_m3382 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m3383 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m3384 (PlayerStats_t513 * __this, int32_t ___increment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Reset()
extern "C" void PlayerStats_Reset_m3385 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m3386 (PlayerStats_t513 * __this, int32_t ___price, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::EarnMoney(System.Int32)
extern "C" void PlayerStats_EarnMoney_m3387 (PlayerStats_t513 * __this, int32_t ___earnedMoney, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::SpendMoney(System.Int32)
extern "C" void PlayerStats_SpendMoney_m3388 (PlayerStats_t513 * __this, int32_t ___spentMoney, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m3389 (PlayerStats_t513 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetAvailableBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m3390 (PlayerStats_t513 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::AddBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_AddBoost_m3391 (PlayerStats_t513 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m3392 (PlayerStats_t513 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetHighScore()
extern "C" int32_t PlayerStats_GetHighScore_m3393 (PlayerStats_t513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::SetHighScore(System.Int32)
extern "C" void PlayerStats_SetHighScore_m3394 (PlayerStats_t513 * __this, int32_t ___highScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;

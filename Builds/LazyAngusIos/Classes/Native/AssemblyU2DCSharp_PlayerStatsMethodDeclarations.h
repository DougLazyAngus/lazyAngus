#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerStats
struct PlayerStats_t516;
// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t634;
// PlayerStats/MoneyChangedEventHandler
struct MoneyChangedEventHandler_t635;
// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t636;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"

// System.Void PlayerStats::.ctor()
extern "C" void PlayerStats__ctor_m3406 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern "C" void PlayerStats_add_ScoreChanged_m3407 (PlayerStats_t516 * __this, ScoreChangedEventHandler_t634 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_ScoreChanged(PlayerStats/ScoreChangedEventHandler)
extern "C" void PlayerStats_remove_ScoreChanged_m3408 (PlayerStats_t516 * __this, ScoreChangedEventHandler_t634 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern "C" void PlayerStats_add_MoneyChanged_m3409 (PlayerStats_t516 * __this, MoneyChangedEventHandler_t635 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_MoneyChanged(PlayerStats/MoneyChangedEventHandler)
extern "C" void PlayerStats_remove_MoneyChanged_m3410 (PlayerStats_t516 * __this, MoneyChangedEventHandler_t635 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::add_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern "C" void PlayerStats_add_BoostsChanged_m3411 (PlayerStats_t516 * __this, BoostsChangedEventHandler_t636 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::remove_BoostsChanged(PlayerStats/BoostsChangedEventHandler)
extern "C" void PlayerStats_remove_BoostsChanged_m3412 (PlayerStats_t516 * __this, BoostsChangedEventHandler_t636 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::get_gameScore()
extern "C" int32_t PlayerStats_get_gameScore_m3413 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_gameScore(System.Int32)
extern "C" void PlayerStats_set_gameScore_m3414 (PlayerStats_t516 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::get_money()
extern "C" int32_t PlayerStats_get_money_m3415 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_money(System.Int32)
extern "C" void PlayerStats_set_money_m3416 (PlayerStats_t516 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerStats PlayerStats::get_instance()
extern "C" PlayerStats_t516 * PlayerStats_get_instance_m3417 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::set_instance(PlayerStats)
extern "C" void PlayerStats_set_instance_m3418 (Object_t * __this /* static, unused */, PlayerStats_t516 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Awake()
extern "C" void PlayerStats_Awake_m3419 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Start()
extern "C" void PlayerStats_Start_m3420 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::OnDestroy()
extern "C" void PlayerStats_OnDestroy_m3421 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::RegisterForEvents()
extern "C" void PlayerStats_RegisterForEvents_m3422 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::UnregisterForEvents()
extern "C" void PlayerStats_UnregisterForEvents_m3423 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::OnInstanceChanged()
extern "C" void PlayerStats_OnInstanceChanged_m3424 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::IncrementScore(System.Int32)
extern "C" void PlayerStats_IncrementScore_m3425 (PlayerStats_t516 * __this, int32_t ___increment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::Reset()
extern "C" void PlayerStats_Reset_m3426 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerStats::CanAfford(System.Int32)
extern "C" bool PlayerStats_CanAfford_m3427 (PlayerStats_t516 * __this, int32_t ___price, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::EarnMoney(System.Int32)
extern "C" void PlayerStats_EarnMoney_m3428 (PlayerStats_t516 * __this, int32_t ___earnedMoney, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::SpendMoney(System.Int32)
extern "C" void PlayerStats_SpendMoney_m3429 (PlayerStats_t516 * __this, int32_t ___spentMoney, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetPurchasedBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetPurchasedBoostCount_m3430 (PlayerStats_t516 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetAvailableBoostCount(BoostConfig/BoostType)
extern "C" int32_t PlayerStats_GetAvailableBoostCount_m3431 (PlayerStats_t516 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::AddBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_AddBoost_m3432 (PlayerStats_t516 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::RemoveBoost(BoostConfig/BoostType)
extern "C" void PlayerStats_RemoveBoost_m3433 (PlayerStats_t516 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerStats::GetHighScore()
extern "C" int32_t PlayerStats_GetHighScore_m3434 (PlayerStats_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats::SetHighScore(System.Int32)
extern "C" void PlayerStats_SetHighScore_m3435 (PlayerStats_t516 * __this, int32_t ___highScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;

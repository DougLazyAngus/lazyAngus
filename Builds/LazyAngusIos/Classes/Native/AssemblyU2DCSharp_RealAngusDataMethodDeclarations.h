#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusData
struct RealAngusData_t648;
// RealAngusData/RealAngusDataChangedEventHandler
struct RealAngusDataChangedEventHandler_t646;
// System.Collections.Generic.List`1<RealAngusItemDesc>
struct List_1_t647;

// System.Void RealAngusData::.ctor()
extern "C" void RealAngusData__ctor_m3482 (RealAngusData_t648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::add_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern "C" void RealAngusData_add_RealAngusDataChanged_m3483 (RealAngusData_t648 * __this, RealAngusDataChangedEventHandler_t646 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::remove_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern "C" void RealAngusData_remove_RealAngusDataChanged_m3484 (RealAngusData_t648 * __this, RealAngusDataChangedEventHandler_t646 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::Awake()
extern "C" void RealAngusData_Awake_m3485 (RealAngusData_t648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::Start()
extern "C" void RealAngusData_Start_m3486 (RealAngusData_t648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::Update()
extern "C" void RealAngusData_Update_m3487 (RealAngusData_t648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::GetRealAngusItemDescs()
extern "C" List_1_t647 * RealAngusData_GetRealAngusItemDescs_m3488 (RealAngusData_t648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RealAngusData::CountUnlockedItemDescs()
extern "C" int32_t RealAngusData_CountUnlockedItemDescs_m3489 (RealAngusData_t648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::MakeSemiRandomOrdering()
extern "C" void RealAngusData_MakeSemiRandomOrdering_m3490 (RealAngusData_t648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::MakeRealAngusItemDescs()
extern "C" void RealAngusData_MakeRealAngusItemDescs_m3491 (RealAngusData_t648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::UnlockNItems(System.Int32)
extern "C" void RealAngusData_UnlockNItems_m3492 (RealAngusData_t648 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;

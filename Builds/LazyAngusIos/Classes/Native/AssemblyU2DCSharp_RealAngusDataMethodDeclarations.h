#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusData
struct RealAngusData_t684;
// RealAngusData/RealAngusDataChangedEventHandler
struct RealAngusDataChangedEventHandler_t682;
// System.Collections.Generic.List`1<RealAngusItemDesc>
struct List_1_t683;

// System.Void RealAngusData::.ctor()
extern "C" void RealAngusData__ctor_m3726 (RealAngusData_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::add_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern "C" void RealAngusData_add_RealAngusDataChanged_m3727 (RealAngusData_t684 * __this, RealAngusDataChangedEventHandler_t682 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::remove_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern "C" void RealAngusData_remove_RealAngusDataChanged_m3728 (RealAngusData_t684 * __this, RealAngusDataChangedEventHandler_t682 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::Awake()
extern "C" void RealAngusData_Awake_m3729 (RealAngusData_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::Start()
extern "C" void RealAngusData_Start_m3730 (RealAngusData_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::Update()
extern "C" void RealAngusData_Update_m3731 (RealAngusData_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::GetRealAngusItemDescs()
extern "C" List_1_t683 * RealAngusData_GetRealAngusItemDescs_m3732 (RealAngusData_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RealAngusData::CountUnlockedItemDescs()
extern "C" int32_t RealAngusData_CountUnlockedItemDescs_m3733 (RealAngusData_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::MakeSemiRandomOrdering()
extern "C" void RealAngusData_MakeSemiRandomOrdering_m3734 (RealAngusData_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::MakeRealAngusItemDescs()
extern "C" void RealAngusData_MakeRealAngusItemDescs_m3735 (RealAngusData_t684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::UnlockNItems(System.Int32)
extern "C" void RealAngusData_UnlockNItems_m3736 (RealAngusData_t684 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusData
struct RealAngusData_t644;
// RealAngusData/RealAngusDataChangedEventHandler
struct RealAngusDataChangedEventHandler_t642;
// System.Collections.Generic.List`1<RealAngusItemDesc>
struct List_1_t643;

// System.Void RealAngusData::.ctor()
extern "C" void RealAngusData__ctor_m3472 (RealAngusData_t644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::add_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern "C" void RealAngusData_add_RealAngusDataChanged_m3473 (RealAngusData_t644 * __this, RealAngusDataChangedEventHandler_t642 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::remove_RealAngusDataChanged(RealAngusData/RealAngusDataChangedEventHandler)
extern "C" void RealAngusData_remove_RealAngusDataChanged_m3474 (RealAngusData_t644 * __this, RealAngusDataChangedEventHandler_t642 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::Awake()
extern "C" void RealAngusData_Awake_m3475 (RealAngusData_t644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::Start()
extern "C" void RealAngusData_Start_m3476 (RealAngusData_t644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::Update()
extern "C" void RealAngusData_Update_m3477 (RealAngusData_t644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::GetRealAngusItemDescs()
extern "C" List_1_t643 * RealAngusData_GetRealAngusItemDescs_m3478 (RealAngusData_t644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RealAngusData::CountUnlockedItemDescs()
extern "C" int32_t RealAngusData_CountUnlockedItemDescs_m3479 (RealAngusData_t644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::MakeSemiRandomOrdering()
extern "C" void RealAngusData_MakeSemiRandomOrdering_m3480 (RealAngusData_t644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::MakeRealAngusItemDescs()
extern "C" void RealAngusData_MakeRealAngusItemDescs_m3481 (RealAngusData_t644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData::UnlockNItems(System.Int32)
extern "C" void RealAngusData_UnlockNItems_m3482 (RealAngusData_t644 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;

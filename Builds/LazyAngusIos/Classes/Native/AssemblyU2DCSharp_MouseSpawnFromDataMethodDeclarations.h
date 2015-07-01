#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseSpawnFromData
struct MouseSpawnFromData_t422;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t431;
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDesc.h"

// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m2086 (MouseSpawnFromData_t422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m2087 (MouseSpawnFromData_t422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m2088 (MouseSpawnFromData_t422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m2089 (MouseSpawnFromData_t422 * __this, float ___timeNow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern "C" void MouseSpawnFromData_ProduceMouse_m2090 (MouseSpawnFromData_t422 * __this, ExplicitMouseDesc_t413  ___emd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m2091 (MouseSpawnFromData_t422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Clear()
extern "C" void MouseSpawnFromData_Clear_m2092 (MouseSpawnFromData_t422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern "C" void MouseSpawnFromData_AddMice_m2093 (MouseSpawnFromData_t422 * __this, List_1_t431 * ___explicitMice, const MethodInfo* method) IL2CPP_METHOD_ATTR;

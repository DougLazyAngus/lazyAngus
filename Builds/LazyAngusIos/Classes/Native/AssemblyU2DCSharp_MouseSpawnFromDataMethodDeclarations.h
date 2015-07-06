#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseSpawnFromData
struct MouseSpawnFromData_t427;
// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t459;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t437;
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDesc.h"

// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m2108 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::add_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern "C" void MouseSpawnFromData_add_MouseSpawn_m2109 (MouseSpawnFromData_t427 * __this, MouseSpawnEventHandler_t459 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::remove_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern "C" void MouseSpawnFromData_remove_MouseSpawn_m2110 (MouseSpawnFromData_t427 * __this, MouseSpawnEventHandler_t459 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseSpawnFromData::get_miceSpawned()
extern "C" int32_t MouseSpawnFromData_get_miceSpawned_m2111 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::set_miceSpawned(System.Int32)
extern "C" void MouseSpawnFromData_set_miceSpawned_m2112 (MouseSpawnFromData_t427 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Awake()
extern "C" void MouseSpawnFromData_Awake_m2113 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m2114 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::OnDestroy()
extern "C" void MouseSpawnFromData_OnDestroy_m2115 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::RegisterForEvents()
extern "C" void MouseSpawnFromData_RegisterForEvents_m2116 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::UnregisterForEvents()
extern "C" void MouseSpawnFromData_UnregisterForEvents_m2117 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::OnPhaseChanged()
extern "C" void MouseSpawnFromData_OnPhaseChanged_m2118 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m2119 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m2120 (MouseSpawnFromData_t427 * __this, float ___timeNow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern "C" void MouseSpawnFromData_ProduceMouse_m2121 (MouseSpawnFromData_t427 * __this, ExplicitMouseDesc_t415  ___emd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m2122 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Clear()
extern "C" void MouseSpawnFromData_Clear_m2123 (MouseSpawnFromData_t427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern "C" void MouseSpawnFromData_AddMice_m2124 (MouseSpawnFromData_t427 * __this, List_1_t437 * ___explicitMice, const MethodInfo* method) IL2CPP_METHOD_ATTR;

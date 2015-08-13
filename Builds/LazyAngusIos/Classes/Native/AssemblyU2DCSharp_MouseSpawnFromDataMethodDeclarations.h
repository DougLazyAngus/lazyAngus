#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseSpawnFromData
struct MouseSpawnFromData_t553;
// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t606;
// ExplicitMouseDesc
struct ExplicitMouseDesc_t537;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t579;

// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m3221 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::add_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern "C" void MouseSpawnFromData_add_MouseSpawn_m3222 (MouseSpawnFromData_t553 * __this, MouseSpawnEventHandler_t606 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::remove_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern "C" void MouseSpawnFromData_remove_MouseSpawn_m3223 (MouseSpawnFromData_t553 * __this, MouseSpawnEventHandler_t606 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseSpawnFromData::get_miceSpawned()
extern "C" int32_t MouseSpawnFromData_get_miceSpawned_m3224 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::set_miceSpawned(System.Int32)
extern "C" void MouseSpawnFromData_set_miceSpawned_m3225 (MouseSpawnFromData_t553 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Awake()
extern "C" void MouseSpawnFromData_Awake_m3226 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m3227 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::OnDestroy()
extern "C" void MouseSpawnFromData_OnDestroy_m3228 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::RegisterForEvents()
extern "C" void MouseSpawnFromData_RegisterForEvents_m3229 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::UnregisterForEvents()
extern "C" void MouseSpawnFromData_UnregisterForEvents_m3230 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::OnPhaseChanged()
extern "C" void MouseSpawnFromData_OnPhaseChanged_m3231 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m3232 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m3233 (MouseSpawnFromData_t553 * __this, float ___timeNow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern "C" void MouseSpawnFromData_ProduceMouse_m3234 (MouseSpawnFromData_t553 * __this, ExplicitMouseDesc_t537 * ___emd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m3235 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Clear()
extern "C" void MouseSpawnFromData_Clear_m3236 (MouseSpawnFromData_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern "C" void MouseSpawnFromData_AddMice_m3237 (MouseSpawnFromData_t553 * __this, List_1_t579 * ___explicitMice, const MethodInfo* method) IL2CPP_METHOD_ATTR;

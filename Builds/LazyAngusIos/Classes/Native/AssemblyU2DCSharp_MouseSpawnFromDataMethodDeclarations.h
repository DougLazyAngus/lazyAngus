#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseSpawnFromData
struct MouseSpawnFromData_t556;
// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t608;
// ExplicitMouseDesc
struct ExplicitMouseDesc_t539;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t581;

// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m3249 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::add_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern "C" void MouseSpawnFromData_add_MouseSpawn_m3250 (MouseSpawnFromData_t556 * __this, MouseSpawnEventHandler_t608 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::remove_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern "C" void MouseSpawnFromData_remove_MouseSpawn_m3251 (MouseSpawnFromData_t556 * __this, MouseSpawnEventHandler_t608 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseSpawnFromData::get_miceSpawned()
extern "C" int32_t MouseSpawnFromData_get_miceSpawned_m3252 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::set_miceSpawned(System.Int32)
extern "C" void MouseSpawnFromData_set_miceSpawned_m3253 (MouseSpawnFromData_t556 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Awake()
extern "C" void MouseSpawnFromData_Awake_m3254 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m3255 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::OnDestroy()
extern "C" void MouseSpawnFromData_OnDestroy_m3256 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::RegisterForEvents()
extern "C" void MouseSpawnFromData_RegisterForEvents_m3257 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::UnregisterForEvents()
extern "C" void MouseSpawnFromData_UnregisterForEvents_m3258 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::OnPhaseChanged()
extern "C" void MouseSpawnFromData_OnPhaseChanged_m3259 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m3260 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m3261 (MouseSpawnFromData_t556 * __this, float ___timeNow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern "C" void MouseSpawnFromData_ProduceMouse_m3262 (MouseSpawnFromData_t556 * __this, ExplicitMouseDesc_t539 * ___emd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m3263 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Clear()
extern "C" void MouseSpawnFromData_Clear_m3264 (MouseSpawnFromData_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern "C" void MouseSpawnFromData_AddMice_m3265 (MouseSpawnFromData_t556 * __this, List_1_t581 * ___explicitMice, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseSpawnFromData
struct MouseSpawnFromData_t503;
// MouseSpawnFromData/MouseSpawnEventHandler
struct MouseSpawnEventHandler_t557;
// ExplicitMouseDesc
struct ExplicitMouseDesc_t494;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t527;

// System.Void MouseSpawnFromData::.ctor()
extern "C" void MouseSpawnFromData__ctor_m2964 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::add_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern "C" void MouseSpawnFromData_add_MouseSpawn_m2965 (MouseSpawnFromData_t503 * __this, MouseSpawnEventHandler_t557 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::remove_MouseSpawn(MouseSpawnFromData/MouseSpawnEventHandler)
extern "C" void MouseSpawnFromData_remove_MouseSpawn_m2966 (MouseSpawnFromData_t503 * __this, MouseSpawnEventHandler_t557 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseSpawnFromData::get_miceSpawned()
extern "C" int32_t MouseSpawnFromData_get_miceSpawned_m2967 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::set_miceSpawned(System.Int32)
extern "C" void MouseSpawnFromData_set_miceSpawned_m2968 (MouseSpawnFromData_t503 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Awake()
extern "C" void MouseSpawnFromData_Awake_m2969 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Start()
extern "C" void MouseSpawnFromData_Start_m2970 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::OnDestroy()
extern "C" void MouseSpawnFromData_OnDestroy_m2971 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::RegisterForEvents()
extern "C" void MouseSpawnFromData_RegisterForEvents_m2972 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::UnregisterForEvents()
extern "C" void MouseSpawnFromData_UnregisterForEvents_m2973 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::OnPhaseChanged()
extern "C" void MouseSpawnFromData_OnPhaseChanged_m2974 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Update()
extern "C" void MouseSpawnFromData_Update_m2975 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::MaybeProduceNextMouse(System.Single)
extern "C" void MouseSpawnFromData_MaybeProduceNextMouse_m2976 (MouseSpawnFromData_t503 * __this, float ___timeNow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::ProduceMouse(ExplicitMouseDesc)
extern "C" void MouseSpawnFromData_ProduceMouse_m2977 (MouseSpawnFromData_t503 * __this, ExplicitMouseDesc_t494 * ___emd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseSpawnFromData::FinishedWithCurrentSet()
extern "C" bool MouseSpawnFromData_FinishedWithCurrentSet_m2978 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::Clear()
extern "C" void MouseSpawnFromData_Clear_m2979 (MouseSpawnFromData_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSpawnFromData::AddMice(System.Collections.Generic.List`1<ExplicitMouseDesc>)
extern "C" void MouseSpawnFromData_AddMice_m2980 (MouseSpawnFromData_t503 * __this, List_1_t527 * ___explicitMice, const MethodInfo* method) IL2CPP_METHOD_ATTR;

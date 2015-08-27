#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t846;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t845;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t848;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void BaseEventData__ctor_m4725 (BaseEventData_t846 * __this, EventSystem_t848 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
extern "C" void BaseEventData_Reset_m4726 (BaseEventData_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
extern "C" void BaseEventData_Use_m4727 (BaseEventData_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
extern "C" bool BaseEventData_get_used_m4728 (BaseEventData_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C" BaseInputModule_t845 * BaseEventData_get_currentInputModule_m4729 (BaseEventData_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C" GameObject_t352 * BaseEventData_get_selectedObject_m4730 (BaseEventData_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" void BaseEventData_set_selectedObject_m4731 (BaseEventData_t846 * __this, GameObject_t352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t910;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t899;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t900;

// System.Void UnityEngine.EventSystems.Physics2DRaycaster::.ctor()
extern "C" void Physics2DRaycaster__ctor_m5002 (Physics2DRaycaster_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Physics2DRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void Physics2DRaycaster_Raycast_m5003 (Physics2DRaycaster_t910 * __this, PointerEventData_t899 * ___eventData, List_1_t900 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;

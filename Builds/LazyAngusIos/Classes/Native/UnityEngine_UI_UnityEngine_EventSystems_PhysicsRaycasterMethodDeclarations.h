#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t838;
// UnityEngine.Camera
struct Camera_t532;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t826;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t827;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
extern "C" void PhysicsRaycaster__ctor_m4598 (PhysicsRaycaster_t838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
extern "C" Camera_t532 * PhysicsRaycaster_get_eventCamera_m4599 (PhysicsRaycaster_t838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
extern "C" int32_t PhysicsRaycaster_get_depth_m4600 (PhysicsRaycaster_t838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
extern "C" int32_t PhysicsRaycaster_get_finalEventMask_m4601 (PhysicsRaycaster_t838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
extern "C" LayerMask_t840  PhysicsRaycaster_get_eventMask_m4602 (PhysicsRaycaster_t838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
extern "C" void PhysicsRaycaster_set_eventMask_m4603 (PhysicsRaycaster_t838 * __this, LayerMask_t840  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void PhysicsRaycaster_Raycast_m4604 (PhysicsRaycaster_t838 * __this, PointerEventData_t826 * ___eventData, List_1_t827 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C" int32_t PhysicsRaycaster_U3CRaycastU3Em__1_m4605 (Object_t * __this /* static, unused */, RaycastHit_t716  ___r1, RaycastHit_t716  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

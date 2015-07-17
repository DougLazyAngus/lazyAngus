#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t773;
// UnityEngine.GameObject
struct GameObject_t310;
// UnityEngine.Camera
struct Camera_t477;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t735;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void PointerEventData__ctor_m4078 (PointerEventData_t773 * __this, EventSystem_t735 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
extern "C" GameObject_t310 * PointerEventData_get_pointerEnter_m4079 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerEnter_m4080 (PointerEventData_t773 * __this, GameObject_t310 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
extern "C" GameObject_t310 * PointerEventData_get_lastPress_m4081 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_lastPress_m4082 (PointerEventData_t773 * __this, GameObject_t310 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
extern "C" GameObject_t310 * PointerEventData_get_rawPointerPress_m4083 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_rawPointerPress_m4084 (PointerEventData_t773 * __this, GameObject_t310 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
extern "C" GameObject_t310 * PointerEventData_get_pointerDrag_m4085 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerDrag_m4086 (PointerEventData_t773 * __this, GameObject_t310 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C" RaycastResult_t768  PointerEventData_get_pointerCurrentRaycast_m4087 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerCurrentRaycast_m4088 (PointerEventData_t773 * __this, RaycastResult_t768  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
extern "C" RaycastResult_t768  PointerEventData_get_pointerPressRaycast_m4089 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerPressRaycast_m4090 (PointerEventData_t773 * __this, RaycastResult_t768  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
extern "C" bool PointerEventData_get_eligibleForClick_m4091 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
extern "C" void PointerEventData_set_eligibleForClick_m4092 (PointerEventData_t773 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C" int32_t PointerEventData_get_pointerId_m4093 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
extern "C" void PointerEventData_set_pointerId_m4094 (PointerEventData_t773 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" Vector2_t68  PointerEventData_get_position_m4095 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
extern "C" void PointerEventData_set_position_m4096 (PointerEventData_t773 * __this, Vector2_t68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C" Vector2_t68  PointerEventData_get_delta_m4097 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_delta_m4098 (PointerEventData_t773 * __this, Vector2_t68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
extern "C" Vector2_t68  PointerEventData_get_pressPosition_m4099 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
extern "C" void PointerEventData_set_pressPosition_m4100 (PointerEventData_t773 * __this, Vector2_t68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
extern "C" Vector3_t449  PointerEventData_get_worldPosition_m4101 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldPosition_m4102 (PointerEventData_t773 * __this, Vector3_t449  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
extern "C" Vector3_t449  PointerEventData_get_worldNormal_m4103 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldNormal_m4104 (PointerEventData_t773 * __this, Vector3_t449  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
extern "C" float PointerEventData_get_clickTime_m4105 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
extern "C" void PointerEventData_set_clickTime_m4106 (PointerEventData_t773 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
extern "C" int32_t PointerEventData_get_clickCount_m4107 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
extern "C" void PointerEventData_set_clickCount_m4108 (PointerEventData_t773 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
extern "C" Vector2_t68  PointerEventData_get_scrollDelta_m4109 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_scrollDelta_m4110 (PointerEventData_t773 * __this, Vector2_t68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
extern "C" bool PointerEventData_get_useDragThreshold_m4111 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
extern "C" void PointerEventData_set_useDragThreshold_m4112 (PointerEventData_t773 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
extern "C" bool PointerEventData_get_dragging_m4113 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
extern "C" void PointerEventData_set_dragging_m4114 (PointerEventData_t773 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C" int32_t PointerEventData_get_button_m4115 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C" void PointerEventData_set_button_m4116 (PointerEventData_t773 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
extern "C" bool PointerEventData_IsPointerMoving_m4117 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
extern "C" bool PointerEventData_IsScrolling_m4118 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
extern "C" Camera_t477 * PointerEventData_get_enterEventCamera_m4119 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C" Camera_t477 * PointerEventData_get_pressEventCamera_m4120 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
extern "C" GameObject_t310 * PointerEventData_get_pointerPress_m4121 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerPress_m4122 (PointerEventData_t773 * __this, GameObject_t310 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
extern "C" String_t* PointerEventData_ToString_m4123 (PointerEventData_t773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

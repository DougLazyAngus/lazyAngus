#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t910;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Camera
struct Camera_t532;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t872;
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
extern "C" void PointerEventData__ctor_m4939 (PointerEventData_t910 * __this, EventSystem_t872 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
extern "C" GameObject_t352 * PointerEventData_get_pointerEnter_m4940 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerEnter_m4941 (PointerEventData_t910 * __this, GameObject_t352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
extern "C" GameObject_t352 * PointerEventData_get_lastPress_m4942 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_lastPress_m4943 (PointerEventData_t910 * __this, GameObject_t352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
extern "C" GameObject_t352 * PointerEventData_get_rawPointerPress_m4944 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_rawPointerPress_m4945 (PointerEventData_t910 * __this, GameObject_t352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
extern "C" GameObject_t352 * PointerEventData_get_pointerDrag_m4946 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerDrag_m4947 (PointerEventData_t910 * __this, GameObject_t352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C" RaycastResult_t905  PointerEventData_get_pointerCurrentRaycast_m4948 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerCurrentRaycast_m4949 (PointerEventData_t910 * __this, RaycastResult_t905  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
extern "C" RaycastResult_t905  PointerEventData_get_pointerPressRaycast_m4950 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerPressRaycast_m4951 (PointerEventData_t910 * __this, RaycastResult_t905  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
extern "C" bool PointerEventData_get_eligibleForClick_m4952 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
extern "C" void PointerEventData_set_eligibleForClick_m4953 (PointerEventData_t910 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C" int32_t PointerEventData_get_pointerId_m4954 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
extern "C" void PointerEventData_set_pointerId_m4955 (PointerEventData_t910 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" Vector2_t110  PointerEventData_get_position_m4956 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
extern "C" void PointerEventData_set_position_m4957 (PointerEventData_t910 * __this, Vector2_t110  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C" Vector2_t110  PointerEventData_get_delta_m4958 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_delta_m4959 (PointerEventData_t910 * __this, Vector2_t110  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
extern "C" Vector2_t110  PointerEventData_get_pressPosition_m4960 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
extern "C" void PointerEventData_set_pressPosition_m4961 (PointerEventData_t910 * __this, Vector2_t110  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
extern "C" Vector3_t523  PointerEventData_get_worldPosition_m4962 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldPosition_m4963 (PointerEventData_t910 * __this, Vector3_t523  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
extern "C" Vector3_t523  PointerEventData_get_worldNormal_m4964 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldNormal_m4965 (PointerEventData_t910 * __this, Vector3_t523  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
extern "C" float PointerEventData_get_clickTime_m4966 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
extern "C" void PointerEventData_set_clickTime_m4967 (PointerEventData_t910 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
extern "C" int32_t PointerEventData_get_clickCount_m4968 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
extern "C" void PointerEventData_set_clickCount_m4969 (PointerEventData_t910 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
extern "C" Vector2_t110  PointerEventData_get_scrollDelta_m4970 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_scrollDelta_m4971 (PointerEventData_t910 * __this, Vector2_t110  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
extern "C" bool PointerEventData_get_useDragThreshold_m4972 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
extern "C" void PointerEventData_set_useDragThreshold_m4973 (PointerEventData_t910 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
extern "C" bool PointerEventData_get_dragging_m4974 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
extern "C" void PointerEventData_set_dragging_m4975 (PointerEventData_t910 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C" int32_t PointerEventData_get_button_m4976 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C" void PointerEventData_set_button_m4977 (PointerEventData_t910 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
extern "C" bool PointerEventData_IsPointerMoving_m4978 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
extern "C" bool PointerEventData_IsScrolling_m4979 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
extern "C" Camera_t532 * PointerEventData_get_enterEventCamera_m4980 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C" Camera_t532 * PointerEventData_get_pressEventCamera_m4981 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
extern "C" GameObject_t352 * PointerEventData_get_pointerPress_m4982 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerPress_m4983 (PointerEventData_t910 * __this, GameObject_t352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
extern "C" String_t* PointerEventData_ToString_m4984 (PointerEventData_t910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

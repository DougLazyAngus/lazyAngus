#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SliderHandler
struct SliderHandler_t1250;
// UnityEngine.GUIStyle
struct GUIStyle_t64;
// UnityEngine.Event
struct Event_t681;
struct Event_t681_marshaled;
// UnityEngine.SliderState
struct SliderState_t1249;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" void SliderHandler__ctor_m7001 (SliderHandler_t1250 * __this, Rect_t594  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t64 * ___slider, GUIStyle_t64 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
extern "C" float SliderHandler_Handle_m7002 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern "C" float SliderHandler_OnMouseDown_m7003 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern "C" float SliderHandler_OnMouseDrag_m7004 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern "C" float SliderHandler_OnMouseUp_m7005 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern "C" float SliderHandler_OnRepaint_m7006 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C" int32_t SliderHandler_CurrentEventType_m7007 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C" int32_t SliderHandler_CurrentScrollTroughSide_m7008 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C" bool SliderHandler_IsEmptySlider_m7009 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern "C" bool SliderHandler_SupportsPageMovements_m7010 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C" float SliderHandler_PageMovementValue_m7011 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C" float SliderHandler_PageUpMovementBound_m7012 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C" Event_t681 * SliderHandler_CurrentEvent_m7013 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C" float SliderHandler_ValueForCurrentMousePosition_m7014 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern "C" float SliderHandler_Clamp_m7015 (SliderHandler_t1250 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C" Rect_t594  SliderHandler_ThumbSelectionRect_m7016 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C" void SliderHandler_StartDraggingWithValue_m7017 (SliderHandler_t1250 * __this, float ___dragStartValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern "C" SliderState_t1249 * SliderHandler_SliderState_m7018 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C" Rect_t594  SliderHandler_ThumbRect_m7019 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C" Rect_t594  SliderHandler_VerticalThumbRect_m7020 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C" Rect_t594  SliderHandler_HorizontalThumbRect_m7021 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C" float SliderHandler_ClampedCurrentValue_m7022 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C" float SliderHandler_MousePosition_m7023 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C" float SliderHandler_ValuesPerPixel_m7024 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C" float SliderHandler_ThumbSize_m7025 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
extern "C" float SliderHandler_MaxValue_m7026 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
extern "C" float SliderHandler_MinValue_m7027 (SliderHandler_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

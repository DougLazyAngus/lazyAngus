#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SliderHandler
struct SliderHandler_t2875;
// UnityEngine.GUIStyle
struct GUIStyle_t107;
// UnityEngine.Event
struct Event_t784;
struct Event_t784_marshaled;
// UnityEngine.SliderState
struct SliderState_t2874;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" void SliderHandler__ctor_m9978 (SliderHandler_t2875 * __this, Rect_t695  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t107 * ___slider, GUIStyle_t107 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
extern "C" float SliderHandler_Handle_m9979 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern "C" float SliderHandler_OnMouseDown_m9980 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern "C" float SliderHandler_OnMouseDrag_m9981 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern "C" float SliderHandler_OnMouseUp_m9982 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern "C" float SliderHandler_OnRepaint_m9983 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C" int32_t SliderHandler_CurrentEventType_m9984 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C" int32_t SliderHandler_CurrentScrollTroughSide_m9985 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C" bool SliderHandler_IsEmptySlider_m9986 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern "C" bool SliderHandler_SupportsPageMovements_m9987 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C" float SliderHandler_PageMovementValue_m9988 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C" float SliderHandler_PageUpMovementBound_m9989 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C" Event_t784 * SliderHandler_CurrentEvent_m9990 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C" float SliderHandler_ValueForCurrentMousePosition_m9991 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern "C" float SliderHandler_Clamp_m9992 (SliderHandler_t2875 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C" Rect_t695  SliderHandler_ThumbSelectionRect_m9993 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C" void SliderHandler_StartDraggingWithValue_m9994 (SliderHandler_t2875 * __this, float ___dragStartValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern "C" SliderState_t2874 * SliderHandler_SliderState_m9995 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C" Rect_t695  SliderHandler_ThumbRect_m9996 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C" Rect_t695  SliderHandler_VerticalThumbRect_m9997 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C" Rect_t695  SliderHandler_HorizontalThumbRect_m9998 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C" float SliderHandler_ClampedCurrentValue_m9999 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C" float SliderHandler_MousePosition_m10000 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C" float SliderHandler_ValuesPerPixel_m10001 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C" float SliderHandler_ThumbSize_m10002 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
extern "C" float SliderHandler_MaxValue_m10003 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
extern "C" float SliderHandler_MinValue_m10004 (SliderHandler_t2875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

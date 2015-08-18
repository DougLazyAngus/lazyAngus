#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SliderHandler
struct SliderHandler_t2874;
// UnityEngine.GUIStyle
struct GUIStyle_t107;
// UnityEngine.Event
struct Event_t783;
struct Event_t783_marshaled;
// UnityEngine.SliderState
struct SliderState_t2873;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" void SliderHandler__ctor_m9956 (SliderHandler_t2874 * __this, Rect_t694  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t107 * ___slider, GUIStyle_t107 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
extern "C" float SliderHandler_Handle_m9957 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern "C" float SliderHandler_OnMouseDown_m9958 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern "C" float SliderHandler_OnMouseDrag_m9959 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern "C" float SliderHandler_OnMouseUp_m9960 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern "C" float SliderHandler_OnRepaint_m9961 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C" int32_t SliderHandler_CurrentEventType_m9962 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C" int32_t SliderHandler_CurrentScrollTroughSide_m9963 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C" bool SliderHandler_IsEmptySlider_m9964 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern "C" bool SliderHandler_SupportsPageMovements_m9965 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C" float SliderHandler_PageMovementValue_m9966 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C" float SliderHandler_PageUpMovementBound_m9967 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C" Event_t783 * SliderHandler_CurrentEvent_m9968 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C" float SliderHandler_ValueForCurrentMousePosition_m9969 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern "C" float SliderHandler_Clamp_m9970 (SliderHandler_t2874 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C" Rect_t694  SliderHandler_ThumbSelectionRect_m9971 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C" void SliderHandler_StartDraggingWithValue_m9972 (SliderHandler_t2874 * __this, float ___dragStartValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern "C" SliderState_t2873 * SliderHandler_SliderState_m9973 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C" Rect_t694  SliderHandler_ThumbRect_m9974 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C" Rect_t694  SliderHandler_VerticalThumbRect_m9975 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C" Rect_t694  SliderHandler_HorizontalThumbRect_m9976 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C" float SliderHandler_ClampedCurrentValue_m9977 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C" float SliderHandler_MousePosition_m9978 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C" float SliderHandler_ValuesPerPixel_m9979 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C" float SliderHandler_ThumbSize_m9980 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
extern "C" float SliderHandler_MaxValue_m9981 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
extern "C" float SliderHandler_MinValue_m9982 (SliderHandler_t2874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

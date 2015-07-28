#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Slider
struct Slider_t458;
// UnityEngine.RectTransform
struct RectTransform_t618;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t908;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t816;
// UnityEngine.Camera
struct Camera_t524;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t812;
// UnityEngine.UI.Selectable
struct Selectable_t838;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.UI.Slider/Axis
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Slider::.ctor()
extern "C" void Slider__ctor_m5080 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
extern "C" RectTransform_t618 * Slider_get_fillRect_m5081 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
extern "C" void Slider_set_fillRect_m5082 (Slider_t458 * __this, RectTransform_t618 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
extern "C" RectTransform_t618 * Slider_get_handleRect_m5083 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
extern "C" void Slider_set_handleRect_m5084 (Slider_t458 * __this, RectTransform_t618 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
extern "C" int32_t Slider_get_direction_m5085 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
extern "C" void Slider_set_direction_m5086 (Slider_t458 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
extern "C" float Slider_get_minValue_m5087 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
extern "C" void Slider_set_minValue_m5088 (Slider_t458 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
extern "C" float Slider_get_maxValue_m5089 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
extern "C" void Slider_set_maxValue_m5090 (Slider_t458 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
extern "C" bool Slider_get_wholeNumbers_m5091 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
extern "C" void Slider_set_wholeNumbers_m5092 (Slider_t458 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
extern "C" float Slider_get_value_m5093 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
extern "C" void Slider_set_value_m3853 (Slider_t458 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
extern "C" float Slider_get_normalizedValue_m5094 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
extern "C" void Slider_set_normalizedValue_m5095 (Slider_t458 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C" SliderEvent_t908 * Slider_get_onValueChanged_m5096 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
extern "C" void Slider_set_onValueChanged_m5097 (Slider_t458 * __this, SliderEvent_t908 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
extern "C" float Slider_get_stepSize_m5098 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Slider_Rebuild_m5099 (Slider_t458 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
extern "C" void Slider_OnEnable_m5100 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
extern "C" void Slider_OnDisable_m5101 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
extern "C" void Slider_UpdateCachedReferences_m5102 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
extern "C" void Slider_Set_m5103 (Slider_t458 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
extern "C" void Slider_Set_m5104 (Slider_t458 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
extern "C" void Slider_OnRectTransformDimensionsChange_m5105 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
extern "C" int32_t Slider_get_axis_m5106 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
extern "C" bool Slider_get_reverseValue_m5107 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
extern "C" void Slider_UpdateVisuals_m5108 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
extern "C" void Slider_UpdateDrag_m5109 (Slider_t458 * __this, PointerEventData_t816 * ___eventData, Camera_t524 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Slider_MayDrag_m5110 (Slider_t458 * __this, PointerEventData_t816 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnPointerDown_m5111 (Slider_t458 * __this, PointerEventData_t816 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnDrag_m5112 (Slider_t458 * __this, PointerEventData_t816 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Slider_OnMove_m5113 (Slider_t458 * __this, AxisEventData_t812 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
extern "C" Selectable_t838 * Slider_FindSelectableOnLeft_m5114 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
extern "C" Selectable_t838 * Slider_FindSelectableOnRight_m5115 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
extern "C" Selectable_t838 * Slider_FindSelectableOnUp_m5116 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
extern "C" Selectable_t838 * Slider_FindSelectableOnDown_m5117 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slider_OnInitializePotentialDrag_m5118 (Slider_t458 * __this, PointerEventData_t816 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
extern "C" void Slider_SetDirection_m5119 (Slider_t458 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m5120 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t406 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m5121 (Slider_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

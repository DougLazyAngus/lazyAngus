#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Scrollbar
struct Scrollbar_t959;
// UnityEngine.RectTransform
struct RectTransform_t541;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t956;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t883;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t879;
// UnityEngine.UI.Selectable
struct Selectable_t905;
// UnityEngine.Transform
struct Transform_t406;
// UnityEngine.UI.Scrollbar/Direction
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
// UnityEngine.UI.Scrollbar/Axis
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
extern "C" void Scrollbar__ctor_m5243 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
extern "C" RectTransform_t541 * Scrollbar_get_handleRect_m5244 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
extern "C" void Scrollbar_set_handleRect_m5245 (Scrollbar_t959 * __this, RectTransform_t541 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
extern "C" int32_t Scrollbar_get_direction_m5246 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
extern "C" void Scrollbar_set_direction_m5247 (Scrollbar_t959 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
extern "C" float Scrollbar_get_value_m5248 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
extern "C" void Scrollbar_set_value_m5249 (Scrollbar_t959 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
extern "C" float Scrollbar_get_size_m5250 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
extern "C" void Scrollbar_set_size_m5251 (Scrollbar_t959 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
extern "C" int32_t Scrollbar_get_numberOfSteps_m5252 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
extern "C" void Scrollbar_set_numberOfSteps_m5253 (Scrollbar_t959 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
extern "C" ScrollEvent_t956 * Scrollbar_get_onValueChanged_m5254 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
extern "C" void Scrollbar_set_onValueChanged_m5255 (Scrollbar_t959 * __this, ScrollEvent_t956 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
extern "C" float Scrollbar_get_stepSize_m5256 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Scrollbar_Rebuild_m5257 (Scrollbar_t959 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
extern "C" void Scrollbar_OnEnable_m5258 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
extern "C" void Scrollbar_OnDisable_m5259 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
extern "C" void Scrollbar_UpdateCachedReferences_m5260 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
extern "C" void Scrollbar_Set_m5261 (Scrollbar_t959 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
extern "C" void Scrollbar_Set_m5262 (Scrollbar_t959 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
extern "C" void Scrollbar_OnRectTransformDimensionsChange_m5263 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
extern "C" int32_t Scrollbar_get_axis_m5264 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
extern "C" bool Scrollbar_get_reverseValue_m5265 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
extern "C" void Scrollbar_UpdateVisuals_m5266 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_UpdateDrag_m5267 (Scrollbar_t959 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Scrollbar_MayDrag_m5268 (Scrollbar_t959 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnBeginDrag_m5269 (Scrollbar_t959 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnDrag_m5270 (Scrollbar_t959 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerDown_m5271 (Scrollbar_t959 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
extern "C" Object_t * Scrollbar_ClickRepeat_m5272 (Scrollbar_t959 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerUp_m5273 (Scrollbar_t959 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Scrollbar_OnMove_m5274 (Scrollbar_t959 * __this, AxisEventData_t879 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
extern "C" Selectable_t905 * Scrollbar_FindSelectableOnLeft_m5275 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
extern "C" Selectable_t905 * Scrollbar_FindSelectableOnRight_m5276 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
extern "C" Selectable_t905 * Scrollbar_FindSelectableOnUp_m5277 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
extern "C" Selectable_t905 * Scrollbar_FindSelectableOnDown_m5278 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnInitializePotentialDrag_m5279 (Scrollbar_t959 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
extern "C" void Scrollbar_SetDirection_m5280 (Scrollbar_t959 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m5281 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t406 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m5282 (Scrollbar_t959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t423;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t692;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t775;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t735;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m4269 (Button_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t692 * Button_get_onClick_m3601 (Button_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m4270 (Button_t423 * __this, ButtonClickedEvent_t692 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m4271 (Button_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m4272 (Button_t423 * __this, PointerEventData_t775 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m4273 (Button_t423 * __this, BaseEventData_t735 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m4274 (Button_t423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

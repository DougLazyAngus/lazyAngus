#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t379;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t611;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t694;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t654;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m3504 (Button_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t611 * Button_get_onClick_m2893 (Button_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m3505 (Button_t379 * __this, ButtonClickedEvent_t611 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m3506 (Button_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m3507 (Button_t379 * __this, PointerEventData_t694 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m3508 (Button_t379 * __this, BaseEventData_t654 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m3509 (Button_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

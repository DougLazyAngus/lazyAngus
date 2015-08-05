#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t461;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t743;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t826;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t786;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m4638 (Button_t461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t743 * Button_get_onClick_m3967 (Button_t461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m4639 (Button_t461 * __this, ButtonClickedEvent_t743 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m4640 (Button_t461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m4641 (Button_t461 * __this, PointerEventData_t826 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m4642 (Button_t461 * __this, BaseEventData_t786 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m4643 (Button_t461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

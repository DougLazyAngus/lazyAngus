#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t499;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t794;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t886;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t846;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m4912 (Button_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t794 * Button_get_onClick_m4222 (Button_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m4913 (Button_t499 * __this, ButtonClickedEvent_t794 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m4914 (Button_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m4915 (Button_t499 * __this, PointerEventData_t886 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m4916 (Button_t499 * __this, BaseEventData_t846 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m4917 (Button_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

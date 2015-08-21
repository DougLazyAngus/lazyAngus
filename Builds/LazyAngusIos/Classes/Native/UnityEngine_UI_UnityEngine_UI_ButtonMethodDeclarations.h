#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t499;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t791;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t843;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m4879 (Button_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t791 * Button_get_onClick_m4192 (Button_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m4880 (Button_t499 * __this, ButtonClickedEvent_t791 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m4881 (Button_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m4882 (Button_t499 * __this, PointerEventData_t883 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m4883 (Button_t499 * __this, BaseEventData_t843 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m4884 (Button_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

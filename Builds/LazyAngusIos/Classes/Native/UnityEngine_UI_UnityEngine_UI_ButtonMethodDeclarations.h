#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t463;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t740;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t822;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t782;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m4610 (Button_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t740 * Button_get_onClick_m3945 (Button_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m4611 (Button_t463 * __this, ButtonClickedEvent_t740 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m4612 (Button_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m4613 (Button_t463 * __this, PointerEventData_t822 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m4614 (Button_t463 * __this, BaseEventData_t782 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m4615 (Button_t463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

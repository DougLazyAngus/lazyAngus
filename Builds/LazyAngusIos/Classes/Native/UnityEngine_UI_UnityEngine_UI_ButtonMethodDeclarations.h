#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t380;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t640;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t727;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t687;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m3711 (Button_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t640 * Button_get_onClick_m3059 (Button_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m3712 (Button_t380 * __this, ButtonClickedEvent_t640 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m3713 (Button_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m3714 (Button_t380 * __this, PointerEventData_t727 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m3715 (Button_t380 * __this, BaseEventData_t687 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m3716 (Button_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t831;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t829;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t826;
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"
// UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Fra.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
extern "C" void MouseState__ctor_m4526 (MouseState_t831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyPressesThisFrame()
extern "C" bool MouseState_AnyPressesThisFrame_m4527 (MouseState_t831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyReleasesThisFrame()
extern "C" bool MouseState_AnyReleasesThisFrame_m4528 (MouseState_t831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C" ButtonState_t829 * MouseState_GetButtonState_m4529 (MouseState_t831 * __this, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
extern "C" void MouseState_SetButtonState_m4530 (MouseState_t831 * __this, int32_t ___button, int32_t ___stateForMouseButton, PointerEventData_t826 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;

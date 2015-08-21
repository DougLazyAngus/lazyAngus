#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t893;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t883;
// System.String
struct String_t;

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
extern "C" void TouchInputModule__ctor_m4818 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
extern "C" bool TouchInputModule_get_allowActivationOnStandalone_m4819 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
extern "C" void TouchInputModule_set_allowActivationOnStandalone_m4820 (TouchInputModule_t893 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
extern "C" void TouchInputModule_UpdateModule_m4821 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
extern "C" bool TouchInputModule_IsModuleSupported_m4822 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
extern "C" bool TouchInputModule_ShouldActivateModule_m4823 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
extern "C" bool TouchInputModule_UseFakeInput_m4824 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
extern "C" void TouchInputModule_Process_m4825 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
extern "C" void TouchInputModule_FakeTouches_m4826 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
extern "C" void TouchInputModule_ProcessTouchEvents_m4827 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C" void TouchInputModule_ProcessTouchPress_m4828 (TouchInputModule_t893 * __this, PointerEventData_t883 * ___pointerEvent, bool ___pressed, bool ___released, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
extern "C" void TouchInputModule_DeactivateModule_m4829 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
extern "C" String_t* TouchInputModule_ToString_m4830 (TouchInputModule_t893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

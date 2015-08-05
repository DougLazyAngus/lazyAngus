#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t834;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t827;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
extern "C" void StandaloneInputModule__ctor_m4545 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
extern "C" int32_t StandaloneInputModule_get_inputMode_m4546 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
extern "C" bool StandaloneInputModule_get_allowActivationOnMobileDevice_m4547 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
extern "C" void StandaloneInputModule_set_allowActivationOnMobileDevice_m4548 (StandaloneInputModule_t834 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
extern "C" float StandaloneInputModule_get_inputActionsPerSecond_m4549 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
extern "C" void StandaloneInputModule_set_inputActionsPerSecond_m4550 (StandaloneInputModule_t834 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_repeatDelay()
extern "C" float StandaloneInputModule_get_repeatDelay_m4551 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_repeatDelay(System.Single)
extern "C" void StandaloneInputModule_set_repeatDelay_m4552 (StandaloneInputModule_t834 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
extern "C" String_t* StandaloneInputModule_get_horizontalAxis_m4553 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
extern "C" void StandaloneInputModule_set_horizontalAxis_m4554 (StandaloneInputModule_t834 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
extern "C" String_t* StandaloneInputModule_get_verticalAxis_m4555 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
extern "C" void StandaloneInputModule_set_verticalAxis_m4556 (StandaloneInputModule_t834 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
extern "C" String_t* StandaloneInputModule_get_submitButton_m4557 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
extern "C" void StandaloneInputModule_set_submitButton_m4558 (StandaloneInputModule_t834 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
extern "C" String_t* StandaloneInputModule_get_cancelButton_m4559 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
extern "C" void StandaloneInputModule_set_cancelButton_m4560 (StandaloneInputModule_t834 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
extern "C" void StandaloneInputModule_UpdateModule_m4561 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
extern "C" bool StandaloneInputModule_IsModuleSupported_m4562 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
extern "C" bool StandaloneInputModule_ShouldActivateModule_m4563 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
extern "C" void StandaloneInputModule_ActivateModule_m4564 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
extern "C" void StandaloneInputModule_DeactivateModule_m4565 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
extern "C" void StandaloneInputModule_Process_m4566 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendSubmitEventToSelectedObject_m4567 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
extern "C" Vector2_t110  StandaloneInputModule_GetRawMoveVector_m4568 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendMoveEventToSelectedObject_m4569 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
extern "C" void StandaloneInputModule_ProcessMouseEvent_m4570 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
extern "C" bool StandaloneInputModule_SendUpdateEventToSelectedObject_m4571 (StandaloneInputModule_t834 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C" void StandaloneInputModule_ProcessMousePress_m4572 (StandaloneInputModule_t834 * __this, MouseButtonEventData_t827 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;

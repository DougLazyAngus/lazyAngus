#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InputHandler
struct InputHandler_t481;
// UnityEngine.Collider2D
struct Collider2D_t525;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void InputHandler::.ctor()
extern "C" void InputHandler__ctor_m2548 (InputHandler_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::.cctor()
extern "C" void InputHandler__cctor_m2549 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::get_isTouchDevice()
extern "C" bool InputHandler_get_isTouchDevice_m2550 (InputHandler_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::set_isTouchDevice(System.Boolean)
extern "C" void InputHandler_set_isTouchDevice_m2551 (InputHandler_t481 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InputHandler InputHandler::get_instance()
extern "C" InputHandler_t481 * InputHandler_get_instance_m2552 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::set_instance(InputHandler)
extern "C" void InputHandler_set_instance_m2553 (Object_t * __this /* static, unused */, InputHandler_t481 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::Awake()
extern "C" void InputHandler_Awake_m2554 (InputHandler_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::Start()
extern "C" void InputHandler_Start_m2555 (InputHandler_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::Update()
extern "C" void InputHandler_Update_m2556 (InputHandler_t481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D InputHandler::CheckForWorldClickStart(UnityEngine.Vector3&)
extern "C" Collider2D_t525 * InputHandler_CheckForWorldClickStart_m2557 (InputHandler_t481 * __this, Vector3_t451 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::HandleClickStart(UnityEngine.Collider2D,UnityEngine.Vector3)
extern "C" void InputHandler_HandleClickStart_m2558 (InputHandler_t481 * __this, Collider2D_t525 * ___collider, Vector3_t451  ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::IsPointInWorldCameraScreenSpace(UnityEngine.Vector3)
extern "C" bool InputHandler_IsPointInWorldCameraScreenSpace_m2559 (InputHandler_t481 * __this, Vector3_t451  ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::GetWorldClickStarted(UnityEngine.Vector3&)
extern "C" bool InputHandler_GetWorldClickStarted_m2560 (InputHandler_t481 * __this, Vector3_t451 * ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::GetWorldClickEnded(UnityEngine.Vector3&)
extern "C" bool InputHandler_GetWorldClickEnded_m2561 (InputHandler_t481 * __this, Vector3_t451 * ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::GetWorldClickPosition(UnityEngine.Vector3&)
extern "C" bool InputHandler_GetWorldClickPosition_m2562 (InputHandler_t481 * __this, Vector3_t451 * ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;

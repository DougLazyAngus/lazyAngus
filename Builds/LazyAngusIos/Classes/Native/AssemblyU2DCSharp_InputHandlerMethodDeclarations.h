#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InputHandler
struct InputHandler_t525;
// UnityEngine.Collider2D
struct Collider2D_t570;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void InputHandler::.ctor()
extern "C" void InputHandler__ctor_m2841 (InputHandler_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::.cctor()
extern "C" void InputHandler__cctor_m2842 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::get_isTouchDevice()
extern "C" bool InputHandler_get_isTouchDevice_m2843 (InputHandler_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::set_isTouchDevice(System.Boolean)
extern "C" void InputHandler_set_isTouchDevice_m2844 (InputHandler_t525 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InputHandler InputHandler::get_instance()
extern "C" InputHandler_t525 * InputHandler_get_instance_m2845 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::set_instance(InputHandler)
extern "C" void InputHandler_set_instance_m2846 (Object_t * __this /* static, unused */, InputHandler_t525 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::Awake()
extern "C" void InputHandler_Awake_m2847 (InputHandler_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::Start()
extern "C" void InputHandler_Start_m2848 (InputHandler_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::Update()
extern "C" void InputHandler_Update_m2849 (InputHandler_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D InputHandler::CheckForWorldClickStart(UnityEngine.Vector3&)
extern "C" Collider2D_t570 * InputHandler_CheckForWorldClickStart_m2850 (InputHandler_t525 * __this, Vector3_t494 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::HandleClickStart(UnityEngine.Collider2D,UnityEngine.Vector3)
extern "C" void InputHandler_HandleClickStart_m2851 (InputHandler_t525 * __this, Collider2D_t570 * ___collider, Vector3_t494  ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::IsPointInWorldCameraScreenSpace(UnityEngine.Vector3)
extern "C" bool InputHandler_IsPointInWorldCameraScreenSpace_m2852 (InputHandler_t525 * __this, Vector3_t494  ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::GetWorldClickStarted(UnityEngine.Vector3&)
extern "C" bool InputHandler_GetWorldClickStarted_m2853 (InputHandler_t525 * __this, Vector3_t494 * ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::GetWorldClickEnded(UnityEngine.Vector3&)
extern "C" bool InputHandler_GetWorldClickEnded_m2854 (InputHandler_t525 * __this, Vector3_t494 * ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::GetWorldClickPosition(UnityEngine.Vector3&)
extern "C" bool InputHandler_GetWorldClickPosition_m2855 (InputHandler_t525 * __this, Vector3_t494 * ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;

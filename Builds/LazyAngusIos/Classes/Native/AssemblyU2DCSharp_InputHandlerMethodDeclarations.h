#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InputHandler
struct InputHandler_t575;
// UnityEngine.Collider2D
struct Collider2D_t699;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void InputHandler::.ctor()
extern "C" void InputHandler__ctor_m3082 (InputHandler_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::.cctor()
extern "C" void InputHandler__cctor_m3083 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::get_isTouchDevice()
extern "C" bool InputHandler_get_isTouchDevice_m3084 (InputHandler_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::set_isTouchDevice(System.Boolean)
extern "C" void InputHandler_set_isTouchDevice_m3085 (InputHandler_t575 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InputHandler InputHandler::get_instance()
extern "C" InputHandler_t575 * InputHandler_get_instance_m3086 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::set_instance(InputHandler)
extern "C" void InputHandler_set_instance_m3087 (Object_t * __this /* static, unused */, InputHandler_t575 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::Awake()
extern "C" void InputHandler_Awake_m3088 (InputHandler_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::Start()
extern "C" void InputHandler_Start_m3089 (InputHandler_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::Update()
extern "C" void InputHandler_Update_m3090 (InputHandler_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D InputHandler::CheckForWorldClickStart(UnityEngine.Vector3&)
extern "C" Collider2D_t699 * InputHandler_CheckForWorldClickStart_m3091 (InputHandler_t575 * __this, Vector3_t536 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputHandler::HandleClickStart(UnityEngine.Collider2D,UnityEngine.Vector3)
extern "C" void InputHandler_HandleClickStart_m3092 (InputHandler_t575 * __this, Collider2D_t699 * ___collider, Vector3_t536  ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::IsPointInWorldCameraScreenSpace(UnityEngine.Vector3)
extern "C" bool InputHandler_IsPointInWorldCameraScreenSpace_m3093 (InputHandler_t575 * __this, Vector3_t536  ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::GetWorldClickStarted(UnityEngine.Vector3&)
extern "C" bool InputHandler_GetWorldClickStarted_m3094 (InputHandler_t575 * __this, Vector3_t536 * ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::GetWorldClickEnded(UnityEngine.Vector3&)
extern "C" bool InputHandler_GetWorldClickEnded_m3095 (InputHandler_t575 * __this, Vector3_t536 * ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputHandler::GetWorldClickPosition(UnityEngine.Vector3&)
extern "C" bool InputHandler_GetWorldClickPosition_m3096 (InputHandler_t575 * __this, Vector3_t536 * ___clickPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;

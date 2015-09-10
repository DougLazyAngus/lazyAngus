#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseSinkController
struct MouseSinkController_t629;
// UnityEngine.Collider2D
struct Collider2D_t724;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MouseSinkController::.ctor()
extern "C" void MouseSinkController__ctor_m3370 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::.cctor()
extern "C" void MouseSinkController__cctor_m3371 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseSinkController::get_savedMouseCount()
extern "C" int32_t MouseSinkController_get_savedMouseCount_m3372 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::set_savedMouseCount(System.Int32)
extern "C" void MouseSinkController_set_savedMouseCount_m3373 (MouseSinkController_t629 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::Awake()
extern "C" void MouseSinkController_Awake_m3374 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::Start()
extern "C" void MouseSinkController_Start_m3375 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::OnDestroy()
extern "C" void MouseSinkController_OnDestroy_m3376 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::RegisterForEvents()
extern "C" void MouseSinkController_RegisterForEvents_m3377 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::UnregisterForEvents()
extern "C" void MouseSinkController_UnregisterForEvents_m3378 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::OnCameraChanged()
extern "C" void MouseSinkController_OnCameraChanged_m3379 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::OnInstanceChanged()
extern "C" void MouseSinkController_OnInstanceChanged_m3380 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::CalculateSpread()
extern "C" void MouseSinkController_CalculateSpread_m3381 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::ResetTraps()
extern "C" void MouseSinkController_ResetTraps_m3382 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void MouseSinkController_OnTriggerEnter2D_m3383 (MouseSinkController_t629 * __this, Collider2D_t724 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::AddTrap()
extern "C" void MouseSinkController_AddTrap_m3384 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MouseSinkController::NthMouseTrapPosition(System.Int32)
extern "C" Vector3_t523  MouseSinkController_NthMouseTrapPosition_m3385 (MouseSinkController_t629 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MouseSinkController::NthMouseTrapRotation(System.Int32)
extern "C" float MouseSinkController_NthMouseTrapRotation_m3386 (MouseSinkController_t629 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::PositionNthMousetrap(UnityEngine.GameObject,System.Int32)
extern "C" void MouseSinkController_PositionNthMousetrap_m3387 (MouseSinkController_t629 * __this, GameObject_t352 * ___mouseTrapGameObject, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::RemoveTopmostMouseTrap()
extern "C" void MouseSinkController_RemoveTopmostMouseTrap_m3388 (MouseSinkController_t629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::SetTrapCapacity(System.Int32)
extern "C" void MouseSinkController_SetTrapCapacity_m3389 (MouseSinkController_t629 * __this, int32_t ___newTrapCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;

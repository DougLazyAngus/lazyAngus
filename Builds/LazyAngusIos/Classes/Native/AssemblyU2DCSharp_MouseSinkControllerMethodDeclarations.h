#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseSinkController
struct MouseSinkController_t601;
// UnityEngine.Collider2D
struct Collider2D_t700;
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MouseSinkController::.ctor()
extern "C" void MouseSinkController__ctor_m3177 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::.cctor()
extern "C" void MouseSinkController__cctor_m3178 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MouseSinkController::get_savedMouseCount()
extern "C" int32_t MouseSinkController_get_savedMouseCount_m3179 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::set_savedMouseCount(System.Int32)
extern "C" void MouseSinkController_set_savedMouseCount_m3180 (MouseSinkController_t601 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::Awake()
extern "C" void MouseSinkController_Awake_m3181 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::Start()
extern "C" void MouseSinkController_Start_m3182 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::OnDestroy()
extern "C" void MouseSinkController_OnDestroy_m3183 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::RegisterForEvents()
extern "C" void MouseSinkController_RegisterForEvents_m3184 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::UnregisterForEvents()
extern "C" void MouseSinkController_UnregisterForEvents_m3185 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::OnCameraChanged()
extern "C" void MouseSinkController_OnCameraChanged_m3186 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::OnInstanceChanged()
extern "C" void MouseSinkController_OnInstanceChanged_m3187 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::Reset()
extern "C" void MouseSinkController_Reset_m3188 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void MouseSinkController_OnTriggerEnter2D_m3189 (MouseSinkController_t601 * __this, Collider2D_t700 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::AddTrap()
extern "C" void MouseSinkController_AddTrap_m3190 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MouseSinkController::NthMouseTrapPosition(System.Int32)
extern "C" Vector3_t535  MouseSinkController_NthMouseTrapPosition_m3191 (MouseSinkController_t601 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MouseSinkController::NthMouseTrapRotation(System.Int32)
extern "C" float MouseSinkController_NthMouseTrapRotation_m3192 (MouseSinkController_t601 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::PositionNthMousetrap(UnityEngine.GameObject,System.Int32)
extern "C" void MouseSinkController_PositionNthMousetrap_m3193 (MouseSinkController_t601 * __this, GameObject_t352 * ___mouseTrapGameObject, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::RemoveTopmostMouseTrap()
extern "C" void MouseSinkController_RemoveTopmostMouseTrap_m3194 (MouseSinkController_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseSinkController::SetTrapCapacity(System.Int32)
extern "C" void MouseSinkController_SetTrapCapacity_m3195 (MouseSinkController_t601 * __this, int32_t ___newTrapCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;

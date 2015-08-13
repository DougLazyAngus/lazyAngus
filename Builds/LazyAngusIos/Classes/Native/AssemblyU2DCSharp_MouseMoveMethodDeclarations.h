#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseMove
struct MouseMove_t527;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseType.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"

// System.Void MouseMove::.ctor()
extern "C" void MouseMove__ctor_m3184 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::.cctor()
extern "C" void MouseMove__cctor_m3185 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType MouseMove::get_mouseType()
extern "C" int32_t MouseMove_get_mouseType_m3186 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_mouseType(MouseConfig/MouseType)
extern "C" void MouseMove_set_mouseType_m3187 (MouseMove_t527 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseMove::get_dead()
extern "C" bool MouseMove_get_dead_m3188 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_dead(System.Boolean)
extern "C" void MouseMove_set_dead_m3189 (MouseMove_t527 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseMove::get_isPoisoned()
extern "C" bool MouseMove_get_isPoisoned_m3190 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_isPoisoned(System.Boolean)
extern "C" void MouseMove_set_isPoisoned_m3191 (MouseMove_t527 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseMove::get_isFartedUpon()
extern "C" bool MouseMove_get_isFartedUpon_m3192 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_isFartedUpon(System.Boolean)
extern "C" void MouseMove_set_isFartedUpon_m3193 (MouseMove_t527 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::Awake()
extern "C" void MouseMove_Awake_m3194 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::Start()
extern "C" void MouseMove_Start_m3195 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnDestroy()
extern "C" void MouseMove_OnDestroy_m3196 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::RegisterForEvents()
extern "C" void MouseMove_RegisterForEvents_m3197 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::UnregisterForEvents()
extern "C" void MouseMove_UnregisterForEvents_m3198 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnGamePhaseChanged()
extern "C" void MouseMove_OnGamePhaseChanged_m3199 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnFartedUpon()
extern "C" void MouseMove_OnFartedUpon_m3200 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetPoisoned()
extern "C" void MouseMove_SetPoisoned_m3201 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::MakeSlider()
extern "C" void MouseMove_MakeSlider_m3202 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetMouseTransform()
extern "C" void MouseMove_SetMouseTransform_m3203 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetMousePosition()
extern "C" void MouseMove_SetMousePosition_m3204 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetMouseOrientation(UnityEngine.Vector3)
extern "C" void MouseMove_SetMouseOrientation_m3205 (MouseMove_t527 * __this, Vector3_t536  ___oldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::ApplyWiggle()
extern "C" void MouseMove_ApplyWiggle_m3206 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::UpdateSlider()
extern "C" void MouseMove_UpdateSlider_m3207 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetPhase(MouseConfig/MovementPhaseType)
extern "C" void MouseMove_SetPhase_m3208 (MouseMove_t527 * __this, int32_t ___phase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::FixedUpdate()
extern "C" void MouseMove_FixedUpdate_m3209 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnKilled()
extern "C" void MouseMove_OnKilled_m3210 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::MakeDeadMouse()
extern "C" void MouseMove_MakeDeadMouse_m3211 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnSafeExit()
extern "C" void MouseMove_OnSafeExit_m3212 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetMouseType(MouseConfig/MouseType)
extern "C" void MouseMove_SetMouseType_m3213 (MouseMove_t527 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MovementPhaseType MouseMove::GetMousePhase()
extern "C" int32_t MouseMove_GetMousePhase_m3214 (MouseMove_t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetupMouse(MouseConfig/MouseType,MouseHole/MouseHoleLocation,System.Boolean,System.Int32)
extern "C" void MouseMove_SetupMouse_m3215 (MouseMove_t527 * __this, int32_t ___mouseType, int32_t ___originHole, bool ___isClockwise, int32_t ___track, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::AddWiggle(MouseConfig/MouseWiggleType,System.Single,System.Int32,System.Boolean)
extern "C" void MouseMove_AddWiggle_m3216 (MouseMove_t527 * __this, int32_t ___wiggleType, float ___wiggleMagnitude, int32_t ___wiggleCycles, bool ___wiggleClockwise, const MethodInfo* method) IL2CPP_METHOD_ATTR;

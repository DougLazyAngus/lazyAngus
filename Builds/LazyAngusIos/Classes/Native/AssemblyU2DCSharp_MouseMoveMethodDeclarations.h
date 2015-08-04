#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseMove
struct MouseMove_t486;
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
extern "C" void MouseMove__ctor_m2967 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::.cctor()
extern "C" void MouseMove__cctor_m2968 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType MouseMove::get_mouseType()
extern "C" int32_t MouseMove_get_mouseType_m2969 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_mouseType(MouseConfig/MouseType)
extern "C" void MouseMove_set_mouseType_m2970 (MouseMove_t486 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseMove::get_dead()
extern "C" bool MouseMove_get_dead_m2971 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_dead(System.Boolean)
extern "C" void MouseMove_set_dead_m2972 (MouseMove_t486 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseMove::get_isPoisoned()
extern "C" bool MouseMove_get_isPoisoned_m2973 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_isPoisoned(System.Boolean)
extern "C" void MouseMove_set_isPoisoned_m2974 (MouseMove_t486 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseMove::get_isFartedUpon()
extern "C" bool MouseMove_get_isFartedUpon_m2975 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_isFartedUpon(System.Boolean)
extern "C" void MouseMove_set_isFartedUpon_m2976 (MouseMove_t486 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::Awake()
extern "C" void MouseMove_Awake_m2977 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::Start()
extern "C" void MouseMove_Start_m2978 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnDestroy()
extern "C" void MouseMove_OnDestroy_m2979 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::RegisterForEvents()
extern "C" void MouseMove_RegisterForEvents_m2980 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::UnregisterForEvents()
extern "C" void MouseMove_UnregisterForEvents_m2981 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnGamePhaseChanged()
extern "C" void MouseMove_OnGamePhaseChanged_m2982 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnFartedUpon()
extern "C" void MouseMove_OnFartedUpon_m2983 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetPoisoned()
extern "C" void MouseMove_SetPoisoned_m2984 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::MakeSlider()
extern "C" void MouseMove_MakeSlider_m2985 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetMouseTransform()
extern "C" void MouseMove_SetMouseTransform_m2986 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetMousePosition()
extern "C" void MouseMove_SetMousePosition_m2987 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetMouseOrientation(UnityEngine.Vector3)
extern "C" void MouseMove_SetMouseOrientation_m2988 (MouseMove_t486 * __this, Vector3_t495  ___oldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::ApplyWiggle()
extern "C" void MouseMove_ApplyWiggle_m2989 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::UpdateSlider()
extern "C" void MouseMove_UpdateSlider_m2990 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetPhase(MouseConfig/MovementPhaseType)
extern "C" void MouseMove_SetPhase_m2991 (MouseMove_t486 * __this, int32_t ___phase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::FixedUpdate()
extern "C" void MouseMove_FixedUpdate_m2992 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnKilled()
extern "C" void MouseMove_OnKilled_m2993 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnSafeExit()
extern "C" void MouseMove_OnSafeExit_m2994 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetMouseType(MouseConfig/MouseType)
extern "C" void MouseMove_SetMouseType_m2995 (MouseMove_t486 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MovementPhaseType MouseMove::GetMousePhase()
extern "C" int32_t MouseMove_GetMousePhase_m2996 (MouseMove_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetupMouse(MouseConfig/MouseType,MouseHole/MouseHoleLocation,System.Boolean,System.Int32)
extern "C" void MouseMove_SetupMouse_m2997 (MouseMove_t486 * __this, int32_t ___mouseType, int32_t ___originHole, bool ___isClockwise, int32_t ___track, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::AddWiggle(MouseConfig/MouseWiggleType,System.Single,System.Int32,System.Boolean)
extern "C" void MouseMove_AddWiggle_m2998 (MouseMove_t486 * __this, int32_t ___wiggleType, float ___wiggleMagnitude, int32_t ___wiggleCycles, bool ___wiggleClockwise, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseMove
struct MouseMove_t458;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseConfig/MovementPhaseType
#include "AssemblyU2DCSharp_MouseConfig_MovementPhaseType.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"

// System.Void MouseMove::.ctor()
extern "C" void MouseMove__ctor_m2080 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::.cctor()
extern "C" void MouseMove__cctor_m2081 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType MouseMove::get_mouseType()
extern "C" int32_t MouseMove_get_mouseType_m2082 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_mouseType(MouseConfig/MouseType)
extern "C" void MouseMove_set_mouseType_m2083 (MouseMove_t458 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseMove::get_dead()
extern "C" bool MouseMove_get_dead_m2084 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_dead(System.Boolean)
extern "C" void MouseMove_set_dead_m2085 (MouseMove_t458 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MouseMove::get_isPoisoned()
extern "C" bool MouseMove_get_isPoisoned_m2086 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::set_isPoisoned(System.Boolean)
extern "C" void MouseMove_set_isPoisoned_m2087 (MouseMove_t458 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::Awake()
extern "C" void MouseMove_Awake_m2088 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::Start()
extern "C" void MouseMove_Start_m2089 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnDestroy()
extern "C" void MouseMove_OnDestroy_m2090 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::RegisterForEvents()
extern "C" void MouseMove_RegisterForEvents_m2091 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::UnregisterForEvents()
extern "C" void MouseMove_UnregisterForEvents_m2092 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnGamePhaseChanged()
extern "C" void MouseMove_OnGamePhaseChanged_m2093 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetPoisoned()
extern "C" void MouseMove_SetPoisoned_m2094 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::MakeSlider()
extern "C" void MouseMove_MakeSlider_m2095 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::PositionMouse()
extern "C" void MouseMove_PositionMouse_m2096 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::UpdateSlider()
extern "C" void MouseMove_UpdateSlider_m2097 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::FixedUpdate()
extern "C" void MouseMove_FixedUpdate_m2098 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnKilled()
extern "C" void MouseMove_OnKilled_m2099 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::OnSafeExit()
extern "C" void MouseMove_OnSafeExit_m2100 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetMouseType(MouseConfig/MouseType)
extern "C" void MouseMove_SetMouseType_m2101 (MouseMove_t458 * __this, int32_t ___mt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MovementPhaseType MouseMove::GetMousePhase()
extern "C" int32_t MouseMove_GetMousePhase_m2102 (MouseMove_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseMove::SetupMouse(MouseConfig/MouseType,MouseHole/MouseHoleLocation,System.Boolean,System.Int32)
extern "C" void MouseMove_SetupMouse_m2103 (MouseMove_t458 * __this, int32_t ___mouseType, int32_t ___originHole, bool ___isClockwise, int32_t ___track, const MethodInfo* method) IL2CPP_METHOD_ATTR;

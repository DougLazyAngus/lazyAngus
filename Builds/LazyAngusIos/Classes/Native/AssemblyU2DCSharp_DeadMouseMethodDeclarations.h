#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DeadMouse
struct DeadMouse_t515;
// MouseMove
struct MouseMove_t517;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"

// System.Void DeadMouse::.ctor()
extern "C" void DeadMouse__ctor_m2817 (DeadMouse_t515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType DeadMouse::get_mouseType()
extern "C" int32_t DeadMouse_get_mouseType_m2818 (DeadMouse_t515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouse::set_mouseType(MouseConfig/MouseType)
extern "C" void DeadMouse_set_mouseType_m2819 (DeadMouse_t515 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouse::Start()
extern "C" void DeadMouse_Start_m2820 (DeadMouse_t515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouse::Configure(MouseMove)
extern "C" void DeadMouse_Configure_m2821 (DeadMouse_t515 * __this, MouseMove_t517 * ___parentMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;

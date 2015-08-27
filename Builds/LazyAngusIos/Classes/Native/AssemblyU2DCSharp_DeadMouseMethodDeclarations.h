#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DeadMouse
struct DeadMouse_t525;
// MouseMove
struct MouseMove_t527;
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"

// System.Void DeadMouse::.ctor()
extern "C" void DeadMouse__ctor_m2838 (DeadMouse_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType DeadMouse::get_mouseType()
extern "C" int32_t DeadMouse_get_mouseType_m2839 (DeadMouse_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouse::set_mouseType(MouseConfig/MouseType)
extern "C" void DeadMouse_set_mouseType_m2840 (DeadMouse_t525 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouse::Start()
extern "C" void DeadMouse_Start_m2841 (DeadMouse_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouse::Configure(MouseMove)
extern "C" void DeadMouse_Configure_m2842 (DeadMouse_t525 * __this, MouseMove_t527 * ___parentMouse, const MethodInfo* method) IL2CPP_METHOD_ATTR;

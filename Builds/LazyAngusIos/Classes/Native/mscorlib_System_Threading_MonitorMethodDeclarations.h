﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Monitor
struct Monitor_t4768;
// System.Object
struct Object_t;

// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" void Monitor_Enter_m7384 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" void Monitor_Exit_m7385 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Monitor_pulse(System.Object)
extern "C" void Monitor_Monitor_pulse_m19266 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_test_synchronised(System.Object)
extern "C" bool Monitor_Monitor_test_synchronised_m19267 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Pulse(System.Object)
extern "C" void Monitor_Pulse_m19268 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Monitor_pulse_all(System.Object)
extern "C" void Monitor_Monitor_pulse_all_m19269 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::PulseAll(System.Object)
extern "C" void Monitor_PulseAll_m19270 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_wait(System.Object,System.Int32)
extern "C" bool Monitor_Monitor_wait_m19271 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Wait(System.Object)
extern "C" bool Monitor_Wait_m7835 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32)
extern "C" bool Monitor_Wait_m19272 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;

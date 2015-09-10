#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BounceLerp
struct BounceLerp_t605;

// System.Void BounceLerp::.ctor()
extern "C" void BounceLerp__ctor_m3758 (BounceLerp_t605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BounceLerp::GetCoefficientForTime(System.Single,System.Boolean&)
extern "C" float BounceLerp_GetCoefficientForTime_m3759 (BounceLerp_t605 * __this, float ___timeDelta, bool* ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;

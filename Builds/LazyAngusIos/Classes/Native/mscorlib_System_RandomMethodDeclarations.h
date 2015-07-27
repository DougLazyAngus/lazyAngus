#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Random
struct Random_t1187;

// System.Void System.Random::.ctor()
extern "C" void Random__ctor_m11598 (Random_t1187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor(System.Int32)
extern "C" void Random__ctor_m7177 (Random_t1187 * __this, int32_t ___Seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::Sample()
extern "C" double Random_Sample_m16315 (Random_t1187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32,System.Int32)
extern "C" int32_t Random_Next_m16316 (Random_t1187 * __this, int32_t ___minValue, int32_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t436;
// System.Int32[]
struct Int32U5BU5D_t462;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3545;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m2790_gshared (QuasiRandomGenerator_1_t436 * __this, Int32U5BU5D_t462* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m2790(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t436 *, Int32U5BU5D_t462*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m2790_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t3545 * QuasiRandomGenerator_1_RandomizeDistrubiton_m20895_gshared (QuasiRandomGenerator_1_t436 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m20895(__this, method) (( List_1_t3545 * (*) (QuasiRandomGenerator_1_t436 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m20895_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m2786_gshared (QuasiRandomGenerator_1_t436 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m2786(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t436 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m2786_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m20896_gshared (QuasiRandomGenerator_1_t436 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m20896(__this, method) (( void (*) (QuasiRandomGenerator_1_t436 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m20896_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t538;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t5644;
// System.Single[]
struct SingleU5BU5D_t535;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m26413_gshared (QuasiRandomGenerator_1_t538 * __this, List_1_t5644 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26413(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t538 *, List_1_t5644 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26413_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m3954_gshared (QuasiRandomGenerator_1_t538 * __this, SingleU5BU5D_t535* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3954(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t538 *, SingleU5BU5D_t535*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3954_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t5644 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26414_gshared (QuasiRandomGenerator_1_t538 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26414(__this, method) (( List_1_t5644 * (*) (QuasiRandomGenerator_1_t538 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26414_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m3948_gshared (QuasiRandomGenerator_1_t538 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3948(__this, method) (( float (*) (QuasiRandomGenerator_1_t538 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3948_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26415_gshared (QuasiRandomGenerator_1_t538 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26415(__this, method) (( void (*) (QuasiRandomGenerator_1_t538 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26415_gshared)(__this, method)

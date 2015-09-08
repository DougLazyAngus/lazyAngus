#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t591;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6277;
// System.Single[]
struct SingleU5BU5D_t588;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m31527_gshared (QuasiRandomGenerator_1_t591 * __this, List_1_t6277 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31527(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t591 *, List_1_t6277 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31527_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4421_gshared (QuasiRandomGenerator_1_t591 * __this, SingleU5BU5D_t588* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4421(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t591 *, SingleU5BU5D_t588*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4421_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t6277 * QuasiRandomGenerator_1_RandomizeDistrubiton_m31528_gshared (QuasiRandomGenerator_1_t591 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m31528(__this, method) (( List_1_t6277 * (*) (QuasiRandomGenerator_1_t591 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m31528_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4415_gshared (QuasiRandomGenerator_1_t591 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4415(__this, method) (( float (*) (QuasiRandomGenerator_1_t591 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4415_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m31529_gshared (QuasiRandomGenerator_1_t591 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m31529(__this, method) (( void (*) (QuasiRandomGenerator_1_t591 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m31529_gshared)(__this, method)

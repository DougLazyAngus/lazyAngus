#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t491;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t3672;
// System.Single[]
struct SingleU5BU5D_t488;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m22462_gshared (QuasiRandomGenerator_1_t491 * __this, List_1_t3672 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22462(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t491 *, List_1_t3672 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22462_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m3647_gshared (QuasiRandomGenerator_1_t491 * __this, SingleU5BU5D_t488* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3647(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t491 *, SingleU5BU5D_t488*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3647_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t3672 * QuasiRandomGenerator_1_RandomizeDistrubiton_m22463_gshared (QuasiRandomGenerator_1_t491 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m22463(__this, method) (( List_1_t3672 * (*) (QuasiRandomGenerator_1_t491 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m22463_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m3641_gshared (QuasiRandomGenerator_1_t491 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3641(__this, method) (( float (*) (QuasiRandomGenerator_1_t491 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3641_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m22464_gshared (QuasiRandomGenerator_1_t491 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m22464(__this, method) (( void (*) (QuasiRandomGenerator_1_t491 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m22464_gshared)(__this, method)

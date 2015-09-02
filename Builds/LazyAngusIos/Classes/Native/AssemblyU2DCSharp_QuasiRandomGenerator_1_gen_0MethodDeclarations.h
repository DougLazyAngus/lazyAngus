#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t590;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t5743;
// System.Single[]
struct SingleU5BU5D_t587;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27298_gshared (QuasiRandomGenerator_1_t590 * __this, List_1_t5743 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27298(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t590 *, List_1_t5743 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27298_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4406_gshared (QuasiRandomGenerator_1_t590 * __this, SingleU5BU5D_t587* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4406(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t590 *, SingleU5BU5D_t587*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4406_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t5743 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27299_gshared (QuasiRandomGenerator_1_t590 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27299(__this, method) (( List_1_t5743 * (*) (QuasiRandomGenerator_1_t590 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27299_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4400_gshared (QuasiRandomGenerator_1_t590 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4400(__this, method) (( float (*) (QuasiRandomGenerator_1_t590 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4400_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27300_gshared (QuasiRandomGenerator_1_t590 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27300(__this, method) (( void (*) (QuasiRandomGenerator_1_t590 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27300_gshared)(__this, method)

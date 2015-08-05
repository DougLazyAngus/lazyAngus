#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t547;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t5654;
// System.Single[]
struct SingleU5BU5D_t544;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m26482_gshared (QuasiRandomGenerator_1_t547 * __this, List_1_t5654 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26482(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t547 *, List_1_t5654 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26482_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4022_gshared (QuasiRandomGenerator_1_t547 * __this, SingleU5BU5D_t544* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4022(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t547 *, SingleU5BU5D_t544*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4022_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t5654 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26483_gshared (QuasiRandomGenerator_1_t547 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26483(__this, method) (( List_1_t5654 * (*) (QuasiRandomGenerator_1_t547 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26483_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4016_gshared (QuasiRandomGenerator_1_t547 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4016(__this, method) (( float (*) (QuasiRandomGenerator_1_t547 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4016_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26484_gshared (QuasiRandomGenerator_1_t547 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26484(__this, method) (( void (*) (QuasiRandomGenerator_1_t547 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26484_gshared)(__this, method)

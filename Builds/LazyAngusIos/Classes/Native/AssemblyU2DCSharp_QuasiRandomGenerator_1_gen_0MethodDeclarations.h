#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t453;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t3597;
// System.Single[]
struct SingleU5BU5D_t450;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m21379_gshared (QuasiRandomGenerator_1_t453 * __this, List_1_t3597 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21379(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t453 *, List_1_t3597 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21379_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m3059_gshared (QuasiRandomGenerator_1_t453 * __this, SingleU5BU5D_t450* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3059(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t453 *, SingleU5BU5D_t450*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3059_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t3597 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21380_gshared (QuasiRandomGenerator_1_t453 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21380(__this, method) (( List_1_t3597 * (*) (QuasiRandomGenerator_1_t453 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21380_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m3053_gshared (QuasiRandomGenerator_1_t453 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3053(__this, method) (( float (*) (QuasiRandomGenerator_1_t453 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3053_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21381_gshared (QuasiRandomGenerator_1_t453 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21381(__this, method) (( void (*) (QuasiRandomGenerator_1_t453 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21381_gshared)(__this, method)

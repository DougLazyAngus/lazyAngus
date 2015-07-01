#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t437;
// System.Single[]
struct SingleU5BU5D_t434;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t3555;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m2791_gshared (QuasiRandomGenerator_1_t437 * __this, SingleU5BU5D_t434* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m2791(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t437 *, SingleU5BU5D_t434*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m2791_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t3555 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21087_gshared (QuasiRandomGenerator_1_t437 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21087(__this, method) (( List_1_t3555 * (*) (QuasiRandomGenerator_1_t437 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21087_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m2783_gshared (QuasiRandomGenerator_1_t437 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m2783(__this, method) (( float (*) (QuasiRandomGenerator_1_t437 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m2783_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21088_gshared (QuasiRandomGenerator_1_t437 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21088(__this, method) (( void (*) (QuasiRandomGenerator_1_t437 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21088_gshared)(__this, method)

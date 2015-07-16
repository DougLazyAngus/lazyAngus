#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t453;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t3607;
// System.Single[]
struct SingleU5BU5D_t450;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m21440_gshared (QuasiRandomGenerator_1_t453 * __this, List_1_t3607 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21440(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t453 *, List_1_t3607 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21440_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m3116_gshared (QuasiRandomGenerator_1_t453 * __this, SingleU5BU5D_t450* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3116(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t453 *, SingleU5BU5D_t450*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3116_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t3607 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21441_gshared (QuasiRandomGenerator_1_t453 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21441(__this, method) (( List_1_t3607 * (*) (QuasiRandomGenerator_1_t453 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21441_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m3110_gshared (QuasiRandomGenerator_1_t453 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3110(__this, method) (( float (*) (QuasiRandomGenerator_1_t453 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3110_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21442_gshared (QuasiRandomGenerator_1_t453 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21442(__this, method) (( void (*) (QuasiRandomGenerator_1_t453 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21442_gshared)(__this, method)

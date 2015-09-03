#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t590;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6276;
// System.Single[]
struct SingleU5BU5D_t587;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m31514_gshared (QuasiRandomGenerator_1_t590 * __this, List_1_t6276 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31514(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t590 *, List_1_t6276 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31514_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4409_gshared (QuasiRandomGenerator_1_t590 * __this, SingleU5BU5D_t587* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4409(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t590 *, SingleU5BU5D_t587*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4409_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t6276 * QuasiRandomGenerator_1_RandomizeDistrubiton_m31515_gshared (QuasiRandomGenerator_1_t590 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m31515(__this, method) (( List_1_t6276 * (*) (QuasiRandomGenerator_1_t590 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m31515_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4403_gshared (QuasiRandomGenerator_1_t590 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4403(__this, method) (( float (*) (QuasiRandomGenerator_1_t590 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4403_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m31516_gshared (QuasiRandomGenerator_1_t590 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m31516(__this, method) (( void (*) (QuasiRandomGenerator_1_t590 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m31516_gshared)(__this, method)

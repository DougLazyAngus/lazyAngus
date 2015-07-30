#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t545;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t5651;
// System.Single[]
struct SingleU5BU5D_t542;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m26460_gshared (QuasiRandomGenerator_1_t545 * __this, List_1_t5651 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26460(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t545 *, List_1_t5651 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26460_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4001_gshared (QuasiRandomGenerator_1_t545 * __this, SingleU5BU5D_t542* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4001(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t545 *, SingleU5BU5D_t542*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4001_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t5651 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26461_gshared (QuasiRandomGenerator_1_t545 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26461(__this, method) (( List_1_t5651 * (*) (QuasiRandomGenerator_1_t545 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26461_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m3995_gshared (QuasiRandomGenerator_1_t545 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3995(__this, method) (( float (*) (QuasiRandomGenerator_1_t545 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3995_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26462_gshared (QuasiRandomGenerator_1_t545 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26462(__this, method) (( void (*) (QuasiRandomGenerator_1_t545 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26462_gshared)(__this, method)

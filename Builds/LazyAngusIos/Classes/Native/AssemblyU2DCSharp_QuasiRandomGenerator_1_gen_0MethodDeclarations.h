#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t586;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t5726;
// System.Single[]
struct SingleU5BU5D_t583;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27170_gshared (QuasiRandomGenerator_1_t586 * __this, List_1_t5726 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27170(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t586 *, List_1_t5726 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27170_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4275_gshared (QuasiRandomGenerator_1_t586 * __this, SingleU5BU5D_t583* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4275(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t586 *, SingleU5BU5D_t583*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4275_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t5726 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27171_gshared (QuasiRandomGenerator_1_t586 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27171(__this, method) (( List_1_t5726 * (*) (QuasiRandomGenerator_1_t586 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27171_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4269_gshared (QuasiRandomGenerator_1_t586 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4269(__this, method) (( float (*) (QuasiRandomGenerator_1_t586 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4269_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27172_gshared (QuasiRandomGenerator_1_t586 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27172(__this, method) (( void (*) (QuasiRandomGenerator_1_t586 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27172_gshared)(__this, method)

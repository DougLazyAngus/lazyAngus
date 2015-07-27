#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t494;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t3674;
// System.Single[]
struct SingleU5BU5D_t491;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m22473_gshared (QuasiRandomGenerator_1_t494 * __this, List_1_t3674 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22473(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t494 *, List_1_t3674 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22473_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m3658_gshared (QuasiRandomGenerator_1_t494 * __this, SingleU5BU5D_t491* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3658(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t494 *, SingleU5BU5D_t491*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3658_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t3674 * QuasiRandomGenerator_1_RandomizeDistrubiton_m22474_gshared (QuasiRandomGenerator_1_t494 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m22474(__this, method) (( List_1_t3674 * (*) (QuasiRandomGenerator_1_t494 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m22474_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m3652_gshared (QuasiRandomGenerator_1_t494 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3652(__this, method) (( float (*) (QuasiRandomGenerator_1_t494 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3652_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m22475_gshared (QuasiRandomGenerator_1_t494 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m22475(__this, method) (( void (*) (QuasiRandomGenerator_1_t494 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m22475_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t444;
// System.Single[]
struct SingleU5BU5D_t441;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t3579;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m2935_gshared (QuasiRandomGenerator_1_t444 * __this, SingleU5BU5D_t441* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m2935(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t444 *, SingleU5BU5D_t441*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m2935_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t3579 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21245_gshared (QuasiRandomGenerator_1_t444 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21245(__this, method) (( List_1_t3579 * (*) (QuasiRandomGenerator_1_t444 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21245_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m2927_gshared (QuasiRandomGenerator_1_t444 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m2927(__this, method) (( float (*) (QuasiRandomGenerator_1_t444 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m2927_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21246_gshared (QuasiRandomGenerator_1_t444 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21246(__this, method) (( void (*) (QuasiRandomGenerator_1_t444 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21246_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t443;
// System.Int32[]
struct Int32U5BU5D_t476;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3569;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m2934_gshared (QuasiRandomGenerator_1_t443 * __this, Int32U5BU5D_t476* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m2934(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t443 *, Int32U5BU5D_t476*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m2934_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t3569 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21053_gshared (QuasiRandomGenerator_1_t443 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21053(__this, method) (( List_1_t3569 * (*) (QuasiRandomGenerator_1_t443 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21053_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m2930_gshared (QuasiRandomGenerator_1_t443 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m2930(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t443 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m2930_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21054_gshared (QuasiRandomGenerator_1_t443 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21054(__this, method) (( void (*) (QuasiRandomGenerator_1_t443 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21054_gshared)(__this, method)

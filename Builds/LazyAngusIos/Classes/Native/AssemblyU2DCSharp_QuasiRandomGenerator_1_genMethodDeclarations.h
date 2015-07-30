#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t544;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t744;
// System.Int32[]
struct Int32U5BU5D_t547;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m3990_gshared (QuasiRandomGenerator_1_t544 * __this, List_1_t744 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3990(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t544 *, List_1_t744 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3990_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m26399_gshared (QuasiRandomGenerator_1_t544 * __this, Int32U5BU5D_t547* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26399(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t544 *, Int32U5BU5D_t547*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26399_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t744 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26401_gshared (QuasiRandomGenerator_1_t544 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26401(__this, method) (( List_1_t744 * (*) (QuasiRandomGenerator_1_t544 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26401_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m3991_gshared (QuasiRandomGenerator_1_t544 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3991(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t544 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3991_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26402_gshared (QuasiRandomGenerator_1_t544 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26402(__this, method) (( void (*) (QuasiRandomGenerator_1_t544 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26402_gshared)(__this, method)

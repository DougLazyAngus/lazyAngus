#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t452;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t644;
// System.Int32[]
struct Int32U5BU5D_t455;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m3105_gshared (QuasiRandomGenerator_1_t452 * __this, List_1_t644 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3105(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t452 *, List_1_t644 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3105_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m21386_gshared (QuasiRandomGenerator_1_t452 * __this, Int32U5BU5D_t455* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21386(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t452 *, Int32U5BU5D_t455*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21386_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t644 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21388_gshared (QuasiRandomGenerator_1_t452 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21388(__this, method) (( List_1_t644 * (*) (QuasiRandomGenerator_1_t452 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21388_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m3106_gshared (QuasiRandomGenerator_1_t452 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3106(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t452 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3106_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21389_gshared (QuasiRandomGenerator_1_t452 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21389(__this, method) (( void (*) (QuasiRandomGenerator_1_t452 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21389_gshared)(__this, method)

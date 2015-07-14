#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t452;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t634;
// System.Int32[]
struct Int32U5BU5D_t455;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m3048_gshared (QuasiRandomGenerator_1_t452 * __this, List_1_t634 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3048(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t452 *, List_1_t634 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3048_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m21325_gshared (QuasiRandomGenerator_1_t452 * __this, Int32U5BU5D_t455* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21325(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t452 *, Int32U5BU5D_t455*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21325_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t634 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21327_gshared (QuasiRandomGenerator_1_t452 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21327(__this, method) (( List_1_t634 * (*) (QuasiRandomGenerator_1_t452 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21327_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m3049_gshared (QuasiRandomGenerator_1_t452 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3049(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t452 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3049_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21328_gshared (QuasiRandomGenerator_1_t452 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21328(__this, method) (( void (*) (QuasiRandomGenerator_1_t452 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21328_gshared)(__this, method)

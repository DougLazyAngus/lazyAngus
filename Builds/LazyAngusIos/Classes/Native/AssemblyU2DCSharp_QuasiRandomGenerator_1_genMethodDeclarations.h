#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t591;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t815;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m4410_gshared (QuasiRandomGenerator_1_t591 * __this, List_1_t815 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4410(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t591 *, List_1_t815 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4410_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m31472_gshared (QuasiRandomGenerator_1_t591 * __this, Int32U5BU5D_t484* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31472(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t591 *, Int32U5BU5D_t484*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31472_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t815 * QuasiRandomGenerator_1_RandomizeDistrubiton_m31474_gshared (QuasiRandomGenerator_1_t591 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m31474(__this, method) (( List_1_t815 * (*) (QuasiRandomGenerator_1_t591 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m31474_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m4411_gshared (QuasiRandomGenerator_1_t591 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4411(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t591 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4411_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m31475_gshared (QuasiRandomGenerator_1_t591 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m31475(__this, method) (( void (*) (QuasiRandomGenerator_1_t591 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m31475_gshared)(__this, method)

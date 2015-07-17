#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t490;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t694;
// System.Int32[]
struct Int32U5BU5D_t493;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m3636_gshared (QuasiRandomGenerator_1_t490 * __this, List_1_t694 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3636(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t490 *, List_1_t694 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3636_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m22408_gshared (QuasiRandomGenerator_1_t490 * __this, Int32U5BU5D_t493* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22408(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t490 *, Int32U5BU5D_t493*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22408_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t694 * QuasiRandomGenerator_1_RandomizeDistrubiton_m22410_gshared (QuasiRandomGenerator_1_t490 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m22410(__this, method) (( List_1_t694 * (*) (QuasiRandomGenerator_1_t490 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m22410_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m3637_gshared (QuasiRandomGenerator_1_t490 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3637(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t490 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3637_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m22411_gshared (QuasiRandomGenerator_1_t490 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m22411(__this, method) (( void (*) (QuasiRandomGenerator_1_t490 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m22411_gshared)(__this, method)

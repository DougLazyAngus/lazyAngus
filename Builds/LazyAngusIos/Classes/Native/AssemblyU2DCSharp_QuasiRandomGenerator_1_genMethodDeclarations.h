#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t492;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t695;
// System.Int32[]
struct Int32U5BU5D_t495;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m3644_gshared (QuasiRandomGenerator_1_t492 * __this, List_1_t695 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3644(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t492 *, List_1_t695 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3644_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m22416_gshared (QuasiRandomGenerator_1_t492 * __this, Int32U5BU5D_t495* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22416(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t492 *, Int32U5BU5D_t495*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22416_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t695 * QuasiRandomGenerator_1_RandomizeDistrubiton_m22418_gshared (QuasiRandomGenerator_1_t492 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m22418(__this, method) (( List_1_t695 * (*) (QuasiRandomGenerator_1_t492 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m22418_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m3645_gshared (QuasiRandomGenerator_1_t492 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3645(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t492 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3645_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m22419_gshared (QuasiRandomGenerator_1_t492 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m22419(__this, method) (( void (*) (QuasiRandomGenerator_1_t492 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m22419_gshared)(__this, method)

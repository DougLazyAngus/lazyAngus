#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t537;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t738;
// System.Int32[]
struct Int32U5BU5D_t540;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m3943_gshared (QuasiRandomGenerator_1_t537 * __this, List_1_t738 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3943(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t537 *, List_1_t738 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3943_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m26352_gshared (QuasiRandomGenerator_1_t537 * __this, Int32U5BU5D_t540* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26352(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t537 *, Int32U5BU5D_t540*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26352_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t738 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26354_gshared (QuasiRandomGenerator_1_t537 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26354(__this, method) (( List_1_t738 * (*) (QuasiRandomGenerator_1_t537 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26354_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m3944_gshared (QuasiRandomGenerator_1_t537 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3944(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t537 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3944_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26355_gshared (QuasiRandomGenerator_1_t537 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26355(__this, method) (( void (*) (QuasiRandomGenerator_1_t537 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26355_gshared)(__this, method)

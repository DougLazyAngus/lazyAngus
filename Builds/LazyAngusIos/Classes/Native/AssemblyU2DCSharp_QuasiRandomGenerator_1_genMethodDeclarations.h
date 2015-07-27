#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t493;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t696;
// System.Int32[]
struct Int32U5BU5D_t496;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m3651_gshared (QuasiRandomGenerator_1_t493 * __this, List_1_t696 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3651(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t493 *, List_1_t696 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3651_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m22423_gshared (QuasiRandomGenerator_1_t493 * __this, Int32U5BU5D_t496* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22423(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t493 *, Int32U5BU5D_t496*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22423_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t696 * QuasiRandomGenerator_1_RandomizeDistrubiton_m22425_gshared (QuasiRandomGenerator_1_t493 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m22425(__this, method) (( List_1_t696 * (*) (QuasiRandomGenerator_1_t493 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m22425_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m3652_gshared (QuasiRandomGenerator_1_t493 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3652(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t493 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3652_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m22426_gshared (QuasiRandomGenerator_1_t493 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m22426(__this, method) (( void (*) (QuasiRandomGenerator_1_t493 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m22426_gshared)(__this, method)

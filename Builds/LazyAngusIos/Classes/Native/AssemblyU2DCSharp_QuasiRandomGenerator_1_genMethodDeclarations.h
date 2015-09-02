#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t589;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t811;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m4395_gshared (QuasiRandomGenerator_1_t589 * __this, List_1_t811 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4395(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t589 *, List_1_t811 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4395_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m27237_gshared (QuasiRandomGenerator_1_t589 * __this, Int32U5BU5D_t484* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27237(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t589 *, Int32U5BU5D_t484*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27237_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t811 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27239_gshared (QuasiRandomGenerator_1_t589 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27239(__this, method) (( List_1_t811 * (*) (QuasiRandomGenerator_1_t589 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27239_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m4396_gshared (QuasiRandomGenerator_1_t589 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4396(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t589 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4396_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27240_gshared (QuasiRandomGenerator_1_t589 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27240(__this, method) (( void (*) (QuasiRandomGenerator_1_t589 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27240_gshared)(__this, method)

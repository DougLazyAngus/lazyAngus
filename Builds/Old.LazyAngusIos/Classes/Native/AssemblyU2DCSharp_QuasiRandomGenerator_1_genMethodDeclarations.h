#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t453;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t636;
// System.Int32[]
struct Int32U5BU5D_t456;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m3073_gshared (QuasiRandomGenerator_1_t453 * __this, List_1_t636 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3073(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t453 *, List_1_t636 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3073_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m21350_gshared (QuasiRandomGenerator_1_t453 * __this, Int32U5BU5D_t456* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21350(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t453 *, Int32U5BU5D_t456*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21350_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t636 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21352_gshared (QuasiRandomGenerator_1_t453 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21352(__this, method) (( List_1_t636 * (*) (QuasiRandomGenerator_1_t453 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21352_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m3074_gshared (QuasiRandomGenerator_1_t453 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3074(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t453 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3074_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21353_gshared (QuasiRandomGenerator_1_t453 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21353(__this, method) (( void (*) (QuasiRandomGenerator_1_t453 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21353_gshared)(__this, method)

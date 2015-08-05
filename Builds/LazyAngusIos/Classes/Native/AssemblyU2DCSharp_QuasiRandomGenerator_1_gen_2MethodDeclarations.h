#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t5681;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t640;
// System.Object[]
struct ObjectU5BU5D_t638;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m26811_gshared (QuasiRandomGenerator_1_t5681 * __this, List_1_t640 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26811(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5681 *, List_1_t640 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26811_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m26812_gshared (QuasiRandomGenerator_1_t5681 * __this, ObjectU5BU5D_t638* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26812(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5681 *, ObjectU5BU5D_t638*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26812_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t640 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26813_gshared (QuasiRandomGenerator_1_t5681 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26813(__this, method) (( List_1_t640 * (*) (QuasiRandomGenerator_1_t5681 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26813_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m26814_gshared (QuasiRandomGenerator_1_t5681 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m26814(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t5681 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m26814_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26815_gshared (QuasiRandomGenerator_1_t5681 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26815(__this, method) (( void (*) (QuasiRandomGenerator_1_t5681 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26815_gshared)(__this, method)

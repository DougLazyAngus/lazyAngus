#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t6340;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t709;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m32267_gshared (QuasiRandomGenerator_1_t6340 * __this, List_1_t709 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m32267(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t6340 *, List_1_t709 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m32267_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m32268_gshared (QuasiRandomGenerator_1_t6340 * __this, ObjectU5BU5D_t707* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m32268(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t6340 *, ObjectU5BU5D_t707*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m32268_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t709 * QuasiRandomGenerator_1_RandomizeDistrubiton_m32269_gshared (QuasiRandomGenerator_1_t6340 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m32269(__this, method) (( List_1_t709 * (*) (QuasiRandomGenerator_1_t6340 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m32269_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m32270_gshared (QuasiRandomGenerator_1_t6340 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m32270(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t6340 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m32270_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m32271_gshared (QuasiRandomGenerator_1_t6340 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m32271(__this, method) (( void (*) (QuasiRandomGenerator_1_t6340 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m32271_gshared)(__this, method)

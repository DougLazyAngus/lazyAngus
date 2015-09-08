#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t6316;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t702;
// System.Object[]
struct ObjectU5BU5D_t700;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m31974_gshared (QuasiRandomGenerator_1_t6316 * __this, List_1_t702 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31974(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t6316 *, List_1_t702 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31974_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m31975_gshared (QuasiRandomGenerator_1_t6316 * __this, ObjectU5BU5D_t700* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31975(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t6316 *, ObjectU5BU5D_t700*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31975_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t702 * QuasiRandomGenerator_1_RandomizeDistrubiton_m31976_gshared (QuasiRandomGenerator_1_t6316 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m31976(__this, method) (( List_1_t702 * (*) (QuasiRandomGenerator_1_t6316 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m31976_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m31977_gshared (QuasiRandomGenerator_1_t6316 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m31977(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t6316 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m31977_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m31978_gshared (QuasiRandomGenerator_1_t6316 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m31978(__this, method) (( void (*) (QuasiRandomGenerator_1_t6316 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m31978_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t6311;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t699;
// System.Object[]
struct ObjectU5BU5D_t697;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m31962_gshared (QuasiRandomGenerator_1_t6311 * __this, List_1_t699 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31962(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t6311 *, List_1_t699 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31962_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m31963_gshared (QuasiRandomGenerator_1_t6311 * __this, ObjectU5BU5D_t697* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31963(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t6311 *, ObjectU5BU5D_t697*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31963_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t699 * QuasiRandomGenerator_1_RandomizeDistrubiton_m31964_gshared (QuasiRandomGenerator_1_t6311 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m31964(__this, method) (( List_1_t699 * (*) (QuasiRandomGenerator_1_t6311 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m31964_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m31965_gshared (QuasiRandomGenerator_1_t6311 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m31965(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t6311 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m31965_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m31966_gshared (QuasiRandomGenerator_1_t6311 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m31966(__this, method) (( void (*) (QuasiRandomGenerator_1_t6311 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m31966_gshared)(__this, method)

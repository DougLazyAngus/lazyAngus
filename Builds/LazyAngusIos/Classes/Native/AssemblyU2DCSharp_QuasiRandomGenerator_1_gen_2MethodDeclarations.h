#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t3698;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t582;
// System.Object[]
struct ObjectU5BU5D_t580;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m22769_gshared (QuasiRandomGenerator_1_t3698 * __this, List_1_t582 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22769(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t3698 *, List_1_t582 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22769_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m22770_gshared (QuasiRandomGenerator_1_t3698 * __this, ObjectU5BU5D_t580* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22770(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t3698 *, ObjectU5BU5D_t580*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22770_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t582 * QuasiRandomGenerator_1_RandomizeDistrubiton_m22771_gshared (QuasiRandomGenerator_1_t3698 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m22771(__this, method) (( List_1_t582 * (*) (QuasiRandomGenerator_1_t3698 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m22771_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m22772_gshared (QuasiRandomGenerator_1_t3698 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m22772(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t3698 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m22772_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m22773_gshared (QuasiRandomGenerator_1_t3698 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m22773(__this, method) (( void (*) (QuasiRandomGenerator_1_t3698 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m22773_gshared)(__this, method)

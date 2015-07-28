#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t5669;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t628;
// System.Object[]
struct ObjectU5BU5D_t626;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m26733_gshared (QuasiRandomGenerator_1_t5669 * __this, List_1_t628 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26733(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5669 *, List_1_t628 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26733_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m26734_gshared (QuasiRandomGenerator_1_t5669 * __this, ObjectU5BU5D_t626* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26734(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5669 *, ObjectU5BU5D_t626*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26734_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t628 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26735_gshared (QuasiRandomGenerator_1_t5669 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26735(__this, method) (( List_1_t628 * (*) (QuasiRandomGenerator_1_t5669 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26735_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m26736_gshared (QuasiRandomGenerator_1_t5669 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m26736(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t5669 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m26736_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26737_gshared (QuasiRandomGenerator_1_t5669 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26737(__this, method) (( void (*) (QuasiRandomGenerator_1_t5669 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26737_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t5753;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t684;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27480_gshared (QuasiRandomGenerator_1_t5753 * __this, List_1_t684 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27480(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5753 *, List_1_t684 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27480_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m27481_gshared (QuasiRandomGenerator_1_t5753 * __this, ObjectU5BU5D_t682* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27481(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5753 *, ObjectU5BU5D_t682*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27481_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t684 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27482_gshared (QuasiRandomGenerator_1_t5753 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27482(__this, method) (( List_1_t684 * (*) (QuasiRandomGenerator_1_t5753 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27482_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m27483_gshared (QuasiRandomGenerator_1_t5753 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m27483(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t5753 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m27483_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27484_gshared (QuasiRandomGenerator_1_t5753 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27484(__this, method) (( void (*) (QuasiRandomGenerator_1_t5753 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27484_gshared)(__this, method)

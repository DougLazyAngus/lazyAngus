#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t5757;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t682;
// System.Object[]
struct ObjectU5BU5D_t680;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27571_gshared (QuasiRandomGenerator_1_t5757 * __this, List_1_t682 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27571(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5757 *, List_1_t682 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27571_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m27572_gshared (QuasiRandomGenerator_1_t5757 * __this, ObjectU5BU5D_t680* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27572(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5757 *, ObjectU5BU5D_t680*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27572_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t682 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27573_gshared (QuasiRandomGenerator_1_t5757 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27573(__this, method) (( List_1_t682 * (*) (QuasiRandomGenerator_1_t5757 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27573_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m27574_gshared (QuasiRandomGenerator_1_t5757 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m27574(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t5757 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m27574_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27575_gshared (QuasiRandomGenerator_1_t5757 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27575(__this, method) (( void (*) (QuasiRandomGenerator_1_t5757 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27575_gshared)(__this, method)

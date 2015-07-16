#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t3633;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t543;
// System.Object[]
struct ObjectU5BU5D_t541;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m21747_gshared (QuasiRandomGenerator_1_t3633 * __this, List_1_t543 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21747(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t3633 *, List_1_t543 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21747_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m21748_gshared (QuasiRandomGenerator_1_t3633 * __this, ObjectU5BU5D_t541* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21748(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t3633 *, ObjectU5BU5D_t541*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21748_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t543 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21749_gshared (QuasiRandomGenerator_1_t3633 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21749(__this, method) (( List_1_t543 * (*) (QuasiRandomGenerator_1_t3633 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21749_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m21750_gshared (QuasiRandomGenerator_1_t3633 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m21750(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t3633 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m21750_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21751_gshared (QuasiRandomGenerator_1_t3633 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21751(__this, method) (( void (*) (QuasiRandomGenerator_1_t3633 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21751_gshared)(__this, method)

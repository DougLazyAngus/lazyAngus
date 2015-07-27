#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t3699;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t583;
// System.Object[]
struct ObjectU5BU5D_t581;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m22777_gshared (QuasiRandomGenerator_1_t3699 * __this, List_1_t583 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22777(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t3699 *, List_1_t583 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22777_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m22778_gshared (QuasiRandomGenerator_1_t3699 * __this, ObjectU5BU5D_t581* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22778(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t3699 *, ObjectU5BU5D_t581*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22778_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t583 * QuasiRandomGenerator_1_RandomizeDistrubiton_m22779_gshared (QuasiRandomGenerator_1_t3699 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m22779(__this, method) (( List_1_t583 * (*) (QuasiRandomGenerator_1_t3699 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m22779_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m22780_gshared (QuasiRandomGenerator_1_t3699 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m22780(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t3699 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m22780_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m22781_gshared (QuasiRandomGenerator_1_t3699 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m22781(__this, method) (( void (*) (QuasiRandomGenerator_1_t3699 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m22781_gshared)(__this, method)

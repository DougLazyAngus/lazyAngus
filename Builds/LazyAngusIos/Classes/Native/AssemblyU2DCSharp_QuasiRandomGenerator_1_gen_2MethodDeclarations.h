#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t5677;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t636;
// System.Object[]
struct ObjectU5BU5D_t634;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m26780_gshared (QuasiRandomGenerator_1_t5677 * __this, List_1_t636 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26780(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5677 *, List_1_t636 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26780_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m26781_gshared (QuasiRandomGenerator_1_t5677 * __this, ObjectU5BU5D_t634* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26781(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5677 *, ObjectU5BU5D_t634*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26781_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t636 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26782_gshared (QuasiRandomGenerator_1_t5677 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26782(__this, method) (( List_1_t636 * (*) (QuasiRandomGenerator_1_t5677 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26782_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m26783_gshared (QuasiRandomGenerator_1_t5677 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m26783(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t5677 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m26783_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26784_gshared (QuasiRandomGenerator_1_t5677 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26784(__this, method) (( void (*) (QuasiRandomGenerator_1_t5677 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26784_gshared)(__this, method)

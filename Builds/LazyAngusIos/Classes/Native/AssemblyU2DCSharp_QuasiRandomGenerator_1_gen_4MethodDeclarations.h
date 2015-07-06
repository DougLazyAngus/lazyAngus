#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t3606;
// System.Object[]
struct ObjectU5BU5D_t509;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t511;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m21656_gshared (QuasiRandomGenerator_1_t3606 * __this, ObjectU5BU5D_t509* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21656(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t3606 *, ObjectU5BU5D_t509*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21656_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t511 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21657_gshared (QuasiRandomGenerator_1_t3606 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21657(__this, method) (( List_1_t511 * (*) (QuasiRandomGenerator_1_t3606 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21657_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m21658_gshared (QuasiRandomGenerator_1_t3606 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m21658(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t3606 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m21658_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21659_gshared (QuasiRandomGenerator_1_t3606 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21659(__this, method) (( void (*) (QuasiRandomGenerator_1_t3606 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21659_gshared)(__this, method)

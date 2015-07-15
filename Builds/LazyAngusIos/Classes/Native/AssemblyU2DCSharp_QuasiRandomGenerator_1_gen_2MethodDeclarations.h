#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t3625;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t535;
// System.Object[]
struct ObjectU5BU5D_t533;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m21711_gshared (QuasiRandomGenerator_1_t3625 * __this, List_1_t535 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21711(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t3625 *, List_1_t535 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21711_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m21712_gshared (QuasiRandomGenerator_1_t3625 * __this, ObjectU5BU5D_t533* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21712(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t3625 *, ObjectU5BU5D_t533*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21712_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t535 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21713_gshared (QuasiRandomGenerator_1_t3625 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21713(__this, method) (( List_1_t535 * (*) (QuasiRandomGenerator_1_t3625 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21713_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m21714_gshared (QuasiRandomGenerator_1_t3625 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m21714(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t3625 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m21714_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21715_gshared (QuasiRandomGenerator_1_t3625 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21715(__this, method) (( void (*) (QuasiRandomGenerator_1_t3625 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21715_gshared)(__this, method)

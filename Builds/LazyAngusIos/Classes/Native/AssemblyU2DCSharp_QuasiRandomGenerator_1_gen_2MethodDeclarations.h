#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t5760;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t685;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27604_gshared (QuasiRandomGenerator_1_t5760 * __this, List_1_t685 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27604(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5760 *, List_1_t685 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27604_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m27605_gshared (QuasiRandomGenerator_1_t5760 * __this, ObjectU5BU5D_t683* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27605(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5760 *, ObjectU5BU5D_t683*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27605_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t685 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27606_gshared (QuasiRandomGenerator_1_t5760 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27606(__this, method) (( List_1_t685 * (*) (QuasiRandomGenerator_1_t5760 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27606_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m27607_gshared (QuasiRandomGenerator_1_t5760 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m27607(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t5760 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m27607_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27608_gshared (QuasiRandomGenerator_1_t5760 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27608(__this, method) (( void (*) (QuasiRandomGenerator_1_t5760 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27608_gshared)(__this, method)

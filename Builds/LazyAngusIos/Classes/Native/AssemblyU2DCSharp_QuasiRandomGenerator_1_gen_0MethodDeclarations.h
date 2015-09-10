#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t676;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6314;
// System.Single[]
struct SingleU5BU5D_t541;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m31945_gshared (QuasiRandomGenerator_1_t676 * __this, List_1_t6314 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31945(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t676 *, List_1_t6314 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31945_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4540_gshared (QuasiRandomGenerator_1_t676 * __this, SingleU5BU5D_t541* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4540(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t676 *, SingleU5BU5D_t541*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4540_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t6314 * QuasiRandomGenerator_1_RandomizeDistrubiton_m31946_gshared (QuasiRandomGenerator_1_t676 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m31946(__this, method) (( List_1_t6314 * (*) (QuasiRandomGenerator_1_t676 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m31946_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4534_gshared (QuasiRandomGenerator_1_t676 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4534(__this, method) (( float (*) (QuasiRandomGenerator_1_t676 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4534_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m31947_gshared (QuasiRandomGenerator_1_t676 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m31947(__this, method) (( void (*) (QuasiRandomGenerator_1_t676 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m31947_gshared)(__this, method)

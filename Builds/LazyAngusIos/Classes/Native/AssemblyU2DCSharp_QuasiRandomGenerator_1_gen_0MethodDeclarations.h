#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t546;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t5652;
// System.Single[]
struct SingleU5BU5D_t543;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m26470_gshared (QuasiRandomGenerator_1_t546 * __this, List_1_t5652 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26470(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t546 *, List_1_t5652 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26470_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4010_gshared (QuasiRandomGenerator_1_t546 * __this, SingleU5BU5D_t543* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4010(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t546 *, SingleU5BU5D_t543*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4010_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t5652 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26471_gshared (QuasiRandomGenerator_1_t546 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26471(__this, method) (( List_1_t5652 * (*) (QuasiRandomGenerator_1_t546 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26471_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4004_gshared (QuasiRandomGenerator_1_t546 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4004(__this, method) (( float (*) (QuasiRandomGenerator_1_t546 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4004_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26472_gshared (QuasiRandomGenerator_1_t546 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26472(__this, method) (( void (*) (QuasiRandomGenerator_1_t546 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26472_gshared)(__this, method)

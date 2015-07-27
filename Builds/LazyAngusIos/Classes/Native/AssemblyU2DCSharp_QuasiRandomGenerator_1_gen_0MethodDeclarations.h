#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t493;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t3673;
// System.Single[]
struct SingleU5BU5D_t490;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m22470_gshared (QuasiRandomGenerator_1_t493 * __this, List_1_t3673 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22470(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t493 *, List_1_t3673 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22470_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m3655_gshared (QuasiRandomGenerator_1_t493 * __this, SingleU5BU5D_t490* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3655(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t493 *, SingleU5BU5D_t490*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3655_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t3673 * QuasiRandomGenerator_1_RandomizeDistrubiton_m22471_gshared (QuasiRandomGenerator_1_t493 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m22471(__this, method) (( List_1_t3673 * (*) (QuasiRandomGenerator_1_t493 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m22471_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m3649_gshared (QuasiRandomGenerator_1_t493 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3649(__this, method) (( float (*) (QuasiRandomGenerator_1_t493 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3649_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m22472_gshared (QuasiRandomGenerator_1_t493 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m22472(__this, method) (( void (*) (QuasiRandomGenerator_1_t493 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m22472_gshared)(__this, method)

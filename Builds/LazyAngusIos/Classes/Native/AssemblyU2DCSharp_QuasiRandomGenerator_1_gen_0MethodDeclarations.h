#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t592;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6281;
// System.Single[]
struct SingleU5BU5D_t589;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m31533_gshared (QuasiRandomGenerator_1_t592 * __this, List_1_t6281 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31533(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t592 *, List_1_t6281 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31533_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4421_gshared (QuasiRandomGenerator_1_t592 * __this, SingleU5BU5D_t589* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4421(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t592 *, SingleU5BU5D_t589*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4421_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t6281 * QuasiRandomGenerator_1_RandomizeDistrubiton_m31534_gshared (QuasiRandomGenerator_1_t592 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m31534(__this, method) (( List_1_t6281 * (*) (QuasiRandomGenerator_1_t592 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m31534_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4415_gshared (QuasiRandomGenerator_1_t592 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4415(__this, method) (( float (*) (QuasiRandomGenerator_1_t592 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4415_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m31535_gshared (QuasiRandomGenerator_1_t592 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m31535(__this, method) (( void (*) (QuasiRandomGenerator_1_t592 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m31535_gshared)(__this, method)

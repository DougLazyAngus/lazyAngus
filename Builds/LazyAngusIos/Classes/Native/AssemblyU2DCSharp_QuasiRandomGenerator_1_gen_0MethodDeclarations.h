#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t589;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t5725;
// System.Single[]
struct SingleU5BU5D_t586;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27151_gshared (QuasiRandomGenerator_1_t589 * __this, List_1_t5725 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27151(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t589 *, List_1_t5725 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27151_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4265_gshared (QuasiRandomGenerator_1_t589 * __this, SingleU5BU5D_t586* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4265(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t589 *, SingleU5BU5D_t586*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4265_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t5725 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27152_gshared (QuasiRandomGenerator_1_t589 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27152(__this, method) (( List_1_t5725 * (*) (QuasiRandomGenerator_1_t589 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27152_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4259_gshared (QuasiRandomGenerator_1_t589 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4259(__this, method) (( float (*) (QuasiRandomGenerator_1_t589 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4259_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27153_gshared (QuasiRandomGenerator_1_t589 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27153(__this, method) (( void (*) (QuasiRandomGenerator_1_t589 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27153_gshared)(__this, method)

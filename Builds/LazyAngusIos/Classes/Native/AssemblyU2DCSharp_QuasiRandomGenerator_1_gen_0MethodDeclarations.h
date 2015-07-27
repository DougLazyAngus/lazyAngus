#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t494;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t3674;
// System.Single[]
struct SingleU5BU5D_t491;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m22477_gshared (QuasiRandomGenerator_1_t494 * __this, List_1_t3674 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m22477(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t494 *, List_1_t3674 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m22477_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m3662_gshared (QuasiRandomGenerator_1_t494 * __this, SingleU5BU5D_t491* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3662(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t494 *, SingleU5BU5D_t491*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3662_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t3674 * QuasiRandomGenerator_1_RandomizeDistrubiton_m22478_gshared (QuasiRandomGenerator_1_t494 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m22478(__this, method) (( List_1_t3674 * (*) (QuasiRandomGenerator_1_t494 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m22478_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m3656_gshared (QuasiRandomGenerator_1_t494 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3656(__this, method) (( float (*) (QuasiRandomGenerator_1_t494 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3656_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m22479_gshared (QuasiRandomGenerator_1_t494 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m22479(__this, method) (( void (*) (QuasiRandomGenerator_1_t494 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m22479_gshared)(__this, method)

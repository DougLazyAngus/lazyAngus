#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t585;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t5723;
// System.Single[]
struct SingleU5BU5D_t582;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27137_gshared (QuasiRandomGenerator_1_t585 * __this, List_1_t5723 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27137(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t585 *, List_1_t5723 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27137_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m4245_gshared (QuasiRandomGenerator_1_t585 * __this, SingleU5BU5D_t582* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4245(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t585 *, SingleU5BU5D_t582*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4245_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t5723 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27138_gshared (QuasiRandomGenerator_1_t585 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27138(__this, method) (( List_1_t5723 * (*) (QuasiRandomGenerator_1_t585 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27138_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m4239_gshared (QuasiRandomGenerator_1_t585 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4239(__this, method) (( float (*) (QuasiRandomGenerator_1_t585 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4239_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27139_gshared (QuasiRandomGenerator_1_t585 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27139(__this, method) (( void (*) (QuasiRandomGenerator_1_t585 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27139_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Single>
struct QuasiRandomGenerator_1_t454;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t3599;
// System.Single[]
struct SingleU5BU5D_t451;

// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m21404_gshared (QuasiRandomGenerator_1_t454 * __this, List_1_t3599 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m21404(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t454 *, List_1_t3599 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m21404_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Single>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m3084_gshared (QuasiRandomGenerator_1_t454 * __this, SingleU5BU5D_t451* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m3084(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t454 *, SingleU5BU5D_t451*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m3084_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Single>::RandomizeDistrubiton()
extern "C" List_1_t3599 * QuasiRandomGenerator_1_RandomizeDistrubiton_m21405_gshared (QuasiRandomGenerator_1_t454 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m21405(__this, method) (( List_1_t3599 * (*) (QuasiRandomGenerator_1_t454 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m21405_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Single>::GetNextValue()
extern "C" float QuasiRandomGenerator_1_GetNextValue_m3078_gshared (QuasiRandomGenerator_1_t454 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m3078(__this, method) (( float (*) (QuasiRandomGenerator_1_t454 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m3078_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Single>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m21406_gshared (QuasiRandomGenerator_1_t454 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m21406(__this, method) (( void (*) (QuasiRandomGenerator_1_t454 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m21406_gshared)(__this, method)

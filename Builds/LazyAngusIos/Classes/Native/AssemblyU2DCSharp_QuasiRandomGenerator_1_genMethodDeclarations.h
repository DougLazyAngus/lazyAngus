#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t546;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t747;
// System.Int32[]
struct Int32U5BU5D_t549;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m4013_gshared (QuasiRandomGenerator_1_t546 * __this, List_1_t747 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4013(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t546 *, List_1_t747 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4013_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m26424_gshared (QuasiRandomGenerator_1_t546 * __this, Int32U5BU5D_t549* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m26424(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t546 *, Int32U5BU5D_t549*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m26424_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t747 * QuasiRandomGenerator_1_RandomizeDistrubiton_m26426_gshared (QuasiRandomGenerator_1_t546 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m26426(__this, method) (( List_1_t747 * (*) (QuasiRandomGenerator_1_t546 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m26426_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m4014_gshared (QuasiRandomGenerator_1_t546 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4014(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t546 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4014_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m26427_gshared (QuasiRandomGenerator_1_t546 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m26427(__this, method) (( void (*) (QuasiRandomGenerator_1_t546 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m26427_gshared)(__this, method)

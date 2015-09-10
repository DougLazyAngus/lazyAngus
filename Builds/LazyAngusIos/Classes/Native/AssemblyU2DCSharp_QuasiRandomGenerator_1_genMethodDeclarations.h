#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t675;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t825;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m4530_gshared (QuasiRandomGenerator_1_t675 * __this, List_1_t825 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4530(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t675 *, List_1_t825 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4530_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m31884_gshared (QuasiRandomGenerator_1_t675 * __this, Int32U5BU5D_t484* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m31884(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t675 *, Int32U5BU5D_t484*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m31884_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t825 * QuasiRandomGenerator_1_RandomizeDistrubiton_m31886_gshared (QuasiRandomGenerator_1_t675 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m31886(__this, method) (( List_1_t825 * (*) (QuasiRandomGenerator_1_t675 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m31886_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m4531_gshared (QuasiRandomGenerator_1_t675 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4531(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t675 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4531_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m31887_gshared (QuasiRandomGenerator_1_t675 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m31887(__this, method) (( void (*) (QuasiRandomGenerator_1_t675 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m31887_gshared)(__this, method)

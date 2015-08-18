#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t588;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t797;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m4251_gshared (QuasiRandomGenerator_1_t588 * __this, List_1_t797 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4251(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t588 *, List_1_t797 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4251_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m27087_gshared (QuasiRandomGenerator_1_t588 * __this, Int32U5BU5D_t484* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27087(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t588 *, Int32U5BU5D_t484*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27087_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t797 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27089_gshared (QuasiRandomGenerator_1_t588 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27089(__this, method) (( List_1_t797 * (*) (QuasiRandomGenerator_1_t588 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27089_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m4252_gshared (QuasiRandomGenerator_1_t588 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4252(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t588 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4252_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27090_gshared (QuasiRandomGenerator_1_t588 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27090(__this, method) (( void (*) (QuasiRandomGenerator_1_t588 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27090_gshared)(__this, method)

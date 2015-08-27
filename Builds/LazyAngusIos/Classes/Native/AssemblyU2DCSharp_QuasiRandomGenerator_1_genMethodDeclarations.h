#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t585;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t798;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m4264_gshared (QuasiRandomGenerator_1_t585 * __this, List_1_t798 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m4264(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t585 *, List_1_t798 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m4264_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m27109_gshared (QuasiRandomGenerator_1_t585 * __this, Int32U5BU5D_t484* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27109(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t585 *, Int32U5BU5D_t484*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27109_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Int32>::RandomizeDistrubiton()
extern "C" List_1_t798 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27111_gshared (QuasiRandomGenerator_1_t585 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27111(__this, method) (( List_1_t798 * (*) (QuasiRandomGenerator_1_t585 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27111_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Int32>::GetNextValue()
extern "C" int32_t QuasiRandomGenerator_1_GetNextValue_m4265_gshared (QuasiRandomGenerator_1_t585 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m4265(__this, method) (( int32_t (*) (QuasiRandomGenerator_1_t585 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m4265_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Int32>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27112_gshared (QuasiRandomGenerator_1_t585 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27112(__this, method) (( void (*) (QuasiRandomGenerator_1_t585 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27112_gshared)(__this, method)

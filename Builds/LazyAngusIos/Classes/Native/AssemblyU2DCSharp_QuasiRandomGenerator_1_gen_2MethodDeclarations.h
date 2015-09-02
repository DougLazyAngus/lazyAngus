#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// QuasiRandomGenerator`1<System.Object>
struct QuasiRandomGenerator_1_t5777;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t698;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Object
struct Object_t;

// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void QuasiRandomGenerator_1__ctor_m27732_gshared (QuasiRandomGenerator_1_t5777 * __this, List_1_t698 * ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27732(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5777 *, List_1_t698 *, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27732_gshared)(__this, ___distribution, method)
// System.Void QuasiRandomGenerator`1<System.Object>::.ctor(T[])
extern "C" void QuasiRandomGenerator_1__ctor_m27733_gshared (QuasiRandomGenerator_1_t5777 * __this, ObjectU5BU5D_t696* ___distribution, const MethodInfo* method);
#define QuasiRandomGenerator_1__ctor_m27733(__this, ___distribution, method) (( void (*) (QuasiRandomGenerator_1_t5777 *, ObjectU5BU5D_t696*, const MethodInfo*))QuasiRandomGenerator_1__ctor_m27733_gshared)(__this, ___distribution, method)
// System.Collections.Generic.List`1<T> QuasiRandomGenerator`1<System.Object>::RandomizeDistrubiton()
extern "C" List_1_t698 * QuasiRandomGenerator_1_RandomizeDistrubiton_m27734_gshared (QuasiRandomGenerator_1_t5777 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RandomizeDistrubiton_m27734(__this, method) (( List_1_t698 * (*) (QuasiRandomGenerator_1_t5777 *, const MethodInfo*))QuasiRandomGenerator_1_RandomizeDistrubiton_m27734_gshared)(__this, method)
// T QuasiRandomGenerator`1<System.Object>::GetNextValue()
extern "C" Object_t * QuasiRandomGenerator_1_GetNextValue_m27735_gshared (QuasiRandomGenerator_1_t5777 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_GetNextValue_m27735(__this, method) (( Object_t * (*) (QuasiRandomGenerator_1_t5777 *, const MethodInfo*))QuasiRandomGenerator_1_GetNextValue_m27735_gshared)(__this, method)
// System.Void QuasiRandomGenerator`1<System.Object>::RefreshValues()
extern "C" void QuasiRandomGenerator_1_RefreshValues_m27736_gshared (QuasiRandomGenerator_1_t5777 * __this, const MethodInfo* method);
#define QuasiRandomGenerator_1_RefreshValues_m27736(__this, method) (( void (*) (QuasiRandomGenerator_1_t5777 *, const MethodInfo*))QuasiRandomGenerator_1_RefreshValues_m27736_gshared)(__this, method)

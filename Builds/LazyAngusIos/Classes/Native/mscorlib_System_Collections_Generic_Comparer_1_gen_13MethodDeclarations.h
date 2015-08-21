#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.DateTime>
struct Comparer_1_t6850;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.ctor()
extern "C" void Comparer_1__ctor_m41916_gshared (Comparer_1_t6850 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m41916(__this, method) (( void (*) (Comparer_1_t6850 *, const MethodInfo*))Comparer_1__ctor_m41916_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.cctor()
extern "C" void Comparer_1__cctor_m41917_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m41917(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m41917_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m41918_gshared (Comparer_1_t6850 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m41918(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t6850 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m41918_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTime>::get_Default()
extern "C" Comparer_1_t6850 * Comparer_1_get_Default_m41919_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m41919(__this /* static, unused */, method) (( Comparer_1_t6850 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m41919_gshared)(__this /* static, unused */, method)

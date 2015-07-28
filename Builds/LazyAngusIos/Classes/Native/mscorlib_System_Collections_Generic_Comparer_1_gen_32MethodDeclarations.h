#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.TimeSpan>
struct Comparer_1_t8620;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
extern "C" void Comparer_1__ctor_m63513_gshared (Comparer_1_t8620 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m63513(__this, method) (( void (*) (Comparer_1_t8620 *, const MethodInfo*))Comparer_1__ctor_m63513_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern "C" void Comparer_1__cctor_m63514_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m63514(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m63514_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m63515_gshared (Comparer_1_t8620 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m63515(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t8620 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m63515_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern "C" Comparer_1_t8620 * Comparer_1_get_Default_m63516_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m63516(__this /* static, unused */, method) (( Comparer_1_t8620 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m63516_gshared)(__this /* static, unused */, method)

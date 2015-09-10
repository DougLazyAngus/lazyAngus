#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.DateTime>
struct Comparer_1_t7429;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.ctor()
extern "C" void Comparer_1__ctor_m46612_gshared (Comparer_1_t7429 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m46612(__this, method) (( void (*) (Comparer_1_t7429 *, const MethodInfo*))Comparer_1__ctor_m46612_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.cctor()
extern "C" void Comparer_1__cctor_m46613_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m46613(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m46613_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m46614_gshared (Comparer_1_t7429 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m46614(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t7429 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m46614_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTime>::get_Default()
extern "C" Comparer_1_t7429 * Comparer_1_get_Default_m46615_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m46615(__this /* static, unused */, method) (( Comparer_1_t7429 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m46615_gshared)(__this /* static, unused */, method)

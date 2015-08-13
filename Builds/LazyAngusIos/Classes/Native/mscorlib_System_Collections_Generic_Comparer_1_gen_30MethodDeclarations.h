#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
struct Comparer_1_t8694;
// System.Object
struct Object_t;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
extern "C" void Comparer_1__ctor_m64226_gshared (Comparer_1_t8694 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m64226(__this, method) (( void (*) (Comparer_1_t8694 *, const MethodInfo*))Comparer_1__ctor_m64226_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
extern "C" void Comparer_1__cctor_m64227_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m64227(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m64227_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m64228_gshared (Comparer_1_t8694 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m64228(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t8694 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m64228_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
extern "C" Comparer_1_t8694 * Comparer_1_get_Default_m64229_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m64229(__this /* static, unused */, method) (( Comparer_1_t8694 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m64229_gshared)(__this /* static, unused */, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
struct EqualityComparer_1_t8625;
// System.Object
struct Object_t;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void EqualityComparer_1__ctor_m63557_gshared (EqualityComparer_1_t8625 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m63557(__this, method) (( void (*) (EqualityComparer_1_t8625 *, const MethodInfo*))EqualityComparer_1__ctor_m63557_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
extern "C" void EqualityComparer_1__cctor_m63558_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m63558(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m63558_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m63559_gshared (EqualityComparer_1_t8625 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m63559(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t8625 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m63559_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m63560_gshared (EqualityComparer_1_t8625 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m63560(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t8625 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m63560_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
extern "C" EqualityComparer_1_t8625 * EqualityComparer_1_get_Default_m63561_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m63561(__this /* static, unused */, method) (( EqualityComparer_1_t8625 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m63561_gshared)(__this /* static, unused */, method)

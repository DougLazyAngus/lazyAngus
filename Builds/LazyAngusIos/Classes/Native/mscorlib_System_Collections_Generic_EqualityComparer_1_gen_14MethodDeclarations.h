#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTime>
struct EqualityComparer_1_t7412;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
extern "C" void EqualityComparer_1__ctor_m46515_gshared (EqualityComparer_1_t7412 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m46515(__this, method) (( void (*) (EqualityComparer_1_t7412 *, const MethodInfo*))EqualityComparer_1__ctor_m46515_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
extern "C" void EqualityComparer_1__cctor_m46516_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m46516(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m46516_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m46517_gshared (EqualityComparer_1_t7412 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m46517(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t7412 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m46517_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m46518_gshared (EqualityComparer_1_t7412 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m46518(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t7412 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m46518_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
extern "C" EqualityComparer_1_t7412 * EqualityComparer_1_get_Default_m46519_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m46519(__this /* static, unused */, method) (( EqualityComparer_1_t7412 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m46519_gshared)(__this /* static, unused */, method)

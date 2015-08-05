#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTime>
struct EqualityComparer_1_t6773;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
extern "C" void EqualityComparer_1__ctor_m41142_gshared (EqualityComparer_1_t6773 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m41142(__this, method) (( void (*) (EqualityComparer_1_t6773 *, const MethodInfo*))EqualityComparer_1__ctor_m41142_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
extern "C" void EqualityComparer_1__cctor_m41143_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m41143(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m41143_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m41144_gshared (EqualityComparer_1_t6773 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m41144(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t6773 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m41144_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m41145_gshared (EqualityComparer_1_t6773 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m41145(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t6773 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m41145_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
extern "C" EqualityComparer_1_t6773 * EqualityComparer_1_get_Default_m41146_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m41146(__this /* static, unused */, method) (( EqualityComparer_1_t6773 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m41146_gshared)(__this /* static, unused */, method)

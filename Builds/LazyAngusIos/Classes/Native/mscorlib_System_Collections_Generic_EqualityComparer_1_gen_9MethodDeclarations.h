﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct EqualityComparer_1_t3944;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void EqualityComparer_1__ctor_m26561_gshared (EqualityComparer_1_t3944 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m26561(__this, method) (( void (*) (EqualityComparer_1_t3944 *, const MethodInfo*))EqualityComparer_1__ctor_m26561_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void EqualityComparer_1__cctor_m26562_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m26562(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m26562_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26563_gshared (EqualityComparer_1_t3944 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26563(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t3944 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26563_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26564_gshared (EqualityComparer_1_t3944 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26564(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t3944 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26564_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Default()
extern "C" EqualityComparer_1_t3944 * EqualityComparer_1_get_Default_m26565_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m26565(__this /* static, unused */, method) (( EqualityComparer_1_t3944 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m26565_gshared)(__this /* static, unused */, method)
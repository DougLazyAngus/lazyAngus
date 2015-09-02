#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct DefaultComparer_t8011;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void DefaultComparer__ctor_m56004_gshared (DefaultComparer_t8011 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m56004(__this, method) (( void (*) (DefaultComparer_t8011 *, const MethodInfo*))DefaultComparer__ctor_m56004_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m56005_gshared (DefaultComparer_t8011 * __this, KeyValuePair_2_t7053  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m56005(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8011 *, KeyValuePair_2_t7053 , const MethodInfo*))DefaultComparer_GetHashCode_m56005_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m56006_gshared (DefaultComparer_t8011 * __this, KeyValuePair_2_t7053  ___x, KeyValuePair_2_t7053  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m56006(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8011 *, KeyValuePair_2_t7053 , KeyValuePair_2_t7053 , const MethodInfo*))DefaultComparer_Equals_m56006_gshared)(__this, ___x, ___y, method)

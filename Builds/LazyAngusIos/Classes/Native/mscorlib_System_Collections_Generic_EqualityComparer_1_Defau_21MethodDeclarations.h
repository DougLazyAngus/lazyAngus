#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct DefaultComparer_t7612;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void DefaultComparer__ctor_m51293_gshared (DefaultComparer_t7612 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m51293(__this, method) (( void (*) (DefaultComparer_t7612 *, const MethodInfo*))DefaultComparer__ctor_m51293_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m51294_gshared (DefaultComparer_t7612 * __this, KeyValuePair_2_t7162  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m51294(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t7612 *, KeyValuePair_2_t7162 , const MethodInfo*))DefaultComparer_GetHashCode_m51294_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m51295_gshared (DefaultComparer_t7612 * __this, KeyValuePair_2_t7162  ___x, KeyValuePair_2_t7162  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m51295(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t7612 *, KeyValuePair_2_t7162 , KeyValuePair_2_t7162 , const MethodInfo*))DefaultComparer_Equals_m51295_gshared)(__this, ___x, ___y, method)

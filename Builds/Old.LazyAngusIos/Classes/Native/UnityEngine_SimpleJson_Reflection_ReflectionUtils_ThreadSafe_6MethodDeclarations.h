﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3931;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1238;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3929;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3951;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3354;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m26096_gshared (ThreadSafeDictionary_2_t3931 * __this, ThreadSafeDictionaryValueFactory_2_t3929 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m26096(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3931 *, ThreadSafeDictionaryValueFactory_2_t3929 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m26096_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26098_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26098(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3931 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26098_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m26100_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m26100(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m26100_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m26102_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m26102(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m26102_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m26104_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m26104(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m26104_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m26106_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m26106(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3931 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m26106_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m26108_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m26108(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m26108_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m26110_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m26110(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m26110_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m26112_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m26112(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3931 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m26112_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m26114_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m26114(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m26114_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m26116_gshared (ThreadSafeDictionary_2_t3931 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m26116(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3931 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m26116_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m26118_gshared (ThreadSafeDictionary_2_t3931 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m26118(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3931 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Add_m26118_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m26120_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m26120(__this, method) (( void (*) (ThreadSafeDictionary_2_t3931 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m26120_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m26122_gshared (ThreadSafeDictionary_2_t3931 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m26122(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3931 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m26122_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m26124_gshared (ThreadSafeDictionary_2_t3931 * __this, KeyValuePair_2U5BU5D_t3951* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m26124(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3931 *, KeyValuePair_2U5BU5D_t3951*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m26124_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m26126_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m26126(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3931 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m26126_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m26128_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m26128(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3931 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m26128_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m26130_gshared (ThreadSafeDictionary_2_t3931 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m26130(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3931 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m26130_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m26132_gshared (ThreadSafeDictionary_2_t3931 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m26132(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3931 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m26132_gshared)(__this, method)
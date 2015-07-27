#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t4007;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1292;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t4005;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4027;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3408;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m27170_gshared (ThreadSafeDictionary_2_t4007 * __this, ThreadSafeDictionaryValueFactory_2_t4005 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m27170(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t4007 *, ThreadSafeDictionaryValueFactory_2_t4005 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m27170_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m27172_gshared (ThreadSafeDictionary_2_t4007 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m27172(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4007 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m27172_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m27174_gshared (ThreadSafeDictionary_2_t4007 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m27174(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4007 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m27174_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m27176_gshared (ThreadSafeDictionary_2_t4007 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m27176(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4007 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m27176_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m27178_gshared (ThreadSafeDictionary_2_t4007 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m27178(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t4007 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m27178_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m27180_gshared (ThreadSafeDictionary_2_t4007 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m27180(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4007 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m27180_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m27182_gshared (ThreadSafeDictionary_2_t4007 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m27182(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t4007 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m27182_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m27184_gshared (ThreadSafeDictionary_2_t4007 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m27184(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t4007 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m27184_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m27186_gshared (ThreadSafeDictionary_2_t4007 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m27186(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4007 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m27186_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m27188_gshared (ThreadSafeDictionary_2_t4007 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m27188(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4007 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m27188_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m27190_gshared (ThreadSafeDictionary_2_t4007 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m27190(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t4007 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m27190_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m27192_gshared (ThreadSafeDictionary_2_t4007 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m27192(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t4007 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Add_m27192_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m27194_gshared (ThreadSafeDictionary_2_t4007 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m27194(__this, method) (( void (*) (ThreadSafeDictionary_2_t4007 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m27194_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m27196_gshared (ThreadSafeDictionary_2_t4007 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m27196(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t4007 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m27196_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m27198_gshared (ThreadSafeDictionary_2_t4007 * __this, KeyValuePair_2U5BU5D_t4027* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m27198(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t4007 *, KeyValuePair_2U5BU5D_t4027*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m27198_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m27200_gshared (ThreadSafeDictionary_2_t4007 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m27200(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t4007 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m27200_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m27202_gshared (ThreadSafeDictionary_2_t4007 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m27202(__this, method) (( bool (*) (ThreadSafeDictionary_2_t4007 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m27202_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m27204_gshared (ThreadSafeDictionary_2_t4007 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m27204(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t4007 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m27204_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m27206_gshared (ThreadSafeDictionary_2_t4007 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m27206(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4007 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m27206_gshared)(__this, method)

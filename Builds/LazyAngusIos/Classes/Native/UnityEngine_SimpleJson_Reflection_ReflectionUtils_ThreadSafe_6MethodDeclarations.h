#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t8502;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t8500;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6041;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5449;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m61850_gshared (ThreadSafeDictionary_2_t8502 * __this, ThreadSafeDictionaryValueFactory_2_t8500 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m61850(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t8502 *, ThreadSafeDictionaryValueFactory_2_t8500 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m61850_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61852_gshared (ThreadSafeDictionary_2_t8502 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61852(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8502 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61852_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m61854_gshared (ThreadSafeDictionary_2_t8502 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m61854(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8502 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m61854_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m61856_gshared (ThreadSafeDictionary_2_t8502 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m61856(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8502 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m61856_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m61858_gshared (ThreadSafeDictionary_2_t8502 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61858(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8502 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m61858_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m61860_gshared (ThreadSafeDictionary_2_t8502 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m61860(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8502 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m61860_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m61862_gshared (ThreadSafeDictionary_2_t8502 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m61862(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8502 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m61862_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m61864_gshared (ThreadSafeDictionary_2_t8502 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61864(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8502 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m61864_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m61866_gshared (ThreadSafeDictionary_2_t8502 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m61866(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t8502 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m61866_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m61868_gshared (ThreadSafeDictionary_2_t8502 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m61868(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8502 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m61868_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m61870_gshared (ThreadSafeDictionary_2_t8502 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m61870(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8502 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m61870_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m61872_gshared (ThreadSafeDictionary_2_t8502 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m61872(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8502 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m61872_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m61874_gshared (ThreadSafeDictionary_2_t8502 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61874(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t8502 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Add_m61874_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m61876_gshared (ThreadSafeDictionary_2_t8502 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m61876(__this, method) (( void (*) (ThreadSafeDictionary_2_t8502 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m61876_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m61878_gshared (ThreadSafeDictionary_2_t8502 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m61878(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8502 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m61878_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m61880_gshared (ThreadSafeDictionary_2_t8502 * __this, KeyValuePair_2U5BU5D_t6041* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m61880(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t8502 *, KeyValuePair_2U5BU5D_t6041*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m61880_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m61882_gshared (ThreadSafeDictionary_2_t8502 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m61882(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t8502 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m61882_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m61884_gshared (ThreadSafeDictionary_2_t8502 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m61884(__this, method) (( bool (*) (ThreadSafeDictionary_2_t8502 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m61884_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m61886_gshared (ThreadSafeDictionary_2_t8502 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61886(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8502 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m61886_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m61888_gshared (ThreadSafeDictionary_2_t8502 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m61888(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8502 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m61888_gshared)(__this, method)

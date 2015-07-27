#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t4006;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1291;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t4004;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4026;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3407;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m27167_gshared (ThreadSafeDictionary_2_t4006 * __this, ThreadSafeDictionaryValueFactory_2_t4004 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m27167(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t4006 *, ThreadSafeDictionaryValueFactory_2_t4004 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m27167_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m27169_gshared (ThreadSafeDictionary_2_t4006 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m27169(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4006 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m27169_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m27171_gshared (ThreadSafeDictionary_2_t4006 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m27171(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4006 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m27171_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m27173_gshared (ThreadSafeDictionary_2_t4006 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m27173(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4006 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m27173_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m27175_gshared (ThreadSafeDictionary_2_t4006 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m27175(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t4006 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m27175_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m27177_gshared (ThreadSafeDictionary_2_t4006 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m27177(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4006 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m27177_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m27179_gshared (ThreadSafeDictionary_2_t4006 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m27179(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t4006 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m27179_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m27181_gshared (ThreadSafeDictionary_2_t4006 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m27181(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t4006 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m27181_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m27183_gshared (ThreadSafeDictionary_2_t4006 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m27183(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4006 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m27183_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m27185_gshared (ThreadSafeDictionary_2_t4006 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m27185(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4006 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m27185_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m27187_gshared (ThreadSafeDictionary_2_t4006 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m27187(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t4006 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m27187_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m27189_gshared (ThreadSafeDictionary_2_t4006 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m27189(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t4006 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Add_m27189_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m27191_gshared (ThreadSafeDictionary_2_t4006 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m27191(__this, method) (( void (*) (ThreadSafeDictionary_2_t4006 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m27191_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m27193_gshared (ThreadSafeDictionary_2_t4006 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m27193(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t4006 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m27193_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m27195_gshared (ThreadSafeDictionary_2_t4006 * __this, KeyValuePair_2U5BU5D_t4026* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m27195(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t4006 *, KeyValuePair_2U5BU5D_t4026*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m27195_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m27197_gshared (ThreadSafeDictionary_2_t4006 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m27197(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t4006 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m27197_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m27199_gshared (ThreadSafeDictionary_2_t4006 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m27199(__this, method) (( bool (*) (ThreadSafeDictionary_2_t4006 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m27199_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m27201_gshared (ThreadSafeDictionary_2_t4006 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m27201(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t4006 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m27201_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m27203_gshared (ThreadSafeDictionary_2_t4006 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m27203(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4006 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m27203_gshared)(__this, method)

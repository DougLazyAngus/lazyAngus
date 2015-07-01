#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3888;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1189;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3886;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3908;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3307;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m25882_gshared (ThreadSafeDictionary_2_t3888 * __this, ThreadSafeDictionaryValueFactory_2_t3886 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m25882(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3888 *, ThreadSafeDictionaryValueFactory_2_t3886 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m25882_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m25884_gshared (ThreadSafeDictionary_2_t3888 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m25884(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3888 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m25884_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m25886_gshared (ThreadSafeDictionary_2_t3888 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m25886(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3888 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m25886_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m25888_gshared (ThreadSafeDictionary_2_t3888 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m25888(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3888 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m25888_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m25890_gshared (ThreadSafeDictionary_2_t3888 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m25890(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3888 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m25890_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m25892_gshared (ThreadSafeDictionary_2_t3888 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m25892(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3888 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m25892_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m25894_gshared (ThreadSafeDictionary_2_t3888 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m25894(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3888 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m25894_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m25896_gshared (ThreadSafeDictionary_2_t3888 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m25896(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3888 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m25896_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m25898_gshared (ThreadSafeDictionary_2_t3888 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m25898(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3888 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m25898_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m25900_gshared (ThreadSafeDictionary_2_t3888 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m25900(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3888 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m25900_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m25902_gshared (ThreadSafeDictionary_2_t3888 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m25902(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3888 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m25902_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m25904_gshared (ThreadSafeDictionary_2_t3888 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m25904(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3888 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Add_m25904_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m25906_gshared (ThreadSafeDictionary_2_t3888 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m25906(__this, method) (( void (*) (ThreadSafeDictionary_2_t3888 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m25906_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m25908_gshared (ThreadSafeDictionary_2_t3888 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m25908(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3888 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m25908_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m25910_gshared (ThreadSafeDictionary_2_t3888 * __this, KeyValuePair_2U5BU5D_t3908* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m25910(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3888 *, KeyValuePair_2U5BU5D_t3908*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m25910_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m25912_gshared (ThreadSafeDictionary_2_t3888 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m25912(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3888 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m25912_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m25914_gshared (ThreadSafeDictionary_2_t3888 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m25914(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3888 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m25914_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m25916_gshared (ThreadSafeDictionary_2_t3888 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m25916(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3888 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m25916_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m25918_gshared (ThreadSafeDictionary_2_t3888 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m25918(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3888 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m25918_gshared)(__this, method)

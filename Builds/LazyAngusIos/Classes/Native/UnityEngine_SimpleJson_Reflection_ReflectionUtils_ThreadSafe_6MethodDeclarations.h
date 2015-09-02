#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t8534;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t8532;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6073;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5468;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m62215_gshared (ThreadSafeDictionary_2_t8534 * __this, ThreadSafeDictionaryValueFactory_2_t8532 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m62215(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t8534 *, ThreadSafeDictionaryValueFactory_2_t8532 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m62215_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m62217_gshared (ThreadSafeDictionary_2_t8534 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m62217(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8534 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m62217_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m62219_gshared (ThreadSafeDictionary_2_t8534 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m62219(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8534 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m62219_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m62221_gshared (ThreadSafeDictionary_2_t8534 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m62221(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8534 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m62221_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m62223_gshared (ThreadSafeDictionary_2_t8534 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m62223(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8534 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m62223_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m62225_gshared (ThreadSafeDictionary_2_t8534 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m62225(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8534 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m62225_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m62227_gshared (ThreadSafeDictionary_2_t8534 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m62227(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8534 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m62227_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m62229_gshared (ThreadSafeDictionary_2_t8534 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m62229(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8534 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m62229_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m62231_gshared (ThreadSafeDictionary_2_t8534 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m62231(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t8534 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m62231_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m62233_gshared (ThreadSafeDictionary_2_t8534 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m62233(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8534 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m62233_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m62235_gshared (ThreadSafeDictionary_2_t8534 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m62235(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8534 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m62235_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m62237_gshared (ThreadSafeDictionary_2_t8534 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m62237(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8534 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m62237_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m62239_gshared (ThreadSafeDictionary_2_t8534 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m62239(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t8534 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Add_m62239_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m62241_gshared (ThreadSafeDictionary_2_t8534 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m62241(__this, method) (( void (*) (ThreadSafeDictionary_2_t8534 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m62241_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m62243_gshared (ThreadSafeDictionary_2_t8534 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m62243(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8534 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m62243_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m62245_gshared (ThreadSafeDictionary_2_t8534 * __this, KeyValuePair_2U5BU5D_t6073* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m62245(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t8534 *, KeyValuePair_2U5BU5D_t6073*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m62245_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m62247_gshared (ThreadSafeDictionary_2_t8534 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m62247(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t8534 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m62247_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m62249_gshared (ThreadSafeDictionary_2_t8534 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m62249(__this, method) (( bool (*) (ThreadSafeDictionary_2_t8534 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m62249_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m62251_gshared (ThreadSafeDictionary_2_t8534 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m62251(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8534 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m62251_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m62253_gshared (ThreadSafeDictionary_2_t8534 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m62253(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8534 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m62253_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t8428;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t8426;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t5966;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5407;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m61090_gshared (ThreadSafeDictionary_2_t8428 * __this, ThreadSafeDictionaryValueFactory_2_t8426 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m61090(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t8428 *, ThreadSafeDictionaryValueFactory_2_t8426 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m61090_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61092_gshared (ThreadSafeDictionary_2_t8428 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61092(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8428 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61092_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m61094_gshared (ThreadSafeDictionary_2_t8428 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m61094(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8428 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m61094_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m61096_gshared (ThreadSafeDictionary_2_t8428 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m61096(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8428 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m61096_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m61098_gshared (ThreadSafeDictionary_2_t8428 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61098(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8428 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m61098_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m61100_gshared (ThreadSafeDictionary_2_t8428 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m61100(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8428 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m61100_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m61102_gshared (ThreadSafeDictionary_2_t8428 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m61102(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8428 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m61102_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m61104_gshared (ThreadSafeDictionary_2_t8428 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61104(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8428 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m61104_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m61106_gshared (ThreadSafeDictionary_2_t8428 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m61106(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t8428 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m61106_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m61108_gshared (ThreadSafeDictionary_2_t8428 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m61108(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8428 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m61108_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m61110_gshared (ThreadSafeDictionary_2_t8428 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m61110(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8428 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m61110_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m61112_gshared (ThreadSafeDictionary_2_t8428 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m61112(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8428 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m61112_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m61114_gshared (ThreadSafeDictionary_2_t8428 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61114(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t8428 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Add_m61114_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m61116_gshared (ThreadSafeDictionary_2_t8428 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m61116(__this, method) (( void (*) (ThreadSafeDictionary_2_t8428 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m61116_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m61118_gshared (ThreadSafeDictionary_2_t8428 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m61118(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8428 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m61118_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m61120_gshared (ThreadSafeDictionary_2_t8428 * __this, KeyValuePair_2U5BU5D_t5966* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m61120(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t8428 *, KeyValuePair_2U5BU5D_t5966*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m61120_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m61122_gshared (ThreadSafeDictionary_2_t8428 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m61122(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t8428 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m61122_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m61124_gshared (ThreadSafeDictionary_2_t8428 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m61124(__this, method) (( bool (*) (ThreadSafeDictionary_2_t8428 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m61124_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m61126_gshared (ThreadSafeDictionary_2_t8428 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61126(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8428 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m61126_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m61128_gshared (ThreadSafeDictionary_2_t8428 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m61128(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8428 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m61128_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t8424;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t8422;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t5962;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5403;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m61062_gshared (ThreadSafeDictionary_2_t8424 * __this, ThreadSafeDictionaryValueFactory_2_t8422 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m61062(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t8424 *, ThreadSafeDictionaryValueFactory_2_t8422 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m61062_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61064_gshared (ThreadSafeDictionary_2_t8424 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61064(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8424 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61064_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m61066_gshared (ThreadSafeDictionary_2_t8424 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m61066(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8424 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m61066_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m61068_gshared (ThreadSafeDictionary_2_t8424 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m61068(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8424 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m61068_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m61070_gshared (ThreadSafeDictionary_2_t8424 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61070(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8424 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m61070_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m61072_gshared (ThreadSafeDictionary_2_t8424 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m61072(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8424 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m61072_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m61074_gshared (ThreadSafeDictionary_2_t8424 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m61074(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8424 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m61074_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m61076_gshared (ThreadSafeDictionary_2_t8424 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61076(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8424 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m61076_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m61078_gshared (ThreadSafeDictionary_2_t8424 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m61078(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t8424 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m61078_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m61080_gshared (ThreadSafeDictionary_2_t8424 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m61080(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8424 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m61080_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m61082_gshared (ThreadSafeDictionary_2_t8424 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m61082(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8424 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m61082_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m61084_gshared (ThreadSafeDictionary_2_t8424 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m61084(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8424 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m61084_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m61086_gshared (ThreadSafeDictionary_2_t8424 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61086(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t8424 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Add_m61086_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m61088_gshared (ThreadSafeDictionary_2_t8424 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m61088(__this, method) (( void (*) (ThreadSafeDictionary_2_t8424 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m61088_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m61090_gshared (ThreadSafeDictionary_2_t8424 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m61090(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8424 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m61090_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m61092_gshared (ThreadSafeDictionary_2_t8424 * __this, KeyValuePair_2U5BU5D_t5962* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m61092(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t8424 *, KeyValuePair_2U5BU5D_t5962*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m61092_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m61094_gshared (ThreadSafeDictionary_2_t8424 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m61094(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t8424 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m61094_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m61096_gshared (ThreadSafeDictionary_2_t8424 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m61096(__this, method) (( bool (*) (ThreadSafeDictionary_2_t8424 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m61096_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m61098_gshared (ThreadSafeDictionary_2_t8424 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61098(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8424 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m61098_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m61100_gshared (ThreadSafeDictionary_2_t8424 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m61100(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8424 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m61100_gshared)(__this, method)

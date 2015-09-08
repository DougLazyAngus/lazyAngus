#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t9075;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t9073;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6612;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t6005;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m66509_gshared (ThreadSafeDictionary_2_t9075 * __this, ThreadSafeDictionaryValueFactory_2_t9073 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m66509(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t9075 *, ThreadSafeDictionaryValueFactory_2_t9073 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m66509_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m66511_gshared (ThreadSafeDictionary_2_t9075 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m66511(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9075 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m66511_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m66513_gshared (ThreadSafeDictionary_2_t9075 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m66513(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9075 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m66513_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m66515_gshared (ThreadSafeDictionary_2_t9075 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m66515(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9075 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m66515_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m66517_gshared (ThreadSafeDictionary_2_t9075 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m66517(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t9075 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m66517_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m66519_gshared (ThreadSafeDictionary_2_t9075 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m66519(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t9075 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m66519_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m66521_gshared (ThreadSafeDictionary_2_t9075 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m66521(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9075 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m66521_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m66523_gshared (ThreadSafeDictionary_2_t9075 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m66523(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t9075 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m66523_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m66525_gshared (ThreadSafeDictionary_2_t9075 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m66525(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t9075 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m66525_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m66527_gshared (ThreadSafeDictionary_2_t9075 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m66527(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9075 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m66527_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m66529_gshared (ThreadSafeDictionary_2_t9075 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m66529(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9075 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m66529_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m66531_gshared (ThreadSafeDictionary_2_t9075 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m66531(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t9075 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m66531_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m66533_gshared (ThreadSafeDictionary_2_t9075 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m66533(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t9075 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Add_m66533_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m66535_gshared (ThreadSafeDictionary_2_t9075 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m66535(__this, method) (( void (*) (ThreadSafeDictionary_2_t9075 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m66535_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m66537_gshared (ThreadSafeDictionary_2_t9075 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m66537(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t9075 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m66537_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m66539_gshared (ThreadSafeDictionary_2_t9075 * __this, KeyValuePair_2U5BU5D_t6612* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m66539(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t9075 *, KeyValuePair_2U5BU5D_t6612*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m66539_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m66541_gshared (ThreadSafeDictionary_2_t9075 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m66541(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t9075 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m66541_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m66543_gshared (ThreadSafeDictionary_2_t9075 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m66543(__this, method) (( bool (*) (ThreadSafeDictionary_2_t9075 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m66543_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m66545_gshared (ThreadSafeDictionary_2_t9075 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m66545(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t9075 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m66545_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m66547_gshared (ThreadSafeDictionary_2_t9075 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m66547(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9075 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m66547_gshared)(__this, method)

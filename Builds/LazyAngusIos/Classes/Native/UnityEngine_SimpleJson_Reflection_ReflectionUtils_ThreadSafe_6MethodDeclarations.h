#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t8416;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t8414;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t5954;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5395;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m61015_gshared (ThreadSafeDictionary_2_t8416 * __this, ThreadSafeDictionaryValueFactory_2_t8414 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m61015(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t8416 *, ThreadSafeDictionaryValueFactory_2_t8414 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m61015_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61017_gshared (ThreadSafeDictionary_2_t8416 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61017(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8416 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61017_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m61019_gshared (ThreadSafeDictionary_2_t8416 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m61019(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8416 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m61019_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m61021_gshared (ThreadSafeDictionary_2_t8416 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m61021(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8416 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m61021_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m61023_gshared (ThreadSafeDictionary_2_t8416 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61023(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8416 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m61023_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m61025_gshared (ThreadSafeDictionary_2_t8416 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m61025(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8416 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m61025_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m61027_gshared (ThreadSafeDictionary_2_t8416 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m61027(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8416 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m61027_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m61029_gshared (ThreadSafeDictionary_2_t8416 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61029(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8416 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m61029_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m61031_gshared (ThreadSafeDictionary_2_t8416 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m61031(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t8416 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m61031_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m61033_gshared (ThreadSafeDictionary_2_t8416 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m61033(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8416 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m61033_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m61035_gshared (ThreadSafeDictionary_2_t8416 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m61035(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8416 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m61035_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m61037_gshared (ThreadSafeDictionary_2_t8416 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m61037(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8416 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m61037_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m61039_gshared (ThreadSafeDictionary_2_t8416 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61039(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t8416 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Add_m61039_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m61041_gshared (ThreadSafeDictionary_2_t8416 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m61041(__this, method) (( void (*) (ThreadSafeDictionary_2_t8416 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m61041_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m61043_gshared (ThreadSafeDictionary_2_t8416 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m61043(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8416 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m61043_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m61045_gshared (ThreadSafeDictionary_2_t8416 * __this, KeyValuePair_2U5BU5D_t5954* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m61045(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t8416 *, KeyValuePair_2U5BU5D_t5954*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m61045_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m61047_gshared (ThreadSafeDictionary_2_t8416 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m61047(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t8416 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m61047_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m61049_gshared (ThreadSafeDictionary_2_t8416 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m61049(__this, method) (( bool (*) (ThreadSafeDictionary_2_t8416 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m61049_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m61051_gshared (ThreadSafeDictionary_2_t8416 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61051(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8416 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m61051_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m61053_gshared (ThreadSafeDictionary_2_t8416 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m61053(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8416 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m61053_gshared)(__this, method)

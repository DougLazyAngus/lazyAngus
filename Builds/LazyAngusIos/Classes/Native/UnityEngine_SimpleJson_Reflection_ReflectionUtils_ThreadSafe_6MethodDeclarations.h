﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t8505;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t8503;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6044;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5452;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m61883_gshared (ThreadSafeDictionary_2_t8505 * __this, ThreadSafeDictionaryValueFactory_2_t8503 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m61883(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t8505 *, ThreadSafeDictionaryValueFactory_2_t8503 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m61883_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61885_gshared (ThreadSafeDictionary_2_t8505 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61885(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8505 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61885_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m61887_gshared (ThreadSafeDictionary_2_t8505 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m61887(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8505 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m61887_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m61889_gshared (ThreadSafeDictionary_2_t8505 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m61889(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8505 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m61889_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m61891_gshared (ThreadSafeDictionary_2_t8505 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61891(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8505 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m61891_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m61893_gshared (ThreadSafeDictionary_2_t8505 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m61893(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8505 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m61893_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m61895_gshared (ThreadSafeDictionary_2_t8505 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m61895(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8505 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m61895_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m61897_gshared (ThreadSafeDictionary_2_t8505 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61897(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8505 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m61897_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m61899_gshared (ThreadSafeDictionary_2_t8505 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m61899(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t8505 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m61899_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m61901_gshared (ThreadSafeDictionary_2_t8505 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m61901(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8505 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m61901_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m61903_gshared (ThreadSafeDictionary_2_t8505 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m61903(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8505 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m61903_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m61905_gshared (ThreadSafeDictionary_2_t8505 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m61905(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8505 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m61905_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m61907_gshared (ThreadSafeDictionary_2_t8505 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61907(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t8505 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Add_m61907_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m61909_gshared (ThreadSafeDictionary_2_t8505 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m61909(__this, method) (( void (*) (ThreadSafeDictionary_2_t8505 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m61909_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m61911_gshared (ThreadSafeDictionary_2_t8505 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m61911(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8505 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m61911_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m61913_gshared (ThreadSafeDictionary_2_t8505 * __this, KeyValuePair_2U5BU5D_t6044* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m61913(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t8505 *, KeyValuePair_2U5BU5D_t6044*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m61913_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m61915_gshared (ThreadSafeDictionary_2_t8505 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m61915(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t8505 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m61915_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m61917_gshared (ThreadSafeDictionary_2_t8505 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m61917(__this, method) (( bool (*) (ThreadSafeDictionary_2_t8505 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m61917_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m61919_gshared (ThreadSafeDictionary_2_t8505 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61919(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8505 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m61919_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m61921_gshared (ThreadSafeDictionary_2_t8505 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m61921(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8505 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m61921_gshared)(__this, method)

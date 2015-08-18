#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t8498;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t8496;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6037;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5451;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m61759_gshared (ThreadSafeDictionary_2_t8498 * __this, ThreadSafeDictionaryValueFactory_2_t8496 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m61759(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t8498 *, ThreadSafeDictionaryValueFactory_2_t8496 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m61759_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61761_gshared (ThreadSafeDictionary_2_t8498 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61761(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8498 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61761_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m61763_gshared (ThreadSafeDictionary_2_t8498 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m61763(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8498 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m61763_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m61765_gshared (ThreadSafeDictionary_2_t8498 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m61765(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8498 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m61765_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m61767_gshared (ThreadSafeDictionary_2_t8498 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61767(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8498 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m61767_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m61769_gshared (ThreadSafeDictionary_2_t8498 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m61769(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8498 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m61769_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m61771_gshared (ThreadSafeDictionary_2_t8498 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m61771(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8498 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m61771_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m61773_gshared (ThreadSafeDictionary_2_t8498 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61773(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t8498 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m61773_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m61775_gshared (ThreadSafeDictionary_2_t8498 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m61775(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t8498 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m61775_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m61777_gshared (ThreadSafeDictionary_2_t8498 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m61777(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8498 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m61777_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m61779_gshared (ThreadSafeDictionary_2_t8498 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m61779(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t8498 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m61779_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m61781_gshared (ThreadSafeDictionary_2_t8498 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m61781(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t8498 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m61781_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m61783_gshared (ThreadSafeDictionary_2_t8498 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m61783(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t8498 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Add_m61783_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m61785_gshared (ThreadSafeDictionary_2_t8498 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m61785(__this, method) (( void (*) (ThreadSafeDictionary_2_t8498 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m61785_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m61787_gshared (ThreadSafeDictionary_2_t8498 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m61787(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8498 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m61787_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m61789_gshared (ThreadSafeDictionary_2_t8498 * __this, KeyValuePair_2U5BU5D_t6037* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m61789(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t8498 *, KeyValuePair_2U5BU5D_t6037*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m61789_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m61791_gshared (ThreadSafeDictionary_2_t8498 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m61791(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t8498 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m61791_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m61793_gshared (ThreadSafeDictionary_2_t8498 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m61793(__this, method) (( bool (*) (ThreadSafeDictionary_2_t8498 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m61793_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m61795_gshared (ThreadSafeDictionary_2_t8498 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m61795(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t8498 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m61795_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m61797_gshared (ThreadSafeDictionary_2_t8498 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m61797(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t8498 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m61797_gshared)(__this, method)

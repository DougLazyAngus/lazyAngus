#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3940;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1246;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3938;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3960;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3362;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m26137_gshared (ThreadSafeDictionary_2_t3940 * __this, ThreadSafeDictionaryValueFactory_2_t3938 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m26137(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3940 *, ThreadSafeDictionaryValueFactory_2_t3938 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m26137_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26139_gshared (ThreadSafeDictionary_2_t3940 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26139(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3940 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26139_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m26141_gshared (ThreadSafeDictionary_2_t3940 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m26141(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3940 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m26141_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m26143_gshared (ThreadSafeDictionary_2_t3940 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m26143(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3940 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m26143_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m26145_gshared (ThreadSafeDictionary_2_t3940 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m26145(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3940 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m26145_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m26147_gshared (ThreadSafeDictionary_2_t3940 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m26147(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3940 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m26147_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m26149_gshared (ThreadSafeDictionary_2_t3940 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m26149(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3940 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m26149_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m26151_gshared (ThreadSafeDictionary_2_t3940 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m26151(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3940 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m26151_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m26153_gshared (ThreadSafeDictionary_2_t3940 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m26153(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3940 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m26153_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m26155_gshared (ThreadSafeDictionary_2_t3940 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m26155(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3940 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m26155_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m26157_gshared (ThreadSafeDictionary_2_t3940 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m26157(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3940 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m26157_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m26159_gshared (ThreadSafeDictionary_2_t3940 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m26159(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3940 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Add_m26159_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m26161_gshared (ThreadSafeDictionary_2_t3940 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m26161(__this, method) (( void (*) (ThreadSafeDictionary_2_t3940 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m26161_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m26163_gshared (ThreadSafeDictionary_2_t3940 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m26163(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3940 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m26163_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m26165_gshared (ThreadSafeDictionary_2_t3940 * __this, KeyValuePair_2U5BU5D_t3960* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m26165(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3940 *, KeyValuePair_2U5BU5D_t3960*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m26165_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m26167_gshared (ThreadSafeDictionary_2_t3940 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m26167(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3940 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m26167_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m26169_gshared (ThreadSafeDictionary_2_t3940 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m26169(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3940 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m26169_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m26171_gshared (ThreadSafeDictionary_2_t3940 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m26171(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3940 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m26171_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m26173_gshared (ThreadSafeDictionary_2_t3940 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m26173(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3940 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m26173_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3912;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1211;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3910;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3932;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3329;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m26040_gshared (ThreadSafeDictionary_2_t3912 * __this, ThreadSafeDictionaryValueFactory_2_t3910 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m26040(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3912 *, ThreadSafeDictionaryValueFactory_2_t3910 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m26040_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26042_gshared (ThreadSafeDictionary_2_t3912 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26042(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3912 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m26042_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m26044_gshared (ThreadSafeDictionary_2_t3912 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m26044(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3912 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m26044_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m26046_gshared (ThreadSafeDictionary_2_t3912 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m26046(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3912 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m26046_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m26048_gshared (ThreadSafeDictionary_2_t3912 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m26048(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3912 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m26048_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m26050_gshared (ThreadSafeDictionary_2_t3912 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m26050(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3912 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m26050_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m26052_gshared (ThreadSafeDictionary_2_t3912 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m26052(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3912 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m26052_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m26054_gshared (ThreadSafeDictionary_2_t3912 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m26054(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3912 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m26054_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m26056_gshared (ThreadSafeDictionary_2_t3912 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m26056(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3912 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m26056_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m26058_gshared (ThreadSafeDictionary_2_t3912 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m26058(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3912 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m26058_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m26060_gshared (ThreadSafeDictionary_2_t3912 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m26060(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3912 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m26060_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m26062_gshared (ThreadSafeDictionary_2_t3912 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m26062(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3912 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Add_m26062_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m26064_gshared (ThreadSafeDictionary_2_t3912 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m26064(__this, method) (( void (*) (ThreadSafeDictionary_2_t3912 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m26064_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m26066_gshared (ThreadSafeDictionary_2_t3912 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m26066(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3912 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m26066_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m26068_gshared (ThreadSafeDictionary_2_t3912 * __this, KeyValuePair_2U5BU5D_t3932* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m26068(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3912 *, KeyValuePair_2U5BU5D_t3932*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m26068_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m26070_gshared (ThreadSafeDictionary_2_t3912 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m26070(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3912 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m26070_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m26072_gshared (ThreadSafeDictionary_2_t3912 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m26072(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3912 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m26072_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m26074_gshared (ThreadSafeDictionary_2_t3912 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m26074(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3912 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m26074_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m26076_gshared (ThreadSafeDictionary_2_t3912 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m26076(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3912 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m26076_gshared)(__this, method)

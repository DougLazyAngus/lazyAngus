#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t9069;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t9067;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6606;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t6001;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m66484_gshared (ThreadSafeDictionary_2_t9069 * __this, ThreadSafeDictionaryValueFactory_2_t9067 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m66484(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t9069 *, ThreadSafeDictionaryValueFactory_2_t9067 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m66484_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m66486_gshared (ThreadSafeDictionary_2_t9069 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m66486(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9069 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m66486_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m66488_gshared (ThreadSafeDictionary_2_t9069 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m66488(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9069 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m66488_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m66490_gshared (ThreadSafeDictionary_2_t9069 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m66490(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9069 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m66490_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m66492_gshared (ThreadSafeDictionary_2_t9069 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m66492(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t9069 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m66492_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m66494_gshared (ThreadSafeDictionary_2_t9069 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m66494(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t9069 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m66494_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m66496_gshared (ThreadSafeDictionary_2_t9069 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m66496(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9069 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m66496_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m66498_gshared (ThreadSafeDictionary_2_t9069 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m66498(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t9069 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m66498_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m66500_gshared (ThreadSafeDictionary_2_t9069 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m66500(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t9069 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m66500_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m66502_gshared (ThreadSafeDictionary_2_t9069 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m66502(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9069 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m66502_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m66504_gshared (ThreadSafeDictionary_2_t9069 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m66504(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9069 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m66504_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m66506_gshared (ThreadSafeDictionary_2_t9069 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m66506(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t9069 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m66506_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m66508_gshared (ThreadSafeDictionary_2_t9069 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m66508(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t9069 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Add_m66508_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m66510_gshared (ThreadSafeDictionary_2_t9069 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m66510(__this, method) (( void (*) (ThreadSafeDictionary_2_t9069 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m66510_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m66512_gshared (ThreadSafeDictionary_2_t9069 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m66512(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t9069 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m66512_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m66514_gshared (ThreadSafeDictionary_2_t9069 * __this, KeyValuePair_2U5BU5D_t6606* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m66514(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t9069 *, KeyValuePair_2U5BU5D_t6606*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m66514_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m66516_gshared (ThreadSafeDictionary_2_t9069 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m66516(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t9069 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m66516_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m66518_gshared (ThreadSafeDictionary_2_t9069 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m66518(__this, method) (( bool (*) (ThreadSafeDictionary_2_t9069 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m66518_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m66520_gshared (ThreadSafeDictionary_2_t9069 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m66520(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t9069 *, KeyValuePair_2_t70 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m66520_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m66522_gshared (ThreadSafeDictionary_2_t9069 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m66522(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9069 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m66522_gshared)(__this, method)

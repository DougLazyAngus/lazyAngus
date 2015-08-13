#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionary_2_t2937;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t9093;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ICollection_1_t9643;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t2915;
// System.Type
struct Type_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionaryValueFactory_2_t2936;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>[]
struct KeyValuePair_2U5BU5D_t9644;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>
struct IEnumerator_1_t9645;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_138.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6MethodDeclarations.h"
#define ThreadSafeDictionary_2__ctor_m10153(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2937 *, ThreadSafeDictionaryValueFactory_2_t2936 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m61762_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61861(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2937 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m61764_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Get(TKey)
#define ThreadSafeDictionary_2_Get_m61862(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2937 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m61766_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::AddValue(TKey)
#define ThreadSafeDictionary_2_AddValue_m61863(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2937 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m61768_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(TKey,TValue)
#define ThreadSafeDictionary_2_Add_m61864(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2937 *, Type_t *, Object_t*, const MethodInfo*))ThreadSafeDictionary_2_Add_m61770_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::ContainsKey(TKey)
#define ThreadSafeDictionary_2_ContainsKey_m61865(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2937 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m61772_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Keys()
#define ThreadSafeDictionary_2_get_Keys_m61866(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2937 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m61774_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Remove(TKey)
#define ThreadSafeDictionary_2_Remove_m61867(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2937 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m61776_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::TryGetValue(TKey,TValue&)
#define ThreadSafeDictionary_2_TryGetValue_m61868(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2937 *, Type_t *, Object_t**, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m61778_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Values()
#define ThreadSafeDictionary_2_get_Values_m61869(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2937 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m61780_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(TKey)
#define ThreadSafeDictionary_2_get_Item_m61870(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2937 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m61782_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::set_Item(TKey,TValue)
#define ThreadSafeDictionary_2_set_Item_m61871(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2937 *, Type_t *, Object_t*, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m61784_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Add_m61872(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2937 *, KeyValuePair_2_t8505 , const MethodInfo*))ThreadSafeDictionary_2_Add_m61786_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Clear()
#define ThreadSafeDictionary_2_Clear_m61873(__this, method) (( void (*) (ThreadSafeDictionary_2_t2937 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m61788_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Contains_m61874(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2937 *, KeyValuePair_2_t8505 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m61790_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define ThreadSafeDictionary_2_CopyTo_m61875(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2937 *, KeyValuePair_2U5BU5D_t9644*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m61792_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Count()
#define ThreadSafeDictionary_2_get_Count_m61876(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2937 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m61794_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_IsReadOnly()
#define ThreadSafeDictionary_2_get_IsReadOnly_m61877(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2937 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m61796_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Remove_m61878(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2937 *, KeyValuePair_2_t8505 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m61798_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator()
#define ThreadSafeDictionary_2_GetEnumerator_m61879(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2937 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m61800_gshared)(__this, method)

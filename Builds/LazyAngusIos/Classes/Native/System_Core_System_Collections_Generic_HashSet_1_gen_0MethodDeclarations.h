#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1417;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1135;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t660;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t636;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m29788_gshared (HashSet_1_t1417 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m29788(__this, method) (( void (*) (HashSet_1_t1417 *, const MethodInfo*))HashSet_1__ctor_m29788_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m7228_gshared (HashSet_1_t1417 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m7228(__this, ___comparer, method) (( void (*) (HashSet_1_t1417 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7228_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m29789_gshared (HashSet_1_t1417 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m29789(__this, ___collection, method) (( void (*) (HashSet_1_t1417 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m29789_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m29790_gshared (HashSet_1_t1417 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m29790(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1417 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m29790_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m29791_gshared (HashSet_1_t1417 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m29791(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1417 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))HashSet_1__ctor_m29791_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29792_gshared (HashSet_1_t1417 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29792(__this, method) (( Object_t* (*) (HashSet_1_t1417 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29792_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29793_gshared (HashSet_1_t1417 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29793(__this, method) (( bool (*) (HashSet_1_t1417 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29793_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m29794_gshared (HashSet_1_t1417 * __this, ObjectU5BU5D_t636* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m29794(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1417 *, ObjectU5BU5D_t636*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m29794_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29795_gshared (HashSet_1_t1417 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29795(__this, ___item, method) (( void (*) (HashSet_1_t1417 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29795_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m29796_gshared (HashSet_1_t1417 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m29796(__this, method) (( Object_t * (*) (HashSet_1_t1417 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m29796_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m29797_gshared (HashSet_1_t1417 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m29797(__this, method) (( int32_t (*) (HashSet_1_t1417 *, const MethodInfo*))HashSet_1_get_Count_m29797_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m29798_gshared (HashSet_1_t1417 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m29798(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1417 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m29798_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m29799_gshared (HashSet_1_t1417 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m29799(__this, ___size, method) (( void (*) (HashSet_1_t1417 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m29799_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m29800_gshared (HashSet_1_t1417 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m29800(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1417 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m29800_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m29801_gshared (HashSet_1_t1417 * __this, ObjectU5BU5D_t636* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m29801(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1417 *, ObjectU5BU5D_t636*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m29801_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m29802_gshared (HashSet_1_t1417 * __this, ObjectU5BU5D_t636* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m29802(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1417 *, ObjectU5BU5D_t636*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m29802_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m29803_gshared (HashSet_1_t1417 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m29803(__this, method) (( void (*) (HashSet_1_t1417 *, const MethodInfo*))HashSet_1_Resize_m29803_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m29804_gshared (HashSet_1_t1417 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m29804(__this, ___index, method) (( int32_t (*) (HashSet_1_t1417 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m29804_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m29805_gshared (HashSet_1_t1417 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m29805(__this, ___item, method) (( int32_t (*) (HashSet_1_t1417 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m29805_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m29806_gshared (HashSet_1_t1417 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m29806(__this, ___item, method) (( bool (*) (HashSet_1_t1417 *, Object_t *, const MethodInfo*))HashSet_1_Add_m29806_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m29807_gshared (HashSet_1_t1417 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m29807(__this, method) (( void (*) (HashSet_1_t1417 *, const MethodInfo*))HashSet_1_Clear_m29807_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m29808_gshared (HashSet_1_t1417 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m29808(__this, ___item, method) (( bool (*) (HashSet_1_t1417 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m29808_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m29809_gshared (HashSet_1_t1417 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m29809(__this, ___item, method) (( bool (*) (HashSet_1_t1417 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m29809_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m29810_gshared (HashSet_1_t1417 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m29810(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1417 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))HashSet_1_GetObjectData_m29810_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m29811_gshared (HashSet_1_t1417 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m29811(__this, ___sender, method) (( void (*) (HashSet_1_t1417 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m29811_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5869  HashSet_1_GetEnumerator_m29812_gshared (HashSet_1_t1417 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m29812(__this, method) (( Enumerator_t5869  (*) (HashSet_1_t1417 *, const MethodInfo*))HashSet_1_GetEnumerator_m29812_gshared)(__this, method)

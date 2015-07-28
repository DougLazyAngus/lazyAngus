#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1408;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1126;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t652;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t627;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m29718_gshared (HashSet_1_t1408 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m29718(__this, method) (( void (*) (HashSet_1_t1408 *, const MethodInfo*))HashSet_1__ctor_m29718_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m7162_gshared (HashSet_1_t1408 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m7162(__this, ___comparer, method) (( void (*) (HashSet_1_t1408 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7162_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m29719_gshared (HashSet_1_t1408 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m29719(__this, ___collection, method) (( void (*) (HashSet_1_t1408 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m29719_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m29720_gshared (HashSet_1_t1408 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m29720(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1408 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m29720_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m29721_gshared (HashSet_1_t1408 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m29721(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1408 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))HashSet_1__ctor_m29721_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29722_gshared (HashSet_1_t1408 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29722(__this, method) (( Object_t* (*) (HashSet_1_t1408 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29722_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29723_gshared (HashSet_1_t1408 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29723(__this, method) (( bool (*) (HashSet_1_t1408 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29723_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m29724_gshared (HashSet_1_t1408 * __this, ObjectU5BU5D_t627* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m29724(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1408 *, ObjectU5BU5D_t627*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m29724_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29725_gshared (HashSet_1_t1408 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29725(__this, ___item, method) (( void (*) (HashSet_1_t1408 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29725_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m29726_gshared (HashSet_1_t1408 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m29726(__this, method) (( Object_t * (*) (HashSet_1_t1408 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m29726_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m29727_gshared (HashSet_1_t1408 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m29727(__this, method) (( int32_t (*) (HashSet_1_t1408 *, const MethodInfo*))HashSet_1_get_Count_m29727_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m29728_gshared (HashSet_1_t1408 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m29728(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1408 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m29728_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m29729_gshared (HashSet_1_t1408 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m29729(__this, ___size, method) (( void (*) (HashSet_1_t1408 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m29729_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m29730_gshared (HashSet_1_t1408 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m29730(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1408 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m29730_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m29731_gshared (HashSet_1_t1408 * __this, ObjectU5BU5D_t627* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m29731(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1408 *, ObjectU5BU5D_t627*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m29731_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m29732_gshared (HashSet_1_t1408 * __this, ObjectU5BU5D_t627* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m29732(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1408 *, ObjectU5BU5D_t627*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m29732_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m29733_gshared (HashSet_1_t1408 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m29733(__this, method) (( void (*) (HashSet_1_t1408 *, const MethodInfo*))HashSet_1_Resize_m29733_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m29734_gshared (HashSet_1_t1408 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m29734(__this, ___index, method) (( int32_t (*) (HashSet_1_t1408 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m29734_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m29735_gshared (HashSet_1_t1408 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m29735(__this, ___item, method) (( int32_t (*) (HashSet_1_t1408 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m29735_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m29736_gshared (HashSet_1_t1408 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m29736(__this, ___item, method) (( bool (*) (HashSet_1_t1408 *, Object_t *, const MethodInfo*))HashSet_1_Add_m29736_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m29737_gshared (HashSet_1_t1408 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m29737(__this, method) (( void (*) (HashSet_1_t1408 *, const MethodInfo*))HashSet_1_Clear_m29737_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m29738_gshared (HashSet_1_t1408 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m29738(__this, ___item, method) (( bool (*) (HashSet_1_t1408 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m29738_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m29739_gshared (HashSet_1_t1408 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m29739(__this, ___item, method) (( bool (*) (HashSet_1_t1408 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m29739_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m29740_gshared (HashSet_1_t1408 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m29740(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1408 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))HashSet_1_GetObjectData_m29740_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m29741_gshared (HashSet_1_t1408 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m29741(__this, ___sender, method) (( void (*) (HashSet_1_t1408 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m29741_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5859  HashSet_1_GetEnumerator_m29742_gshared (HashSet_1_t1408 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m29742(__this, method) (( Enumerator_t5859  (*) (HashSet_1_t1408 *, const MethodInfo*))HashSet_1_GetEnumerator_m29742_gshared)(__this, method)

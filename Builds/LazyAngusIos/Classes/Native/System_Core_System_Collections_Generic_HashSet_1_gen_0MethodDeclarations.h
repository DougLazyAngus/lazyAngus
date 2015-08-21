#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1465;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1185;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t708;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t680;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m30560_gshared (HashSet_1_t1465 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m30560(__this, method) (( void (*) (HashSet_1_t1465 *, const MethodInfo*))HashSet_1__ctor_m30560_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m7468_gshared (HashSet_1_t1465 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m7468(__this, ___comparer, method) (( void (*) (HashSet_1_t1465 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7468_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m30561_gshared (HashSet_1_t1465 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m30561(__this, ___collection, method) (( void (*) (HashSet_1_t1465 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m30561_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m30562_gshared (HashSet_1_t1465 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m30562(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1465 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m30562_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m30563_gshared (HashSet_1_t1465 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m30563(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1465 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))HashSet_1__ctor_m30563_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30564_gshared (HashSet_1_t1465 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30564(__this, method) (( Object_t* (*) (HashSet_1_t1465 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30564_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30565_gshared (HashSet_1_t1465 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30565(__this, method) (( bool (*) (HashSet_1_t1465 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30565_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30566_gshared (HashSet_1_t1465 * __this, ObjectU5BU5D_t680* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30566(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1465 *, ObjectU5BU5D_t680*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30566_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30567_gshared (HashSet_1_t1465 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30567(__this, ___item, method) (( void (*) (HashSet_1_t1465 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30567_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30568_gshared (HashSet_1_t1465 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30568(__this, method) (( Object_t * (*) (HashSet_1_t1465 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30568_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m30569_gshared (HashSet_1_t1465 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m30569(__this, method) (( int32_t (*) (HashSet_1_t1465 *, const MethodInfo*))HashSet_1_get_Count_m30569_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m30570_gshared (HashSet_1_t1465 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m30570(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1465 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m30570_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m30571_gshared (HashSet_1_t1465 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m30571(__this, ___size, method) (( void (*) (HashSet_1_t1465 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m30571_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m30572_gshared (HashSet_1_t1465 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m30572(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1465 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m30572_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m30573_gshared (HashSet_1_t1465 * __this, ObjectU5BU5D_t680* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m30573(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1465 *, ObjectU5BU5D_t680*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30573_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m30574_gshared (HashSet_1_t1465 * __this, ObjectU5BU5D_t680* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m30574(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1465 *, ObjectU5BU5D_t680*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30574_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m30575_gshared (HashSet_1_t1465 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m30575(__this, method) (( void (*) (HashSet_1_t1465 *, const MethodInfo*))HashSet_1_Resize_m30575_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m30576_gshared (HashSet_1_t1465 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m30576(__this, ___index, method) (( int32_t (*) (HashSet_1_t1465 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m30576_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m30577_gshared (HashSet_1_t1465 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m30577(__this, ___item, method) (( int32_t (*) (HashSet_1_t1465 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m30577_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m30578_gshared (HashSet_1_t1465 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m30578(__this, ___item, method) (( bool (*) (HashSet_1_t1465 *, Object_t *, const MethodInfo*))HashSet_1_Add_m30578_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m30579_gshared (HashSet_1_t1465 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m30579(__this, method) (( void (*) (HashSet_1_t1465 *, const MethodInfo*))HashSet_1_Clear_m30579_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m30580_gshared (HashSet_1_t1465 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m30580(__this, ___item, method) (( bool (*) (HashSet_1_t1465 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m30580_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m30581_gshared (HashSet_1_t1465 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m30581(__this, ___item, method) (( bool (*) (HashSet_1_t1465 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m30581_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m30582_gshared (HashSet_1_t1465 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m30582(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1465 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))HashSet_1_GetObjectData_m30582_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m30583_gshared (HashSet_1_t1465 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m30583(__this, ___sender, method) (( void (*) (HashSet_1_t1465 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m30583_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5945  HashSet_1_GetEnumerator_m30584_gshared (HashSet_1_t1465 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m30584(__this, method) (( Enumerator_t5945  (*) (HashSet_1_t1465 *, const MethodInfo*))HashSet_1_GetEnumerator_m30584_gshared)(__this, method)

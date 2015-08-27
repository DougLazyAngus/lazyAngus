#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1468;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1188;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t711;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m30593_gshared (HashSet_1_t1468 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m30593(__this, method) (( void (*) (HashSet_1_t1468 *, const MethodInfo*))HashSet_1__ctor_m30593_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m7501_gshared (HashSet_1_t1468 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m7501(__this, ___comparer, method) (( void (*) (HashSet_1_t1468 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7501_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m30594_gshared (HashSet_1_t1468 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m30594(__this, ___collection, method) (( void (*) (HashSet_1_t1468 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m30594_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m30595_gshared (HashSet_1_t1468 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m30595(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1468 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m30595_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m30596_gshared (HashSet_1_t1468 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m30596(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1468 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))HashSet_1__ctor_m30596_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30597_gshared (HashSet_1_t1468 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30597(__this, method) (( Object_t* (*) (HashSet_1_t1468 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30597_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30598_gshared (HashSet_1_t1468 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30598(__this, method) (( bool (*) (HashSet_1_t1468 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30598_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30599_gshared (HashSet_1_t1468 * __this, ObjectU5BU5D_t683* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30599(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1468 *, ObjectU5BU5D_t683*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30599_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30600_gshared (HashSet_1_t1468 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30600(__this, ___item, method) (( void (*) (HashSet_1_t1468 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30600_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30601_gshared (HashSet_1_t1468 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30601(__this, method) (( Object_t * (*) (HashSet_1_t1468 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30601_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m30602_gshared (HashSet_1_t1468 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m30602(__this, method) (( int32_t (*) (HashSet_1_t1468 *, const MethodInfo*))HashSet_1_get_Count_m30602_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m30603_gshared (HashSet_1_t1468 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m30603(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1468 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m30603_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m30604_gshared (HashSet_1_t1468 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m30604(__this, ___size, method) (( void (*) (HashSet_1_t1468 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m30604_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m30605_gshared (HashSet_1_t1468 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m30605(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1468 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m30605_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m30606_gshared (HashSet_1_t1468 * __this, ObjectU5BU5D_t683* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m30606(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1468 *, ObjectU5BU5D_t683*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30606_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m30607_gshared (HashSet_1_t1468 * __this, ObjectU5BU5D_t683* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m30607(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1468 *, ObjectU5BU5D_t683*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30607_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m30608_gshared (HashSet_1_t1468 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m30608(__this, method) (( void (*) (HashSet_1_t1468 *, const MethodInfo*))HashSet_1_Resize_m30608_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m30609_gshared (HashSet_1_t1468 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m30609(__this, ___index, method) (( int32_t (*) (HashSet_1_t1468 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m30609_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m30610_gshared (HashSet_1_t1468 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m30610(__this, ___item, method) (( int32_t (*) (HashSet_1_t1468 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m30610_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m30611_gshared (HashSet_1_t1468 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m30611(__this, ___item, method) (( bool (*) (HashSet_1_t1468 *, Object_t *, const MethodInfo*))HashSet_1_Add_m30611_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m30612_gshared (HashSet_1_t1468 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m30612(__this, method) (( void (*) (HashSet_1_t1468 *, const MethodInfo*))HashSet_1_Clear_m30612_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m30613_gshared (HashSet_1_t1468 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m30613(__this, ___item, method) (( bool (*) (HashSet_1_t1468 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m30613_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m30614_gshared (HashSet_1_t1468 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m30614(__this, ___item, method) (( bool (*) (HashSet_1_t1468 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m30614_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m30615_gshared (HashSet_1_t1468 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m30615(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1468 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))HashSet_1_GetObjectData_m30615_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m30616_gshared (HashSet_1_t1468 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m30616(__this, ___sender, method) (( void (*) (HashSet_1_t1468 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m30616_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5948  HashSet_1_GetEnumerator_m30617_gshared (HashSet_1_t1468 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m30617(__this, method) (( Enumerator_t5948  (*) (HashSet_1_t1468 *, const MethodInfo*))HashSet_1_GetEnumerator_m30617_gshared)(__this, method)

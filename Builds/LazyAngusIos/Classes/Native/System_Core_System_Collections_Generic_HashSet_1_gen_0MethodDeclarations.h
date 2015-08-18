#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1467;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t710;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m30469_gshared (HashSet_1_t1467 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m30469(__this, method) (( void (*) (HashSet_1_t1467 *, const MethodInfo*))HashSet_1__ctor_m30469_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m7479_gshared (HashSet_1_t1467 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m7479(__this, ___comparer, method) (( void (*) (HashSet_1_t1467 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7479_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m30470_gshared (HashSet_1_t1467 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m30470(__this, ___collection, method) (( void (*) (HashSet_1_t1467 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m30470_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m30471_gshared (HashSet_1_t1467 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m30471(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1467 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m30471_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m30472_gshared (HashSet_1_t1467 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m30472(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1467 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))HashSet_1__ctor_m30472_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30473_gshared (HashSet_1_t1467 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30473(__this, method) (( Object_t* (*) (HashSet_1_t1467 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30474_gshared (HashSet_1_t1467 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30474(__this, method) (( bool (*) (HashSet_1_t1467 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30474_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30475_gshared (HashSet_1_t1467 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30475(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1467 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30475_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30476_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30476(__this, ___item, method) (( void (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30476_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30477_gshared (HashSet_1_t1467 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30477(__this, method) (( Object_t * (*) (HashSet_1_t1467 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30477_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m30478_gshared (HashSet_1_t1467 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m30478(__this, method) (( int32_t (*) (HashSet_1_t1467 *, const MethodInfo*))HashSet_1_get_Count_m30478_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m30479_gshared (HashSet_1_t1467 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m30479(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1467 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m30479_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m30480_gshared (HashSet_1_t1467 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m30480(__this, ___size, method) (( void (*) (HashSet_1_t1467 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m30480_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m30481_gshared (HashSet_1_t1467 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m30481(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1467 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m30481_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m30482_gshared (HashSet_1_t1467 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m30482(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1467 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30482_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m30483_gshared (HashSet_1_t1467 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m30483(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1467 *, ObjectU5BU5D_t682*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30483_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m30484_gshared (HashSet_1_t1467 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m30484(__this, method) (( void (*) (HashSet_1_t1467 *, const MethodInfo*))HashSet_1_Resize_m30484_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m30485_gshared (HashSet_1_t1467 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m30485(__this, ___index, method) (( int32_t (*) (HashSet_1_t1467 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m30485_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m30486_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m30486(__this, ___item, method) (( int32_t (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m30486_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m30487_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m30487(__this, ___item, method) (( bool (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))HashSet_1_Add_m30487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m30488_gshared (HashSet_1_t1467 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m30488(__this, method) (( void (*) (HashSet_1_t1467 *, const MethodInfo*))HashSet_1_Clear_m30488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m30489_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m30489(__this, ___item, method) (( bool (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m30489_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m30490_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m30490(__this, ___item, method) (( bool (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m30490_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m30491_gshared (HashSet_1_t1467 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m30491(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1467 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))HashSet_1_GetObjectData_m30491_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m30492_gshared (HashSet_1_t1467 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m30492(__this, ___sender, method) (( void (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m30492_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5941  HashSet_1_GetEnumerator_m30493_gshared (HashSet_1_t1467 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m30493(__this, method) (( Enumerator_t5941  (*) (HashSet_1_t1467 *, const MethodInfo*))HashSet_1_GetEnumerator_m30493_gshared)(__this, method)

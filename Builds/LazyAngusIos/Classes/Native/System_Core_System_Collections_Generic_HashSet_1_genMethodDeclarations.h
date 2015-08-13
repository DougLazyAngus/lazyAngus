#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1290;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t709;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1460;
// System.String[]
struct StringU5BU5D_t75;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.String>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__1.h"

// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_0MethodDeclarations.h"
#define HashSet_1__ctor_m7438(__this, method) (( void (*) (HashSet_1_t1290 *, const MethodInfo*))HashSet_1__ctor_m30472_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m32108(__this, ___comparer, method) (( void (*) (HashSet_1_t1290 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7480_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m7441(__this, ___collection, method) (( void (*) (HashSet_1_t1290 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m30473_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m32109(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1290 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m30474_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m32110(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1290 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))HashSet_1__ctor_m30475_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32111(__this, method) (( Object_t* (*) (HashSet_1_t1290 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30476_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32112(__this, method) (( bool (*) (HashSet_1_t1290 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30477_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m32113(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1290 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30478_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m32114(__this, ___item, method) (( void (*) (HashSet_1_t1290 *, String_t*, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30479_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m32115(__this, method) (( Object_t * (*) (HashSet_1_t1290 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30480_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
#define HashSet_1_get_Count_m32116(__this, method) (( int32_t (*) (HashSet_1_t1290 *, const MethodInfo*))HashSet_1_get_Count_m30481_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m32117(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1290 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m30482_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m32118(__this, ___size, method) (( void (*) (HashSet_1_t1290 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m30483_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m32119(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1290 *, int32_t, int32_t, String_t*, const MethodInfo*))HashSet_1_SlotsContainsAt_m30484_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m32120(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1290 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30485_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m32121(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1290 *, StringU5BU5D_t75*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30486_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Resize()
#define HashSet_1_Resize_m32122(__this, method) (( void (*) (HashSet_1_t1290 *, const MethodInfo*))HashSet_1_Resize_m30487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m32123(__this, ___index, method) (( int32_t (*) (HashSet_1_t1290 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m30488_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m32124(__this, ___item, method) (( int32_t (*) (HashSet_1_t1290 *, String_t*, const MethodInfo*))HashSet_1_GetItemHashCode_m30489_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
#define HashSet_1_Add_m7658(__this, ___item, method) (( bool (*) (HashSet_1_t1290 *, String_t*, const MethodInfo*))HashSet_1_Add_m30490_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
#define HashSet_1_Clear_m32125(__this, method) (( void (*) (HashSet_1_t1290 *, const MethodInfo*))HashSet_1_Clear_m30491_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
#define HashSet_1_Contains_m32126(__this, ___item, method) (( bool (*) (HashSet_1_t1290 *, String_t*, const MethodInfo*))HashSet_1_Contains_m30492_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
#define HashSet_1_Remove_m32127(__this, ___item, method) (( bool (*) (HashSet_1_t1290 *, String_t*, const MethodInfo*))HashSet_1_Remove_m30493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m32128(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1290 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))HashSet_1_GetObjectData_m30494_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m32129(__this, ___sender, method) (( void (*) (HashSet_1_t1290 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m30495_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
#define HashSet_1_GetEnumerator_m32130(__this, method) (( Enumerator_t6092  (*) (HashSet_1_t1290 *, const MethodInfo*))HashSet_1_GetEnumerator_m30496_gshared)(__this, method)

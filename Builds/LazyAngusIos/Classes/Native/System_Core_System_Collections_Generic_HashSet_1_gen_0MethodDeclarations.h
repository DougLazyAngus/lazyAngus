#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1488;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1208;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t728;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Object[]
struct ObjectU5BU5D_t700;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m35173_gshared (HashSet_1_t1488 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m35173(__this, method) (( void (*) (HashSet_1_t1488 *, const MethodInfo*))HashSet_1__ctor_m35173_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m7650_gshared (HashSet_1_t1488 * __this, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m7650(__this, ___comparer, method) (( void (*) (HashSet_1_t1488 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7650_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m35174_gshared (HashSet_1_t1488 * __this, Object_t* ___collection, const MethodInfo* method);
#define HashSet_1__ctor_m35174(__this, ___collection, method) (( void (*) (HashSet_1_t1488 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m35174_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m35175_gshared (HashSet_1_t1488 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1__ctor_m35175(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1488 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m35175_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m35176_gshared (HashSet_1_t1488 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m35176(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1488 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))HashSet_1__ctor_m35176_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35177_gshared (HashSet_1_t1488 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35177(__this, method) (( Object_t* (*) (HashSet_1_t1488 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35177_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35178_gshared (HashSet_1_t1488 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35178(__this, method) (( bool (*) (HashSet_1_t1488 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35178_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m35179_gshared (HashSet_1_t1488 * __this, ObjectU5BU5D_t700* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m35179(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1488 *, ObjectU5BU5D_t700*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m35179_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35180_gshared (HashSet_1_t1488 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35180(__this, ___item, method) (( void (*) (HashSet_1_t1488 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35180_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m35181_gshared (HashSet_1_t1488 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m35181(__this, method) (( Object_t * (*) (HashSet_1_t1488 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m35181_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m35182_gshared (HashSet_1_t1488 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m35182(__this, method) (( int32_t (*) (HashSet_1_t1488 *, const MethodInfo*))HashSet_1_get_Count_m35182_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m35183_gshared (HashSet_1_t1488 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m35183(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1488 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m35183_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m35184_gshared (HashSet_1_t1488 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m35184(__this, ___size, method) (( void (*) (HashSet_1_t1488 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m35184_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m35185_gshared (HashSet_1_t1488 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m35185(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1488 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m35185_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m35186_gshared (HashSet_1_t1488 * __this, ObjectU5BU5D_t700* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m35186(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1488 *, ObjectU5BU5D_t700*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m35186_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m35187_gshared (HashSet_1_t1488 * __this, ObjectU5BU5D_t700* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m35187(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1488 *, ObjectU5BU5D_t700*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m35187_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m35188_gshared (HashSet_1_t1488 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m35188(__this, method) (( void (*) (HashSet_1_t1488 *, const MethodInfo*))HashSet_1_Resize_m35188_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m35189_gshared (HashSet_1_t1488 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m35189(__this, ___index, method) (( int32_t (*) (HashSet_1_t1488 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m35189_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m35190_gshared (HashSet_1_t1488 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m35190(__this, ___item, method) (( int32_t (*) (HashSet_1_t1488 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m35190_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m35191_gshared (HashSet_1_t1488 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m35191(__this, ___item, method) (( bool (*) (HashSet_1_t1488 *, Object_t *, const MethodInfo*))HashSet_1_Add_m35191_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m35192_gshared (HashSet_1_t1488 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m35192(__this, method) (( void (*) (HashSet_1_t1488 *, const MethodInfo*))HashSet_1_Clear_m35192_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m35193_gshared (HashSet_1_t1488 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m35193(__this, ___item, method) (( bool (*) (HashSet_1_t1488 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m35193_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m35194_gshared (HashSet_1_t1488 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m35194(__this, ___item, method) (( bool (*) (HashSet_1_t1488 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m35194_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m35195_gshared (HashSet_1_t1488 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m35195(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1488 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))HashSet_1_GetObjectData_m35195_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m35196_gshared (HashSet_1_t1488 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m35196(__this, ___sender, method) (( void (*) (HashSet_1_t1488 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m35196_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6516  HashSet_1_GetEnumerator_m35197_gshared (HashSet_1_t1488 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m35197(__this, method) (( Enumerator_t6516  (*) (HashSet_1_t1488 *, const MethodInfo*))HashSet_1_GetEnumerator_m35197_gshared)(__this, method)

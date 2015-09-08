#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1308;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5768;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t724;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1478;
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
#define HashSet_1__ctor_m7608(__this, method) (( void (*) (HashSet_1_t1308 *, const MethodInfo*))HashSet_1__ctor_m35161_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m36805(__this, ___comparer, method) (( void (*) (HashSet_1_t1308 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7650_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m7611(__this, ___collection, method) (( void (*) (HashSet_1_t1308 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m35162_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m36806(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1308 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m35163_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m36807(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1308 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))HashSet_1__ctor_m35164_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36808(__this, method) (( Object_t* (*) (HashSet_1_t1308 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36809(__this, method) (( bool (*) (HashSet_1_t1308 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35166_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m36810(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1308 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m35167_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m36811(__this, ___item, method) (( void (*) (HashSet_1_t1308 *, String_t*, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35168_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m36812(__this, method) (( Object_t * (*) (HashSet_1_t1308 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m35169_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
#define HashSet_1_get_Count_m36813(__this, method) (( int32_t (*) (HashSet_1_t1308 *, const MethodInfo*))HashSet_1_get_Count_m35170_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m36814(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1308 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m35171_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m36815(__this, ___size, method) (( void (*) (HashSet_1_t1308 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m35172_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m36816(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1308 *, int32_t, int32_t, String_t*, const MethodInfo*))HashSet_1_SlotsContainsAt_m35173_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m36817(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1308 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m35174_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m36818(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1308 *, StringU5BU5D_t75*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m35175_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Resize()
#define HashSet_1_Resize_m36819(__this, method) (( void (*) (HashSet_1_t1308 *, const MethodInfo*))HashSet_1_Resize_m35176_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m36820(__this, ___index, method) (( int32_t (*) (HashSet_1_t1308 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m35177_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m36821(__this, ___item, method) (( int32_t (*) (HashSet_1_t1308 *, String_t*, const MethodInfo*))HashSet_1_GetItemHashCode_m35178_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
#define HashSet_1_Add_m7828(__this, ___item, method) (( bool (*) (HashSet_1_t1308 *, String_t*, const MethodInfo*))HashSet_1_Add_m35179_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
#define HashSet_1_Clear_m36822(__this, method) (( void (*) (HashSet_1_t1308 *, const MethodInfo*))HashSet_1_Clear_m35180_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
#define HashSet_1_Contains_m36823(__this, ___item, method) (( bool (*) (HashSet_1_t1308 *, String_t*, const MethodInfo*))HashSet_1_Contains_m35181_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
#define HashSet_1_Remove_m36824(__this, ___item, method) (( bool (*) (HashSet_1_t1308 *, String_t*, const MethodInfo*))HashSet_1_Remove_m35182_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m36825(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1308 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))HashSet_1_GetObjectData_m35183_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m36826(__this, ___sender, method) (( void (*) (HashSet_1_t1308 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m35184_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
#define HashSet_1_GetEnumerator_m36827(__this, method) (( Enumerator_t6662  (*) (HashSet_1_t1308 *, const MethodInfo*))HashSet_1_GetEnumerator_m35185_gshared)(__this, method)

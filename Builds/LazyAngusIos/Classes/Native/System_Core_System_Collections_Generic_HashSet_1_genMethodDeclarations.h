#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1240;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5335;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t661;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1411;
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
#define HashSet_1__ctor_m7194(__this, method) (( void (*) (HashSet_1_t1240 *, const MethodInfo*))HashSet_1__ctor_m29796_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m31432(__this, ___comparer, method) (( void (*) (HashSet_1_t1240 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7236_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m7197(__this, ___collection, method) (( void (*) (HashSet_1_t1240 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m29797_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m31433(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1240 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m29798_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m31434(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1240 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))HashSet_1__ctor_m29799_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31435(__this, method) (( Object_t* (*) (HashSet_1_t1240 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29800_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31436(__this, method) (( bool (*) (HashSet_1_t1240 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29801_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m31437(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1240 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m29802_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31438(__this, ___item, method) (( void (*) (HashSet_1_t1240 *, String_t*, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29803_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m31439(__this, method) (( Object_t * (*) (HashSet_1_t1240 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m29804_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
#define HashSet_1_get_Count_m31440(__this, method) (( int32_t (*) (HashSet_1_t1240 *, const MethodInfo*))HashSet_1_get_Count_m29805_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m31441(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1240 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m29806_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m31442(__this, ___size, method) (( void (*) (HashSet_1_t1240 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m29807_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m31443(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1240 *, int32_t, int32_t, String_t*, const MethodInfo*))HashSet_1_SlotsContainsAt_m29808_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m31444(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1240 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m29809_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m31445(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1240 *, StringU5BU5D_t75*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m29810_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Resize()
#define HashSet_1_Resize_m31446(__this, method) (( void (*) (HashSet_1_t1240 *, const MethodInfo*))HashSet_1_Resize_m29811_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m31447(__this, ___index, method) (( int32_t (*) (HashSet_1_t1240 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m29812_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m31448(__this, ___item, method) (( int32_t (*) (HashSet_1_t1240 *, String_t*, const MethodInfo*))HashSet_1_GetItemHashCode_m29813_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
#define HashSet_1_Add_m7414(__this, ___item, method) (( bool (*) (HashSet_1_t1240 *, String_t*, const MethodInfo*))HashSet_1_Add_m29814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
#define HashSet_1_Clear_m31449(__this, method) (( void (*) (HashSet_1_t1240 *, const MethodInfo*))HashSet_1_Clear_m29815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
#define HashSet_1_Contains_m31450(__this, ___item, method) (( bool (*) (HashSet_1_t1240 *, String_t*, const MethodInfo*))HashSet_1_Contains_m29816_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
#define HashSet_1_Remove_m31451(__this, ___item, method) (( bool (*) (HashSet_1_t1240 *, String_t*, const MethodInfo*))HashSet_1_Remove_m29817_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m31452(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1240 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))HashSet_1_GetObjectData_m29818_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m31453(__this, ___sender, method) (( void (*) (HashSet_1_t1240 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m29819_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
#define HashSet_1_GetEnumerator_m31454(__this, method) (( Enumerator_t6021  (*) (HashSet_1_t1240 *, const MethodInfo*))HashSet_1_GetEnumerator_m29820_gshared)(__this, method)

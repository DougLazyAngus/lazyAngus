#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1288;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5377;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1458;
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
#define HashSet_1__ctor_m7427(__this, method) (( void (*) (HashSet_1_t1288 *, const MethodInfo*))HashSet_1__ctor_m30561_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m32197(__this, ___comparer, method) (( void (*) (HashSet_1_t1288 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m7469_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define HashSet_1__ctor_m7430(__this, ___collection, method) (( void (*) (HashSet_1_t1288 *, Object_t*, const MethodInfo*))HashSet_1__ctor_m30562_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1__ctor_m32198(__this, ___collection, ___comparer, method) (( void (*) (HashSet_1_t1288 *, Object_t*, Object_t*, const MethodInfo*))HashSet_1__ctor_m30563_gshared)(__this, ___collection, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1__ctor_m32199(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1288 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))HashSet_1__ctor_m30564_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32200(__this, method) (( Object_t* (*) (HashSet_1_t1288 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30565_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32201(__this, method) (( bool (*) (HashSet_1_t1288 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30566_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m32202(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1288 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30567_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m32203(__this, ___item, method) (( void (*) (HashSet_1_t1288 *, String_t*, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30568_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m32204(__this, method) (( Object_t * (*) (HashSet_1_t1288 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30569_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
#define HashSet_1_get_Count_m32205(__this, method) (( int32_t (*) (HashSet_1_t1288 *, const MethodInfo*))HashSet_1_get_Count_m30570_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
#define HashSet_1_Init_m32206(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t1288 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m30571_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::InitArrays(System.Int32)
#define HashSet_1_InitArrays_m32207(__this, ___size, method) (( void (*) (HashSet_1_t1288 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m30572_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::SlotsContainsAt(System.Int32,System.Int32,T)
#define HashSet_1_SlotsContainsAt_m32208(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t1288 *, int32_t, int32_t, String_t*, const MethodInfo*))HashSet_1_SlotsContainsAt_m30573_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32)
#define HashSet_1_CopyTo_m32209(__this, ___array, ___index, method) (( void (*) (HashSet_1_t1288 *, StringU5BU5D_t75*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30574_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::CopyTo(T[],System.Int32,System.Int32)
#define HashSet_1_CopyTo_m32210(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t1288 *, StringU5BU5D_t75*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m30575_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Resize()
#define HashSet_1_Resize_m32211(__this, method) (( void (*) (HashSet_1_t1288 *, const MethodInfo*))HashSet_1_Resize_m30576_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetLinkHashCode(System.Int32)
#define HashSet_1_GetLinkHashCode_m32212(__this, ___index, method) (( int32_t (*) (HashSet_1_t1288 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m30577_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::GetItemHashCode(T)
#define HashSet_1_GetItemHashCode_m32213(__this, ___item, method) (( int32_t (*) (HashSet_1_t1288 *, String_t*, const MethodInfo*))HashSet_1_GetItemHashCode_m30578_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
#define HashSet_1_Add_m7647(__this, ___item, method) (( bool (*) (HashSet_1_t1288 *, String_t*, const MethodInfo*))HashSet_1_Add_m30579_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
#define HashSet_1_Clear_m32214(__this, method) (( void (*) (HashSet_1_t1288 *, const MethodInfo*))HashSet_1_Clear_m30580_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
#define HashSet_1_Contains_m32215(__this, ___item, method) (( bool (*) (HashSet_1_t1288 *, String_t*, const MethodInfo*))HashSet_1_Contains_m30581_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
#define HashSet_1_Remove_m32216(__this, ___item, method) (( bool (*) (HashSet_1_t1288 *, String_t*, const MethodInfo*))HashSet_1_Remove_m30582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define HashSet_1_GetObjectData_m32217(__this, ___info, ___context, method) (( void (*) (HashSet_1_t1288 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))HashSet_1_GetObjectData_m30583_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.String>::OnDeserialization(System.Object)
#define HashSet_1_OnDeserialization_m32218(__this, ___sender, method) (( void (*) (HashSet_1_t1288 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m30584_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
#define HashSet_1_GetEnumerator_m32219(__this, method) (( Enumerator_t6096  (*) (HashSet_1_t1288 *, const MethodInfo*))HashSet_1_GetEnumerator_m30585_gshared)(__this, method)

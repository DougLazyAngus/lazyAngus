#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5898;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5897;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t627;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m30023_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m30023(__this, method) (( void (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1__ctor_m30023_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m30025_gshared (LinkedList_1_t5898 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m30025(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5898 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))LinkedList_1__ctor_m30025_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30027_gshared (LinkedList_1_t5898 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30027(__this, ___value, method) (( void (*) (LinkedList_1_t5898 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30027_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30029_gshared (LinkedList_1_t5898 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m30029(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5898 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m30029_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30031_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30031(__this, method) (( Object_t* (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30031_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30033_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30033(__this, method) (( Object_t * (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30033_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30035_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30035(__this, method) (( bool (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30035_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30037_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30037(__this, method) (( bool (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30037_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30039_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30039(__this, method) (( Object_t * (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30039_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m30041_gshared (LinkedList_1_t5898 * __this, LinkedListNode_1_t5897 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m30041(__this, ___node, method) (( void (*) (LinkedList_1_t5898 *, LinkedListNode_1_t5897 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m30041_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5897 * LinkedList_1_AddLast_m30043_gshared (LinkedList_1_t5898 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m30043(__this, ___value, method) (( LinkedListNode_1_t5897 * (*) (LinkedList_1_t5898 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m30043_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30045_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m30045(__this, method) (( void (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_Clear_m30045_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30047_gshared (LinkedList_1_t5898 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m30047(__this, ___value, method) (( bool (*) (LinkedList_1_t5898 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m30047_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m30049_gshared (LinkedList_1_t5898 * __this, ObjectU5BU5D_t627* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m30049(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5898 *, ObjectU5BU5D_t627*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m30049_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5897 * LinkedList_1_Find_m30051_gshared (LinkedList_1_t5898 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m30051(__this, ___value, method) (( LinkedListNode_1_t5897 * (*) (LinkedList_1_t5898 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m30051_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5899  LinkedList_1_GetEnumerator_m30053_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m30053(__this, method) (( Enumerator_t5899  (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_GetEnumerator_m30053_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m30055_gshared (LinkedList_1_t5898 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m30055(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5898 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))LinkedList_1_GetObjectData_m30055_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m30057_gshared (LinkedList_1_t5898 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m30057(__this, ___sender, method) (( void (*) (LinkedList_1_t5898 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m30057_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30059_gshared (LinkedList_1_t5898 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m30059(__this, ___value, method) (( bool (*) (LinkedList_1_t5898 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m30059_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30061_gshared (LinkedList_1_t5898 * __this, LinkedListNode_1_t5897 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m30061(__this, ___node, method) (( void (*) (LinkedList_1_t5898 *, LinkedListNode_1_t5897 *, const MethodInfo*))LinkedList_1_Remove_m30061_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30063_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m30063(__this, method) (( void (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_RemoveFirst_m30063_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30065_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m30065(__this, method) (( void (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_RemoveLast_m30065_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30067_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m30067(__this, method) (( int32_t (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_get_Count_m30067_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5897 * LinkedList_1_get_First_m30069_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m30069(__this, method) (( LinkedListNode_1_t5897 * (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_get_First_m30069_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5897 * LinkedList_1_get_Last_m30071_gshared (LinkedList_1_t5898 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m30071(__this, method) (( LinkedListNode_1_t5897 * (*) (LinkedList_1_t5898 *, const MethodInfo*))LinkedList_1_get_Last_m30071_gshared)(__this, method)

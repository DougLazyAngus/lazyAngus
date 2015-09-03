#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6549;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6548;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m35453_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m35453(__this, method) (( void (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1__ctor_m35453_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m35455_gshared (LinkedList_1_t6549 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m35455(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t6549 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))LinkedList_1__ctor_m35455_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35457_gshared (LinkedList_1_t6549 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35457(__this, ___value, method) (( void (*) (LinkedList_1_t6549 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35457_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m35459_gshared (LinkedList_1_t6549 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m35459(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t6549 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m35459_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35461_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35461(__this, method) (( Object_t* (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35461_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m35463_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m35463(__this, method) (( Object_t * (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m35463_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35465_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35465(__this, method) (( bool (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35465_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m35467_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m35467(__this, method) (( bool (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m35467_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m35469_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m35469(__this, method) (( Object_t * (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m35469_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m35471_gshared (LinkedList_1_t6549 * __this, LinkedListNode_1_t6548 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m35471(__this, ___node, method) (( void (*) (LinkedList_1_t6549 *, LinkedListNode_1_t6548 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m35471_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t6548 * LinkedList_1_AddLast_m35473_gshared (LinkedList_1_t6549 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m35473(__this, ___value, method) (( LinkedListNode_1_t6548 * (*) (LinkedList_1_t6549 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m35473_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m35475_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m35475(__this, method) (( void (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_Clear_m35475_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m35477_gshared (LinkedList_1_t6549 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m35477(__this, ___value, method) (( bool (*) (LinkedList_1_t6549 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m35477_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m35479_gshared (LinkedList_1_t6549 * __this, ObjectU5BU5D_t696* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m35479(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t6549 *, ObjectU5BU5D_t696*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m35479_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t6548 * LinkedList_1_Find_m35481_gshared (LinkedList_1_t6549 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m35481(__this, ___value, method) (( LinkedListNode_1_t6548 * (*) (LinkedList_1_t6549 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m35481_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6550  LinkedList_1_GetEnumerator_m35483_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m35483(__this, method) (( Enumerator_t6550  (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_GetEnumerator_m35483_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m35485_gshared (LinkedList_1_t6549 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m35485(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t6549 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))LinkedList_1_GetObjectData_m35485_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m35487_gshared (LinkedList_1_t6549 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m35487(__this, ___sender, method) (( void (*) (LinkedList_1_t6549 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m35487_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m35489_gshared (LinkedList_1_t6549 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m35489(__this, ___value, method) (( bool (*) (LinkedList_1_t6549 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m35489_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m35491_gshared (LinkedList_1_t6549 * __this, LinkedListNode_1_t6548 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m35491(__this, ___node, method) (( void (*) (LinkedList_1_t6549 *, LinkedListNode_1_t6548 *, const MethodInfo*))LinkedList_1_Remove_m35491_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m35493_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m35493(__this, method) (( void (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_RemoveFirst_m35493_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m35495_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m35495(__this, method) (( void (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_RemoveLast_m35495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m35497_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m35497(__this, method) (( int32_t (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_get_Count_m35497_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t6548 * LinkedList_1_get_First_m35499_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m35499(__this, method) (( LinkedListNode_1_t6548 * (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_get_First_m35499_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t6548 * LinkedList_1_get_Last_m35501_gshared (LinkedList_1_t6549 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m35501(__this, method) (( LinkedListNode_1_t6548 * (*) (LinkedList_1_t6549 *, const MethodInfo*))LinkedList_1_get_Last_m35501_gshared)(__this, method)

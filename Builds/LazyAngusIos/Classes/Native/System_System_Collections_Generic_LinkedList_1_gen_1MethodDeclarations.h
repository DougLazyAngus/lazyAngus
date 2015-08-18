#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5980;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5979;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m30774_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m30774(__this, method) (( void (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1__ctor_m30774_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m30776_gshared (LinkedList_1_t5980 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m30776(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5980 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))LinkedList_1__ctor_m30776_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30778_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30778(__this, ___value, method) (( void (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30778_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30780_gshared (LinkedList_1_t5980 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m30780(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5980 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m30780_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30782_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30782(__this, method) (( Object_t* (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30782_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30784_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30784(__this, method) (( Object_t * (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30784_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30786_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30786(__this, method) (( bool (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30786_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30788_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30788(__this, method) (( bool (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30788_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30790_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30790(__this, method) (( Object_t * (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30790_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m30792_gshared (LinkedList_1_t5980 * __this, LinkedListNode_1_t5979 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m30792(__this, ___node, method) (( void (*) (LinkedList_1_t5980 *, LinkedListNode_1_t5979 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m30792_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5979 * LinkedList_1_AddLast_m30794_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m30794(__this, ___value, method) (( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m30794_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30796_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m30796(__this, method) (( void (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_Clear_m30796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30798_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m30798(__this, ___value, method) (( bool (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m30798_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m30800_gshared (LinkedList_1_t5980 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m30800(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5980 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m30800_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5979 * LinkedList_1_Find_m30802_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m30802(__this, ___value, method) (( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m30802_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5981  LinkedList_1_GetEnumerator_m30804_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m30804(__this, method) (( Enumerator_t5981  (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_GetEnumerator_m30804_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m30806_gshared (LinkedList_1_t5980 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m30806(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5980 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))LinkedList_1_GetObjectData_m30806_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m30808_gshared (LinkedList_1_t5980 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m30808(__this, ___sender, method) (( void (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m30808_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30810_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m30810(__this, ___value, method) (( bool (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m30810_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30812_gshared (LinkedList_1_t5980 * __this, LinkedListNode_1_t5979 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m30812(__this, ___node, method) (( void (*) (LinkedList_1_t5980 *, LinkedListNode_1_t5979 *, const MethodInfo*))LinkedList_1_Remove_m30812_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30814_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m30814(__this, method) (( void (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_RemoveFirst_m30814_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30816_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m30816(__this, method) (( void (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_RemoveLast_m30816_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30818_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m30818(__this, method) (( int32_t (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_get_Count_m30818_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5979 * LinkedList_1_get_First_m30820_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m30820(__this, method) (( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_get_First_m30820_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5979 * LinkedList_1_get_Last_m30822_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m30822(__this, method) (( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_get_Last_m30822_gshared)(__this, method)

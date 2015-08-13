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
extern "C" void LinkedList_1__ctor_m30777_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m30777(__this, method) (( void (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1__ctor_m30777_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m30779_gshared (LinkedList_1_t5980 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m30779(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5980 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))LinkedList_1__ctor_m30779_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30781_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30781(__this, ___value, method) (( void (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30781_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30783_gshared (LinkedList_1_t5980 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m30783(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5980 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m30783_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30785_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30785(__this, method) (( Object_t* (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30785_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30787_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30787(__this, method) (( Object_t * (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30787_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30789_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30789(__this, method) (( bool (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30789_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30791_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30791(__this, method) (( bool (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30791_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30793_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30793(__this, method) (( Object_t * (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30793_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m30795_gshared (LinkedList_1_t5980 * __this, LinkedListNode_1_t5979 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m30795(__this, ___node, method) (( void (*) (LinkedList_1_t5980 *, LinkedListNode_1_t5979 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m30795_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5979 * LinkedList_1_AddLast_m30797_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m30797(__this, ___value, method) (( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m30797_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30799_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m30799(__this, method) (( void (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_Clear_m30799_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30801_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m30801(__this, ___value, method) (( bool (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m30801_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m30803_gshared (LinkedList_1_t5980 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m30803(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5980 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m30803_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5979 * LinkedList_1_Find_m30805_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m30805(__this, ___value, method) (( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m30805_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5981  LinkedList_1_GetEnumerator_m30807_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m30807(__this, method) (( Enumerator_t5981  (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_GetEnumerator_m30807_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m30809_gshared (LinkedList_1_t5980 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m30809(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5980 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))LinkedList_1_GetObjectData_m30809_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m30811_gshared (LinkedList_1_t5980 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m30811(__this, ___sender, method) (( void (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m30811_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30813_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m30813(__this, ___value, method) (( bool (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m30813_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30815_gshared (LinkedList_1_t5980 * __this, LinkedListNode_1_t5979 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m30815(__this, ___node, method) (( void (*) (LinkedList_1_t5980 *, LinkedListNode_1_t5979 *, const MethodInfo*))LinkedList_1_Remove_m30815_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30817_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m30817(__this, method) (( void (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_RemoveFirst_m30817_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30819_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m30819(__this, method) (( void (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_RemoveLast_m30819_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30821_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m30821(__this, method) (( int32_t (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_get_Count_m30821_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5979 * LinkedList_1_get_First_m30823_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m30823(__this, method) (( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_get_First_m30823_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5979 * LinkedList_1_get_Last_m30825_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m30825(__this, method) (( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, const MethodInfo*))LinkedList_1_get_Last_m30825_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6555;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6554;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t700;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m35478_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m35478(__this, method) (( void (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1__ctor_m35478_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m35480_gshared (LinkedList_1_t6555 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m35480(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t6555 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))LinkedList_1__ctor_m35480_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35482_gshared (LinkedList_1_t6555 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35482(__this, ___value, method) (( void (*) (LinkedList_1_t6555 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35482_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m35484_gshared (LinkedList_1_t6555 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m35484(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t6555 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m35484_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35486_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35486(__this, method) (( Object_t* (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35486_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m35488_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m35488(__this, method) (( Object_t * (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m35488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35490_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35490(__this, method) (( bool (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35490_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m35492_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m35492(__this, method) (( bool (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m35492_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m35494_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m35494(__this, method) (( Object_t * (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m35494_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m35496_gshared (LinkedList_1_t6555 * __this, LinkedListNode_1_t6554 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m35496(__this, ___node, method) (( void (*) (LinkedList_1_t6555 *, LinkedListNode_1_t6554 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m35496_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t6554 * LinkedList_1_AddLast_m35498_gshared (LinkedList_1_t6555 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m35498(__this, ___value, method) (( LinkedListNode_1_t6554 * (*) (LinkedList_1_t6555 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m35498_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m35500_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m35500(__this, method) (( void (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_Clear_m35500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m35502_gshared (LinkedList_1_t6555 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m35502(__this, ___value, method) (( bool (*) (LinkedList_1_t6555 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m35502_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m35504_gshared (LinkedList_1_t6555 * __this, ObjectU5BU5D_t700* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m35504(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t6555 *, ObjectU5BU5D_t700*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m35504_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t6554 * LinkedList_1_Find_m35506_gshared (LinkedList_1_t6555 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m35506(__this, ___value, method) (( LinkedListNode_1_t6554 * (*) (LinkedList_1_t6555 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m35506_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6556  LinkedList_1_GetEnumerator_m35508_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m35508(__this, method) (( Enumerator_t6556  (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_GetEnumerator_m35508_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m35510_gshared (LinkedList_1_t6555 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m35510(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t6555 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))LinkedList_1_GetObjectData_m35510_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m35512_gshared (LinkedList_1_t6555 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m35512(__this, ___sender, method) (( void (*) (LinkedList_1_t6555 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m35512_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m35514_gshared (LinkedList_1_t6555 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m35514(__this, ___value, method) (( bool (*) (LinkedList_1_t6555 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m35514_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m35516_gshared (LinkedList_1_t6555 * __this, LinkedListNode_1_t6554 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m35516(__this, ___node, method) (( void (*) (LinkedList_1_t6555 *, LinkedListNode_1_t6554 *, const MethodInfo*))LinkedList_1_Remove_m35516_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m35518_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m35518(__this, method) (( void (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_RemoveFirst_m35518_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m35520_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m35520(__this, method) (( void (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_RemoveLast_m35520_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m35522_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m35522(__this, method) (( int32_t (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_get_Count_m35522_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t6554 * LinkedList_1_get_First_m35524_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m35524(__this, method) (( LinkedListNode_1_t6554 * (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_get_First_m35524_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t6554 * LinkedList_1_get_Last_m35526_gshared (LinkedList_1_t6555 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m35526(__this, method) (( LinkedListNode_1_t6554 * (*) (LinkedList_1_t6555 *, const MethodInfo*))LinkedList_1_get_Last_m35526_gshared)(__this, method)

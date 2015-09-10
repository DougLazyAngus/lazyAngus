#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6562;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6561;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m35535_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m35535(__this, method) (( void (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1__ctor_m35535_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m35537_gshared (LinkedList_1_t6562 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m35537(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t6562 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))LinkedList_1__ctor_m35537_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35539_gshared (LinkedList_1_t6562 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35539(__this, ___value, method) (( void (*) (LinkedList_1_t6562 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m35539_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m35541_gshared (LinkedList_1_t6562 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m35541(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t6562 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m35541_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35543_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35543(__this, method) (( Object_t* (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35543_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m35545_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m35545(__this, method) (( Object_t * (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m35545_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35547_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35547(__this, method) (( bool (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m35549_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m35549(__this, method) (( bool (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m35549_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m35551_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m35551(__this, method) (( Object_t * (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m35551_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m35553_gshared (LinkedList_1_t6562 * __this, LinkedListNode_1_t6561 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m35553(__this, ___node, method) (( void (*) (LinkedList_1_t6562 *, LinkedListNode_1_t6561 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m35553_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t6561 * LinkedList_1_AddLast_m35555_gshared (LinkedList_1_t6562 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m35555(__this, ___value, method) (( LinkedListNode_1_t6561 * (*) (LinkedList_1_t6562 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m35555_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m35557_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m35557(__this, method) (( void (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_Clear_m35557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m35559_gshared (LinkedList_1_t6562 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m35559(__this, ___value, method) (( bool (*) (LinkedList_1_t6562 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m35559_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m35561_gshared (LinkedList_1_t6562 * __this, ObjectU5BU5D_t707* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m35561(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t6562 *, ObjectU5BU5D_t707*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m35561_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t6561 * LinkedList_1_Find_m35563_gshared (LinkedList_1_t6562 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m35563(__this, ___value, method) (( LinkedListNode_1_t6561 * (*) (LinkedList_1_t6562 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m35563_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6563  LinkedList_1_GetEnumerator_m35565_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m35565(__this, method) (( Enumerator_t6563  (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_GetEnumerator_m35565_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m35567_gshared (LinkedList_1_t6562 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m35567(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t6562 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))LinkedList_1_GetObjectData_m35567_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m35569_gshared (LinkedList_1_t6562 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m35569(__this, ___sender, method) (( void (*) (LinkedList_1_t6562 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m35569_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m35571_gshared (LinkedList_1_t6562 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m35571(__this, ___value, method) (( bool (*) (LinkedList_1_t6562 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m35571_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m35573_gshared (LinkedList_1_t6562 * __this, LinkedListNode_1_t6561 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m35573(__this, ___node, method) (( void (*) (LinkedList_1_t6562 *, LinkedListNode_1_t6561 *, const MethodInfo*))LinkedList_1_Remove_m35573_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m35575_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m35575(__this, method) (( void (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_RemoveFirst_m35575_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m35577_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m35577(__this, method) (( void (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_RemoveLast_m35577_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m35579_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m35579(__this, method) (( int32_t (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_get_Count_m35579_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t6561 * LinkedList_1_get_First_m35581_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m35581(__this, method) (( LinkedListNode_1_t6561 * (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_get_First_m35581_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t6561 * LinkedList_1_get_Last_m35583_gshared (LinkedList_1_t6562 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m35583(__this, method) (( LinkedListNode_1_t6561 * (*) (LinkedList_1_t6562 *, const MethodInfo*))LinkedList_1_get_Last_m35583_gshared)(__this, method)

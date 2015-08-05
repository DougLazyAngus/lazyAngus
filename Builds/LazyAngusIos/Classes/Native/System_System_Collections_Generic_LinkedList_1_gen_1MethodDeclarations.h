#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5908;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5907;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t636;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m30093_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m30093(__this, method) (( void (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1__ctor_m30093_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m30095_gshared (LinkedList_1_t5908 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m30095(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5908 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))LinkedList_1__ctor_m30095_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30097_gshared (LinkedList_1_t5908 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30097(__this, ___value, method) (( void (*) (LinkedList_1_t5908 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30097_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30099_gshared (LinkedList_1_t5908 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m30099(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5908 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m30099_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30101_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30101(__this, method) (( Object_t* (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30101_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30103_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30103(__this, method) (( Object_t * (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30105_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30105(__this, method) (( bool (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30107_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30107(__this, method) (( bool (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30107_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30109_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30109(__this, method) (( Object_t * (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30109_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m30111_gshared (LinkedList_1_t5908 * __this, LinkedListNode_1_t5907 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m30111(__this, ___node, method) (( void (*) (LinkedList_1_t5908 *, LinkedListNode_1_t5907 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m30111_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5907 * LinkedList_1_AddLast_m30113_gshared (LinkedList_1_t5908 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m30113(__this, ___value, method) (( LinkedListNode_1_t5907 * (*) (LinkedList_1_t5908 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m30113_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30115_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m30115(__this, method) (( void (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_Clear_m30115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30117_gshared (LinkedList_1_t5908 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m30117(__this, ___value, method) (( bool (*) (LinkedList_1_t5908 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m30117_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m30119_gshared (LinkedList_1_t5908 * __this, ObjectU5BU5D_t636* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m30119(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5908 *, ObjectU5BU5D_t636*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m30119_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5907 * LinkedList_1_Find_m30121_gshared (LinkedList_1_t5908 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m30121(__this, ___value, method) (( LinkedListNode_1_t5907 * (*) (LinkedList_1_t5908 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m30121_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5909  LinkedList_1_GetEnumerator_m30123_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m30123(__this, method) (( Enumerator_t5909  (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_GetEnumerator_m30123_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m30125_gshared (LinkedList_1_t5908 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m30125(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5908 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))LinkedList_1_GetObjectData_m30125_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m30127_gshared (LinkedList_1_t5908 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m30127(__this, ___sender, method) (( void (*) (LinkedList_1_t5908 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m30127_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30129_gshared (LinkedList_1_t5908 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m30129(__this, ___value, method) (( bool (*) (LinkedList_1_t5908 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m30129_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30131_gshared (LinkedList_1_t5908 * __this, LinkedListNode_1_t5907 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m30131(__this, ___node, method) (( void (*) (LinkedList_1_t5908 *, LinkedListNode_1_t5907 *, const MethodInfo*))LinkedList_1_Remove_m30131_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30133_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m30133(__this, method) (( void (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_RemoveFirst_m30133_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30135_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m30135(__this, method) (( void (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_RemoveLast_m30135_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30137_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m30137(__this, method) (( int32_t (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_get_Count_m30137_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5907 * LinkedList_1_get_First_m30139_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m30139(__this, method) (( LinkedListNode_1_t5907 * (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_get_First_m30139_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5907 * LinkedList_1_get_Last_m30141_gshared (LinkedList_1_t5908 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m30141(__this, method) (( LinkedListNode_1_t5907 * (*) (LinkedList_1_t5908 *, const MethodInfo*))LinkedList_1_get_Last_m30141_gshared)(__this, method)

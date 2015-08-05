#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5909;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5908;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t637;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m30098_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m30098(__this, method) (( void (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1__ctor_m30098_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m30100_gshared (LinkedList_1_t5909 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m30100(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5909 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))LinkedList_1__ctor_m30100_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30102_gshared (LinkedList_1_t5909 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30102(__this, ___value, method) (( void (*) (LinkedList_1_t5909 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30102_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30104_gshared (LinkedList_1_t5909 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m30104(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5909 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m30104_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30106_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30106(__this, method) (( Object_t* (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30106_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30108_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30108(__this, method) (( Object_t * (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30110_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30110(__this, method) (( bool (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30112_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30112(__this, method) (( bool (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30112_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30114_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30114(__this, method) (( Object_t * (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30114_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m30116_gshared (LinkedList_1_t5909 * __this, LinkedListNode_1_t5908 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m30116(__this, ___node, method) (( void (*) (LinkedList_1_t5909 *, LinkedListNode_1_t5908 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m30116_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5908 * LinkedList_1_AddLast_m30118_gshared (LinkedList_1_t5909 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m30118(__this, ___value, method) (( LinkedListNode_1_t5908 * (*) (LinkedList_1_t5909 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m30118_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30120_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m30120(__this, method) (( void (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_Clear_m30120_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30122_gshared (LinkedList_1_t5909 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m30122(__this, ___value, method) (( bool (*) (LinkedList_1_t5909 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m30122_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m30124_gshared (LinkedList_1_t5909 * __this, ObjectU5BU5D_t637* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m30124(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5909 *, ObjectU5BU5D_t637*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m30124_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5908 * LinkedList_1_Find_m30126_gshared (LinkedList_1_t5909 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m30126(__this, ___value, method) (( LinkedListNode_1_t5908 * (*) (LinkedList_1_t5909 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m30126_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5910  LinkedList_1_GetEnumerator_m30128_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m30128(__this, method) (( Enumerator_t5910  (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_GetEnumerator_m30128_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m30130_gshared (LinkedList_1_t5909 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m30130(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5909 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))LinkedList_1_GetObjectData_m30130_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m30132_gshared (LinkedList_1_t5909 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m30132(__this, ___sender, method) (( void (*) (LinkedList_1_t5909 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m30132_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30134_gshared (LinkedList_1_t5909 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m30134(__this, ___value, method) (( bool (*) (LinkedList_1_t5909 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m30134_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30136_gshared (LinkedList_1_t5909 * __this, LinkedListNode_1_t5908 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m30136(__this, ___node, method) (( void (*) (LinkedList_1_t5909 *, LinkedListNode_1_t5908 *, const MethodInfo*))LinkedList_1_Remove_m30136_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30138_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m30138(__this, method) (( void (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_RemoveFirst_m30138_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30140_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m30140(__this, method) (( void (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_RemoveLast_m30140_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30142_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m30142(__this, method) (( int32_t (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_get_Count_m30142_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5908 * LinkedList_1_get_First_m30144_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m30144(__this, method) (( LinkedListNode_1_t5908 * (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_get_First_m30144_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5908 * LinkedList_1_get_Last_m30146_gshared (LinkedList_1_t5909 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m30146(__this, method) (( LinkedListNode_1_t5908 * (*) (LinkedList_1_t5909 *, const MethodInfo*))LinkedList_1_get_Last_m30146_gshared)(__this, method)

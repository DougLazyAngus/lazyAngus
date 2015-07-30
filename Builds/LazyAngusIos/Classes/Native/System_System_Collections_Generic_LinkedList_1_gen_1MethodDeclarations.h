#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5905;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5904;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t634;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m30070_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m30070(__this, method) (( void (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1__ctor_m30070_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m30072_gshared (LinkedList_1_t5905 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m30072(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5905 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))LinkedList_1__ctor_m30072_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30074_gshared (LinkedList_1_t5905 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30074(__this, ___value, method) (( void (*) (LinkedList_1_t5905 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30074_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30076_gshared (LinkedList_1_t5905 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m30076(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5905 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m30076_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30078_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30078(__this, method) (( Object_t* (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30078_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30080_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30080(__this, method) (( Object_t * (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30082_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30082(__this, method) (( bool (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30084_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30084(__this, method) (( bool (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30084_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30086_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30086(__this, method) (( Object_t * (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30086_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m30088_gshared (LinkedList_1_t5905 * __this, LinkedListNode_1_t5904 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m30088(__this, ___node, method) (( void (*) (LinkedList_1_t5905 *, LinkedListNode_1_t5904 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m30088_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5904 * LinkedList_1_AddLast_m30090_gshared (LinkedList_1_t5905 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m30090(__this, ___value, method) (( LinkedListNode_1_t5904 * (*) (LinkedList_1_t5905 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m30090_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30092_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m30092(__this, method) (( void (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_Clear_m30092_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30094_gshared (LinkedList_1_t5905 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m30094(__this, ___value, method) (( bool (*) (LinkedList_1_t5905 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m30094_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m30096_gshared (LinkedList_1_t5905 * __this, ObjectU5BU5D_t634* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m30096(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5905 *, ObjectU5BU5D_t634*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m30096_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5904 * LinkedList_1_Find_m30098_gshared (LinkedList_1_t5905 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m30098(__this, ___value, method) (( LinkedListNode_1_t5904 * (*) (LinkedList_1_t5905 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m30098_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5906  LinkedList_1_GetEnumerator_m30100_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m30100(__this, method) (( Enumerator_t5906  (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_GetEnumerator_m30100_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m30102_gshared (LinkedList_1_t5905 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m30102(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5905 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))LinkedList_1_GetObjectData_m30102_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m30104_gshared (LinkedList_1_t5905 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m30104(__this, ___sender, method) (( void (*) (LinkedList_1_t5905 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m30104_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30106_gshared (LinkedList_1_t5905 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m30106(__this, ___value, method) (( bool (*) (LinkedList_1_t5905 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m30106_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30108_gshared (LinkedList_1_t5905 * __this, LinkedListNode_1_t5904 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m30108(__this, ___node, method) (( void (*) (LinkedList_1_t5905 *, LinkedListNode_1_t5904 *, const MethodInfo*))LinkedList_1_Remove_m30108_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30110_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m30110(__this, method) (( void (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_RemoveFirst_m30110_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30112_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m30112(__this, method) (( void (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_RemoveLast_m30112_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30114_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m30114(__this, method) (( int32_t (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_get_Count_m30114_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5904 * LinkedList_1_get_First_m30116_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m30116(__this, method) (( LinkedListNode_1_t5904 * (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_get_First_m30116_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5904 * LinkedList_1_get_Last_m30118_gshared (LinkedList_1_t5905 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m30118(__this, method) (( LinkedListNode_1_t5904 * (*) (LinkedList_1_t5905 *, const MethodInfo*))LinkedList_1_get_Last_m30118_gshared)(__this, method)

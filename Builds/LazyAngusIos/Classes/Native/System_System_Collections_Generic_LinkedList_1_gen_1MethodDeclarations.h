#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5987;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5986;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m30898_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m30898(__this, method) (( void (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1__ctor_m30898_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m30900_gshared (LinkedList_1_t5987 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m30900(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5987 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))LinkedList_1__ctor_m30900_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30902_gshared (LinkedList_1_t5987 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30902(__this, ___value, method) (( void (*) (LinkedList_1_t5987 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30902_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30904_gshared (LinkedList_1_t5987 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m30904(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5987 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m30904_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30906_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30906(__this, method) (( Object_t* (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30906_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30908_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30908(__this, method) (( Object_t * (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30908_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30910_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30910(__this, method) (( bool (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30910_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30912_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30912(__this, method) (( bool (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30912_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30914_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30914(__this, method) (( Object_t * (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30914_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m30916_gshared (LinkedList_1_t5987 * __this, LinkedListNode_1_t5986 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m30916(__this, ___node, method) (( void (*) (LinkedList_1_t5987 *, LinkedListNode_1_t5986 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m30916_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5986 * LinkedList_1_AddLast_m30918_gshared (LinkedList_1_t5987 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m30918(__this, ___value, method) (( LinkedListNode_1_t5986 * (*) (LinkedList_1_t5987 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m30918_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30920_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m30920(__this, method) (( void (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_Clear_m30920_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30922_gshared (LinkedList_1_t5987 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m30922(__this, ___value, method) (( bool (*) (LinkedList_1_t5987 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m30922_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m30924_gshared (LinkedList_1_t5987 * __this, ObjectU5BU5D_t683* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m30924(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5987 *, ObjectU5BU5D_t683*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m30924_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5986 * LinkedList_1_Find_m30926_gshared (LinkedList_1_t5987 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m30926(__this, ___value, method) (( LinkedListNode_1_t5986 * (*) (LinkedList_1_t5987 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m30926_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5988  LinkedList_1_GetEnumerator_m30928_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m30928(__this, method) (( Enumerator_t5988  (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_GetEnumerator_m30928_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m30930_gshared (LinkedList_1_t5987 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m30930(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5987 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))LinkedList_1_GetObjectData_m30930_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m30932_gshared (LinkedList_1_t5987 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m30932(__this, ___sender, method) (( void (*) (LinkedList_1_t5987 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m30932_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30934_gshared (LinkedList_1_t5987 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m30934(__this, ___value, method) (( bool (*) (LinkedList_1_t5987 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m30934_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30936_gshared (LinkedList_1_t5987 * __this, LinkedListNode_1_t5986 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m30936(__this, ___node, method) (( void (*) (LinkedList_1_t5987 *, LinkedListNode_1_t5986 *, const MethodInfo*))LinkedList_1_Remove_m30936_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30938_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m30938(__this, method) (( void (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_RemoveFirst_m30938_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30940_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m30940(__this, method) (( void (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_RemoveLast_m30940_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30942_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m30942(__this, method) (( int32_t (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_get_Count_m30942_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5986 * LinkedList_1_get_First_m30944_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m30944(__this, method) (( LinkedListNode_1_t5986 * (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_get_First_m30944_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5986 * LinkedList_1_get_Last_m30946_gshared (LinkedList_1_t5987 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m30946(__this, method) (( LinkedListNode_1_t5986 * (*) (LinkedList_1_t5987 *, const MethodInfo*))LinkedList_1_get_Last_m30946_gshared)(__this, method)

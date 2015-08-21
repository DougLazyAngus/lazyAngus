#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t5984;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t5983;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t680;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m30866_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m30866(__this, method) (( void (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1__ctor_m30866_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m30868_gshared (LinkedList_1_t5984 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m30868(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5984 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))LinkedList_1__ctor_m30868_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30870_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30870(__this, ___value, method) (( void (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30870_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30872_gshared (LinkedList_1_t5984 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m30872(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5984 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m30872_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30874_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30874(__this, method) (( Object_t* (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30874_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30876_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30876(__this, method) (( Object_t * (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30876_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30878_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30878(__this, method) (( bool (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30878_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30880_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30880(__this, method) (( bool (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30880_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30882_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30882(__this, method) (( Object_t * (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30882_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m30884_gshared (LinkedList_1_t5984 * __this, LinkedListNode_1_t5983 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m30884(__this, ___node, method) (( void (*) (LinkedList_1_t5984 *, LinkedListNode_1_t5983 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m30884_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5983 * LinkedList_1_AddLast_m30886_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m30886(__this, ___value, method) (( LinkedListNode_1_t5983 * (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m30886_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30888_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m30888(__this, method) (( void (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_Clear_m30888_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30890_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m30890(__this, ___value, method) (( bool (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m30890_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m30892_gshared (LinkedList_1_t5984 * __this, ObjectU5BU5D_t680* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m30892(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5984 *, ObjectU5BU5D_t680*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m30892_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5983 * LinkedList_1_Find_m30894_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m30894(__this, ___value, method) (( LinkedListNode_1_t5983 * (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m30894_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5985  LinkedList_1_GetEnumerator_m30896_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m30896(__this, method) (( Enumerator_t5985  (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_GetEnumerator_m30896_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m30898_gshared (LinkedList_1_t5984 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m30898(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5984 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))LinkedList_1_GetObjectData_m30898_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m30900_gshared (LinkedList_1_t5984 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m30900(__this, ___sender, method) (( void (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m30900_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30902_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m30902(__this, ___value, method) (( bool (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m30902_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30904_gshared (LinkedList_1_t5984 * __this, LinkedListNode_1_t5983 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m30904(__this, ___node, method) (( void (*) (LinkedList_1_t5984 *, LinkedListNode_1_t5983 *, const MethodInfo*))LinkedList_1_Remove_m30904_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30906_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m30906(__this, method) (( void (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_RemoveFirst_m30906_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30908_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m30908(__this, method) (( void (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_RemoveLast_m30908_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30910_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m30910(__this, method) (( int32_t (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_get_Count_m30910_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5983 * LinkedList_1_get_First_m30912_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m30912(__this, method) (( LinkedListNode_1_t5983 * (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_get_First_m30912_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5983 * LinkedList_1_get_Last_m30914_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m30914(__this, method) (( LinkedListNode_1_t5983 * (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_get_Last_m30914_gshared)(__this, method)

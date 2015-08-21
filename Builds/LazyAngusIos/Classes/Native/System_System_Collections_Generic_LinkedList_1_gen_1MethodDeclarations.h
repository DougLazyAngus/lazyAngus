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
extern "C" void LinkedList_1__ctor_m30865_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m30865(__this, method) (( void (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1__ctor_m30865_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m30867_gshared (LinkedList_1_t5984 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m30867(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5984 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))LinkedList_1__ctor_m30867_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30869_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30869(__this, ___value, method) (( void (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30869_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30871_gshared (LinkedList_1_t5984 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m30871(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5984 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m30871_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30873_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30873(__this, method) (( Object_t* (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30873_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30875_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30875(__this, method) (( Object_t * (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30875_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30877_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30877(__this, method) (( bool (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30877_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30879_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30879(__this, method) (( bool (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30879_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30881_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30881(__this, method) (( Object_t * (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30881_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m30883_gshared (LinkedList_1_t5984 * __this, LinkedListNode_1_t5983 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m30883(__this, ___node, method) (( void (*) (LinkedList_1_t5984 *, LinkedListNode_1_t5983 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m30883_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5983 * LinkedList_1_AddLast_m30885_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m30885(__this, ___value, method) (( LinkedListNode_1_t5983 * (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m30885_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30887_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m30887(__this, method) (( void (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_Clear_m30887_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30889_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m30889(__this, ___value, method) (( bool (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m30889_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m30891_gshared (LinkedList_1_t5984 * __this, ObjectU5BU5D_t680* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m30891(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t5984 *, ObjectU5BU5D_t680*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m30891_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5983 * LinkedList_1_Find_m30893_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m30893(__this, ___value, method) (( LinkedListNode_1_t5983 * (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m30893_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5985  LinkedList_1_GetEnumerator_m30895_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m30895(__this, method) (( Enumerator_t5985  (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_GetEnumerator_m30895_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m30897_gshared (LinkedList_1_t5984 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m30897(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t5984 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))LinkedList_1_GetObjectData_m30897_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m30899_gshared (LinkedList_1_t5984 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m30899(__this, ___sender, method) (( void (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m30899_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30901_gshared (LinkedList_1_t5984 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m30901(__this, ___value, method) (( bool (*) (LinkedList_1_t5984 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m30901_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30903_gshared (LinkedList_1_t5984 * __this, LinkedListNode_1_t5983 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m30903(__this, ___node, method) (( void (*) (LinkedList_1_t5984 *, LinkedListNode_1_t5983 *, const MethodInfo*))LinkedList_1_Remove_m30903_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30905_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m30905(__this, method) (( void (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_RemoveFirst_m30905_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30907_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m30907(__this, method) (( void (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_RemoveLast_m30907_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30909_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m30909(__this, method) (( int32_t (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_get_Count_m30909_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5983 * LinkedList_1_get_First_m30911_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m30911(__this, method) (( LinkedListNode_1_t5983 * (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_get_First_m30911_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5983 * LinkedList_1_get_Last_m30913_gshared (LinkedList_1_t5984 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m30913(__this, method) (( LinkedListNode_1_t5983 * (*) (LinkedList_1_t5984 *, const MethodInfo*))LinkedList_1_get_Last_m30913_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t6016;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t6015;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m31230_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m31230(__this, method) (( void (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1__ctor_m31230_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m31232_gshared (LinkedList_1_t6016 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m31232(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t6016 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))LinkedList_1__ctor_m31232_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31234_gshared (LinkedList_1_t6016 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31234(__this, ___value, method) (( void (*) (LinkedList_1_t6016 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31234_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m31236_gshared (LinkedList_1_t6016 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m31236(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t6016 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m31236_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31238_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31238(__this, method) (( Object_t* (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31238_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m31240_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m31240(__this, method) (( Object_t * (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m31240_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31242_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31242(__this, method) (( bool (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31242_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m31244_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m31244(__this, method) (( bool (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m31244_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m31246_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m31246(__this, method) (( Object_t * (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m31246_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m31248_gshared (LinkedList_1_t6016 * __this, LinkedListNode_1_t6015 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m31248(__this, ___node, method) (( void (*) (LinkedList_1_t6016 *, LinkedListNode_1_t6015 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m31248_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t6015 * LinkedList_1_AddLast_m31250_gshared (LinkedList_1_t6016 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m31250(__this, ___value, method) (( LinkedListNode_1_t6015 * (*) (LinkedList_1_t6016 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m31250_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m31252_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m31252(__this, method) (( void (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_Clear_m31252_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m31254_gshared (LinkedList_1_t6016 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m31254(__this, ___value, method) (( bool (*) (LinkedList_1_t6016 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m31254_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m31256_gshared (LinkedList_1_t6016 * __this, ObjectU5BU5D_t696* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m31256(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t6016 *, ObjectU5BU5D_t696*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m31256_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t6015 * LinkedList_1_Find_m31258_gshared (LinkedList_1_t6016 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m31258(__this, ___value, method) (( LinkedListNode_1_t6015 * (*) (LinkedList_1_t6016 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m31258_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6017  LinkedList_1_GetEnumerator_m31260_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m31260(__this, method) (( Enumerator_t6017  (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_GetEnumerator_m31260_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m31262_gshared (LinkedList_1_t6016 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m31262(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t6016 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))LinkedList_1_GetObjectData_m31262_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m31264_gshared (LinkedList_1_t6016 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m31264(__this, ___sender, method) (( void (*) (LinkedList_1_t6016 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m31264_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m31266_gshared (LinkedList_1_t6016 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m31266(__this, ___value, method) (( bool (*) (LinkedList_1_t6016 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m31266_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m31268_gshared (LinkedList_1_t6016 * __this, LinkedListNode_1_t6015 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m31268(__this, ___node, method) (( void (*) (LinkedList_1_t6016 *, LinkedListNode_1_t6015 *, const MethodInfo*))LinkedList_1_Remove_m31268_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m31270_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveFirst_m31270(__this, method) (( void (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_RemoveFirst_m31270_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m31272_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m31272(__this, method) (( void (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_RemoveLast_m31272_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m31274_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m31274(__this, method) (( int32_t (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_get_Count_m31274_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t6015 * LinkedList_1_get_First_m31276_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m31276(__this, method) (( LinkedListNode_1_t6015 * (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_get_First_m31276_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t6015 * LinkedList_1_get_Last_m31278_gshared (LinkedList_1_t6016 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m31278(__this, method) (( LinkedListNode_1_t6015 * (*) (LinkedList_1_t6016 *, const MethodInfo*))LinkedList_1_get_Last_m31278_gshared)(__this, method)

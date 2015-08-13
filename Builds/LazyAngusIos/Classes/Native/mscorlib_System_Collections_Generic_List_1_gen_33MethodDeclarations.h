#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t951;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t9007;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t948;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t9006;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1086;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t5845;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t5846;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t9008;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t5848;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m6007_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1__ctor_m6007(__this, method) (( void (*) (List_1_t951 *, const MethodInfo*))List_1__ctor_m6007_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m29108_gshared (List_1_t951 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m29108(__this, ___collection, method) (( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))List_1__ctor_m29108_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10117_gshared (List_1_t951 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10117(__this, ___capacity, method) (( void (*) (List_1_t951 *, int32_t, const MethodInfo*))List_1__ctor_m10117_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m29109_gshared (List_1_t951 * __this, UIVertexU5BU5D_t948* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m29109(__this, ___data, ___size, method) (( void (*) (List_1_t951 *, UIVertexU5BU5D_t948*, int32_t, const MethodInfo*))List_1__ctor_m29109_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m29110_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m29110(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m29110_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29111_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29111(__this, method) (( Object_t* (*) (List_1_t951 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m29112_gshared (List_1_t951 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m29112(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t951 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m29112_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m29113_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29113(__this, method) (( Object_t * (*) (List_1_t951 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m29113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m29114_gshared (List_1_t951 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m29114(__this, ___item, method) (( int32_t (*) (List_1_t951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m29114_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m29115_gshared (List_1_t951 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m29115(__this, ___item, method) (( bool (*) (List_1_t951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m29115_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m29116_gshared (List_1_t951 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m29116(__this, ___item, method) (( int32_t (*) (List_1_t951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m29116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m29117_gshared (List_1_t951 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m29117(__this, ___index, ___item, method) (( void (*) (List_1_t951 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m29117_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m29118_gshared (List_1_t951 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m29118(__this, ___item, method) (( void (*) (List_1_t951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m29118_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29119_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29119(__this, method) (( bool (*) (List_1_t951 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29119_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m29120_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29120(__this, method) (( bool (*) (List_1_t951 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m29120_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m29121_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m29121(__this, method) (( Object_t * (*) (List_1_t951 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m29121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m29122_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m29122(__this, method) (( bool (*) (List_1_t951 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m29122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m29123_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m29123(__this, method) (( bool (*) (List_1_t951 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m29123_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m29124_gshared (List_1_t951 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m29124(__this, ___index, method) (( Object_t * (*) (List_1_t951 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m29124_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m29125_gshared (List_1_t951 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m29125(__this, ___index, ___value, method) (( void (*) (List_1_t951 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m29125_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m29126_gshared (List_1_t951 * __this, UIVertex_t949  ___item, const MethodInfo* method);
#define List_1_Add_m29126(__this, ___item, method) (( void (*) (List_1_t951 *, UIVertex_t949 , const MethodInfo*))List_1_Add_m29126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m29127_gshared (List_1_t951 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m29127(__this, ___newCount, method) (( void (*) (List_1_t951 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m29127_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m29128_gshared (List_1_t951 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m29128(__this, ___idx, ___count, method) (( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m29128_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m29129_gshared (List_1_t951 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m29129(__this, ___collection, method) (( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))List_1_AddCollection_m29129_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m29130_gshared (List_1_t951 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m29130(__this, ___enumerable, method) (( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m29130_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m29131_gshared (List_1_t951 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m29131(__this, ___collection, method) (( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))List_1_AddRange_m29131_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5845 * List_1_AsReadOnly_m29132_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m29132(__this, method) (( ReadOnlyCollection_1_t5845 * (*) (List_1_t951 *, const MethodInfo*))List_1_AsReadOnly_m29132_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m29133_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_Clear_m29133(__this, method) (( void (*) (List_1_t951 *, const MethodInfo*))List_1_Clear_m29133_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m29134_gshared (List_1_t951 * __this, UIVertex_t949  ___item, const MethodInfo* method);
#define List_1_Contains_m29134(__this, ___item, method) (( bool (*) (List_1_t951 *, UIVertex_t949 , const MethodInfo*))List_1_Contains_m29134_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m29135_gshared (List_1_t951 * __this, UIVertexU5BU5D_t948* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m29135(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t951 *, UIVertexU5BU5D_t948*, int32_t, const MethodInfo*))List_1_CopyTo_m29135_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t949  List_1_Find_m29136_gshared (List_1_t951 * __this, Predicate_1_t5846 * ___match, const MethodInfo* method);
#define List_1_Find_m29136(__this, ___match, method) (( UIVertex_t949  (*) (List_1_t951 *, Predicate_1_t5846 *, const MethodInfo*))List_1_Find_m29136_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m29137_gshared (Object_t * __this /* static, unused */, Predicate_1_t5846 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m29137(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5846 *, const MethodInfo*))List_1_CheckMatch_m29137_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m29138_gshared (List_1_t951 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5846 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m29138(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t951 *, int32_t, int32_t, Predicate_1_t5846 *, const MethodInfo*))List_1_GetIndex_m29138_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t5847  List_1_GetEnumerator_m29139_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m29139(__this, method) (( Enumerator_t5847  (*) (List_1_t951 *, const MethodInfo*))List_1_GetEnumerator_m29139_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t951 * List_1_GetRange_m29140_gshared (List_1_t951 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m29140(__this, ___index, ___count, method) (( List_1_t951 * (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m29140_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m29141_gshared (List_1_t951 * __this, UIVertex_t949  ___item, const MethodInfo* method);
#define List_1_IndexOf_m29141(__this, ___item, method) (( int32_t (*) (List_1_t951 *, UIVertex_t949 , const MethodInfo*))List_1_IndexOf_m29141_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m29142_gshared (List_1_t951 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m29142(__this, ___start, ___delta, method) (( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m29142_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m29143_gshared (List_1_t951 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m29143(__this, ___index, method) (( void (*) (List_1_t951 *, int32_t, const MethodInfo*))List_1_CheckIndex_m29143_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m29144_gshared (List_1_t951 * __this, int32_t ___index, UIVertex_t949  ___item, const MethodInfo* method);
#define List_1_Insert_m29144(__this, ___index, ___item, method) (( void (*) (List_1_t951 *, int32_t, UIVertex_t949 , const MethodInfo*))List_1_Insert_m29144_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m29145_gshared (List_1_t951 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m29145(__this, ___collection, method) (( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m29145_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m29146_gshared (List_1_t951 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m29146(__this, ___index, ___collection, method) (( void (*) (List_1_t951 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m29146_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m29147_gshared (List_1_t951 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m29147(__this, ___index, ___collection, method) (( void (*) (List_1_t951 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m29147_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m29148_gshared (List_1_t951 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m29148(__this, ___index, ___enumerable, method) (( void (*) (List_1_t951 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m29148_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m29149_gshared (List_1_t951 * __this, UIVertex_t949  ___item, const MethodInfo* method);
#define List_1_Remove_m29149(__this, ___item, method) (( bool (*) (List_1_t951 *, UIVertex_t949 , const MethodInfo*))List_1_Remove_m29149_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m29150_gshared (List_1_t951 * __this, Predicate_1_t5846 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m29150(__this, ___match, method) (( int32_t (*) (List_1_t951 *, Predicate_1_t5846 *, const MethodInfo*))List_1_RemoveAll_m29150_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m29151_gshared (List_1_t951 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m29151(__this, ___index, method) (( void (*) (List_1_t951 *, int32_t, const MethodInfo*))List_1_RemoveAt_m29151_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m29152_gshared (List_1_t951 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m29152(__this, ___index, ___count, method) (( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m29152_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m29153_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_Reverse_m29153(__this, method) (( void (*) (List_1_t951 *, const MethodInfo*))List_1_Reverse_m29153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m29154_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_Sort_m29154(__this, method) (( void (*) (List_1_t951 *, const MethodInfo*))List_1_Sort_m29154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m29155_gshared (List_1_t951 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m29155(__this, ___comparer, method) (( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))List_1_Sort_m29155_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m29156_gshared (List_1_t951 * __this, Comparison_1_t5848 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m29156(__this, ___comparison, method) (( void (*) (List_1_t951 *, Comparison_1_t5848 *, const MethodInfo*))List_1_Sort_m29156_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t948* List_1_ToArray_m6050_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_ToArray_m6050(__this, method) (( UIVertexU5BU5D_t948* (*) (List_1_t951 *, const MethodInfo*))List_1_ToArray_m6050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m29157_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m29157(__this, method) (( void (*) (List_1_t951 *, const MethodInfo*))List_1_TrimExcess_m29157_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m5929_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m5929(__this, method) (( int32_t (*) (List_1_t951 *, const MethodInfo*))List_1_get_Capacity_m5929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m5930_gshared (List_1_t951 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m5930(__this, ___value, method) (( void (*) (List_1_t951 *, int32_t, const MethodInfo*))List_1_set_Capacity_m5930_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m29158_gshared (List_1_t951 * __this, const MethodInfo* method);
#define List_1_get_Count_m29158(__this, method) (( int32_t (*) (List_1_t951 *, const MethodInfo*))List_1_get_Count_m29158_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t949  List_1_get_Item_m29159_gshared (List_1_t951 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m29159(__this, ___index, method) (( UIVertex_t949  (*) (List_1_t951 *, int32_t, const MethodInfo*))List_1_get_Item_m29159_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m29160_gshared (List_1_t951 * __this, int32_t ___index, UIVertex_t949  ___value, const MethodInfo* method);
#define List_1_set_Item_m29160(__this, ___index, ___value, method) (( void (*) (List_1_t951 *, int32_t, UIVertex_t949 , const MethodInfo*))List_1_set_Item_m29160_gshared)(__this, ___index, ___value, method)

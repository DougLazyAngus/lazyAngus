#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t6960;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t9289;
// System.Boolean[]
struct BooleanU5BU5D_t487;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t9186;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t9181;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Boolean>
struct ReadOnlyCollection_1_t6961;
// System.Predicate`1<System.Boolean>
struct Predicate_1_t6962;
// System.Collections.Generic.IComparer`1<System.Boolean>
struct IComparer_1_t9290;
// System.Comparison`1<System.Boolean>
struct Comparison_1_t6964;
// System.Collections.Generic.List`1/Enumerator<System.Boolean>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_70.h"

// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
// System.Collections.Generic.List`1<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_gen_77MethodDeclarations.h"
#define List_1__ctor_m43295(__this, method) (( void (*) (List_1_t6960 *, const MethodInfo*))List_1__ctor_m36079_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m43296(__this, ___collection, method) (( void (*) (List_1_t6960 *, Object_t*, const MethodInfo*))List_1__ctor_m36080_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Int32)
#define List_1__ctor_m43297(__this, ___capacity, method) (( void (*) (List_1_t6960 *, int32_t, const MethodInfo*))List_1__ctor_m36081_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(T[],System.Int32)
#define List_1__ctor_m43298(__this, ___data, ___size, method) (( void (*) (List_1_t6960 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1__ctor_m36082_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.cctor()
#define List_1__cctor_m43299(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36083_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43300(__this, method) (( Object_t* (*) (List_1_t6960 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36084_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m43301(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6960 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36085_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m43302(__this, method) (( Object_t * (*) (List_1_t6960 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m43303(__this, ___item, method) (( int32_t (*) (List_1_t6960 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36087_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m43304(__this, ___item, method) (( bool (*) (List_1_t6960 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36088_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m43305(__this, ___item, method) (( int32_t (*) (List_1_t6960 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m43306(__this, ___index, ___item, method) (( void (*) (List_1_t6960 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m43307(__this, ___item, method) (( void (*) (List_1_t6960 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36091_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43308(__this, method) (( bool (*) (List_1_t6960 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36092_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m43309(__this, method) (( bool (*) (List_1_t6960 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36093_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m43310(__this, method) (( Object_t * (*) (List_1_t6960 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36094_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m43311(__this, method) (( bool (*) (List_1_t6960 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m43312(__this, method) (( bool (*) (List_1_t6960 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36096_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m43313(__this, ___index, method) (( Object_t * (*) (List_1_t6960 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36097_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m43314(__this, ___index, ___value, method) (( void (*) (List_1_t6960 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36098_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
#define List_1_Add_m43315(__this, ___item, method) (( void (*) (List_1_t6960 *, bool, const MethodInfo*))List_1_Add_m36099_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m43316(__this, ___newCount, method) (( void (*) (List_1_t6960 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36100_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m43317(__this, ___idx, ___count, method) (( void (*) (List_1_t6960 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36101_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m43318(__this, ___collection, method) (( void (*) (List_1_t6960 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36102_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m43319(__this, ___enumerable, method) (( void (*) (List_1_t6960 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36103_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m43320(__this, ___collection, method) (( void (*) (List_1_t6960 *, Object_t*, const MethodInfo*))List_1_AddRange_m36104_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Boolean>::AsReadOnly()
#define List_1_AsReadOnly_m43321(__this, method) (( ReadOnlyCollection_1_t6961 * (*) (List_1_t6960 *, const MethodInfo*))List_1_AsReadOnly_m36105_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Clear()
#define List_1_Clear_m43322(__this, method) (( void (*) (List_1_t6960 *, const MethodInfo*))List_1_Clear_m36106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(T)
#define List_1_Contains_m43323(__this, ___item, method) (( bool (*) (List_1_t6960 *, bool, const MethodInfo*))List_1_Contains_m36107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m43324(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6960 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1_CopyTo_m36108_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Boolean>::Find(System.Predicate`1<T>)
#define List_1_Find_m43325(__this, ___match, method) (( bool (*) (List_1_t6960 *, Predicate_1_t6962 *, const MethodInfo*))List_1_Find_m36109_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m43326(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6962 *, const MethodInfo*))List_1_CheckMatch_m36110_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m43327(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6960 *, int32_t, int32_t, Predicate_1_t6962 *, const MethodInfo*))List_1_GetIndex_m36111_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Boolean>::GetEnumerator()
#define List_1_GetEnumerator_m43328(__this, method) (( Enumerator_t6963  (*) (List_1_t6960 *, const MethodInfo*))List_1_GetEnumerator_m36112_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Boolean>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m43329(__this, ___index, ___count, method) (( List_1_t6960 * (*) (List_1_t6960 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36113_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::IndexOf(T)
#define List_1_IndexOf_m43330(__this, ___item, method) (( int32_t (*) (List_1_t6960 *, bool, const MethodInfo*))List_1_IndexOf_m36114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m43331(__this, ___start, ___delta, method) (( void (*) (List_1_t6960 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36115_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m43332(__this, ___index, method) (( void (*) (List_1_t6960 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36116_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Insert(System.Int32,T)
#define List_1_Insert_m43333(__this, ___index, ___item, method) (( void (*) (List_1_t6960 *, int32_t, bool, const MethodInfo*))List_1_Insert_m36117_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m43334(__this, ___collection, method) (( void (*) (List_1_t6960 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36118_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m43335(__this, ___index, ___collection, method) (( void (*) (List_1_t6960 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36119_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m43336(__this, ___index, ___collection, method) (( void (*) (List_1_t6960 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36120_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m43337(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6960 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36121_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Remove(T)
#define List_1_Remove_m43338(__this, ___item, method) (( bool (*) (List_1_t6960 *, bool, const MethodInfo*))List_1_Remove_m36122_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m43339(__this, ___match, method) (( int32_t (*) (List_1_t6960 *, Predicate_1_t6962 *, const MethodInfo*))List_1_RemoveAll_m36123_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m43340(__this, ___index, method) (( void (*) (List_1_t6960 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36124_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m43341(__this, ___index, ___count, method) (( void (*) (List_1_t6960 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36125_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Reverse()
#define List_1_Reverse_m43342(__this, method) (( void (*) (List_1_t6960 *, const MethodInfo*))List_1_Reverse_m36126_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort()
#define List_1_Sort_m43343(__this, method) (( void (*) (List_1_t6960 *, const MethodInfo*))List_1_Sort_m36127_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m43344(__this, ___comparer, method) (( void (*) (List_1_t6960 *, Object_t*, const MethodInfo*))List_1_Sort_m36128_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m43345(__this, ___comparison, method) (( void (*) (List_1_t6960 *, Comparison_1_t6964 *, const MethodInfo*))List_1_Sort_m36129_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
#define List_1_ToArray_m43346(__this, method) (( BooleanU5BU5D_t487* (*) (List_1_t6960 *, const MethodInfo*))List_1_ToArray_m36130_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::TrimExcess()
#define List_1_TrimExcess_m43347(__this, method) (( void (*) (List_1_t6960 *, const MethodInfo*))List_1_TrimExcess_m36131_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Capacity()
#define List_1_get_Capacity_m43348(__this, method) (( int32_t (*) (List_1_t6960 *, const MethodInfo*))List_1_get_Capacity_m36132_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m43349(__this, ___value, method) (( void (*) (List_1_t6960 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36133_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
#define List_1_get_Count_m43350(__this, method) (( int32_t (*) (List_1_t6960 *, const MethodInfo*))List_1_get_Count_m36134_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
#define List_1_get_Item_m43351(__this, ___index, method) (( bool (*) (List_1_t6960 *, int32_t, const MethodInfo*))List_1_get_Item_m36135_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,T)
#define List_1_set_Item_m43352(__this, ___index, ___value, method) (( void (*) (List_1_t6960 *, int32_t, bool, const MethodInfo*))List_1_set_Item_m36136_gshared)(__this, ___index, ___value, method)

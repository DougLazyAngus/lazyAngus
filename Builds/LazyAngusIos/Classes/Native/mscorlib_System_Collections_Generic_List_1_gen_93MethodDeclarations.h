#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct List_1_t7378;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerable_1_t9368;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7377;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7203;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ICollection_1_t9369;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ReadOnlyCollection_1_t7380;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Predicate_1_t7381;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IComparer_1_t9370;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t7383;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_92MethodDeclarations.h"
#define List_1__ctor_m48260(__this, method) (( void (*) (List_1_t7378 *, const MethodInfo*))List_1__ctor_m48107_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m48261(__this, ___collection, method) (( void (*) (List_1_t7378 *, Object_t*, const MethodInfo*))List_1__ctor_m48108_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Int32)
#define List_1__ctor_m48262(__this, ___capacity, method) (( void (*) (List_1_t7378 *, int32_t, const MethodInfo*))List_1__ctor_m48109_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m48263(__this, ___data, ___size, method) (( void (*) (List_1_t7378 *, KeyValuePair_2U5BU5D_t7377*, int32_t, const MethodInfo*))List_1__ctor_m48110_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.cctor()
#define List_1__cctor_m48264(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48111_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48265(__this, method) (( Object_t* (*) (List_1_t7378 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m48266(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7378 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48113_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48267(__this, method) (( Object_t * (*) (List_1_t7378 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48114_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m48268(__this, ___item, method) (( int32_t (*) (List_1_t7378 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48115_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m48269(__this, ___item, method) (( bool (*) (List_1_t7378 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m48270(__this, ___item, method) (( int32_t (*) (List_1_t7378 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m48271(__this, ___index, ___item, method) (( void (*) (List_1_t7378 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m48272(__this, ___item, method) (( void (*) (List_1_t7378 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48273(__this, method) (( bool (*) (List_1_t7378 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48120_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48274(__this, method) (( bool (*) (List_1_t7378 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48121_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m48275(__this, method) (( Object_t * (*) (List_1_t7378 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m48276(__this, method) (( bool (*) (List_1_t7378 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48123_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m48277(__this, method) (( bool (*) (List_1_t7378 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48124_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m48278(__this, ___index, method) (( Object_t * (*) (List_1_t7378 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48125_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m48279(__this, ___index, ___value, method) (( void (*) (List_1_t7378 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48126_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Add(T)
#define List_1_Add_m48280(__this, ___item, method) (( void (*) (List_1_t7378 *, KeyValuePair_2_t7198 , const MethodInfo*))List_1_Add_m48127_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m48281(__this, ___newCount, method) (( void (*) (List_1_t7378 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48128_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m48282(__this, ___idx, ___count, method) (( void (*) (List_1_t7378 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48129_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m48283(__this, ___collection, method) (( void (*) (List_1_t7378 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48130_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m48284(__this, ___enumerable, method) (( void (*) (List_1_t7378 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48131_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m48285(__this, ___collection, method) (( void (*) (List_1_t7378 *, Object_t*, const MethodInfo*))List_1_AddRange_m48132_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AsReadOnly()
#define List_1_AsReadOnly_m48286(__this, method) (( ReadOnlyCollection_1_t7380 * (*) (List_1_t7378 *, const MethodInfo*))List_1_AsReadOnly_m48133_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Clear()
#define List_1_Clear_m48287(__this, method) (( void (*) (List_1_t7378 *, const MethodInfo*))List_1_Clear_m48134_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Contains(T)
#define List_1_Contains_m48288(__this, ___item, method) (( bool (*) (List_1_t7378 *, KeyValuePair_2_t7198 , const MethodInfo*))List_1_Contains_m48135_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m48289(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7378 *, KeyValuePair_2U5BU5D_t7377*, int32_t, const MethodInfo*))List_1_CopyTo_m48136_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m48290(__this, ___match, method) (( KeyValuePair_2_t7198  (*) (List_1_t7378 *, Predicate_1_t7381 *, const MethodInfo*))List_1_Find_m48137_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m48291(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7381 *, const MethodInfo*))List_1_CheckMatch_m48138_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m48292(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7378 *, int32_t, int32_t, Predicate_1_t7381 *, const MethodInfo*))List_1_GetIndex_m48139_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetEnumerator()
#define List_1_GetEnumerator_m48293(__this, method) (( Enumerator_t7382  (*) (List_1_t7378 *, const MethodInfo*))List_1_GetEnumerator_m48140_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m48294(__this, ___index, ___count, method) (( List_1_t7378 * (*) (List_1_t7378 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48141_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::IndexOf(T)
#define List_1_IndexOf_m48295(__this, ___item, method) (( int32_t (*) (List_1_t7378 *, KeyValuePair_2_t7198 , const MethodInfo*))List_1_IndexOf_m48142_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m48296(__this, ___start, ___delta, method) (( void (*) (List_1_t7378 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48143_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m48297(__this, ___index, method) (( void (*) (List_1_t7378 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48144_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Insert(System.Int32,T)
#define List_1_Insert_m48298(__this, ___index, ___item, method) (( void (*) (List_1_t7378 *, int32_t, KeyValuePair_2_t7198 , const MethodInfo*))List_1_Insert_m48145_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m48299(__this, ___collection, method) (( void (*) (List_1_t7378 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48146_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m48300(__this, ___index, ___collection, method) (( void (*) (List_1_t7378 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48147_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m48301(__this, ___index, ___collection, method) (( void (*) (List_1_t7378 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48148_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m48302(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7378 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48149_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Remove(T)
#define List_1_Remove_m48303(__this, ___item, method) (( bool (*) (List_1_t7378 *, KeyValuePair_2_t7198 , const MethodInfo*))List_1_Remove_m48150_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m48304(__this, ___match, method) (( int32_t (*) (List_1_t7378 *, Predicate_1_t7381 *, const MethodInfo*))List_1_RemoveAll_m48151_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m48305(__this, ___index, method) (( void (*) (List_1_t7378 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48152_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m48306(__this, ___index, ___count, method) (( void (*) (List_1_t7378 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48153_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Reverse()
#define List_1_Reverse_m48307(__this, method) (( void (*) (List_1_t7378 *, const MethodInfo*))List_1_Reverse_m48154_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort()
#define List_1_Sort_m48308(__this, method) (( void (*) (List_1_t7378 *, const MethodInfo*))List_1_Sort_m48155_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m48309(__this, ___comparer, method) (( void (*) (List_1_t7378 *, Object_t*, const MethodInfo*))List_1_Sort_m48156_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m48310(__this, ___comparison, method) (( void (*) (List_1_t7378 *, Comparison_1_t7383 *, const MethodInfo*))List_1_Sort_m48157_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::ToArray()
#define List_1_ToArray_m48311(__this, method) (( KeyValuePair_2U5BU5D_t7377* (*) (List_1_t7378 *, const MethodInfo*))List_1_ToArray_m48158_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::TrimExcess()
#define List_1_TrimExcess_m48312(__this, method) (( void (*) (List_1_t7378 *, const MethodInfo*))List_1_TrimExcess_m48159_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Capacity()
#define List_1_get_Capacity_m48313(__this, method) (( int32_t (*) (List_1_t7378 *, const MethodInfo*))List_1_get_Capacity_m48160_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m48314(__this, ___value, method) (( void (*) (List_1_t7378 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48161_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Count()
#define List_1_get_Count_m48315(__this, method) (( int32_t (*) (List_1_t7378 *, const MethodInfo*))List_1_get_Count_m48162_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Item(System.Int32)
#define List_1_get_Item_m48316(__this, ___index, method) (( KeyValuePair_2_t7198  (*) (List_1_t7378 *, int32_t, const MethodInfo*))List_1_get_Item_m48163_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m48317(__this, ___index, ___value, method) (( void (*) (List_1_t7378 *, int32_t, KeyValuePair_2_t7198 , const MethodInfo*))List_1_set_Item_m48164_gshared)(__this, ___index, ___value, method)

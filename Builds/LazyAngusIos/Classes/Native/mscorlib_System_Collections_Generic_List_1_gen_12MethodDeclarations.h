#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBLikeInfo>
struct List_1_t645;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t289;
// System.Collections.Generic.IEnumerable`1<FBLikeInfo>
struct IEnumerable_1_t8791;
// FBLikeInfo[]
struct FBLikeInfoU5BU5D_t5547;
// System.Collections.Generic.IEnumerator`1<FBLikeInfo>
struct IEnumerator_1_t8782;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<FBLikeInfo>
struct ICollection_1_t8784;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBLikeInfo>
struct ReadOnlyCollection_1_t5557;
// System.Predicate`1<FBLikeInfo>
struct Predicate_1_t5558;
// System.Collections.Generic.IComparer`1<FBLikeInfo>
struct IComparer_1_t8792;
// System.Comparison`1<FBLikeInfo>
struct Comparison_1_t5560;
// System.Collections.Generic.List`1/Enumerator<FBLikeInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3648(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24873(__this, ___collection, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Int32)
#define List_1__ctor_m24874(__this, ___capacity, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m24875(__this, ___data, ___size, method) (( void (*) (List_1_t645 *, FBLikeInfoU5BU5D_t5547*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.cctor()
#define List_1__cctor_m24876(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24877(__this, method) (( Object_t* (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24878(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t645 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24879(__this, method) (( Object_t * (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24880(__this, ___item, method) (( int32_t (*) (List_1_t645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24881(__this, ___item, method) (( bool (*) (List_1_t645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24882(__this, ___item, method) (( int32_t (*) (List_1_t645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24883(__this, ___index, ___item, method) (( void (*) (List_1_t645 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24884(__this, ___item, method) (( void (*) (List_1_t645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24885(__this, method) (( bool (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24886(__this, method) (( bool (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24887(__this, method) (( Object_t * (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24888(__this, method) (( bool (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24889(__this, method) (( bool (*) (List_1_t645 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24890(__this, ___index, method) (( Object_t * (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24891(__this, ___index, ___value, method) (( void (*) (List_1_t645 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Add(T)
#define List_1_Add_m24892(__this, ___item, method) (( void (*) (List_1_t645 *, FBLikeInfo_t289 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24893(__this, ___newCount, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24894(__this, ___idx, ___count, method) (( void (*) (List_1_t645 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24895(__this, ___collection, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24896(__this, ___enumerable, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24897(__this, ___collection, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBLikeInfo>::AsReadOnly()
#define List_1_AsReadOnly_m24898(__this, method) (( ReadOnlyCollection_1_t5557 * (*) (List_1_t645 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Clear()
#define List_1_Clear_m24899(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Contains(T)
#define List_1_Contains_m24900(__this, ___item, method) (( bool (*) (List_1_t645 *, FBLikeInfo_t289 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24901(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t645 *, FBLikeInfoU5BU5D_t5547*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m24902(__this, ___match, method) (( FBLikeInfo_t289 * (*) (List_1_t645 *, Predicate_1_t5558 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24903(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5558 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24904(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t645 *, int32_t, int32_t, Predicate_1_t5558 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBLikeInfo>::GetEnumerator()
#define List_1_GetEnumerator_m24905(__this, method) (( Enumerator_t5559  (*) (List_1_t645 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FBLikeInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24906(__this, ___index, ___count, method) (( List_1_t645 * (*) (List_1_t645 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::IndexOf(T)
#define List_1_IndexOf_m24907(__this, ___item, method) (( int32_t (*) (List_1_t645 *, FBLikeInfo_t289 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24908(__this, ___start, ___delta, method) (( void (*) (List_1_t645 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24909(__this, ___index, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Insert(System.Int32,T)
#define List_1_Insert_m24910(__this, ___index, ___item, method) (( void (*) (List_1_t645 *, int32_t, FBLikeInfo_t289 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24911(__this, ___collection, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24912(__this, ___index, ___collection, method) (( void (*) (List_1_t645 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24913(__this, ___index, ___collection, method) (( void (*) (List_1_t645 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24914(__this, ___index, ___enumerable, method) (( void (*) (List_1_t645 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Remove(T)
#define List_1_Remove_m24915(__this, ___item, method) (( bool (*) (List_1_t645 *, FBLikeInfo_t289 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24916(__this, ___match, method) (( int32_t (*) (List_1_t645 *, Predicate_1_t5558 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24917(__this, ___index, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24918(__this, ___index, ___count, method) (( void (*) (List_1_t645 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Reverse()
#define List_1_Reverse_m24919(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort()
#define List_1_Sort_m24920(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24921(__this, ___comparer, method) (( void (*) (List_1_t645 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24922(__this, ___comparison, method) (( void (*) (List_1_t645 *, Comparison_1_t5560 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBLikeInfo>::ToArray()
#define List_1_ToArray_m24923(__this, method) (( FBLikeInfoU5BU5D_t5547* (*) (List_1_t645 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::TrimExcess()
#define List_1_TrimExcess_m24924(__this, method) (( void (*) (List_1_t645 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Capacity()
#define List_1_get_Capacity_m24925(__this, method) (( int32_t (*) (List_1_t645 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24926(__this, ___value, method) (( void (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Count()
#define List_1_get_Count_m24927(__this, method) (( int32_t (*) (List_1_t645 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::get_Item(System.Int32)
#define List_1_get_Item_m24928(__this, ___index, method) (( FBLikeInfo_t289 * (*) (List_1_t645 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m24929(__this, ___index, ___value, method) (( void (*) (List_1_t645 *, int32_t, FBLikeInfo_t289 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

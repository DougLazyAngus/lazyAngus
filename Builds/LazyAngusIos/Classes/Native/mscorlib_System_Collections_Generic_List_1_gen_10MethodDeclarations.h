#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBLikeInfo>
struct List_1_t492;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t221;
// System.Collections.Generic.IEnumerable`1<FBLikeInfo>
struct IEnumerable_1_t4235;
// System.Collections.Generic.IEnumerator`1<FBLikeInfo>
struct IEnumerator_1_t4226;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<FBLikeInfo>
struct ICollection_1_t4228;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBLikeInfo>
struct ReadOnlyCollection_1_t3454;
// FBLikeInfo[]
struct FBLikeInfoU5BU5D_t3444;
// System.Predicate`1<FBLikeInfo>
struct Predicate_1_t3455;
// System.Collections.Generic.IComparer`1<FBLikeInfo>
struct IComparer_1_t4236;
// System.Comparison`1<FBLikeInfo>
struct Comparison_1_t3457;
// System.Collections.Generic.List`1/Enumerator<FBLikeInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m2450(__this, method) (( void (*) (List_1_t492 *, const MethodInfo*))List_1__ctor_m2341_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19554(__this, ___collection, method) (( void (*) (List_1_t492 *, Object_t*, const MethodInfo*))List_1__ctor_m16488_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Int32)
#define List_1__ctor_m19555(__this, ___capacity, method) (( void (*) (List_1_t492 *, int32_t, const MethodInfo*))List_1__ctor_m16490_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.cctor()
#define List_1__cctor_m19556(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16492_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19557(__this, method) (( Object_t* (*) (List_1_t492 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19558(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t492 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19559(__this, method) (( Object_t * (*) (List_1_t492 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6489_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19560(__this, ___item, method) (( int32_t (*) (List_1_t492 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6498_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19561(__this, ___item, method) (( bool (*) (List_1_t492 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6500_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19562(__this, ___item, method) (( int32_t (*) (List_1_t492 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19563(__this, ___index, ___item, method) (( void (*) (List_1_t492 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6502_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19564(__this, ___item, method) (( void (*) (List_1_t492 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6503_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19565(__this, method) (( bool (*) (List_1_t492 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19566(__this, method) (( bool (*) (List_1_t492 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6491_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19567(__this, method) (( Object_t * (*) (List_1_t492 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m19568(__this, method) (( bool (*) (List_1_t492 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m19569(__this, method) (( bool (*) (List_1_t492 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6495_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19570(__this, ___index, method) (( Object_t * (*) (List_1_t492 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19571(__this, ___index, ___value, method) (( void (*) (List_1_t492 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6497_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Add(T)
#define List_1_Add_m19572(__this, ___item, method) (( void (*) (List_1_t492 *, FBLikeInfo_t221 *, const MethodInfo*))List_1_Add_m6506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19573(__this, ___newCount, method) (( void (*) (List_1_t492 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16510_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19574(__this, ___collection, method) (( void (*) (List_1_t492 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16512_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19575(__this, ___enumerable, method) (( void (*) (List_1_t492 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16514_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m19576(__this, ___collection, method) (( void (*) (List_1_t492 *, Object_t*, const MethodInfo*))List_1_AddRange_m16516_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBLikeInfo>::AsReadOnly()
#define List_1_AsReadOnly_m19577(__this, method) (( ReadOnlyCollection_1_t3454 * (*) (List_1_t492 *, const MethodInfo*))List_1_AsReadOnly_m16518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Clear()
#define List_1_Clear_m19578(__this, method) (( void (*) (List_1_t492 *, const MethodInfo*))List_1_Clear_m6499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Contains(T)
#define List_1_Contains_m19579(__this, ___item, method) (( bool (*) (List_1_t492 *, FBLikeInfo_t221 *, const MethodInfo*))List_1_Contains_m6507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19580(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t492 *, FBLikeInfoU5BU5D_t3444*, int32_t, const MethodInfo*))List_1_CopyTo_m6508_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m19581(__this, ___match, method) (( FBLikeInfo_t221 * (*) (List_1_t492 *, Predicate_1_t3455 *, const MethodInfo*))List_1_Find_m16523_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m19582(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3455 *, const MethodInfo*))List_1_CheckMatch_m16525_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m19583(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t492 *, int32_t, int32_t, Predicate_1_t3455 *, const MethodInfo*))List_1_GetIndex_m16527_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBLikeInfo>::GetEnumerator()
#define List_1_GetEnumerator_m19584(__this, method) (( Enumerator_t3456  (*) (List_1_t492 *, const MethodInfo*))List_1_GetEnumerator_m2444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::IndexOf(T)
#define List_1_IndexOf_m19585(__this, ___item, method) (( int32_t (*) (List_1_t492 *, FBLikeInfo_t221 *, const MethodInfo*))List_1_IndexOf_m6511_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19586(__this, ___start, ___delta, method) (( void (*) (List_1_t492 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16530_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19587(__this, ___index, method) (( void (*) (List_1_t492 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Insert(System.Int32,T)
#define List_1_Insert_m19588(__this, ___index, ___item, method) (( void (*) (List_1_t492 *, int32_t, FBLikeInfo_t221 *, const MethodInfo*))List_1_Insert_m6512_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19589(__this, ___collection, method) (( void (*) (List_1_t492 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16535_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Remove(T)
#define List_1_Remove_m19590(__this, ___item, method) (( bool (*) (List_1_t492 *, FBLikeInfo_t221 *, const MethodInfo*))List_1_Remove_m6509_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m19591(__this, ___match, method) (( int32_t (*) (List_1_t492 *, Predicate_1_t3455 *, const MethodInfo*))List_1_RemoveAll_m16538_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19592(__this, ___index, method) (( void (*) (List_1_t492 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6504_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Reverse()
#define List_1_Reverse_m19593(__this, method) (( void (*) (List_1_t492 *, const MethodInfo*))List_1_Reverse_m16541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort()
#define List_1_Sort_m19594(__this, method) (( void (*) (List_1_t492 *, const MethodInfo*))List_1_Sort_m16543_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m19595(__this, ___comparer, method) (( void (*) (List_1_t492 *, Object_t*, const MethodInfo*))List_1_Sort_m16545_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19596(__this, ___comparison, method) (( void (*) (List_1_t492 *, Comparison_1_t3457 *, const MethodInfo*))List_1_Sort_m16547_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBLikeInfo>::ToArray()
#define List_1_ToArray_m19597(__this, method) (( FBLikeInfoU5BU5D_t3444* (*) (List_1_t492 *, const MethodInfo*))List_1_ToArray_m16549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::TrimExcess()
#define List_1_TrimExcess_m19598(__this, method) (( void (*) (List_1_t492 *, const MethodInfo*))List_1_TrimExcess_m16551_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Capacity()
#define List_1_get_Capacity_m19599(__this, method) (( int32_t (*) (List_1_t492 *, const MethodInfo*))List_1_get_Capacity_m16553_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19600(__this, ___value, method) (( void (*) (List_1_t492 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16555_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Count()
#define List_1_get_Count_m19601(__this, method) (( int32_t (*) (List_1_t492 *, const MethodInfo*))List_1_get_Count_m6490_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::get_Item(System.Int32)
#define List_1_get_Item_m19602(__this, ___index, method) (( FBLikeInfo_t221 * (*) (List_1_t492 *, int32_t, const MethodInfo*))List_1_get_Item_m6513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m19603(__this, ___index, ___value, method) (( void (*) (List_1_t492 *, int32_t, FBLikeInfo_t221 *, const MethodInfo*))List_1_set_Item_m6514_gshared)(__this, ___index, ___value, method)

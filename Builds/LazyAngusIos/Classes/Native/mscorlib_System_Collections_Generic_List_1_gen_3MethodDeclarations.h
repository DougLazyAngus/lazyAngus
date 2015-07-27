#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t579;
// System.Object
struct Object_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t575;
// System.Collections.Generic.IEnumerable`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerable_1_t4269;
// System.Collections.Generic.IEnumerator`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerator_1_t4268;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ICollection_1_t4270;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ReadOnlyCollection_1_t3454;
// UnionAssets.FLE.EventHandlerFunction[]
struct EventHandlerFunctionU5BU5D_t3452;
// System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>
struct Predicate_1_t3455;
// System.Collections.Generic.IComparer`1<UnionAssets.FLE.EventHandlerFunction>
struct IComparer_1_t4271;
// System.Comparison`1<UnionAssets.FLE.EventHandlerFunction>
struct Comparison_1_t3457;
// System.Collections.Generic.List`1/Enumerator<UnionAssets.FLE.EventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3159(__this, method) (( void (*) (List_1_t579 *, const MethodInfo*))List_1__ctor_m3123_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18764(__this, ___collection, method) (( void (*) (List_1_t579 *, Object_t*, const MethodInfo*))List_1__ctor_m17404_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Int32)
#define List_1__ctor_m18765(__this, ___capacity, method) (( void (*) (List_1_t579 *, int32_t, const MethodInfo*))List_1__ctor_m17406_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.cctor()
#define List_1__cctor_m18766(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17408_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18767(__this, method) (( Object_t* (*) (List_1_t579 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18768(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t579 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18769(__this, method) (( Object_t * (*) (List_1_t579 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18770(__this, ___item, method) (( int32_t (*) (List_1_t579 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7418_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18771(__this, ___item, method) (( bool (*) (List_1_t579 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7420_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18772(__this, ___item, method) (( int32_t (*) (List_1_t579 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18773(__this, ___index, ___item, method) (( void (*) (List_1_t579 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7422_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18774(__this, ___item, method) (( void (*) (List_1_t579 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7423_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18775(__this, method) (( bool (*) (List_1_t579 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18776(__this, method) (( bool (*) (List_1_t579 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18777(__this, method) (( Object_t * (*) (List_1_t579 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18778(__this, method) (( bool (*) (List_1_t579 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18779(__this, method) (( bool (*) (List_1_t579 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7415_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18780(__this, ___index, method) (( Object_t * (*) (List_1_t579 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7416_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18781(__this, ___index, ___value, method) (( void (*) (List_1_t579 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7417_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(T)
#define List_1_Add_m18782(__this, ___item, method) (( void (*) (List_1_t579 *, EventHandlerFunction_t575 *, const MethodInfo*))List_1_Add_m7426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18783(__this, ___newCount, method) (( void (*) (List_1_t579 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17426_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18784(__this, ___collection, method) (( void (*) (List_1_t579 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18785(__this, ___enumerable, method) (( void (*) (List_1_t579 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17430_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18786(__this, ___collection, method) (( void (*) (List_1_t579 *, Object_t*, const MethodInfo*))List_1_AddRange_m17432_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AsReadOnly()
#define List_1_AsReadOnly_m18787(__this, method) (( ReadOnlyCollection_1_t3454 * (*) (List_1_t579 *, const MethodInfo*))List_1_AsReadOnly_m17434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Clear()
#define List_1_Clear_m18788(__this, method) (( void (*) (List_1_t579 *, const MethodInfo*))List_1_Clear_m7419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Contains(T)
#define List_1_Contains_m18789(__this, ___item, method) (( bool (*) (List_1_t579 *, EventHandlerFunction_t575 *, const MethodInfo*))List_1_Contains_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18790(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t579 *, EventHandlerFunctionU5BU5D_t3452*, int32_t, const MethodInfo*))List_1_CopyTo_m7428_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Find(System.Predicate`1<T>)
#define List_1_Find_m18791(__this, ___match, method) (( EventHandlerFunction_t575 * (*) (List_1_t579 *, Predicate_1_t3455 *, const MethodInfo*))List_1_Find_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18792(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3455 *, const MethodInfo*))List_1_CheckMatch_m17441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18793(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t579 *, int32_t, int32_t, Predicate_1_t3455 *, const MethodInfo*))List_1_GetIndex_m17443_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetEnumerator()
#define List_1_GetEnumerator_m18794(__this, method) (( Enumerator_t3456  (*) (List_1_t579 *, const MethodInfo*))List_1_GetEnumerator_m3281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::IndexOf(T)
#define List_1_IndexOf_m18795(__this, ___item, method) (( int32_t (*) (List_1_t579 *, EventHandlerFunction_t575 *, const MethodInfo*))List_1_IndexOf_m7431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18796(__this, ___start, ___delta, method) (( void (*) (List_1_t579 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17446_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18797(__this, ___index, method) (( void (*) (List_1_t579 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Insert(System.Int32,T)
#define List_1_Insert_m18798(__this, ___index, ___item, method) (( void (*) (List_1_t579 *, int32_t, EventHandlerFunction_t575 *, const MethodInfo*))List_1_Insert_m7432_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18799(__this, ___collection, method) (( void (*) (List_1_t579 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17451_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(T)
#define List_1_Remove_m18800(__this, ___item, method) (( bool (*) (List_1_t579 *, EventHandlerFunction_t575 *, const MethodInfo*))List_1_Remove_m7429_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18801(__this, ___match, method) (( int32_t (*) (List_1_t579 *, Predicate_1_t3455 *, const MethodInfo*))List_1_RemoveAll_m17454_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18802(__this, ___index, method) (( void (*) (List_1_t579 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7424_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Reverse()
#define List_1_Reverse_m18803(__this, method) (( void (*) (List_1_t579 *, const MethodInfo*))List_1_Reverse_m17457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort()
#define List_1_Sort_m18804(__this, method) (( void (*) (List_1_t579 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m18805(__this, ___comparer, method) (( void (*) (List_1_t579 *, Object_t*, const MethodInfo*))List_1_Sort_m17461_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18806(__this, ___comparison, method) (( void (*) (List_1_t579 *, Comparison_1_t3457 *, const MethodInfo*))List_1_Sort_m17463_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::ToArray()
#define List_1_ToArray_m18807(__this, method) (( EventHandlerFunctionU5BU5D_t3452* (*) (List_1_t579 *, const MethodInfo*))List_1_ToArray_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::TrimExcess()
#define List_1_TrimExcess_m18808(__this, method) (( void (*) (List_1_t579 *, const MethodInfo*))List_1_TrimExcess_m17467_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Capacity()
#define List_1_get_Capacity_m18809(__this, method) (( int32_t (*) (List_1_t579 *, const MethodInfo*))List_1_get_Capacity_m17469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18810(__this, ___value, method) (( void (*) (List_1_t579 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count()
#define List_1_get_Count_m18811(__this, method) (( int32_t (*) (List_1_t579 *, const MethodInfo*))List_1_get_Count_m7410_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32)
#define List_1_get_Item_m18812(__this, ___index, method) (( EventHandlerFunction_t575 * (*) (List_1_t579 *, int32_t, const MethodInfo*))List_1_get_Item_m7433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Item(System.Int32,T)
#define List_1_set_Item_m18813(__this, ___index, ___value, method) (( void (*) (List_1_t579 *, int32_t, EventHandlerFunction_t575 *, const MethodInfo*))List_1_set_Item_m7434_gshared)(__this, ___index, ___value, method)

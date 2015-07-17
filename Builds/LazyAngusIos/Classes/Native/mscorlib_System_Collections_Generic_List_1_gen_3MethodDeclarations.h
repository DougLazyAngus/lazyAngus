#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t577;
// System.Object
struct Object_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t573;
// System.Collections.Generic.IEnumerable`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerable_1_t4267;
// System.Collections.Generic.IEnumerator`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerator_1_t4266;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ICollection_1_t4268;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ReadOnlyCollection_1_t3452;
// UnionAssets.FLE.EventHandlerFunction[]
struct EventHandlerFunctionU5BU5D_t3450;
// System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>
struct Predicate_1_t3453;
// System.Collections.Generic.IComparer`1<UnionAssets.FLE.EventHandlerFunction>
struct IComparer_1_t4269;
// System.Comparison`1<UnionAssets.FLE.EventHandlerFunction>
struct Comparison_1_t3455;
// System.Collections.Generic.List`1/Enumerator<UnionAssets.FLE.EventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3144(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1__ctor_m3108_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18749(__this, ___collection, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1__ctor_m17389_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Int32)
#define List_1__ctor_m18750(__this, ___capacity, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1__ctor_m17391_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.cctor()
#define List_1__cctor_m18751(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17393_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18752(__this, method) (( Object_t* (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7415_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18753(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t577 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7398_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18754(__this, method) (( Object_t * (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7394_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18755(__this, ___item, method) (( int32_t (*) (List_1_t577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7403_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18756(__this, ___item, method) (( bool (*) (List_1_t577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7405_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18757(__this, ___item, method) (( int32_t (*) (List_1_t577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7406_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18758(__this, ___index, ___item, method) (( void (*) (List_1_t577 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7407_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18759(__this, ___item, method) (( void (*) (List_1_t577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18760(__this, method) (( bool (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18761(__this, method) (( bool (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7396_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18762(__this, method) (( Object_t * (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18763(__this, method) (( bool (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18764(__this, method) (( bool (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7400_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18765(__this, ___index, method) (( Object_t * (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7401_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18766(__this, ___index, ___value, method) (( void (*) (List_1_t577 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7402_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(T)
#define List_1_Add_m18767(__this, ___item, method) (( void (*) (List_1_t577 *, EventHandlerFunction_t573 *, const MethodInfo*))List_1_Add_m7411_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18768(__this, ___newCount, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17411_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18769(__this, ___collection, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17413_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18770(__this, ___enumerable, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17415_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18771(__this, ___collection, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_AddRange_m17417_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AsReadOnly()
#define List_1_AsReadOnly_m18772(__this, method) (( ReadOnlyCollection_1_t3452 * (*) (List_1_t577 *, const MethodInfo*))List_1_AsReadOnly_m17419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Clear()
#define List_1_Clear_m18773(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1_Clear_m7404_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Contains(T)
#define List_1_Contains_m18774(__this, ___item, method) (( bool (*) (List_1_t577 *, EventHandlerFunction_t573 *, const MethodInfo*))List_1_Contains_m7412_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18775(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t577 *, EventHandlerFunctionU5BU5D_t3450*, int32_t, const MethodInfo*))List_1_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Find(System.Predicate`1<T>)
#define List_1_Find_m18776(__this, ___match, method) (( EventHandlerFunction_t573 * (*) (List_1_t577 *, Predicate_1_t3453 *, const MethodInfo*))List_1_Find_m17424_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18777(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3453 *, const MethodInfo*))List_1_CheckMatch_m17426_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18778(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t577 *, int32_t, int32_t, Predicate_1_t3453 *, const MethodInfo*))List_1_GetIndex_m17428_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetEnumerator()
#define List_1_GetEnumerator_m18779(__this, method) (( Enumerator_t3454  (*) (List_1_t577 *, const MethodInfo*))List_1_GetEnumerator_m3266_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::IndexOf(T)
#define List_1_IndexOf_m18780(__this, ___item, method) (( int32_t (*) (List_1_t577 *, EventHandlerFunction_t573 *, const MethodInfo*))List_1_IndexOf_m7416_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18781(__this, ___start, ___delta, method) (( void (*) (List_1_t577 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18782(__this, ___index, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Insert(System.Int32,T)
#define List_1_Insert_m18783(__this, ___index, ___item, method) (( void (*) (List_1_t577 *, int32_t, EventHandlerFunction_t573 *, const MethodInfo*))List_1_Insert_m7417_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18784(__this, ___collection, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17436_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(T)
#define List_1_Remove_m18785(__this, ___item, method) (( bool (*) (List_1_t577 *, EventHandlerFunction_t573 *, const MethodInfo*))List_1_Remove_m7414_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18786(__this, ___match, method) (( int32_t (*) (List_1_t577 *, Predicate_1_t3453 *, const MethodInfo*))List_1_RemoveAll_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18787(__this, ___index, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7409_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Reverse()
#define List_1_Reverse_m18788(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1_Reverse_m17442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort()
#define List_1_Sort_m18789(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1_Sort_m17444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m18790(__this, ___comparer, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_Sort_m17446_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18791(__this, ___comparison, method) (( void (*) (List_1_t577 *, Comparison_1_t3455 *, const MethodInfo*))List_1_Sort_m17448_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::ToArray()
#define List_1_ToArray_m18792(__this, method) (( EventHandlerFunctionU5BU5D_t3450* (*) (List_1_t577 *, const MethodInfo*))List_1_ToArray_m17450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::TrimExcess()
#define List_1_TrimExcess_m18793(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1_TrimExcess_m17452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Capacity()
#define List_1_get_Capacity_m18794(__this, method) (( int32_t (*) (List_1_t577 *, const MethodInfo*))List_1_get_Capacity_m17454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18795(__this, ___value, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17456_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count()
#define List_1_get_Count_m18796(__this, method) (( int32_t (*) (List_1_t577 *, const MethodInfo*))List_1_get_Count_m7395_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32)
#define List_1_get_Item_m18797(__this, ___index, method) (( EventHandlerFunction_t573 * (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_get_Item_m7418_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Item(System.Int32,T)
#define List_1_set_Item_m18798(__this, ___index, ___value, method) (( void (*) (List_1_t577 *, int32_t, EventHandlerFunction_t573 *, const MethodInfo*))List_1_set_Item_m7419_gshared)(__this, ___index, ___value, method)

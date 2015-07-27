#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t578;
// System.Object
struct Object_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t574;
// System.Collections.Generic.IEnumerable`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerable_1_t4268;
// System.Collections.Generic.IEnumerator`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerator_1_t4267;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ICollection_1_t4269;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ReadOnlyCollection_1_t3453;
// UnionAssets.FLE.EventHandlerFunction[]
struct EventHandlerFunctionU5BU5D_t3451;
// System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>
struct Predicate_1_t3454;
// System.Collections.Generic.IComparer`1<UnionAssets.FLE.EventHandlerFunction>
struct IComparer_1_t4270;
// System.Comparison`1<UnionAssets.FLE.EventHandlerFunction>
struct Comparison_1_t3456;
// System.Collections.Generic.List`1/Enumerator<UnionAssets.FLE.EventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3152(__this, method) (( void (*) (List_1_t578 *, const MethodInfo*))List_1__ctor_m3116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18757(__this, ___collection, method) (( void (*) (List_1_t578 *, Object_t*, const MethodInfo*))List_1__ctor_m17397_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Int32)
#define List_1__ctor_m18758(__this, ___capacity, method) (( void (*) (List_1_t578 *, int32_t, const MethodInfo*))List_1__ctor_m17399_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.cctor()
#define List_1__cctor_m18759(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17401_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18760(__this, method) (( Object_t* (*) (List_1_t578 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18761(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t578 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7406_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18762(__this, method) (( Object_t * (*) (List_1_t578 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7402_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18763(__this, ___item, method) (( int32_t (*) (List_1_t578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7411_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18764(__this, ___item, method) (( bool (*) (List_1_t578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7413_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18765(__this, ___item, method) (( int32_t (*) (List_1_t578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18766(__this, ___index, ___item, method) (( void (*) (List_1_t578 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7415_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18767(__this, ___item, method) (( void (*) (List_1_t578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7416_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18768(__this, method) (( bool (*) (List_1_t578 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18769(__this, method) (( bool (*) (List_1_t578 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7404_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18770(__this, method) (( Object_t * (*) (List_1_t578 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7405_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18771(__this, method) (( bool (*) (List_1_t578 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7407_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18772(__this, method) (( bool (*) (List_1_t578 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7408_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18773(__this, ___index, method) (( Object_t * (*) (List_1_t578 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7409_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18774(__this, ___index, ___value, method) (( void (*) (List_1_t578 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7410_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(T)
#define List_1_Add_m18775(__this, ___item, method) (( void (*) (List_1_t578 *, EventHandlerFunction_t574 *, const MethodInfo*))List_1_Add_m7419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18776(__this, ___newCount, method) (( void (*) (List_1_t578 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17419_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18777(__this, ___collection, method) (( void (*) (List_1_t578 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17421_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18778(__this, ___enumerable, method) (( void (*) (List_1_t578 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17423_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18779(__this, ___collection, method) (( void (*) (List_1_t578 *, Object_t*, const MethodInfo*))List_1_AddRange_m17425_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AsReadOnly()
#define List_1_AsReadOnly_m18780(__this, method) (( ReadOnlyCollection_1_t3453 * (*) (List_1_t578 *, const MethodInfo*))List_1_AsReadOnly_m17427_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Clear()
#define List_1_Clear_m18781(__this, method) (( void (*) (List_1_t578 *, const MethodInfo*))List_1_Clear_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Contains(T)
#define List_1_Contains_m18782(__this, ___item, method) (( bool (*) (List_1_t578 *, EventHandlerFunction_t574 *, const MethodInfo*))List_1_Contains_m7420_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18783(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t578 *, EventHandlerFunctionU5BU5D_t3451*, int32_t, const MethodInfo*))List_1_CopyTo_m7421_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Find(System.Predicate`1<T>)
#define List_1_Find_m18784(__this, ___match, method) (( EventHandlerFunction_t574 * (*) (List_1_t578 *, Predicate_1_t3454 *, const MethodInfo*))List_1_Find_m17432_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18785(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3454 *, const MethodInfo*))List_1_CheckMatch_m17434_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18786(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t578 *, int32_t, int32_t, Predicate_1_t3454 *, const MethodInfo*))List_1_GetIndex_m17436_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetEnumerator()
#define List_1_GetEnumerator_m18787(__this, method) (( Enumerator_t3455  (*) (List_1_t578 *, const MethodInfo*))List_1_GetEnumerator_m3274_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::IndexOf(T)
#define List_1_IndexOf_m18788(__this, ___item, method) (( int32_t (*) (List_1_t578 *, EventHandlerFunction_t574 *, const MethodInfo*))List_1_IndexOf_m7424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18789(__this, ___start, ___delta, method) (( void (*) (List_1_t578 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17439_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18790(__this, ___index, method) (( void (*) (List_1_t578 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17441_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Insert(System.Int32,T)
#define List_1_Insert_m18791(__this, ___index, ___item, method) (( void (*) (List_1_t578 *, int32_t, EventHandlerFunction_t574 *, const MethodInfo*))List_1_Insert_m7425_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18792(__this, ___collection, method) (( void (*) (List_1_t578 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17444_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(T)
#define List_1_Remove_m18793(__this, ___item, method) (( bool (*) (List_1_t578 *, EventHandlerFunction_t574 *, const MethodInfo*))List_1_Remove_m7422_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18794(__this, ___match, method) (( int32_t (*) (List_1_t578 *, Predicate_1_t3454 *, const MethodInfo*))List_1_RemoveAll_m17447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18795(__this, ___index, method) (( void (*) (List_1_t578 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7417_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Reverse()
#define List_1_Reverse_m18796(__this, method) (( void (*) (List_1_t578 *, const MethodInfo*))List_1_Reverse_m17450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort()
#define List_1_Sort_m18797(__this, method) (( void (*) (List_1_t578 *, const MethodInfo*))List_1_Sort_m17452_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m18798(__this, ___comparer, method) (( void (*) (List_1_t578 *, Object_t*, const MethodInfo*))List_1_Sort_m17454_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18799(__this, ___comparison, method) (( void (*) (List_1_t578 *, Comparison_1_t3456 *, const MethodInfo*))List_1_Sort_m17456_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::ToArray()
#define List_1_ToArray_m18800(__this, method) (( EventHandlerFunctionU5BU5D_t3451* (*) (List_1_t578 *, const MethodInfo*))List_1_ToArray_m17458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::TrimExcess()
#define List_1_TrimExcess_m18801(__this, method) (( void (*) (List_1_t578 *, const MethodInfo*))List_1_TrimExcess_m17460_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Capacity()
#define List_1_get_Capacity_m18802(__this, method) (( int32_t (*) (List_1_t578 *, const MethodInfo*))List_1_get_Capacity_m17462_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18803(__this, ___value, method) (( void (*) (List_1_t578 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17464_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count()
#define List_1_get_Count_m18804(__this, method) (( int32_t (*) (List_1_t578 *, const MethodInfo*))List_1_get_Count_m7403_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32)
#define List_1_get_Item_m18805(__this, ___index, method) (( EventHandlerFunction_t574 * (*) (List_1_t578 *, int32_t, const MethodInfo*))List_1_get_Item_m7426_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Item(System.Int32,T)
#define List_1_set_Item_m18806(__this, ___index, ___value, method) (( void (*) (List_1_t578 *, int32_t, EventHandlerFunction_t574 *, const MethodInfo*))List_1_set_Item_m7427_gshared)(__this, ___index, ___value, method)

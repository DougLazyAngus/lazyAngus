#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct List_1_t8023;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerable_1_t10013;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8022;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7794;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ICollection_1_t10014;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ReadOnlyCollection_1_t8025;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Predicate_1_t8026;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IComparer_1_t10015;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Comparison_1_t8028;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_81.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_97MethodDeclarations.h"
#define List_1__ctor_m53746(__this, method) (( void (*) (List_1_t8023 *, const MethodInfo*))List_1__ctor_m53593_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m53747(__this, ___collection, method) (( void (*) (List_1_t8023 *, Object_t*, const MethodInfo*))List_1__ctor_m53594_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Int32)
#define List_1__ctor_m53748(__this, ___capacity, method) (( void (*) (List_1_t8023 *, int32_t, const MethodInfo*))List_1__ctor_m53595_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m53749(__this, ___data, ___size, method) (( void (*) (List_1_t8023 *, KeyValuePair_2U5BU5D_t8022*, int32_t, const MethodInfo*))List_1__ctor_m53596_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.cctor()
#define List_1__cctor_m53750(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53597_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53751(__this, method) (( Object_t* (*) (List_1_t8023 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53598_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m53752(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8023 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53599_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53753(__this, method) (( Object_t * (*) (List_1_t8023 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53600_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m53754(__this, ___item, method) (( int32_t (*) (List_1_t8023 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53601_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m53755(__this, ___item, method) (( bool (*) (List_1_t8023 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53602_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m53756(__this, ___item, method) (( int32_t (*) (List_1_t8023 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53603_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m53757(__this, ___index, ___item, method) (( void (*) (List_1_t8023 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53604_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m53758(__this, ___item, method) (( void (*) (List_1_t8023 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53605_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53759(__this, method) (( bool (*) (List_1_t8023 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53760(__this, method) (( bool (*) (List_1_t8023 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53607_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m53761(__this, method) (( Object_t * (*) (List_1_t8023 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53608_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m53762(__this, method) (( bool (*) (List_1_t8023 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53609_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m53763(__this, method) (( bool (*) (List_1_t8023 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53610_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m53764(__this, ___index, method) (( Object_t * (*) (List_1_t8023 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53611_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m53765(__this, ___index, ___value, method) (( void (*) (List_1_t8023 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53612_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Add(T)
#define List_1_Add_m53766(__this, ___item, method) (( void (*) (List_1_t8023 *, KeyValuePair_2_t7789 , const MethodInfo*))List_1_Add_m53613_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m53767(__this, ___newCount, method) (( void (*) (List_1_t8023 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53614_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m53768(__this, ___idx, ___count, method) (( void (*) (List_1_t8023 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53615_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m53769(__this, ___collection, method) (( void (*) (List_1_t8023 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53616_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m53770(__this, ___enumerable, method) (( void (*) (List_1_t8023 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m53771(__this, ___collection, method) (( void (*) (List_1_t8023 *, Object_t*, const MethodInfo*))List_1_AddRange_m53618_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AsReadOnly()
#define List_1_AsReadOnly_m53772(__this, method) (( ReadOnlyCollection_1_t8025 * (*) (List_1_t8023 *, const MethodInfo*))List_1_AsReadOnly_m53619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Clear()
#define List_1_Clear_m53773(__this, method) (( void (*) (List_1_t8023 *, const MethodInfo*))List_1_Clear_m53620_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Contains(T)
#define List_1_Contains_m53774(__this, ___item, method) (( bool (*) (List_1_t8023 *, KeyValuePair_2_t7789 , const MethodInfo*))List_1_Contains_m53621_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m53775(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8023 *, KeyValuePair_2U5BU5D_t8022*, int32_t, const MethodInfo*))List_1_CopyTo_m53622_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m53776(__this, ___match, method) (( KeyValuePair_2_t7789  (*) (List_1_t8023 *, Predicate_1_t8026 *, const MethodInfo*))List_1_Find_m53623_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m53777(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8026 *, const MethodInfo*))List_1_CheckMatch_m53624_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m53778(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8023 *, int32_t, int32_t, Predicate_1_t8026 *, const MethodInfo*))List_1_GetIndex_m53625_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetEnumerator()
#define List_1_GetEnumerator_m53779(__this, method) (( Enumerator_t8027  (*) (List_1_t8023 *, const MethodInfo*))List_1_GetEnumerator_m53626_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m53780(__this, ___index, ___count, method) (( List_1_t8023 * (*) (List_1_t8023 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53627_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::IndexOf(T)
#define List_1_IndexOf_m53781(__this, ___item, method) (( int32_t (*) (List_1_t8023 *, KeyValuePair_2_t7789 , const MethodInfo*))List_1_IndexOf_m53628_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m53782(__this, ___start, ___delta, method) (( void (*) (List_1_t8023 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53629_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m53783(__this, ___index, method) (( void (*) (List_1_t8023 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53630_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Insert(System.Int32,T)
#define List_1_Insert_m53784(__this, ___index, ___item, method) (( void (*) (List_1_t8023 *, int32_t, KeyValuePair_2_t7789 , const MethodInfo*))List_1_Insert_m53631_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m53785(__this, ___collection, method) (( void (*) (List_1_t8023 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53632_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m53786(__this, ___index, ___collection, method) (( void (*) (List_1_t8023 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53633_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m53787(__this, ___index, ___collection, method) (( void (*) (List_1_t8023 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53634_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m53788(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8023 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53635_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Remove(T)
#define List_1_Remove_m53789(__this, ___item, method) (( bool (*) (List_1_t8023 *, KeyValuePair_2_t7789 , const MethodInfo*))List_1_Remove_m53636_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m53790(__this, ___match, method) (( int32_t (*) (List_1_t8023 *, Predicate_1_t8026 *, const MethodInfo*))List_1_RemoveAll_m53637_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m53791(__this, ___index, method) (( void (*) (List_1_t8023 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53638_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m53792(__this, ___index, ___count, method) (( void (*) (List_1_t8023 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53639_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Reverse()
#define List_1_Reverse_m53793(__this, method) (( void (*) (List_1_t8023 *, const MethodInfo*))List_1_Reverse_m53640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort()
#define List_1_Sort_m53794(__this, method) (( void (*) (List_1_t8023 *, const MethodInfo*))List_1_Sort_m53641_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m53795(__this, ___comparer, method) (( void (*) (List_1_t8023 *, Object_t*, const MethodInfo*))List_1_Sort_m53642_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m53796(__this, ___comparison, method) (( void (*) (List_1_t8023 *, Comparison_1_t8028 *, const MethodInfo*))List_1_Sort_m53643_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::ToArray()
#define List_1_ToArray_m53797(__this, method) (( KeyValuePair_2U5BU5D_t8022* (*) (List_1_t8023 *, const MethodInfo*))List_1_ToArray_m53644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::TrimExcess()
#define List_1_TrimExcess_m53798(__this, method) (( void (*) (List_1_t8023 *, const MethodInfo*))List_1_TrimExcess_m53645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Capacity()
#define List_1_get_Capacity_m53799(__this, method) (( int32_t (*) (List_1_t8023 *, const MethodInfo*))List_1_get_Capacity_m53646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m53800(__this, ___value, method) (( void (*) (List_1_t8023 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53647_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Count()
#define List_1_get_Count_m53801(__this, method) (( int32_t (*) (List_1_t8023 *, const MethodInfo*))List_1_get_Count_m53648_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Item(System.Int32)
#define List_1_get_Item_m53802(__this, ___index, method) (( KeyValuePair_2_t7789  (*) (List_1_t8023 *, int32_t, const MethodInfo*))List_1_get_Item_m53649_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m53803(__this, ___index, ___value, method) (( void (*) (List_1_t8023 *, int32_t, KeyValuePair_2_t7789 , const MethodInfo*))List_1_set_Item_m53650_gshared)(__this, ___index, ___value, method)

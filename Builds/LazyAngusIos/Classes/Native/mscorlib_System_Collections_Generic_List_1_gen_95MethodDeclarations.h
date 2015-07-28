#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct List_1_t7487;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerable_1_t9274;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7486;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7146;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ICollection_1_t9275;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ReadOnlyCollection_1_t7489;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t7490;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IComparer_1_t9276;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t7492;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_78.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_94MethodDeclarations.h"
#define List_1__ctor_m49756(__this, method) (( void (*) (List_1_t7487 *, const MethodInfo*))List_1__ctor_m49603_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m49757(__this, ___collection, method) (( void (*) (List_1_t7487 *, Object_t*, const MethodInfo*))List_1__ctor_m49604_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Int32)
#define List_1__ctor_m49758(__this, ___capacity, method) (( void (*) (List_1_t7487 *, int32_t, const MethodInfo*))List_1__ctor_m49605_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m49759(__this, ___data, ___size, method) (( void (*) (List_1_t7487 *, KeyValuePair_2U5BU5D_t7486*, int32_t, const MethodInfo*))List_1__ctor_m49606_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.cctor()
#define List_1__cctor_m49760(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49607_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49761(__this, method) (( Object_t* (*) (List_1_t7487 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49608_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m49762(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7487 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49609_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49763(__this, method) (( Object_t * (*) (List_1_t7487 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49610_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m49764(__this, ___item, method) (( int32_t (*) (List_1_t7487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49611_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m49765(__this, ___item, method) (( bool (*) (List_1_t7487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49612_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m49766(__this, ___item, method) (( int32_t (*) (List_1_t7487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49613_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m49767(__this, ___index, ___item, method) (( void (*) (List_1_t7487 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49614_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m49768(__this, ___item, method) (( void (*) (List_1_t7487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49615_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49769(__this, method) (( bool (*) (List_1_t7487 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49770(__this, method) (( bool (*) (List_1_t7487 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49617_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m49771(__this, method) (( Object_t * (*) (List_1_t7487 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49618_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m49772(__this, method) (( bool (*) (List_1_t7487 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m49773(__this, method) (( bool (*) (List_1_t7487 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49620_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m49774(__this, ___index, method) (( Object_t * (*) (List_1_t7487 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49621_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m49775(__this, ___index, ___value, method) (( void (*) (List_1_t7487 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49622_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
#define List_1_Add_m49776(__this, ___item, method) (( void (*) (List_1_t7487 *, KeyValuePair_2_t5487 , const MethodInfo*))List_1_Add_m49623_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m49777(__this, ___newCount, method) (( void (*) (List_1_t7487 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49624_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m49778(__this, ___idx, ___count, method) (( void (*) (List_1_t7487 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49625_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m49779(__this, ___collection, method) (( void (*) (List_1_t7487 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49626_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m49780(__this, ___enumerable, method) (( void (*) (List_1_t7487 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49627_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m49781(__this, ___collection, method) (( void (*) (List_1_t7487 *, Object_t*, const MethodInfo*))List_1_AddRange_m49628_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AsReadOnly()
#define List_1_AsReadOnly_m49782(__this, method) (( ReadOnlyCollection_1_t7489 * (*) (List_1_t7487 *, const MethodInfo*))List_1_AsReadOnly_m49629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
#define List_1_Clear_m49783(__this, method) (( void (*) (List_1_t7487 *, const MethodInfo*))List_1_Clear_m49630_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
#define List_1_Contains_m49784(__this, ___item, method) (( bool (*) (List_1_t7487 *, KeyValuePair_2_t5487 , const MethodInfo*))List_1_Contains_m49631_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m49785(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7487 *, KeyValuePair_2U5BU5D_t7486*, int32_t, const MethodInfo*))List_1_CopyTo_m49632_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m49786(__this, ___match, method) (( KeyValuePair_2_t5487  (*) (List_1_t7487 *, Predicate_1_t7490 *, const MethodInfo*))List_1_Find_m49633_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m49787(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7490 *, const MethodInfo*))List_1_CheckMatch_m49634_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m49788(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7487 *, int32_t, int32_t, Predicate_1_t7490 *, const MethodInfo*))List_1_GetIndex_m49635_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m49789(__this, method) (( Enumerator_t7491  (*) (List_1_t7487 *, const MethodInfo*))List_1_GetEnumerator_m49636_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m49790(__this, ___index, ___count, method) (( List_1_t7487 * (*) (List_1_t7487 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49637_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
#define List_1_IndexOf_m49791(__this, ___item, method) (( int32_t (*) (List_1_t7487 *, KeyValuePair_2_t5487 , const MethodInfo*))List_1_IndexOf_m49638_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m49792(__this, ___start, ___delta, method) (( void (*) (List_1_t7487 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49639_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m49793(__this, ___index, method) (( void (*) (List_1_t7487 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49640_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
#define List_1_Insert_m49794(__this, ___index, ___item, method) (( void (*) (List_1_t7487 *, int32_t, KeyValuePair_2_t5487 , const MethodInfo*))List_1_Insert_m49641_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m49795(__this, ___collection, method) (( void (*) (List_1_t7487 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49642_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m49796(__this, ___index, ___collection, method) (( void (*) (List_1_t7487 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49643_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m49797(__this, ___index, ___collection, method) (( void (*) (List_1_t7487 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m49798(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7487 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49645_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#define List_1_Remove_m49799(__this, ___item, method) (( bool (*) (List_1_t7487 *, KeyValuePair_2_t5487 , const MethodInfo*))List_1_Remove_m49646_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m49800(__this, ___match, method) (( int32_t (*) (List_1_t7487 *, Predicate_1_t7490 *, const MethodInfo*))List_1_RemoveAll_m49647_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m49801(__this, ___index, method) (( void (*) (List_1_t7487 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49648_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m49802(__this, ___index, ___count, method) (( void (*) (List_1_t7487 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49649_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Reverse()
#define List_1_Reverse_m49803(__this, method) (( void (*) (List_1_t7487 *, const MethodInfo*))List_1_Reverse_m49650_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort()
#define List_1_Sort_m49804(__this, method) (( void (*) (List_1_t7487 *, const MethodInfo*))List_1_Sort_m49651_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m49805(__this, ___comparer, method) (( void (*) (List_1_t7487 *, Object_t*, const MethodInfo*))List_1_Sort_m49652_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m49806(__this, ___comparison, method) (( void (*) (List_1_t7487 *, Comparison_1_t7492 *, const MethodInfo*))List_1_Sort_m49653_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::ToArray()
#define List_1_ToArray_m49807(__this, method) (( KeyValuePair_2U5BU5D_t7486* (*) (List_1_t7487 *, const MethodInfo*))List_1_ToArray_m49654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::TrimExcess()
#define List_1_TrimExcess_m49808(__this, method) (( void (*) (List_1_t7487 *, const MethodInfo*))List_1_TrimExcess_m49655_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Capacity()
#define List_1_get_Capacity_m49809(__this, method) (( int32_t (*) (List_1_t7487 *, const MethodInfo*))List_1_get_Capacity_m49656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m49810(__this, ___value, method) (( void (*) (List_1_t7487 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49657_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
#define List_1_get_Count_m49811(__this, method) (( int32_t (*) (List_1_t7487 *, const MethodInfo*))List_1_get_Count_m49658_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
#define List_1_get_Item_m49812(__this, ___index, method) (( KeyValuePair_2_t5487  (*) (List_1_t7487 *, int32_t, const MethodInfo*))List_1_get_Item_m49659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m49813(__this, ___index, ___value, method) (( void (*) (List_1_t7487 *, int32_t, KeyValuePair_2_t5487 , const MethodInfo*))List_1_set_Item_m49660_gshared)(__this, ___index, ___value, method)

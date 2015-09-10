#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct List_1_t8283;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerable_1_t10033;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8282;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7834;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ICollection_1_t10034;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ReadOnlyCollection_1_t8285;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t8286;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IComparer_1_t10035;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Comparison_1_t8288;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_89.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_105MethodDeclarations.h"
#define List_1__ctor_m56854(__this, method) (( void (*) (List_1_t8283 *, const MethodInfo*))List_1__ctor_m56701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m56855(__this, ___collection, method) (( void (*) (List_1_t8283 *, Object_t*, const MethodInfo*))List_1__ctor_m56702_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Int32)
#define List_1__ctor_m56856(__this, ___capacity, method) (( void (*) (List_1_t8283 *, int32_t, const MethodInfo*))List_1__ctor_m56703_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m56857(__this, ___data, ___size, method) (( void (*) (List_1_t8283 *, KeyValuePair_2U5BU5D_t8282*, int32_t, const MethodInfo*))List_1__ctor_m56704_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.cctor()
#define List_1__cctor_m56858(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m56705_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56859(__this, method) (( Object_t* (*) (List_1_t8283 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56706_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m56860(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8283 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m56707_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m56861(__this, method) (( Object_t * (*) (List_1_t8283 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m56708_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m56862(__this, ___item, method) (( int32_t (*) (List_1_t8283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m56709_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m56863(__this, ___item, method) (( bool (*) (List_1_t8283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m56710_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m56864(__this, ___item, method) (( int32_t (*) (List_1_t8283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m56711_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m56865(__this, ___index, ___item, method) (( void (*) (List_1_t8283 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m56712_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m56866(__this, ___item, method) (( void (*) (List_1_t8283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m56713_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56867(__this, method) (( bool (*) (List_1_t8283 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56714_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m56868(__this, method) (( bool (*) (List_1_t8283 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m56715_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m56869(__this, method) (( Object_t * (*) (List_1_t8283 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m56716_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m56870(__this, method) (( bool (*) (List_1_t8283 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m56717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m56871(__this, method) (( bool (*) (List_1_t8283 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m56718_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m56872(__this, ___index, method) (( Object_t * (*) (List_1_t8283 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m56719_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m56873(__this, ___index, ___value, method) (( void (*) (List_1_t8283 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m56720_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
#define List_1_Add_m56874(__this, ___item, method) (( void (*) (List_1_t8283 *, KeyValuePair_2_t7829 , const MethodInfo*))List_1_Add_m56721_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m56875(__this, ___newCount, method) (( void (*) (List_1_t8283 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m56722_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m56876(__this, ___idx, ___count, method) (( void (*) (List_1_t8283 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m56723_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m56877(__this, ___collection, method) (( void (*) (List_1_t8283 *, Object_t*, const MethodInfo*))List_1_AddCollection_m56724_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m56878(__this, ___enumerable, method) (( void (*) (List_1_t8283 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m56725_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m56879(__this, ___collection, method) (( void (*) (List_1_t8283 *, Object_t*, const MethodInfo*))List_1_AddRange_m56726_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AsReadOnly()
#define List_1_AsReadOnly_m56880(__this, method) (( ReadOnlyCollection_1_t8285 * (*) (List_1_t8283 *, const MethodInfo*))List_1_AsReadOnly_m56727_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
#define List_1_Clear_m56881(__this, method) (( void (*) (List_1_t8283 *, const MethodInfo*))List_1_Clear_m56728_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
#define List_1_Contains_m56882(__this, ___item, method) (( bool (*) (List_1_t8283 *, KeyValuePair_2_t7829 , const MethodInfo*))List_1_Contains_m56729_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m56883(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8283 *, KeyValuePair_2U5BU5D_t8282*, int32_t, const MethodInfo*))List_1_CopyTo_m56730_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m56884(__this, ___match, method) (( KeyValuePair_2_t7829  (*) (List_1_t8283 *, Predicate_1_t8286 *, const MethodInfo*))List_1_Find_m56731_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m56885(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8286 *, const MethodInfo*))List_1_CheckMatch_m56732_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m56886(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8283 *, int32_t, int32_t, Predicate_1_t8286 *, const MethodInfo*))List_1_GetIndex_m56733_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#define List_1_GetEnumerator_m56887(__this, method) (( Enumerator_t8287  (*) (List_1_t8283 *, const MethodInfo*))List_1_GetEnumerator_m56734_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m56888(__this, ___index, ___count, method) (( List_1_t8283 * (*) (List_1_t8283 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m56735_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
#define List_1_IndexOf_m56889(__this, ___item, method) (( int32_t (*) (List_1_t8283 *, KeyValuePair_2_t7829 , const MethodInfo*))List_1_IndexOf_m56736_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m56890(__this, ___start, ___delta, method) (( void (*) (List_1_t8283 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m56737_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m56891(__this, ___index, method) (( void (*) (List_1_t8283 *, int32_t, const MethodInfo*))List_1_CheckIndex_m56738_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
#define List_1_Insert_m56892(__this, ___index, ___item, method) (( void (*) (List_1_t8283 *, int32_t, KeyValuePair_2_t7829 , const MethodInfo*))List_1_Insert_m56739_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m56893(__this, ___collection, method) (( void (*) (List_1_t8283 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m56740_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m56894(__this, ___index, ___collection, method) (( void (*) (List_1_t8283 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m56741_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m56895(__this, ___index, ___collection, method) (( void (*) (List_1_t8283 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m56742_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m56896(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8283 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m56743_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#define List_1_Remove_m56897(__this, ___item, method) (( bool (*) (List_1_t8283 *, KeyValuePair_2_t7829 , const MethodInfo*))List_1_Remove_m56744_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m56898(__this, ___match, method) (( int32_t (*) (List_1_t8283 *, Predicate_1_t8286 *, const MethodInfo*))List_1_RemoveAll_m56745_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m56899(__this, ___index, method) (( void (*) (List_1_t8283 *, int32_t, const MethodInfo*))List_1_RemoveAt_m56746_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m56900(__this, ___index, ___count, method) (( void (*) (List_1_t8283 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m56747_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Reverse()
#define List_1_Reverse_m56901(__this, method) (( void (*) (List_1_t8283 *, const MethodInfo*))List_1_Reverse_m56748_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort()
#define List_1_Sort_m56902(__this, method) (( void (*) (List_1_t8283 *, const MethodInfo*))List_1_Sort_m56749_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m56903(__this, ___comparer, method) (( void (*) (List_1_t8283 *, Object_t*, const MethodInfo*))List_1_Sort_m56750_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m56904(__this, ___comparison, method) (( void (*) (List_1_t8283 *, Comparison_1_t8288 *, const MethodInfo*))List_1_Sort_m56751_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::ToArray()
#define List_1_ToArray_m56905(__this, method) (( KeyValuePair_2U5BU5D_t8282* (*) (List_1_t8283 *, const MethodInfo*))List_1_ToArray_m56752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::TrimExcess()
#define List_1_TrimExcess_m56906(__this, method) (( void (*) (List_1_t8283 *, const MethodInfo*))List_1_TrimExcess_m56753_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Capacity()
#define List_1_get_Capacity_m56907(__this, method) (( int32_t (*) (List_1_t8283 *, const MethodInfo*))List_1_get_Capacity_m56754_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m56908(__this, ___value, method) (( void (*) (List_1_t8283 *, int32_t, const MethodInfo*))List_1_set_Capacity_m56755_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
#define List_1_get_Count_m56909(__this, method) (( int32_t (*) (List_1_t8283 *, const MethodInfo*))List_1_get_Count_m56756_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
#define List_1_get_Item_m56910(__this, ___index, method) (( KeyValuePair_2_t7829  (*) (List_1_t8283 *, int32_t, const MethodInfo*))List_1_get_Item_m56757_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m56911(__this, ___index, ___value, method) (( void (*) (List_1_t8283 *, int32_t, KeyValuePair_2_t7829 , const MethodInfo*))List_1_set_Item_m56758_gshared)(__this, ___index, ___value, method)

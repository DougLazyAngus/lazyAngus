#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct List_1_t7605;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerable_1_t9423;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7604;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7264;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ICollection_1_t9424;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ReadOnlyCollection_1_t7607;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t7608;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IComparer_1_t9425;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t7610;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_84.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_100MethodDeclarations.h"
#define List_1__ctor_m50956(__this, method) (( void (*) (List_1_t7605 *, const MethodInfo*))List_1__ctor_m50803_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m50957(__this, ___collection, method) (( void (*) (List_1_t7605 *, Object_t*, const MethodInfo*))List_1__ctor_m50804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Int32)
#define List_1__ctor_m50958(__this, ___capacity, method) (( void (*) (List_1_t7605 *, int32_t, const MethodInfo*))List_1__ctor_m50805_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m50959(__this, ___data, ___size, method) (( void (*) (List_1_t7605 *, KeyValuePair_2U5BU5D_t7604*, int32_t, const MethodInfo*))List_1__ctor_m50806_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.cctor()
#define List_1__cctor_m50960(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50807_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50961(__this, method) (( Object_t* (*) (List_1_t7605 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50808_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m50962(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7605 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50809_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50963(__this, method) (( Object_t * (*) (List_1_t7605 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50810_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m50964(__this, ___item, method) (( int32_t (*) (List_1_t7605 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50811_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m50965(__this, ___item, method) (( bool (*) (List_1_t7605 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m50966(__this, ___item, method) (( int32_t (*) (List_1_t7605 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50813_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m50967(__this, ___index, ___item, method) (( void (*) (List_1_t7605 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50814_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m50968(__this, ___item, method) (( void (*) (List_1_t7605 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50815_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50969(__this, method) (( bool (*) (List_1_t7605 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50970(__this, method) (( bool (*) (List_1_t7605 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50817_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m50971(__this, method) (( Object_t * (*) (List_1_t7605 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50818_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m50972(__this, method) (( bool (*) (List_1_t7605 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m50973(__this, method) (( bool (*) (List_1_t7605 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50820_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m50974(__this, ___index, method) (( Object_t * (*) (List_1_t7605 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m50975(__this, ___index, ___value, method) (( void (*) (List_1_t7605 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50822_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
#define List_1_Add_m50976(__this, ___item, method) (( void (*) (List_1_t7605 *, KeyValuePair_2_t5560 , const MethodInfo*))List_1_Add_m50823_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m50977(__this, ___newCount, method) (( void (*) (List_1_t7605 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50824_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m50978(__this, ___idx, ___count, method) (( void (*) (List_1_t7605 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50825_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m50979(__this, ___collection, method) (( void (*) (List_1_t7605 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50826_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m50980(__this, ___enumerable, method) (( void (*) (List_1_t7605 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m50981(__this, ___collection, method) (( void (*) (List_1_t7605 *, Object_t*, const MethodInfo*))List_1_AddRange_m50828_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AsReadOnly()
#define List_1_AsReadOnly_m50982(__this, method) (( ReadOnlyCollection_1_t7607 * (*) (List_1_t7605 *, const MethodInfo*))List_1_AsReadOnly_m50829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
#define List_1_Clear_m50983(__this, method) (( void (*) (List_1_t7605 *, const MethodInfo*))List_1_Clear_m50830_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
#define List_1_Contains_m50984(__this, ___item, method) (( bool (*) (List_1_t7605 *, KeyValuePair_2_t5560 , const MethodInfo*))List_1_Contains_m50831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m50985(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7605 *, KeyValuePair_2U5BU5D_t7604*, int32_t, const MethodInfo*))List_1_CopyTo_m50832_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m50986(__this, ___match, method) (( KeyValuePair_2_t5560  (*) (List_1_t7605 *, Predicate_1_t7608 *, const MethodInfo*))List_1_Find_m50833_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m50987(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7608 *, const MethodInfo*))List_1_CheckMatch_m50834_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m50988(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7605 *, int32_t, int32_t, Predicate_1_t7608 *, const MethodInfo*))List_1_GetIndex_m50835_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m50989(__this, method) (( Enumerator_t7609  (*) (List_1_t7605 *, const MethodInfo*))List_1_GetEnumerator_m50836_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m50990(__this, ___index, ___count, method) (( List_1_t7605 * (*) (List_1_t7605 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50837_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
#define List_1_IndexOf_m50991(__this, ___item, method) (( int32_t (*) (List_1_t7605 *, KeyValuePair_2_t5560 , const MethodInfo*))List_1_IndexOf_m50838_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m50992(__this, ___start, ___delta, method) (( void (*) (List_1_t7605 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50839_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m50993(__this, ___index, method) (( void (*) (List_1_t7605 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
#define List_1_Insert_m50994(__this, ___index, ___item, method) (( void (*) (List_1_t7605 *, int32_t, KeyValuePair_2_t5560 , const MethodInfo*))List_1_Insert_m50841_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m50995(__this, ___collection, method) (( void (*) (List_1_t7605 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50842_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m50996(__this, ___index, ___collection, method) (( void (*) (List_1_t7605 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50843_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m50997(__this, ___index, ___collection, method) (( void (*) (List_1_t7605 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50844_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m50998(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7605 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50845_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#define List_1_Remove_m50999(__this, ___item, method) (( bool (*) (List_1_t7605 *, KeyValuePair_2_t5560 , const MethodInfo*))List_1_Remove_m50846_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m51000(__this, ___match, method) (( int32_t (*) (List_1_t7605 *, Predicate_1_t7608 *, const MethodInfo*))List_1_RemoveAll_m50847_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m51001(__this, ___index, method) (( void (*) (List_1_t7605 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50848_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m51002(__this, ___index, ___count, method) (( void (*) (List_1_t7605 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50849_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Reverse()
#define List_1_Reverse_m51003(__this, method) (( void (*) (List_1_t7605 *, const MethodInfo*))List_1_Reverse_m50850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort()
#define List_1_Sort_m51004(__this, method) (( void (*) (List_1_t7605 *, const MethodInfo*))List_1_Sort_m50851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m51005(__this, ___comparer, method) (( void (*) (List_1_t7605 *, Object_t*, const MethodInfo*))List_1_Sort_m50852_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m51006(__this, ___comparison, method) (( void (*) (List_1_t7605 *, Comparison_1_t7610 *, const MethodInfo*))List_1_Sort_m50853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::ToArray()
#define List_1_ToArray_m51007(__this, method) (( KeyValuePair_2U5BU5D_t7604* (*) (List_1_t7605 *, const MethodInfo*))List_1_ToArray_m50854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::TrimExcess()
#define List_1_TrimExcess_m51008(__this, method) (( void (*) (List_1_t7605 *, const MethodInfo*))List_1_TrimExcess_m50855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Capacity()
#define List_1_get_Capacity_m51009(__this, method) (( int32_t (*) (List_1_t7605 *, const MethodInfo*))List_1_get_Capacity_m50856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m51010(__this, ___value, method) (( void (*) (List_1_t7605 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50857_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
#define List_1_get_Count_m51011(__this, method) (( int32_t (*) (List_1_t7605 *, const MethodInfo*))List_1_get_Count_m50858_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
#define List_1_get_Item_m51012(__this, ___index, method) (( KeyValuePair_2_t5560  (*) (List_1_t7605 *, int32_t, const MethodInfo*))List_1_get_Item_m50859_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m51013(__this, ___index, ___value, method) (( void (*) (List_1_t7605 *, int32_t, KeyValuePair_2_t5560 , const MethodInfo*))List_1_set_Item_m50860_gshared)(__this, ___index, ___value, method)

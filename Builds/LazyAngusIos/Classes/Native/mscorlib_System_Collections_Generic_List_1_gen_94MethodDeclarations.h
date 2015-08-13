#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct List_1_t7439;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerable_1_t9365;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7438;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7210;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ICollection_1_t9366;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ReadOnlyCollection_1_t7441;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Predicate_1_t7442;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IComparer_1_t9367;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Comparison_1_t7444;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_77.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_93MethodDeclarations.h"
#define List_1__ctor_m48949(__this, method) (( void (*) (List_1_t7439 *, const MethodInfo*))List_1__ctor_m48796_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m48950(__this, ___collection, method) (( void (*) (List_1_t7439 *, Object_t*, const MethodInfo*))List_1__ctor_m48797_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Int32)
#define List_1__ctor_m48951(__this, ___capacity, method) (( void (*) (List_1_t7439 *, int32_t, const MethodInfo*))List_1__ctor_m48798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m48952(__this, ___data, ___size, method) (( void (*) (List_1_t7439 *, KeyValuePair_2U5BU5D_t7438*, int32_t, const MethodInfo*))List_1__ctor_m48799_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.cctor()
#define List_1__cctor_m48953(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48954(__this, method) (( Object_t* (*) (List_1_t7439 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48801_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m48955(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7439 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48802_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48956(__this, method) (( Object_t * (*) (List_1_t7439 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48803_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m48957(__this, ___item, method) (( int32_t (*) (List_1_t7439 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48804_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m48958(__this, ___item, method) (( bool (*) (List_1_t7439 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48805_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m48959(__this, ___item, method) (( int32_t (*) (List_1_t7439 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48806_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m48960(__this, ___index, ___item, method) (( void (*) (List_1_t7439 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48807_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m48961(__this, ___item, method) (( void (*) (List_1_t7439 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48808_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48962(__this, method) (( bool (*) (List_1_t7439 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48963(__this, method) (( bool (*) (List_1_t7439 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48810_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m48964(__this, method) (( Object_t * (*) (List_1_t7439 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48811_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m48965(__this, method) (( bool (*) (List_1_t7439 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48812_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m48966(__this, method) (( bool (*) (List_1_t7439 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48813_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m48967(__this, ___index, method) (( Object_t * (*) (List_1_t7439 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48814_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m48968(__this, ___index, ___value, method) (( void (*) (List_1_t7439 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48815_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Add(T)
#define List_1_Add_m48969(__this, ___item, method) (( void (*) (List_1_t7439 *, KeyValuePair_2_t7205 , const MethodInfo*))List_1_Add_m48816_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m48970(__this, ___newCount, method) (( void (*) (List_1_t7439 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m48971(__this, ___idx, ___count, method) (( void (*) (List_1_t7439 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48818_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m48972(__this, ___collection, method) (( void (*) (List_1_t7439 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m48973(__this, ___enumerable, method) (( void (*) (List_1_t7439 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48820_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m48974(__this, ___collection, method) (( void (*) (List_1_t7439 *, Object_t*, const MethodInfo*))List_1_AddRange_m48821_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AsReadOnly()
#define List_1_AsReadOnly_m48975(__this, method) (( ReadOnlyCollection_1_t7441 * (*) (List_1_t7439 *, const MethodInfo*))List_1_AsReadOnly_m48822_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Clear()
#define List_1_Clear_m48976(__this, method) (( void (*) (List_1_t7439 *, const MethodInfo*))List_1_Clear_m48823_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Contains(T)
#define List_1_Contains_m48977(__this, ___item, method) (( bool (*) (List_1_t7439 *, KeyValuePair_2_t7205 , const MethodInfo*))List_1_Contains_m48824_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m48978(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7439 *, KeyValuePair_2U5BU5D_t7438*, int32_t, const MethodInfo*))List_1_CopyTo_m48825_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m48979(__this, ___match, method) (( KeyValuePair_2_t7205  (*) (List_1_t7439 *, Predicate_1_t7442 *, const MethodInfo*))List_1_Find_m48826_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m48980(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7442 *, const MethodInfo*))List_1_CheckMatch_m48827_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m48981(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7439 *, int32_t, int32_t, Predicate_1_t7442 *, const MethodInfo*))List_1_GetIndex_m48828_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetEnumerator()
#define List_1_GetEnumerator_m48982(__this, method) (( Enumerator_t7443  (*) (List_1_t7439 *, const MethodInfo*))List_1_GetEnumerator_m48829_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m48983(__this, ___index, ___count, method) (( List_1_t7439 * (*) (List_1_t7439 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48830_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::IndexOf(T)
#define List_1_IndexOf_m48984(__this, ___item, method) (( int32_t (*) (List_1_t7439 *, KeyValuePair_2_t7205 , const MethodInfo*))List_1_IndexOf_m48831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m48985(__this, ___start, ___delta, method) (( void (*) (List_1_t7439 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48832_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m48986(__this, ___index, method) (( void (*) (List_1_t7439 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48833_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Insert(System.Int32,T)
#define List_1_Insert_m48987(__this, ___index, ___item, method) (( void (*) (List_1_t7439 *, int32_t, KeyValuePair_2_t7205 , const MethodInfo*))List_1_Insert_m48834_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m48988(__this, ___collection, method) (( void (*) (List_1_t7439 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48835_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m48989(__this, ___index, ___collection, method) (( void (*) (List_1_t7439 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48836_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m48990(__this, ___index, ___collection, method) (( void (*) (List_1_t7439 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48837_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m48991(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7439 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48838_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Remove(T)
#define List_1_Remove_m48992(__this, ___item, method) (( bool (*) (List_1_t7439 *, KeyValuePair_2_t7205 , const MethodInfo*))List_1_Remove_m48839_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m48993(__this, ___match, method) (( int32_t (*) (List_1_t7439 *, Predicate_1_t7442 *, const MethodInfo*))List_1_RemoveAll_m48840_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m48994(__this, ___index, method) (( void (*) (List_1_t7439 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m48995(__this, ___index, ___count, method) (( void (*) (List_1_t7439 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48842_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Reverse()
#define List_1_Reverse_m48996(__this, method) (( void (*) (List_1_t7439 *, const MethodInfo*))List_1_Reverse_m48843_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort()
#define List_1_Sort_m48997(__this, method) (( void (*) (List_1_t7439 *, const MethodInfo*))List_1_Sort_m48844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m48998(__this, ___comparer, method) (( void (*) (List_1_t7439 *, Object_t*, const MethodInfo*))List_1_Sort_m48845_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m48999(__this, ___comparison, method) (( void (*) (List_1_t7439 *, Comparison_1_t7444 *, const MethodInfo*))List_1_Sort_m48846_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::ToArray()
#define List_1_ToArray_m49000(__this, method) (( KeyValuePair_2U5BU5D_t7438* (*) (List_1_t7439 *, const MethodInfo*))List_1_ToArray_m48847_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::TrimExcess()
#define List_1_TrimExcess_m49001(__this, method) (( void (*) (List_1_t7439 *, const MethodInfo*))List_1_TrimExcess_m48848_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Capacity()
#define List_1_get_Capacity_m49002(__this, method) (( int32_t (*) (List_1_t7439 *, const MethodInfo*))List_1_get_Capacity_m48849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m49003(__this, ___value, method) (( void (*) (List_1_t7439 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48850_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Count()
#define List_1_get_Count_m49004(__this, method) (( int32_t (*) (List_1_t7439 *, const MethodInfo*))List_1_get_Count_m48851_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Item(System.Int32)
#define List_1_get_Item_m49005(__this, ___index, method) (( KeyValuePair_2_t7205  (*) (List_1_t7439 *, int32_t, const MethodInfo*))List_1_get_Item_m48852_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m49006(__this, ___index, ___value, method) (( void (*) (List_1_t7439 *, int32_t, KeyValuePair_2_t7205 , const MethodInfo*))List_1_set_Item_m48853_gshared)(__this, ___index, ___value, method)

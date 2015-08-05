#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct List_1_t7629;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerable_1_t9296;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7628;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7180;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ICollection_1_t9297;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ReadOnlyCollection_1_t7631;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t7632;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IComparer_1_t9298;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Comparison_1_t7634;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_82.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_98MethodDeclarations.h"
#define List_1__ctor_m51385(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1__ctor_m51232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m51386(__this, ___collection, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1__ctor_m51233_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Int32)
#define List_1__ctor_m51387(__this, ___capacity, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1__ctor_m51234_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m51388(__this, ___data, ___size, method) (( void (*) (List_1_t7629 *, KeyValuePair_2U5BU5D_t7628*, int32_t, const MethodInfo*))List_1__ctor_m51235_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.cctor()
#define List_1__cctor_m51389(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51236_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51390(__this, method) (( Object_t* (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51237_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m51391(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7629 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51238_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51392(__this, method) (( Object_t * (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51239_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m51393(__this, ___item, method) (( int32_t (*) (List_1_t7629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51240_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m51394(__this, ___item, method) (( bool (*) (List_1_t7629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51241_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m51395(__this, ___item, method) (( int32_t (*) (List_1_t7629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51242_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m51396(__this, ___index, ___item, method) (( void (*) (List_1_t7629 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51243_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m51397(__this, ___item, method) (( void (*) (List_1_t7629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51244_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51398(__this, method) (( bool (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51245_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51399(__this, method) (( bool (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51246_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m51400(__this, method) (( Object_t * (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51247_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m51401(__this, method) (( bool (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51248_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m51402(__this, method) (( bool (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51249_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m51403(__this, ___index, method) (( Object_t * (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51250_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m51404(__this, ___index, ___value, method) (( void (*) (List_1_t7629 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51251_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
#define List_1_Add_m51405(__this, ___item, method) (( void (*) (List_1_t7629 *, KeyValuePair_2_t7175 , const MethodInfo*))List_1_Add_m51252_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m51406(__this, ___newCount, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51253_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m51407(__this, ___idx, ___count, method) (( void (*) (List_1_t7629 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51254_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m51408(__this, ___collection, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51255_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m51409(__this, ___enumerable, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51256_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m51410(__this, ___collection, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_AddRange_m51257_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AsReadOnly()
#define List_1_AsReadOnly_m51411(__this, method) (( ReadOnlyCollection_1_t7631 * (*) (List_1_t7629 *, const MethodInfo*))List_1_AsReadOnly_m51258_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
#define List_1_Clear_m51412(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1_Clear_m51259_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
#define List_1_Contains_m51413(__this, ___item, method) (( bool (*) (List_1_t7629 *, KeyValuePair_2_t7175 , const MethodInfo*))List_1_Contains_m51260_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m51414(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7629 *, KeyValuePair_2U5BU5D_t7628*, int32_t, const MethodInfo*))List_1_CopyTo_m51261_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m51415(__this, ___match, method) (( KeyValuePair_2_t7175  (*) (List_1_t7629 *, Predicate_1_t7632 *, const MethodInfo*))List_1_Find_m51262_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m51416(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7632 *, const MethodInfo*))List_1_CheckMatch_m51263_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m51417(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7629 *, int32_t, int32_t, Predicate_1_t7632 *, const MethodInfo*))List_1_GetIndex_m51264_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#define List_1_GetEnumerator_m51418(__this, method) (( Enumerator_t7633  (*) (List_1_t7629 *, const MethodInfo*))List_1_GetEnumerator_m51265_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m51419(__this, ___index, ___count, method) (( List_1_t7629 * (*) (List_1_t7629 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51266_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
#define List_1_IndexOf_m51420(__this, ___item, method) (( int32_t (*) (List_1_t7629 *, KeyValuePair_2_t7175 , const MethodInfo*))List_1_IndexOf_m51267_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m51421(__this, ___start, ___delta, method) (( void (*) (List_1_t7629 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51268_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m51422(__this, ___index, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51269_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
#define List_1_Insert_m51423(__this, ___index, ___item, method) (( void (*) (List_1_t7629 *, int32_t, KeyValuePair_2_t7175 , const MethodInfo*))List_1_Insert_m51270_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m51424(__this, ___collection, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51271_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m51425(__this, ___index, ___collection, method) (( void (*) (List_1_t7629 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51272_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m51426(__this, ___index, ___collection, method) (( void (*) (List_1_t7629 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51273_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m51427(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7629 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51274_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#define List_1_Remove_m51428(__this, ___item, method) (( bool (*) (List_1_t7629 *, KeyValuePair_2_t7175 , const MethodInfo*))List_1_Remove_m51275_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m51429(__this, ___match, method) (( int32_t (*) (List_1_t7629 *, Predicate_1_t7632 *, const MethodInfo*))List_1_RemoveAll_m51276_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m51430(__this, ___index, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51277_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m51431(__this, ___index, ___count, method) (( void (*) (List_1_t7629 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51278_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Reverse()
#define List_1_Reverse_m51432(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1_Reverse_m51279_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort()
#define List_1_Sort_m51433(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1_Sort_m51280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m51434(__this, ___comparer, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_Sort_m51281_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m51435(__this, ___comparison, method) (( void (*) (List_1_t7629 *, Comparison_1_t7634 *, const MethodInfo*))List_1_Sort_m51282_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::ToArray()
#define List_1_ToArray_m51436(__this, method) (( KeyValuePair_2U5BU5D_t7628* (*) (List_1_t7629 *, const MethodInfo*))List_1_ToArray_m51283_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::TrimExcess()
#define List_1_TrimExcess_m51437(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1_TrimExcess_m51284_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Capacity()
#define List_1_get_Capacity_m51438(__this, method) (( int32_t (*) (List_1_t7629 *, const MethodInfo*))List_1_get_Capacity_m51285_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m51439(__this, ___value, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51286_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
#define List_1_get_Count_m51440(__this, method) (( int32_t (*) (List_1_t7629 *, const MethodInfo*))List_1_get_Count_m51287_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
#define List_1_get_Item_m51441(__this, ___index, method) (( KeyValuePair_2_t7175  (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_get_Item_m51288_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m51442(__this, ___index, ___value, method) (( void (*) (List_1_t7629 *, int32_t, KeyValuePair_2_t7175 , const MethodInfo*))List_1_set_Item_m51289_gshared)(__this, ___index, ___value, method)

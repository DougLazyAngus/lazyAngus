#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct List_1_t7475;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerable_1_t9413;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7474;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7246;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ICollection_1_t9414;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ReadOnlyCollection_1_t7477;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Predicate_1_t7478;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IComparer_1_t9415;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Comparison_1_t7480;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_80.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_96MethodDeclarations.h"
#define List_1__ctor_m49402(__this, method) (( void (*) (List_1_t7475 *, const MethodInfo*))List_1__ctor_m49249_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m49403(__this, ___collection, method) (( void (*) (List_1_t7475 *, Object_t*, const MethodInfo*))List_1__ctor_m49250_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Int32)
#define List_1__ctor_m49404(__this, ___capacity, method) (( void (*) (List_1_t7475 *, int32_t, const MethodInfo*))List_1__ctor_m49251_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m49405(__this, ___data, ___size, method) (( void (*) (List_1_t7475 *, KeyValuePair_2U5BU5D_t7474*, int32_t, const MethodInfo*))List_1__ctor_m49252_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.cctor()
#define List_1__cctor_m49406(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49253_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49407(__this, method) (( Object_t* (*) (List_1_t7475 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49254_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m49408(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7475 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49255_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49409(__this, method) (( Object_t * (*) (List_1_t7475 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49256_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m49410(__this, ___item, method) (( int32_t (*) (List_1_t7475 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49257_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m49411(__this, ___item, method) (( bool (*) (List_1_t7475 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49258_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m49412(__this, ___item, method) (( int32_t (*) (List_1_t7475 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49259_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m49413(__this, ___index, ___item, method) (( void (*) (List_1_t7475 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49260_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m49414(__this, ___item, method) (( void (*) (List_1_t7475 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49261_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49415(__this, method) (( bool (*) (List_1_t7475 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49416(__this, method) (( bool (*) (List_1_t7475 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49263_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m49417(__this, method) (( Object_t * (*) (List_1_t7475 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49264_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m49418(__this, method) (( bool (*) (List_1_t7475 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49265_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m49419(__this, method) (( bool (*) (List_1_t7475 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49266_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m49420(__this, ___index, method) (( Object_t * (*) (List_1_t7475 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49267_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m49421(__this, ___index, ___value, method) (( void (*) (List_1_t7475 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49268_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Add(T)
#define List_1_Add_m49422(__this, ___item, method) (( void (*) (List_1_t7475 *, KeyValuePair_2_t7241 , const MethodInfo*))List_1_Add_m49269_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m49423(__this, ___newCount, method) (( void (*) (List_1_t7475 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m49424(__this, ___idx, ___count, method) (( void (*) (List_1_t7475 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49271_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m49425(__this, ___collection, method) (( void (*) (List_1_t7475 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49272_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m49426(__this, ___enumerable, method) (( void (*) (List_1_t7475 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49273_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m49427(__this, ___collection, method) (( void (*) (List_1_t7475 *, Object_t*, const MethodInfo*))List_1_AddRange_m49274_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AsReadOnly()
#define List_1_AsReadOnly_m49428(__this, method) (( ReadOnlyCollection_1_t7477 * (*) (List_1_t7475 *, const MethodInfo*))List_1_AsReadOnly_m49275_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Clear()
#define List_1_Clear_m49429(__this, method) (( void (*) (List_1_t7475 *, const MethodInfo*))List_1_Clear_m49276_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Contains(T)
#define List_1_Contains_m49430(__this, ___item, method) (( bool (*) (List_1_t7475 *, KeyValuePair_2_t7241 , const MethodInfo*))List_1_Contains_m49277_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m49431(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7475 *, KeyValuePair_2U5BU5D_t7474*, int32_t, const MethodInfo*))List_1_CopyTo_m49278_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m49432(__this, ___match, method) (( KeyValuePair_2_t7241  (*) (List_1_t7475 *, Predicate_1_t7478 *, const MethodInfo*))List_1_Find_m49279_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m49433(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7478 *, const MethodInfo*))List_1_CheckMatch_m49280_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m49434(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7475 *, int32_t, int32_t, Predicate_1_t7478 *, const MethodInfo*))List_1_GetIndex_m49281_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetEnumerator()
#define List_1_GetEnumerator_m49435(__this, method) (( Enumerator_t7479  (*) (List_1_t7475 *, const MethodInfo*))List_1_GetEnumerator_m49282_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m49436(__this, ___index, ___count, method) (( List_1_t7475 * (*) (List_1_t7475 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49283_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::IndexOf(T)
#define List_1_IndexOf_m49437(__this, ___item, method) (( int32_t (*) (List_1_t7475 *, KeyValuePair_2_t7241 , const MethodInfo*))List_1_IndexOf_m49284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m49438(__this, ___start, ___delta, method) (( void (*) (List_1_t7475 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49285_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m49439(__this, ___index, method) (( void (*) (List_1_t7475 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49286_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Insert(System.Int32,T)
#define List_1_Insert_m49440(__this, ___index, ___item, method) (( void (*) (List_1_t7475 *, int32_t, KeyValuePair_2_t7241 , const MethodInfo*))List_1_Insert_m49287_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m49441(__this, ___collection, method) (( void (*) (List_1_t7475 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49288_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m49442(__this, ___index, ___collection, method) (( void (*) (List_1_t7475 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49289_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m49443(__this, ___index, ___collection, method) (( void (*) (List_1_t7475 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49290_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m49444(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7475 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49291_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Remove(T)
#define List_1_Remove_m49445(__this, ___item, method) (( bool (*) (List_1_t7475 *, KeyValuePair_2_t7241 , const MethodInfo*))List_1_Remove_m49292_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m49446(__this, ___match, method) (( int32_t (*) (List_1_t7475 *, Predicate_1_t7478 *, const MethodInfo*))List_1_RemoveAll_m49293_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m49447(__this, ___index, method) (( void (*) (List_1_t7475 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m49448(__this, ___index, ___count, method) (( void (*) (List_1_t7475 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49295_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Reverse()
#define List_1_Reverse_m49449(__this, method) (( void (*) (List_1_t7475 *, const MethodInfo*))List_1_Reverse_m49296_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort()
#define List_1_Sort_m49450(__this, method) (( void (*) (List_1_t7475 *, const MethodInfo*))List_1_Sort_m49297_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m49451(__this, ___comparer, method) (( void (*) (List_1_t7475 *, Object_t*, const MethodInfo*))List_1_Sort_m49298_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m49452(__this, ___comparison, method) (( void (*) (List_1_t7475 *, Comparison_1_t7480 *, const MethodInfo*))List_1_Sort_m49299_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::ToArray()
#define List_1_ToArray_m49453(__this, method) (( KeyValuePair_2U5BU5D_t7474* (*) (List_1_t7475 *, const MethodInfo*))List_1_ToArray_m49300_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::TrimExcess()
#define List_1_TrimExcess_m49454(__this, method) (( void (*) (List_1_t7475 *, const MethodInfo*))List_1_TrimExcess_m49301_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Capacity()
#define List_1_get_Capacity_m49455(__this, method) (( int32_t (*) (List_1_t7475 *, const MethodInfo*))List_1_get_Capacity_m49302_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m49456(__this, ___value, method) (( void (*) (List_1_t7475 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49303_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Count()
#define List_1_get_Count_m49457(__this, method) (( int32_t (*) (List_1_t7475 *, const MethodInfo*))List_1_get_Count_m49304_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Item(System.Int32)
#define List_1_get_Item_m49458(__this, ___index, method) (( KeyValuePair_2_t7241  (*) (List_1_t7475 *, int32_t, const MethodInfo*))List_1_get_Item_m49305_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m49459(__this, ___index, ___value, method) (( void (*) (List_1_t7475 *, int32_t, KeyValuePair_2_t7241 , const MethodInfo*))List_1_set_Item_m49306_gshared)(__this, ___index, ___value, method)

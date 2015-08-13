#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t2952;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1379;
// System.Type[]
struct TypeU5BU5D_t1203;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t9098;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t9093;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t8538;
// System.Predicate`1<System.Type>
struct Predicate_1_t8539;
// System.Collections.Generic.IComparer`1<System.Type>
struct IComparer_1_t9669;
// System.Comparison`1<System.Type>
struct Comparison_1_t8541;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_104.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m10170(__this, method) (( void (*) (List_1_t2952 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m62385(__this, ___collection, method) (( void (*) (List_1_t2952 *, Object_t*, const MethodInfo*))List_1__ctor_m7470_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m62386(__this, ___capacity, method) (( void (*) (List_1_t2952 *, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(T[],System.Int32)
#define List_1__ctor_m62387(__this, ___data, ___size, method) (( void (*) (List_1_t2952 *, TypeU5BU5D_t1203*, int32_t, const MethodInfo*))List_1__ctor_m21571_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m62388(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21573_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62389(__this, method) (( Object_t* (*) (List_1_t2952 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m62390(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2952 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10343_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m62391(__this, method) (( Object_t * (*) (List_1_t2952 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m62392(__this, ___item, method) (( int32_t (*) (List_1_t2952 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m62393(__this, ___item, method) (( bool (*) (List_1_t2952 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m62394(__this, ___item, method) (( int32_t (*) (List_1_t2952 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m62395(__this, ___index, ___item, method) (( void (*) (List_1_t2952 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m62396(__this, ___item, method) (( void (*) (List_1_t2952 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62397(__this, method) (( bool (*) (List_1_t2952 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m62398(__this, method) (( bool (*) (List_1_t2952 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10341_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m62399(__this, method) (( Object_t * (*) (List_1_t2952 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10342_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m62400(__this, method) (( bool (*) (List_1_t2952 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m62401(__this, method) (( bool (*) (List_1_t2952 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10345_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m62402(__this, ___index, method) (( Object_t * (*) (List_1_t2952 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m62403(__this, ___index, ___value, method) (( void (*) (List_1_t2952 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10347_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m62404(__this, ___item, method) (( void (*) (List_1_t2952 *, Type_t *, const MethodInfo*))List_1_Add_m10356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m62405(__this, ___newCount, method) (( void (*) (List_1_t2952 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21591_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m62406(__this, ___idx, ___count, method) (( void (*) (List_1_t2952 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21593_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m62407(__this, ___collection, method) (( void (*) (List_1_t2952 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21595_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m62408(__this, ___enumerable, method) (( void (*) (List_1_t2952 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21597_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m62409(__this, ___collection, method) (( void (*) (List_1_t2952 *, Object_t*, const MethodInfo*))List_1_AddRange_m21599_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m62410(__this, method) (( ReadOnlyCollection_1_t8538 * (*) (List_1_t2952 *, const MethodInfo*))List_1_AsReadOnly_m21601_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m62411(__this, method) (( void (*) (List_1_t2952 *, const MethodInfo*))List_1_Clear_m10349_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m62412(__this, ___item, method) (( bool (*) (List_1_t2952 *, Type_t *, const MethodInfo*))List_1_Contains_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m62413(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2952 *, TypeU5BU5D_t1203*, int32_t, const MethodInfo*))List_1_CopyTo_m10358_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m62414(__this, ___match, method) (( Type_t * (*) (List_1_t2952 *, Predicate_1_t8539 *, const MethodInfo*))List_1_Find_m21606_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m62415(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8539 *, const MethodInfo*))List_1_CheckMatch_m21608_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m62416(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2952 *, int32_t, int32_t, Predicate_1_t8539 *, const MethodInfo*))List_1_GetIndex_m21610_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m62417(__this, method) (( Enumerator_t8540  (*) (List_1_t2952 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Type>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m62418(__this, ___index, ___count, method) (( List_1_t2952 * (*) (List_1_t2952 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21612_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m62419(__this, ___item, method) (( int32_t (*) (List_1_t2952 *, Type_t *, const MethodInfo*))List_1_IndexOf_m10361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m62420(__this, ___start, ___delta, method) (( void (*) (List_1_t2952 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21615_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m62421(__this, ___index, method) (( void (*) (List_1_t2952 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m62422(__this, ___index, ___item, method) (( void (*) (List_1_t2952 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m10362_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m62423(__this, ___collection, method) (( void (*) (List_1_t2952 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21620_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m62424(__this, ___index, ___collection, method) (( void (*) (List_1_t2952 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m62425(__this, ___index, ___collection, method) (( void (*) (List_1_t2952 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21624_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m62426(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2952 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21626_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m62427(__this, ___item, method) (( bool (*) (List_1_t2952 *, Type_t *, const MethodInfo*))List_1_Remove_m10359_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m62428(__this, ___match, method) (( int32_t (*) (List_1_t2952 *, Predicate_1_t8539 *, const MethodInfo*))List_1_RemoveAll_m21629_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m62429(__this, ___index, method) (( void (*) (List_1_t2952 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m62430(__this, ___index, ___count, method) (( void (*) (List_1_t2952 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m62431(__this, method) (( void (*) (List_1_t2952 *, const MethodInfo*))List_1_Reverse_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m62432(__this, method) (( void (*) (List_1_t2952 *, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m62433(__this, ___comparer, method) (( void (*) (List_1_t2952 *, Object_t*, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m62434(__this, ___comparison, method) (( void (*) (List_1_t2952 *, Comparison_1_t8541 *, const MethodInfo*))List_1_Sort_m21640_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m10171(__this, method) (( TypeU5BU5D_t1203* (*) (List_1_t2952 *, const MethodInfo*))List_1_ToArray_m21642_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m62435(__this, method) (( void (*) (List_1_t2952 *, const MethodInfo*))List_1_TrimExcess_m21644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m62436(__this, method) (( int32_t (*) (List_1_t2952 *, const MethodInfo*))List_1_get_Capacity_m21646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m62437(__this, ___value, method) (( void (*) (List_1_t2952 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21648_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m62438(__this, method) (( int32_t (*) (List_1_t2952 *, const MethodInfo*))List_1_get_Count_m10340_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m62439(__this, ___index, method) (( Type_t * (*) (List_1_t2952 *, int32_t, const MethodInfo*))List_1_get_Item_m10363_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m62440(__this, ___index, ___value, method) (( void (*) (List_1_t2952 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m10364_gshared)(__this, ___index, ___value, method)

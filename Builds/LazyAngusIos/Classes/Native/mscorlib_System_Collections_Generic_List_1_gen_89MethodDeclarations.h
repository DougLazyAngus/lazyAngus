#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct List_1_t7300;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerable_1_t9267;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7299;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7125;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ICollection_1_t9268;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ReadOnlyCollection_1_t7302;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Predicate_1_t7303;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IComparer_1_t9269;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t7305;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_72.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_88MethodDeclarations.h"
#define List_1__ctor_m47472(__this, method) (( void (*) (List_1_t7300 *, const MethodInfo*))List_1__ctor_m47319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47473(__this, ___collection, method) (( void (*) (List_1_t7300 *, Object_t*, const MethodInfo*))List_1__ctor_m47320_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Int32)
#define List_1__ctor_m47474(__this, ___capacity, method) (( void (*) (List_1_t7300 *, int32_t, const MethodInfo*))List_1__ctor_m47321_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m47475(__this, ___data, ___size, method) (( void (*) (List_1_t7300 *, KeyValuePair_2U5BU5D_t7299*, int32_t, const MethodInfo*))List_1__ctor_m47322_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.cctor()
#define List_1__cctor_m47476(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47323_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47477(__this, method) (( Object_t* (*) (List_1_t7300 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47324_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47478(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7300 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47325_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47479(__this, method) (( Object_t * (*) (List_1_t7300 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47326_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47480(__this, ___item, method) (( int32_t (*) (List_1_t7300 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47327_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47481(__this, ___item, method) (( bool (*) (List_1_t7300 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47328_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47482(__this, ___item, method) (( int32_t (*) (List_1_t7300 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47329_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47483(__this, ___index, ___item, method) (( void (*) (List_1_t7300 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47330_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47484(__this, ___item, method) (( void (*) (List_1_t7300 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47331_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47485(__this, method) (( bool (*) (List_1_t7300 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47332_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47486(__this, method) (( bool (*) (List_1_t7300 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47333_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47487(__this, method) (( Object_t * (*) (List_1_t7300 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47488(__this, method) (( bool (*) (List_1_t7300 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47489(__this, method) (( bool (*) (List_1_t7300 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47336_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47490(__this, ___index, method) (( Object_t * (*) (List_1_t7300 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47337_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47491(__this, ___index, ___value, method) (( void (*) (List_1_t7300 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47338_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Add(T)
#define List_1_Add_m47492(__this, ___item, method) (( void (*) (List_1_t7300 *, KeyValuePair_2_t7120 , const MethodInfo*))List_1_Add_m47339_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47493(__this, ___newCount, method) (( void (*) (List_1_t7300 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47340_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47494(__this, ___idx, ___count, method) (( void (*) (List_1_t7300 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47341_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47495(__this, ___collection, method) (( void (*) (List_1_t7300 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47342_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47496(__this, ___enumerable, method) (( void (*) (List_1_t7300 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47343_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47497(__this, ___collection, method) (( void (*) (List_1_t7300 *, Object_t*, const MethodInfo*))List_1_AddRange_m47344_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AsReadOnly()
#define List_1_AsReadOnly_m47498(__this, method) (( ReadOnlyCollection_1_t7302 * (*) (List_1_t7300 *, const MethodInfo*))List_1_AsReadOnly_m47345_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Clear()
#define List_1_Clear_m47499(__this, method) (( void (*) (List_1_t7300 *, const MethodInfo*))List_1_Clear_m47346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Contains(T)
#define List_1_Contains_m47500(__this, ___item, method) (( bool (*) (List_1_t7300 *, KeyValuePair_2_t7120 , const MethodInfo*))List_1_Contains_m47347_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47501(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7300 *, KeyValuePair_2U5BU5D_t7299*, int32_t, const MethodInfo*))List_1_CopyTo_m47348_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m47502(__this, ___match, method) (( KeyValuePair_2_t7120  (*) (List_1_t7300 *, Predicate_1_t7303 *, const MethodInfo*))List_1_Find_m47349_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47503(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7303 *, const MethodInfo*))List_1_CheckMatch_m47350_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47504(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7300 *, int32_t, int32_t, Predicate_1_t7303 *, const MethodInfo*))List_1_GetIndex_m47351_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetEnumerator()
#define List_1_GetEnumerator_m47505(__this, method) (( Enumerator_t7304  (*) (List_1_t7300 *, const MethodInfo*))List_1_GetEnumerator_m47352_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47506(__this, ___index, ___count, method) (( List_1_t7300 * (*) (List_1_t7300 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47353_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::IndexOf(T)
#define List_1_IndexOf_m47507(__this, ___item, method) (( int32_t (*) (List_1_t7300 *, KeyValuePair_2_t7120 , const MethodInfo*))List_1_IndexOf_m47354_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47508(__this, ___start, ___delta, method) (( void (*) (List_1_t7300 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47355_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47509(__this, ___index, method) (( void (*) (List_1_t7300 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Insert(System.Int32,T)
#define List_1_Insert_m47510(__this, ___index, ___item, method) (( void (*) (List_1_t7300 *, int32_t, KeyValuePair_2_t7120 , const MethodInfo*))List_1_Insert_m47357_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47511(__this, ___collection, method) (( void (*) (List_1_t7300 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47358_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47512(__this, ___index, ___collection, method) (( void (*) (List_1_t7300 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47359_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47513(__this, ___index, ___collection, method) (( void (*) (List_1_t7300 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47360_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47514(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7300 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47361_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Remove(T)
#define List_1_Remove_m47515(__this, ___item, method) (( bool (*) (List_1_t7300 *, KeyValuePair_2_t7120 , const MethodInfo*))List_1_Remove_m47362_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47516(__this, ___match, method) (( int32_t (*) (List_1_t7300 *, Predicate_1_t7303 *, const MethodInfo*))List_1_RemoveAll_m47363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47517(__this, ___index, method) (( void (*) (List_1_t7300 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47518(__this, ___index, ___count, method) (( void (*) (List_1_t7300 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47365_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Reverse()
#define List_1_Reverse_m47519(__this, method) (( void (*) (List_1_t7300 *, const MethodInfo*))List_1_Reverse_m47366_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort()
#define List_1_Sort_m47520(__this, method) (( void (*) (List_1_t7300 *, const MethodInfo*))List_1_Sort_m47367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m47521(__this, ___comparer, method) (( void (*) (List_1_t7300 *, Object_t*, const MethodInfo*))List_1_Sort_m47368_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47522(__this, ___comparison, method) (( void (*) (List_1_t7300 *, Comparison_1_t7305 *, const MethodInfo*))List_1_Sort_m47369_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::ToArray()
#define List_1_ToArray_m47523(__this, method) (( KeyValuePair_2U5BU5D_t7299* (*) (List_1_t7300 *, const MethodInfo*))List_1_ToArray_m47370_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::TrimExcess()
#define List_1_TrimExcess_m47524(__this, method) (( void (*) (List_1_t7300 *, const MethodInfo*))List_1_TrimExcess_m47371_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Capacity()
#define List_1_get_Capacity_m47525(__this, method) (( int32_t (*) (List_1_t7300 *, const MethodInfo*))List_1_get_Capacity_m47372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47526(__this, ___value, method) (( void (*) (List_1_t7300 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47373_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Count()
#define List_1_get_Count_m47527(__this, method) (( int32_t (*) (List_1_t7300 *, const MethodInfo*))List_1_get_Count_m47374_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Item(System.Int32)
#define List_1_get_Item_m47528(__this, ___index, method) (( KeyValuePair_2_t7120  (*) (List_1_t7300 *, int32_t, const MethodInfo*))List_1_get_Item_m47375_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m47529(__this, ___index, ___value, method) (( void (*) (List_1_t7300 *, int32_t, KeyValuePair_2_t7120 , const MethodInfo*))List_1_set_Item_m47376_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct List_1_t7552;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerable_1_t9279;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7551;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7157;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ICollection_1_t9280;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ReadOnlyCollection_1_t7554;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Predicate_1_t7555;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IComparer_1_t9281;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t7557;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_80.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_96MethodDeclarations.h"
#define List_1__ctor_m50533(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1__ctor_m50380_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m50534(__this, ___collection, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1__ctor_m50381_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Int32)
#define List_1__ctor_m50535(__this, ___capacity, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1__ctor_m50382_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m50536(__this, ___data, ___size, method) (( void (*) (List_1_t7552 *, KeyValuePair_2U5BU5D_t7551*, int32_t, const MethodInfo*))List_1__ctor_m50383_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.cctor()
#define List_1__cctor_m50537(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50384_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50538(__this, method) (( Object_t* (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m50539(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7552 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50386_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50540(__this, method) (( Object_t * (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50387_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m50541(__this, ___item, method) (( int32_t (*) (List_1_t7552 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50388_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m50542(__this, ___item, method) (( bool (*) (List_1_t7552 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50389_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m50543(__this, ___item, method) (( int32_t (*) (List_1_t7552 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50390_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m50544(__this, ___index, ___item, method) (( void (*) (List_1_t7552 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50391_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m50545(__this, ___item, method) (( void (*) (List_1_t7552 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50546(__this, method) (( bool (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50547(__this, method) (( bool (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50394_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m50548(__this, method) (( Object_t * (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50395_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m50549(__this, method) (( bool (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50396_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m50550(__this, method) (( bool (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50397_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m50551(__this, ___index, method) (( Object_t * (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m50552(__this, ___index, ___value, method) (( void (*) (List_1_t7552 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50399_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Add(T)
#define List_1_Add_m50553(__this, ___item, method) (( void (*) (List_1_t7552 *, KeyValuePair_2_t7152 , const MethodInfo*))List_1_Add_m50400_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m50554(__this, ___newCount, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50401_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m50555(__this, ___idx, ___count, method) (( void (*) (List_1_t7552 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50402_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m50556(__this, ___collection, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50403_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m50557(__this, ___enumerable, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50404_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m50558(__this, ___collection, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_AddRange_m50405_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AsReadOnly()
#define List_1_AsReadOnly_m50559(__this, method) (( ReadOnlyCollection_1_t7554 * (*) (List_1_t7552 *, const MethodInfo*))List_1_AsReadOnly_m50406_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Clear()
#define List_1_Clear_m50560(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1_Clear_m50407_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Contains(T)
#define List_1_Contains_m50561(__this, ___item, method) (( bool (*) (List_1_t7552 *, KeyValuePair_2_t7152 , const MethodInfo*))List_1_Contains_m50408_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m50562(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7552 *, KeyValuePair_2U5BU5D_t7551*, int32_t, const MethodInfo*))List_1_CopyTo_m50409_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m50563(__this, ___match, method) (( KeyValuePair_2_t7152  (*) (List_1_t7552 *, Predicate_1_t7555 *, const MethodInfo*))List_1_Find_m50410_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m50564(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7555 *, const MethodInfo*))List_1_CheckMatch_m50411_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m50565(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7552 *, int32_t, int32_t, Predicate_1_t7555 *, const MethodInfo*))List_1_GetIndex_m50412_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetEnumerator()
#define List_1_GetEnumerator_m50566(__this, method) (( Enumerator_t7556  (*) (List_1_t7552 *, const MethodInfo*))List_1_GetEnumerator_m50413_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m50567(__this, ___index, ___count, method) (( List_1_t7552 * (*) (List_1_t7552 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50414_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::IndexOf(T)
#define List_1_IndexOf_m50568(__this, ___item, method) (( int32_t (*) (List_1_t7552 *, KeyValuePair_2_t7152 , const MethodInfo*))List_1_IndexOf_m50415_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m50569(__this, ___start, ___delta, method) (( void (*) (List_1_t7552 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50416_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m50570(__this, ___index, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50417_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Insert(System.Int32,T)
#define List_1_Insert_m50571(__this, ___index, ___item, method) (( void (*) (List_1_t7552 *, int32_t, KeyValuePair_2_t7152 , const MethodInfo*))List_1_Insert_m50418_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m50572(__this, ___collection, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50419_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m50573(__this, ___index, ___collection, method) (( void (*) (List_1_t7552 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50420_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m50574(__this, ___index, ___collection, method) (( void (*) (List_1_t7552 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50421_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m50575(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7552 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50422_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Remove(T)
#define List_1_Remove_m50576(__this, ___item, method) (( bool (*) (List_1_t7552 *, KeyValuePair_2_t7152 , const MethodInfo*))List_1_Remove_m50423_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m50577(__this, ___match, method) (( int32_t (*) (List_1_t7552 *, Predicate_1_t7555 *, const MethodInfo*))List_1_RemoveAll_m50424_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m50578(__this, ___index, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50425_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m50579(__this, ___index, ___count, method) (( void (*) (List_1_t7552 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50426_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Reverse()
#define List_1_Reverse_m50580(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1_Reverse_m50427_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort()
#define List_1_Sort_m50581(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1_Sort_m50428_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m50582(__this, ___comparer, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_Sort_m50429_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m50583(__this, ___comparison, method) (( void (*) (List_1_t7552 *, Comparison_1_t7557 *, const MethodInfo*))List_1_Sort_m50430_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::ToArray()
#define List_1_ToArray_m50584(__this, method) (( KeyValuePair_2U5BU5D_t7551* (*) (List_1_t7552 *, const MethodInfo*))List_1_ToArray_m50431_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::TrimExcess()
#define List_1_TrimExcess_m50585(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1_TrimExcess_m50432_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Capacity()
#define List_1_get_Capacity_m50586(__this, method) (( int32_t (*) (List_1_t7552 *, const MethodInfo*))List_1_get_Capacity_m50433_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m50587(__this, ___value, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50434_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count()
#define List_1_get_Count_m50588(__this, method) (( int32_t (*) (List_1_t7552 *, const MethodInfo*))List_1_get_Count_m50435_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Item(System.Int32)
#define List_1_get_Item_m50589(__this, ___index, method) (( KeyValuePair_2_t7152  (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_get_Item_m50436_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m50590(__this, ___index, ___value, method) (( void (*) (List_1_t7552 *, int32_t, KeyValuePair_2_t7152 , const MethodInfo*))List_1_set_Item_m50437_gshared)(__this, ___index, ___value, method)

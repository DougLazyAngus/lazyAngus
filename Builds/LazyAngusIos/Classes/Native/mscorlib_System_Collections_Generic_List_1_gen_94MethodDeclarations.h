#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct List_1_t7869;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerable_1_t9991;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7868;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7760;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ICollection_1_t9992;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ReadOnlyCollection_1_t7871;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7872;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IComparer_1_t9993;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7874;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_77.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_93MethodDeclarations.h"
#define List_1__ctor_m51831(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1__ctor_m51678_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m51832(__this, ___collection, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1__ctor_m51679_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Int32)
#define List_1__ctor_m51833(__this, ___capacity, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1__ctor_m51680_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m51834(__this, ___data, ___size, method) (( void (*) (List_1_t7869 *, KeyValuePair_2U5BU5D_t7868*, int32_t, const MethodInfo*))List_1__ctor_m51681_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.cctor()
#define List_1__cctor_m51835(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51682_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51836(__this, method) (( Object_t* (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51683_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m51837(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7869 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51684_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51838(__this, method) (( Object_t * (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51685_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m51839(__this, ___item, method) (( int32_t (*) (List_1_t7869 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51686_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m51840(__this, ___item, method) (( bool (*) (List_1_t7869 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51687_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m51841(__this, ___item, method) (( int32_t (*) (List_1_t7869 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51688_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m51842(__this, ___index, ___item, method) (( void (*) (List_1_t7869 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51689_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m51843(__this, ___item, method) (( void (*) (List_1_t7869 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51690_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51844(__this, method) (( bool (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51691_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51845(__this, method) (( bool (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51692_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m51846(__this, method) (( Object_t * (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51693_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m51847(__this, method) (( bool (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51694_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m51848(__this, method) (( bool (*) (List_1_t7869 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51695_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m51849(__this, ___index, method) (( Object_t * (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51696_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m51850(__this, ___index, ___value, method) (( void (*) (List_1_t7869 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51697_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Add(T)
#define List_1_Add_m51851(__this, ___item, method) (( void (*) (List_1_t7869 *, KeyValuePair_2_t7755 , const MethodInfo*))List_1_Add_m51698_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m51852(__this, ___newCount, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51699_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m51853(__this, ___idx, ___count, method) (( void (*) (List_1_t7869 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51700_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m51854(__this, ___collection, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51701_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m51855(__this, ___enumerable, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51702_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m51856(__this, ___collection, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_AddRange_m51703_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AsReadOnly()
#define List_1_AsReadOnly_m51857(__this, method) (( ReadOnlyCollection_1_t7871 * (*) (List_1_t7869 *, const MethodInfo*))List_1_AsReadOnly_m51704_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Clear()
#define List_1_Clear_m51858(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1_Clear_m51705_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Contains(T)
#define List_1_Contains_m51859(__this, ___item, method) (( bool (*) (List_1_t7869 *, KeyValuePair_2_t7755 , const MethodInfo*))List_1_Contains_m51706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m51860(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7869 *, KeyValuePair_2U5BU5D_t7868*, int32_t, const MethodInfo*))List_1_CopyTo_m51707_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m51861(__this, ___match, method) (( KeyValuePair_2_t7755  (*) (List_1_t7869 *, Predicate_1_t7872 *, const MethodInfo*))List_1_Find_m51708_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m51862(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7872 *, const MethodInfo*))List_1_CheckMatch_m51709_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m51863(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7869 *, int32_t, int32_t, Predicate_1_t7872 *, const MethodInfo*))List_1_GetIndex_m51710_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m51864(__this, method) (( Enumerator_t7873  (*) (List_1_t7869 *, const MethodInfo*))List_1_GetEnumerator_m51711_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m51865(__this, ___index, ___count, method) (( List_1_t7869 * (*) (List_1_t7869 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51712_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::IndexOf(T)
#define List_1_IndexOf_m51866(__this, ___item, method) (( int32_t (*) (List_1_t7869 *, KeyValuePair_2_t7755 , const MethodInfo*))List_1_IndexOf_m51713_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m51867(__this, ___start, ___delta, method) (( void (*) (List_1_t7869 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51714_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m51868(__this, ___index, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51715_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Insert(System.Int32,T)
#define List_1_Insert_m51869(__this, ___index, ___item, method) (( void (*) (List_1_t7869 *, int32_t, KeyValuePair_2_t7755 , const MethodInfo*))List_1_Insert_m51716_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m51870(__this, ___collection, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51717_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m51871(__this, ___index, ___collection, method) (( void (*) (List_1_t7869 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51718_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m51872(__this, ___index, ___collection, method) (( void (*) (List_1_t7869 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51719_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m51873(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7869 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51720_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Remove(T)
#define List_1_Remove_m51874(__this, ___item, method) (( bool (*) (List_1_t7869 *, KeyValuePair_2_t7755 , const MethodInfo*))List_1_Remove_m51721_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m51875(__this, ___match, method) (( int32_t (*) (List_1_t7869 *, Predicate_1_t7872 *, const MethodInfo*))List_1_RemoveAll_m51722_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m51876(__this, ___index, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51723_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m51877(__this, ___index, ___count, method) (( void (*) (List_1_t7869 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51724_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Reverse()
#define List_1_Reverse_m51878(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1_Reverse_m51725_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort()
#define List_1_Sort_m51879(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1_Sort_m51726_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m51880(__this, ___comparer, method) (( void (*) (List_1_t7869 *, Object_t*, const MethodInfo*))List_1_Sort_m51727_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m51881(__this, ___comparison, method) (( void (*) (List_1_t7869 *, Comparison_1_t7874 *, const MethodInfo*))List_1_Sort_m51728_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::ToArray()
#define List_1_ToArray_m51882(__this, method) (( KeyValuePair_2U5BU5D_t7868* (*) (List_1_t7869 *, const MethodInfo*))List_1_ToArray_m51729_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::TrimExcess()
#define List_1_TrimExcess_m51883(__this, method) (( void (*) (List_1_t7869 *, const MethodInfo*))List_1_TrimExcess_m51730_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Capacity()
#define List_1_get_Capacity_m51884(__this, method) (( int32_t (*) (List_1_t7869 *, const MethodInfo*))List_1_get_Capacity_m51731_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m51885(__this, ___value, method) (( void (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51732_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Count()
#define List_1_get_Count_m51886(__this, method) (( int32_t (*) (List_1_t7869 *, const MethodInfo*))List_1_get_Count_m51733_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Item(System.Int32)
#define List_1_get_Item_m51887(__this, ___index, method) (( KeyValuePair_2_t7755  (*) (List_1_t7869 *, int32_t, const MethodInfo*))List_1_get_Item_m51734_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m51888(__this, ___index, ___value, method) (( void (*) (List_1_t7869 *, int32_t, KeyValuePair_2_t7755 , const MethodInfo*))List_1_set_Item_m51735_gshared)(__this, ___index, ___value, method)

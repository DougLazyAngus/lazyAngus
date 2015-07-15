#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1066;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t4477;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t4478;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Byte[]>
struct ICollection_1_t4479;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
struct ReadOnlyCollection_1_t3834;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t2245;
// System.Predicate`1<System.Byte[]>
struct Predicate_1_t3835;
// System.Collections.Generic.IComparer`1<System.Byte[]>
struct IComparer_1_t4480;
// System.Comparison`1<System.Byte[]>
struct Comparison_1_t3837;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6572(__this, method) (( void (*) (List_1_t1066 *, const MethodInfo*))List_1__ctor_m2609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24861(__this, ___collection, method) (( void (*) (List_1_t1066 *, Object_t*, const MethodInfo*))List_1__ctor_m16816_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m24862(__this, ___capacity, method) (( void (*) (List_1_t1066 *, int32_t, const MethodInfo*))List_1__ctor_m16818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m24863(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24864(__this, method) (( Object_t* (*) (List_1_t1066 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24865(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1066 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6821_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24866(__this, method) (( Object_t * (*) (List_1_t1066 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24867(__this, ___item, method) (( int32_t (*) (List_1_t1066 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24868(__this, ___item, method) (( bool (*) (List_1_t1066 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24869(__this, ___item, method) (( int32_t (*) (List_1_t1066 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24870(__this, ___index, ___item, method) (( void (*) (List_1_t1066 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24871(__this, ___item, method) (( void (*) (List_1_t1066 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24872(__this, method) (( bool (*) (List_1_t1066 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24873(__this, method) (( bool (*) (List_1_t1066 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24874(__this, method) (( Object_t * (*) (List_1_t1066 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24875(__this, method) (( bool (*) (List_1_t1066 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24876(__this, method) (( bool (*) (List_1_t1066 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24877(__this, ___index, method) (( Object_t * (*) (List_1_t1066 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24878(__this, ___index, ___value, method) (( void (*) (List_1_t1066 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6825_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m24879(__this, ___item, method) (( void (*) (List_1_t1066 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Add_m6834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24880(__this, ___newCount, method) (( void (*) (List_1_t1066 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16838_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24881(__this, ___collection, method) (( void (*) (List_1_t1066 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16840_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24882(__this, ___enumerable, method) (( void (*) (List_1_t1066 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24883(__this, ___collection, method) (( void (*) (List_1_t1066 *, Object_t*, const MethodInfo*))List_1_AddRange_m16844_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte[]>::AsReadOnly()
#define List_1_AsReadOnly_m24884(__this, method) (( ReadOnlyCollection_1_t3834 * (*) (List_1_t1066 *, const MethodInfo*))List_1_AsReadOnly_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m24885(__this, method) (( void (*) (List_1_t1066 *, const MethodInfo*))List_1_Clear_m6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m24886(__this, ___item, method) (( bool (*) (List_1_t1066 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Contains_m6835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24887(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1066 *, ByteU5BU5DU5BU5D_t2245*, int32_t, const MethodInfo*))List_1_CopyTo_m6836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte[]>::Find(System.Predicate`1<T>)
#define List_1_Find_m24888(__this, ___match, method) (( ByteU5BU5D_t36* (*) (List_1_t1066 *, Predicate_1_t3835 *, const MethodInfo*))List_1_Find_m16851_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24889(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3835 *, const MethodInfo*))List_1_CheckMatch_m16853_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24890(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1066 *, int32_t, int32_t, Predicate_1_t3835 *, const MethodInfo*))List_1_GetIndex_m16855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m24891(__this, method) (( Enumerator_t3836  (*) (List_1_t1066 *, const MethodInfo*))List_1_GetEnumerator_m2712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m24892(__this, ___item, method) (( int32_t (*) (List_1_t1066 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_IndexOf_m6839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24893(__this, ___start, ___delta, method) (( void (*) (List_1_t1066 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16858_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24894(__this, ___index, method) (( void (*) (List_1_t1066 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m24895(__this, ___index, ___item, method) (( void (*) (List_1_t1066 *, int32_t, ByteU5BU5D_t36*, const MethodInfo*))List_1_Insert_m6840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24896(__this, ___collection, method) (( void (*) (List_1_t1066 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16863_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m24897(__this, ___item, method) (( bool (*) (List_1_t1066 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Remove_m6837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24898(__this, ___match, method) (( int32_t (*) (List_1_t1066 *, Predicate_1_t3835 *, const MethodInfo*))List_1_RemoveAll_m16866_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24899(__this, ___index, method) (( void (*) (List_1_t1066 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6832_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Reverse()
#define List_1_Reverse_m24900(__this, method) (( void (*) (List_1_t1066 *, const MethodInfo*))List_1_Reverse_m16869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort()
#define List_1_Sort_m24901(__this, method) (( void (*) (List_1_t1066 *, const MethodInfo*))List_1_Sort_m16871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24902(__this, ___comparer, method) (( void (*) (List_1_t1066 *, Object_t*, const MethodInfo*))List_1_Sort_m16873_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24903(__this, ___comparison, method) (( void (*) (List_1_t1066 *, Comparison_1_t3837 *, const MethodInfo*))List_1_Sort_m16875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m24904(__this, method) (( ByteU5BU5DU5BU5D_t2245* (*) (List_1_t1066 *, const MethodInfo*))List_1_ToArray_m16877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::TrimExcess()
#define List_1_TrimExcess_m24905(__this, method) (( void (*) (List_1_t1066 *, const MethodInfo*))List_1_TrimExcess_m16879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m24906(__this, method) (( int32_t (*) (List_1_t1066 *, const MethodInfo*))List_1_get_Capacity_m16881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24907(__this, ___value, method) (( void (*) (List_1_t1066 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16883_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m24908(__this, method) (( int32_t (*) (List_1_t1066 *, const MethodInfo*))List_1_get_Count_m6818_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m24909(__this, ___index, method) (( ByteU5BU5D_t36* (*) (List_1_t1066 *, int32_t, const MethodInfo*))List_1_get_Item_m6841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m24910(__this, ___index, ___value, method) (( void (*) (List_1_t1066 *, int32_t, ByteU5BU5D_t36*, const MethodInfo*))List_1_set_Item_m6842_gshared)(__this, ___index, ___value, method)

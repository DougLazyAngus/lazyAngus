#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FacebookUserInfo>
struct List_1_t643;
// System.Object
struct Object_t;
// FacebookUserInfo
struct FacebookUserInfo_t271;
// System.Collections.Generic.IEnumerable`1<FacebookUserInfo>
struct IEnumerable_1_t8762;
// FacebookUserInfo[]
struct FacebookUserInfoU5BU5D_t5523;
// System.Collections.Generic.IEnumerator`1<FacebookUserInfo>
struct IEnumerator_1_t8760;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<FacebookUserInfo>
struct ICollection_1_t8755;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FacebookUserInfo>
struct ReadOnlyCollection_1_t5528;
// System.Predicate`1<FacebookUserInfo>
struct Predicate_1_t5529;
// System.Collections.Generic.IComparer`1<FacebookUserInfo>
struct IComparer_1_t8763;
// System.Comparison`1<FacebookUserInfo>
struct Comparison_1_t5530;
// System.Collections.Generic.List`1/Enumerator<FacebookUserInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3657(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24256(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.ctor(System.Int32)
#define List_1__ctor_m24257(__this, ___capacity, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m24258(__this, ___data, ___size, method) (( void (*) (List_1_t643 *, FacebookUserInfoU5BU5D_t5523*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.cctor()
#define List_1__cctor_m24259(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24260(__this, method) (( Object_t* (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24261(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t643 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24262(__this, method) (( Object_t * (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24263(__this, ___item, method) (( int32_t (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24264(__this, ___item, method) (( bool (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24265(__this, ___item, method) (( int32_t (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24266(__this, ___index, ___item, method) (( void (*) (List_1_t643 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24267(__this, ___item, method) (( void (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24268(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24269(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24270(__this, method) (( Object_t * (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24271(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24272(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24273(__this, ___index, method) (( Object_t * (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24274(__this, ___index, ___value, method) (( void (*) (List_1_t643 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Add(T)
#define List_1_Add_m24275(__this, ___item, method) (( void (*) (List_1_t643 *, FacebookUserInfo_t271 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24276(__this, ___newCount, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24277(__this, ___idx, ___count, method) (( void (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24278(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24279(__this, ___enumerable, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24280(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FacebookUserInfo>::AsReadOnly()
#define List_1_AsReadOnly_m24281(__this, method) (( ReadOnlyCollection_1_t5528 * (*) (List_1_t643 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Clear()
#define List_1_Clear_m24282(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::Contains(T)
#define List_1_Contains_m24283(__this, ___item, method) (( bool (*) (List_1_t643 *, FacebookUserInfo_t271 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24284(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t643 *, FacebookUserInfoU5BU5D_t5523*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FacebookUserInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m24285(__this, ___match, method) (( FacebookUserInfo_t271 * (*) (List_1_t643 *, Predicate_1_t5529 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24286(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5529 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24287(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t643 *, int32_t, int32_t, Predicate_1_t5529 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FacebookUserInfo>::GetEnumerator()
#define List_1_GetEnumerator_m3730(__this, method) (( Enumerator_t711  (*) (List_1_t643 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FacebookUserInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24288(__this, ___index, ___count, method) (( List_1_t643 * (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::IndexOf(T)
#define List_1_IndexOf_m24289(__this, ___item, method) (( int32_t (*) (List_1_t643 *, FacebookUserInfo_t271 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24290(__this, ___start, ___delta, method) (( void (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24291(__this, ___index, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Insert(System.Int32,T)
#define List_1_Insert_m24292(__this, ___index, ___item, method) (( void (*) (List_1_t643 *, int32_t, FacebookUserInfo_t271 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24293(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24294(__this, ___index, ___collection, method) (( void (*) (List_1_t643 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24295(__this, ___index, ___collection, method) (( void (*) (List_1_t643 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24296(__this, ___index, ___enumerable, method) (( void (*) (List_1_t643 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::Remove(T)
#define List_1_Remove_m24297(__this, ___item, method) (( bool (*) (List_1_t643 *, FacebookUserInfo_t271 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24298(__this, ___match, method) (( int32_t (*) (List_1_t643 *, Predicate_1_t5529 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24299(__this, ___index, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24300(__this, ___index, ___count, method) (( void (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Reverse()
#define List_1_Reverse_m24301(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Sort()
#define List_1_Sort_m24302(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24303(__this, ___comparer, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24304(__this, ___comparison, method) (( void (*) (List_1_t643 *, Comparison_1_t5530 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FacebookUserInfo>::ToArray()
#define List_1_ToArray_m24305(__this, method) (( FacebookUserInfoU5BU5D_t5523* (*) (List_1_t643 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::TrimExcess()
#define List_1_TrimExcess_m24306(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::get_Capacity()
#define List_1_get_Capacity_m24307(__this, method) (( int32_t (*) (List_1_t643 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24308(__this, ___value, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::get_Count()
#define List_1_get_Count_m24309(__this, method) (( int32_t (*) (List_1_t643 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<FacebookUserInfo>::get_Item(System.Int32)
#define List_1_get_Item_m24310(__this, ___index, method) (( FacebookUserInfo_t271 * (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m24311(__this, ___index, ___value, method) (( void (*) (List_1_t643 *, int32_t, FacebookUserInfo_t271 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

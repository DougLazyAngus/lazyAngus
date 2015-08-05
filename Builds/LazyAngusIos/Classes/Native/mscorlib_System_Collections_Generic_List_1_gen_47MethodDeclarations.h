#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2696;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t9510;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t3883;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t9511;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Byte[]>
struct ICollection_1_t9512;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
struct ReadOnlyCollection_1_t8340;
// System.Predicate`1<System.Byte[]>
struct Predicate_1_t8341;
// System.Collections.Generic.IComparer`1<System.Byte[]>
struct IComparer_1_t9513;
// System.Comparison`1<System.Byte[]>
struct Comparison_1_t8343;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_95.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9866(__this, method) (( void (*) (List_1_t2696 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59826(__this, ___collection, method) (( void (*) (List_1_t2696 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m59827(__this, ___capacity, method) (( void (*) (List_1_t2696 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(T[],System.Int32)
#define List_1__ctor_m59828(__this, ___data, ___size, method) (( void (*) (List_1_t2696 *, ByteU5BU5DU5BU5D_t3883*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m59829(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59830(__this, method) (( Object_t* (*) (List_1_t2696 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59831(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2696 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59832(__this, method) (( Object_t * (*) (List_1_t2696 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59833(__this, ___item, method) (( int32_t (*) (List_1_t2696 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59834(__this, ___item, method) (( bool (*) (List_1_t2696 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59835(__this, ___item, method) (( int32_t (*) (List_1_t2696 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59836(__this, ___index, ___item, method) (( void (*) (List_1_t2696 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59837(__this, ___item, method) (( void (*) (List_1_t2696 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59838(__this, method) (( bool (*) (List_1_t2696 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59839(__this, method) (( bool (*) (List_1_t2696 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59840(__this, method) (( Object_t * (*) (List_1_t2696 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59841(__this, method) (( bool (*) (List_1_t2696 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59842(__this, method) (( bool (*) (List_1_t2696 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59843(__this, ___index, method) (( Object_t * (*) (List_1_t2696 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59844(__this, ___index, ___value, method) (( void (*) (List_1_t2696 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m59845(__this, ___item, method) (( void (*) (List_1_t2696 *, ByteU5BU5D_t66*, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59846(__this, ___newCount, method) (( void (*) (List_1_t2696 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59847(__this, ___idx, ___count, method) (( void (*) (List_1_t2696 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59848(__this, ___collection, method) (( void (*) (List_1_t2696 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59849(__this, ___enumerable, method) (( void (*) (List_1_t2696 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m59850(__this, ___collection, method) (( void (*) (List_1_t2696 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte[]>::AsReadOnly()
#define List_1_AsReadOnly_m59851(__this, method) (( ReadOnlyCollection_1_t8340 * (*) (List_1_t2696 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m59852(__this, method) (( void (*) (List_1_t2696 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m59853(__this, ___item, method) (( bool (*) (List_1_t2696 *, ByteU5BU5D_t66*, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59854(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2696 *, ByteU5BU5DU5BU5D_t3883*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte[]>::Find(System.Predicate`1<T>)
#define List_1_Find_m59855(__this, ___match, method) (( ByteU5BU5D_t66* (*) (List_1_t2696 *, Predicate_1_t8341 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59856(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8341 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59857(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2696 *, int32_t, int32_t, Predicate_1_t8341 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m59858(__this, method) (( Enumerator_t8342  (*) (List_1_t2696 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte[]>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59859(__this, ___index, ___count, method) (( List_1_t2696 * (*) (List_1_t2696 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m59860(__this, ___item, method) (( int32_t (*) (List_1_t2696 *, ByteU5BU5D_t66*, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59861(__this, ___start, ___delta, method) (( void (*) (List_1_t2696 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59862(__this, ___index, method) (( void (*) (List_1_t2696 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m59863(__this, ___index, ___item, method) (( void (*) (List_1_t2696 *, int32_t, ByteU5BU5D_t66*, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59864(__this, ___collection, method) (( void (*) (List_1_t2696 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59865(__this, ___index, ___collection, method) (( void (*) (List_1_t2696 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59866(__this, ___index, ___collection, method) (( void (*) (List_1_t2696 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59867(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2696 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m59868(__this, ___item, method) (( bool (*) (List_1_t2696 *, ByteU5BU5D_t66*, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59869(__this, ___match, method) (( int32_t (*) (List_1_t2696 *, Predicate_1_t8341 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59870(__this, ___index, method) (( void (*) (List_1_t2696 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59871(__this, ___index, ___count, method) (( void (*) (List_1_t2696 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Reverse()
#define List_1_Reverse_m59872(__this, method) (( void (*) (List_1_t2696 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort()
#define List_1_Sort_m59873(__this, method) (( void (*) (List_1_t2696 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59874(__this, ___comparer, method) (( void (*) (List_1_t2696 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59875(__this, ___comparison, method) (( void (*) (List_1_t2696 *, Comparison_1_t8343 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m59876(__this, method) (( ByteU5BU5DU5BU5D_t3883* (*) (List_1_t2696 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::TrimExcess()
#define List_1_TrimExcess_m59877(__this, method) (( void (*) (List_1_t2696 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m59878(__this, method) (( int32_t (*) (List_1_t2696 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59879(__this, ___value, method) (( void (*) (List_1_t2696 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m59880(__this, method) (( int32_t (*) (List_1_t2696 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m59881(__this, ___index, method) (( ByteU5BU5D_t66* (*) (List_1_t2696 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m59882(__this, ___index, ___value, method) (( void (*) (List_1_t2696 *, int32_t, ByteU5BU5D_t66*, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

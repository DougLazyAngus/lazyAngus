#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct List_1_t8348;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerable_1_t10038;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8347;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7845;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ICollection_1_t10039;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ReadOnlyCollection_1_t8350;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t8351;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IComparer_1_t10040;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t8353;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_91.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_107MethodDeclarations.h"
#define List_1__ctor_m57631(__this, method) (( void (*) (List_1_t8348 *, const MethodInfo*))List_1__ctor_m57478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m57632(__this, ___collection, method) (( void (*) (List_1_t8348 *, Object_t*, const MethodInfo*))List_1__ctor_m57479_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Int32)
#define List_1__ctor_m57633(__this, ___capacity, method) (( void (*) (List_1_t8348 *, int32_t, const MethodInfo*))List_1__ctor_m57480_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m57634(__this, ___data, ___size, method) (( void (*) (List_1_t8348 *, KeyValuePair_2U5BU5D_t8347*, int32_t, const MethodInfo*))List_1__ctor_m57481_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.cctor()
#define List_1__cctor_m57635(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m57482_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57636(__this, method) (( Object_t* (*) (List_1_t8348 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57483_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m57637(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8348 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m57484_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m57638(__this, method) (( Object_t * (*) (List_1_t8348 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m57485_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m57639(__this, ___item, method) (( int32_t (*) (List_1_t8348 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m57486_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m57640(__this, ___item, method) (( bool (*) (List_1_t8348 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m57487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m57641(__this, ___item, method) (( int32_t (*) (List_1_t8348 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m57488_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m57642(__this, ___index, ___item, method) (( void (*) (List_1_t8348 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m57489_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m57643(__this, ___item, method) (( void (*) (List_1_t8348 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m57490_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57644(__this, method) (( bool (*) (List_1_t8348 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57491_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m57645(__this, method) (( bool (*) (List_1_t8348 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m57492_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m57646(__this, method) (( Object_t * (*) (List_1_t8348 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m57493_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m57647(__this, method) (( bool (*) (List_1_t8348 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m57494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m57648(__this, method) (( bool (*) (List_1_t8348 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m57495_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m57649(__this, ___index, method) (( Object_t * (*) (List_1_t8348 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m57496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m57650(__this, ___index, ___value, method) (( void (*) (List_1_t8348 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m57497_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Add(T)
#define List_1_Add_m57651(__this, ___item, method) (( void (*) (List_1_t8348 *, KeyValuePair_2_t7840 , const MethodInfo*))List_1_Add_m57498_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m57652(__this, ___newCount, method) (( void (*) (List_1_t8348 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m57499_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m57653(__this, ___idx, ___count, method) (( void (*) (List_1_t8348 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m57500_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m57654(__this, ___collection, method) (( void (*) (List_1_t8348 *, Object_t*, const MethodInfo*))List_1_AddCollection_m57501_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m57655(__this, ___enumerable, method) (( void (*) (List_1_t8348 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m57502_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m57656(__this, ___collection, method) (( void (*) (List_1_t8348 *, Object_t*, const MethodInfo*))List_1_AddRange_m57503_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AsReadOnly()
#define List_1_AsReadOnly_m57657(__this, method) (( ReadOnlyCollection_1_t8350 * (*) (List_1_t8348 *, const MethodInfo*))List_1_AsReadOnly_m57504_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Clear()
#define List_1_Clear_m57658(__this, method) (( void (*) (List_1_t8348 *, const MethodInfo*))List_1_Clear_m57505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Contains(T)
#define List_1_Contains_m57659(__this, ___item, method) (( bool (*) (List_1_t8348 *, KeyValuePair_2_t7840 , const MethodInfo*))List_1_Contains_m57506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m57660(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8348 *, KeyValuePair_2U5BU5D_t8347*, int32_t, const MethodInfo*))List_1_CopyTo_m57507_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m57661(__this, ___match, method) (( KeyValuePair_2_t7840  (*) (List_1_t8348 *, Predicate_1_t8351 *, const MethodInfo*))List_1_Find_m57508_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m57662(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8351 *, const MethodInfo*))List_1_CheckMatch_m57509_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m57663(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8348 *, int32_t, int32_t, Predicate_1_t8351 *, const MethodInfo*))List_1_GetIndex_m57510_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetEnumerator()
#define List_1_GetEnumerator_m57664(__this, method) (( Enumerator_t8352  (*) (List_1_t8348 *, const MethodInfo*))List_1_GetEnumerator_m57511_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m57665(__this, ___index, ___count, method) (( List_1_t8348 * (*) (List_1_t8348 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m57512_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::IndexOf(T)
#define List_1_IndexOf_m57666(__this, ___item, method) (( int32_t (*) (List_1_t8348 *, KeyValuePair_2_t7840 , const MethodInfo*))List_1_IndexOf_m57513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m57667(__this, ___start, ___delta, method) (( void (*) (List_1_t8348 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m57514_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m57668(__this, ___index, method) (( void (*) (List_1_t8348 *, int32_t, const MethodInfo*))List_1_CheckIndex_m57515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Insert(System.Int32,T)
#define List_1_Insert_m57669(__this, ___index, ___item, method) (( void (*) (List_1_t8348 *, int32_t, KeyValuePair_2_t7840 , const MethodInfo*))List_1_Insert_m57516_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m57670(__this, ___collection, method) (( void (*) (List_1_t8348 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m57517_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m57671(__this, ___index, ___collection, method) (( void (*) (List_1_t8348 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m57518_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m57672(__this, ___index, ___collection, method) (( void (*) (List_1_t8348 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m57519_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m57673(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8348 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m57520_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Remove(T)
#define List_1_Remove_m57674(__this, ___item, method) (( bool (*) (List_1_t8348 *, KeyValuePair_2_t7840 , const MethodInfo*))List_1_Remove_m57521_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m57675(__this, ___match, method) (( int32_t (*) (List_1_t8348 *, Predicate_1_t8351 *, const MethodInfo*))List_1_RemoveAll_m57522_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m57676(__this, ___index, method) (( void (*) (List_1_t8348 *, int32_t, const MethodInfo*))List_1_RemoveAt_m57523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m57677(__this, ___index, ___count, method) (( void (*) (List_1_t8348 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m57524_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Reverse()
#define List_1_Reverse_m57678(__this, method) (( void (*) (List_1_t8348 *, const MethodInfo*))List_1_Reverse_m57525_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort()
#define List_1_Sort_m57679(__this, method) (( void (*) (List_1_t8348 *, const MethodInfo*))List_1_Sort_m57526_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m57680(__this, ___comparer, method) (( void (*) (List_1_t8348 *, Object_t*, const MethodInfo*))List_1_Sort_m57527_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m57681(__this, ___comparison, method) (( void (*) (List_1_t8348 *, Comparison_1_t8353 *, const MethodInfo*))List_1_Sort_m57528_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::ToArray()
#define List_1_ToArray_m57682(__this, method) (( KeyValuePair_2U5BU5D_t8347* (*) (List_1_t8348 *, const MethodInfo*))List_1_ToArray_m57529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::TrimExcess()
#define List_1_TrimExcess_m57683(__this, method) (( void (*) (List_1_t8348 *, const MethodInfo*))List_1_TrimExcess_m57530_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Capacity()
#define List_1_get_Capacity_m57684(__this, method) (( int32_t (*) (List_1_t8348 *, const MethodInfo*))List_1_get_Capacity_m57531_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m57685(__this, ___value, method) (( void (*) (List_1_t8348 *, int32_t, const MethodInfo*))List_1_set_Capacity_m57532_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Count()
#define List_1_get_Count_m57686(__this, method) (( int32_t (*) (List_1_t8348 *, const MethodInfo*))List_1_get_Count_m57533_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Item(System.Int32)
#define List_1_get_Item_m57687(__this, ___index, method) (( KeyValuePair_2_t7840  (*) (List_1_t8348 *, int32_t, const MethodInfo*))List_1_get_Item_m57534_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m57688(__this, ___index, ___value, method) (( void (*) (List_1_t8348 *, int32_t, KeyValuePair_2_t7840 , const MethodInfo*))List_1_set_Item_m57535_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct List_1_t7573;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerable_1_t9383;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7572;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7232;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ICollection_1_t9384;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ReadOnlyCollection_1_t7575;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t7576;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IComparer_1_t9385;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t7578;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_82.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_98MethodDeclarations.h"
#define List_1__ctor_m50592(__this, method) (( void (*) (List_1_t7573 *, const MethodInfo*))List_1__ctor_m50439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m50593(__this, ___collection, method) (( void (*) (List_1_t7573 *, Object_t*, const MethodInfo*))List_1__ctor_m50440_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Int32)
#define List_1__ctor_m50594(__this, ___capacity, method) (( void (*) (List_1_t7573 *, int32_t, const MethodInfo*))List_1__ctor_m50441_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m50595(__this, ___data, ___size, method) (( void (*) (List_1_t7573 *, KeyValuePair_2U5BU5D_t7572*, int32_t, const MethodInfo*))List_1__ctor_m50442_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.cctor()
#define List_1__cctor_m50596(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50443_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50597(__this, method) (( Object_t* (*) (List_1_t7573 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m50598(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7573 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50445_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50599(__this, method) (( Object_t * (*) (List_1_t7573 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50446_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m50600(__this, ___item, method) (( int32_t (*) (List_1_t7573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50447_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m50601(__this, ___item, method) (( bool (*) (List_1_t7573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50448_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m50602(__this, ___item, method) (( int32_t (*) (List_1_t7573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50449_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m50603(__this, ___index, ___item, method) (( void (*) (List_1_t7573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50450_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m50604(__this, ___item, method) (( void (*) (List_1_t7573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50451_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50605(__this, method) (( bool (*) (List_1_t7573 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50452_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50606(__this, method) (( bool (*) (List_1_t7573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50453_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m50607(__this, method) (( Object_t * (*) (List_1_t7573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50454_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m50608(__this, method) (( bool (*) (List_1_t7573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50455_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m50609(__this, method) (( bool (*) (List_1_t7573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m50610(__this, ___index, method) (( Object_t * (*) (List_1_t7573 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50457_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m50611(__this, ___index, ___value, method) (( void (*) (List_1_t7573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50458_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
#define List_1_Add_m50612(__this, ___item, method) (( void (*) (List_1_t7573 *, KeyValuePair_2_t5541 , const MethodInfo*))List_1_Add_m50459_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m50613(__this, ___newCount, method) (( void (*) (List_1_t7573 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50460_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m50614(__this, ___idx, ___count, method) (( void (*) (List_1_t7573 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50461_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m50615(__this, ___collection, method) (( void (*) (List_1_t7573 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50462_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m50616(__this, ___enumerable, method) (( void (*) (List_1_t7573 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50463_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m50617(__this, ___collection, method) (( void (*) (List_1_t7573 *, Object_t*, const MethodInfo*))List_1_AddRange_m50464_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AsReadOnly()
#define List_1_AsReadOnly_m50618(__this, method) (( ReadOnlyCollection_1_t7575 * (*) (List_1_t7573 *, const MethodInfo*))List_1_AsReadOnly_m50465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
#define List_1_Clear_m50619(__this, method) (( void (*) (List_1_t7573 *, const MethodInfo*))List_1_Clear_m50466_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
#define List_1_Contains_m50620(__this, ___item, method) (( bool (*) (List_1_t7573 *, KeyValuePair_2_t5541 , const MethodInfo*))List_1_Contains_m50467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m50621(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7573 *, KeyValuePair_2U5BU5D_t7572*, int32_t, const MethodInfo*))List_1_CopyTo_m50468_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m50622(__this, ___match, method) (( KeyValuePair_2_t5541  (*) (List_1_t7573 *, Predicate_1_t7576 *, const MethodInfo*))List_1_Find_m50469_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m50623(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7576 *, const MethodInfo*))List_1_CheckMatch_m50470_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m50624(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7573 *, int32_t, int32_t, Predicate_1_t7576 *, const MethodInfo*))List_1_GetIndex_m50471_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m50625(__this, method) (( Enumerator_t7577  (*) (List_1_t7573 *, const MethodInfo*))List_1_GetEnumerator_m50472_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m50626(__this, ___index, ___count, method) (( List_1_t7573 * (*) (List_1_t7573 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50473_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
#define List_1_IndexOf_m50627(__this, ___item, method) (( int32_t (*) (List_1_t7573 *, KeyValuePair_2_t5541 , const MethodInfo*))List_1_IndexOf_m50474_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m50628(__this, ___start, ___delta, method) (( void (*) (List_1_t7573 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50475_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m50629(__this, ___index, method) (( void (*) (List_1_t7573 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50476_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
#define List_1_Insert_m50630(__this, ___index, ___item, method) (( void (*) (List_1_t7573 *, int32_t, KeyValuePair_2_t5541 , const MethodInfo*))List_1_Insert_m50477_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m50631(__this, ___collection, method) (( void (*) (List_1_t7573 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50478_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m50632(__this, ___index, ___collection, method) (( void (*) (List_1_t7573 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50479_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m50633(__this, ___index, ___collection, method) (( void (*) (List_1_t7573 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50480_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m50634(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7573 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50481_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#define List_1_Remove_m50635(__this, ___item, method) (( bool (*) (List_1_t7573 *, KeyValuePair_2_t5541 , const MethodInfo*))List_1_Remove_m50482_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m50636(__this, ___match, method) (( int32_t (*) (List_1_t7573 *, Predicate_1_t7576 *, const MethodInfo*))List_1_RemoveAll_m50483_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m50637(__this, ___index, method) (( void (*) (List_1_t7573 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50484_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m50638(__this, ___index, ___count, method) (( void (*) (List_1_t7573 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50485_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Reverse()
#define List_1_Reverse_m50639(__this, method) (( void (*) (List_1_t7573 *, const MethodInfo*))List_1_Reverse_m50486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort()
#define List_1_Sort_m50640(__this, method) (( void (*) (List_1_t7573 *, const MethodInfo*))List_1_Sort_m50487_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m50641(__this, ___comparer, method) (( void (*) (List_1_t7573 *, Object_t*, const MethodInfo*))List_1_Sort_m50488_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m50642(__this, ___comparison, method) (( void (*) (List_1_t7573 *, Comparison_1_t7578 *, const MethodInfo*))List_1_Sort_m50489_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::ToArray()
#define List_1_ToArray_m50643(__this, method) (( KeyValuePair_2U5BU5D_t7572* (*) (List_1_t7573 *, const MethodInfo*))List_1_ToArray_m50490_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::TrimExcess()
#define List_1_TrimExcess_m50644(__this, method) (( void (*) (List_1_t7573 *, const MethodInfo*))List_1_TrimExcess_m50491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Capacity()
#define List_1_get_Capacity_m50645(__this, method) (( int32_t (*) (List_1_t7573 *, const MethodInfo*))List_1_get_Capacity_m50492_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m50646(__this, ___value, method) (( void (*) (List_1_t7573 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50493_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
#define List_1_get_Count_m50647(__this, method) (( int32_t (*) (List_1_t7573 *, const MethodInfo*))List_1_get_Count_m50494_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
#define List_1_get_Item_m50648(__this, ___index, method) (( KeyValuePair_2_t5541  (*) (List_1_t7573 *, int32_t, const MethodInfo*))List_1_get_Item_m50495_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m50649(__this, ___index, ___value, method) (( void (*) (List_1_t7573 *, int32_t, KeyValuePair_2_t5541 , const MethodInfo*))List_1_set_Item_m50496_gshared)(__this, ___index, ___value, method)

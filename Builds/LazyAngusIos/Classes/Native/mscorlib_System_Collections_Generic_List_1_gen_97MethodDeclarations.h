#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct List_1_t7564;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerable_1_t9291;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7563;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7169;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ICollection_1_t9292;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ReadOnlyCollection_1_t7566;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Predicate_1_t7567;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IComparer_1_t9293;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t7569;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_80.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_96MethodDeclarations.h"
#define List_1__ctor_m50611(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1__ctor_m50458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m50612(__this, ___collection, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1__ctor_m50459_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Int32)
#define List_1__ctor_m50613(__this, ___capacity, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1__ctor_m50460_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m50614(__this, ___data, ___size, method) (( void (*) (List_1_t7564 *, KeyValuePair_2U5BU5D_t7563*, int32_t, const MethodInfo*))List_1__ctor_m50461_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.cctor()
#define List_1__cctor_m50615(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50462_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50616(__this, method) (( Object_t* (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m50617(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7564 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50464_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50618(__this, method) (( Object_t * (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50465_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m50619(__this, ___item, method) (( int32_t (*) (List_1_t7564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50466_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m50620(__this, ___item, method) (( bool (*) (List_1_t7564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50467_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m50621(__this, ___item, method) (( int32_t (*) (List_1_t7564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50468_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m50622(__this, ___index, ___item, method) (( void (*) (List_1_t7564 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50469_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m50623(__this, ___item, method) (( void (*) (List_1_t7564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50470_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50624(__this, method) (( bool (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50471_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50625(__this, method) (( bool (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50472_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m50626(__this, method) (( Object_t * (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m50627(__this, method) (( bool (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50474_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m50628(__this, method) (( bool (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50475_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m50629(__this, ___index, method) (( Object_t * (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50476_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m50630(__this, ___index, ___value, method) (( void (*) (List_1_t7564 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50477_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Add(T)
#define List_1_Add_m50631(__this, ___item, method) (( void (*) (List_1_t7564 *, KeyValuePair_2_t7164 , const MethodInfo*))List_1_Add_m50478_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m50632(__this, ___newCount, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50479_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m50633(__this, ___idx, ___count, method) (( void (*) (List_1_t7564 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50480_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m50634(__this, ___collection, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50481_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m50635(__this, ___enumerable, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50482_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m50636(__this, ___collection, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_AddRange_m50483_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AsReadOnly()
#define List_1_AsReadOnly_m50637(__this, method) (( ReadOnlyCollection_1_t7566 * (*) (List_1_t7564 *, const MethodInfo*))List_1_AsReadOnly_m50484_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Clear()
#define List_1_Clear_m50638(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1_Clear_m50485_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Contains(T)
#define List_1_Contains_m50639(__this, ___item, method) (( bool (*) (List_1_t7564 *, KeyValuePair_2_t7164 , const MethodInfo*))List_1_Contains_m50486_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m50640(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7564 *, KeyValuePair_2U5BU5D_t7563*, int32_t, const MethodInfo*))List_1_CopyTo_m50487_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m50641(__this, ___match, method) (( KeyValuePair_2_t7164  (*) (List_1_t7564 *, Predicate_1_t7567 *, const MethodInfo*))List_1_Find_m50488_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m50642(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7567 *, const MethodInfo*))List_1_CheckMatch_m50489_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m50643(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7564 *, int32_t, int32_t, Predicate_1_t7567 *, const MethodInfo*))List_1_GetIndex_m50490_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetEnumerator()
#define List_1_GetEnumerator_m50644(__this, method) (( Enumerator_t7568  (*) (List_1_t7564 *, const MethodInfo*))List_1_GetEnumerator_m50491_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m50645(__this, ___index, ___count, method) (( List_1_t7564 * (*) (List_1_t7564 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50492_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::IndexOf(T)
#define List_1_IndexOf_m50646(__this, ___item, method) (( int32_t (*) (List_1_t7564 *, KeyValuePair_2_t7164 , const MethodInfo*))List_1_IndexOf_m50493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m50647(__this, ___start, ___delta, method) (( void (*) (List_1_t7564 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50494_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m50648(__this, ___index, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50495_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Insert(System.Int32,T)
#define List_1_Insert_m50649(__this, ___index, ___item, method) (( void (*) (List_1_t7564 *, int32_t, KeyValuePair_2_t7164 , const MethodInfo*))List_1_Insert_m50496_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m50650(__this, ___collection, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50497_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m50651(__this, ___index, ___collection, method) (( void (*) (List_1_t7564 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50498_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m50652(__this, ___index, ___collection, method) (( void (*) (List_1_t7564 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50499_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m50653(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7564 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50500_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Remove(T)
#define List_1_Remove_m50654(__this, ___item, method) (( bool (*) (List_1_t7564 *, KeyValuePair_2_t7164 , const MethodInfo*))List_1_Remove_m50501_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m50655(__this, ___match, method) (( int32_t (*) (List_1_t7564 *, Predicate_1_t7567 *, const MethodInfo*))List_1_RemoveAll_m50502_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m50656(__this, ___index, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50503_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m50657(__this, ___index, ___count, method) (( void (*) (List_1_t7564 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50504_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Reverse()
#define List_1_Reverse_m50658(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1_Reverse_m50505_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort()
#define List_1_Sort_m50659(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1_Sort_m50506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m50660(__this, ___comparer, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_Sort_m50507_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m50661(__this, ___comparison, method) (( void (*) (List_1_t7564 *, Comparison_1_t7569 *, const MethodInfo*))List_1_Sort_m50508_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::ToArray()
#define List_1_ToArray_m50662(__this, method) (( KeyValuePair_2U5BU5D_t7563* (*) (List_1_t7564 *, const MethodInfo*))List_1_ToArray_m50509_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::TrimExcess()
#define List_1_TrimExcess_m50663(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1_TrimExcess_m50510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Capacity()
#define List_1_get_Capacity_m50664(__this, method) (( int32_t (*) (List_1_t7564 *, const MethodInfo*))List_1_get_Capacity_m50511_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m50665(__this, ___value, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count()
#define List_1_get_Count_m50666(__this, method) (( int32_t (*) (List_1_t7564 *, const MethodInfo*))List_1_get_Count_m50513_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Item(System.Int32)
#define List_1_get_Item_m50667(__this, ___index, method) (( KeyValuePair_2_t7164  (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_get_Item_m50514_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m50668(__this, ___index, ___value, method) (( void (*) (List_1_t7564 *, int32_t, KeyValuePair_2_t7164 , const MethodInfo*))List_1_set_Item_m50515_gshared)(__this, ___index, ___value, method)

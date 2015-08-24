#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct List_1_t7576;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerable_1_t9386;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7575;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7235;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ICollection_1_t9387;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ReadOnlyCollection_1_t7578;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t7579;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IComparer_1_t9388;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t7581;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_82.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_98MethodDeclarations.h"
#define List_1__ctor_m50624(__this, method) (( void (*) (List_1_t7576 *, const MethodInfo*))List_1__ctor_m50471_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m50625(__this, ___collection, method) (( void (*) (List_1_t7576 *, Object_t*, const MethodInfo*))List_1__ctor_m50472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Int32)
#define List_1__ctor_m50626(__this, ___capacity, method) (( void (*) (List_1_t7576 *, int32_t, const MethodInfo*))List_1__ctor_m50473_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m50627(__this, ___data, ___size, method) (( void (*) (List_1_t7576 *, KeyValuePair_2U5BU5D_t7575*, int32_t, const MethodInfo*))List_1__ctor_m50474_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.cctor()
#define List_1__cctor_m50628(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50475_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50629(__this, method) (( Object_t* (*) (List_1_t7576 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50476_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m50630(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7576 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50477_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50631(__this, method) (( Object_t * (*) (List_1_t7576 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m50632(__this, ___item, method) (( int32_t (*) (List_1_t7576 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50479_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m50633(__this, ___item, method) (( bool (*) (List_1_t7576 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50480_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m50634(__this, ___item, method) (( int32_t (*) (List_1_t7576 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50481_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m50635(__this, ___index, ___item, method) (( void (*) (List_1_t7576 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50482_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m50636(__this, ___item, method) (( void (*) (List_1_t7576 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50483_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50637(__this, method) (( bool (*) (List_1_t7576 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50484_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50638(__this, method) (( bool (*) (List_1_t7576 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50485_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m50639(__this, method) (( Object_t * (*) (List_1_t7576 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m50640(__this, method) (( bool (*) (List_1_t7576 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50487_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m50641(__this, method) (( bool (*) (List_1_t7576 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50488_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m50642(__this, ___index, method) (( Object_t * (*) (List_1_t7576 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50489_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m50643(__this, ___index, ___value, method) (( void (*) (List_1_t7576 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50490_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
#define List_1_Add_m50644(__this, ___item, method) (( void (*) (List_1_t7576 *, KeyValuePair_2_t5544 , const MethodInfo*))List_1_Add_m50491_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m50645(__this, ___newCount, method) (( void (*) (List_1_t7576 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50492_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m50646(__this, ___idx, ___count, method) (( void (*) (List_1_t7576 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50493_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m50647(__this, ___collection, method) (( void (*) (List_1_t7576 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50494_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m50648(__this, ___enumerable, method) (( void (*) (List_1_t7576 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50495_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m50649(__this, ___collection, method) (( void (*) (List_1_t7576 *, Object_t*, const MethodInfo*))List_1_AddRange_m50496_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AsReadOnly()
#define List_1_AsReadOnly_m50650(__this, method) (( ReadOnlyCollection_1_t7578 * (*) (List_1_t7576 *, const MethodInfo*))List_1_AsReadOnly_m50497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
#define List_1_Clear_m50651(__this, method) (( void (*) (List_1_t7576 *, const MethodInfo*))List_1_Clear_m50498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
#define List_1_Contains_m50652(__this, ___item, method) (( bool (*) (List_1_t7576 *, KeyValuePair_2_t5544 , const MethodInfo*))List_1_Contains_m50499_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m50653(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7576 *, KeyValuePair_2U5BU5D_t7575*, int32_t, const MethodInfo*))List_1_CopyTo_m50500_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m50654(__this, ___match, method) (( KeyValuePair_2_t5544  (*) (List_1_t7576 *, Predicate_1_t7579 *, const MethodInfo*))List_1_Find_m50501_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m50655(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7579 *, const MethodInfo*))List_1_CheckMatch_m50502_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m50656(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7576 *, int32_t, int32_t, Predicate_1_t7579 *, const MethodInfo*))List_1_GetIndex_m50503_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m50657(__this, method) (( Enumerator_t7580  (*) (List_1_t7576 *, const MethodInfo*))List_1_GetEnumerator_m50504_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m50658(__this, ___index, ___count, method) (( List_1_t7576 * (*) (List_1_t7576 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50505_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
#define List_1_IndexOf_m50659(__this, ___item, method) (( int32_t (*) (List_1_t7576 *, KeyValuePair_2_t5544 , const MethodInfo*))List_1_IndexOf_m50506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m50660(__this, ___start, ___delta, method) (( void (*) (List_1_t7576 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50507_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m50661(__this, ___index, method) (( void (*) (List_1_t7576 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50508_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
#define List_1_Insert_m50662(__this, ___index, ___item, method) (( void (*) (List_1_t7576 *, int32_t, KeyValuePair_2_t5544 , const MethodInfo*))List_1_Insert_m50509_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m50663(__this, ___collection, method) (( void (*) (List_1_t7576 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50510_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m50664(__this, ___index, ___collection, method) (( void (*) (List_1_t7576 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50511_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m50665(__this, ___index, ___collection, method) (( void (*) (List_1_t7576 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50512_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m50666(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7576 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50513_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#define List_1_Remove_m50667(__this, ___item, method) (( bool (*) (List_1_t7576 *, KeyValuePair_2_t5544 , const MethodInfo*))List_1_Remove_m50514_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m50668(__this, ___match, method) (( int32_t (*) (List_1_t7576 *, Predicate_1_t7579 *, const MethodInfo*))List_1_RemoveAll_m50515_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m50669(__this, ___index, method) (( void (*) (List_1_t7576 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m50670(__this, ___index, ___count, method) (( void (*) (List_1_t7576 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50517_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Reverse()
#define List_1_Reverse_m50671(__this, method) (( void (*) (List_1_t7576 *, const MethodInfo*))List_1_Reverse_m50518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort()
#define List_1_Sort_m50672(__this, method) (( void (*) (List_1_t7576 *, const MethodInfo*))List_1_Sort_m50519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m50673(__this, ___comparer, method) (( void (*) (List_1_t7576 *, Object_t*, const MethodInfo*))List_1_Sort_m50520_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m50674(__this, ___comparison, method) (( void (*) (List_1_t7576 *, Comparison_1_t7581 *, const MethodInfo*))List_1_Sort_m50521_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::ToArray()
#define List_1_ToArray_m50675(__this, method) (( KeyValuePair_2U5BU5D_t7575* (*) (List_1_t7576 *, const MethodInfo*))List_1_ToArray_m50522_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::TrimExcess()
#define List_1_TrimExcess_m50676(__this, method) (( void (*) (List_1_t7576 *, const MethodInfo*))List_1_TrimExcess_m50523_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Capacity()
#define List_1_get_Capacity_m50677(__this, method) (( int32_t (*) (List_1_t7576 *, const MethodInfo*))List_1_get_Capacity_m50524_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m50678(__this, ___value, method) (( void (*) (List_1_t7576 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50525_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
#define List_1_get_Count_m50679(__this, method) (( int32_t (*) (List_1_t7576 *, const MethodInfo*))List_1_get_Count_m50526_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
#define List_1_get_Item_m50680(__this, ___index, method) (( KeyValuePair_2_t5544  (*) (List_1_t7576 *, int32_t, const MethodInfo*))List_1_get_Item_m50527_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m50681(__this, ___index, ___value, method) (( void (*) (List_1_t7576 *, int32_t, KeyValuePair_2_t5544 , const MethodInfo*))List_1_set_Item_m50528_gshared)(__this, ___index, ___value, method)

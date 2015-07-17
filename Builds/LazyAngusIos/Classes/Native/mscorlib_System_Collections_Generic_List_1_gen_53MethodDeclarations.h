#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t3672;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t4435;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t4436;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t4437;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t3675;
// System.Single[]
struct SingleU5BU5D_t488;
// System.Predicate`1<System.Single>
struct Predicate_1_t3680;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t4438;
// System.Comparison`1<System.Single>
struct Comparison_1_t3684;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m22465_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1__ctor_m22465(__this, method) (( void (*) (List_1_t3672 *, const MethodInfo*))List_1__ctor_m22465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m22466_gshared (List_1_t3672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m22466(__this, ___collection, method) (( void (*) (List_1_t3672 *, Object_t*, const MethodInfo*))List_1__ctor_m22466_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m22467_gshared (List_1_t3672 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m22467(__this, ___capacity, method) (( void (*) (List_1_t3672 *, int32_t, const MethodInfo*))List_1__ctor_m22467_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m22468_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m22468(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22468_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22469_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22469(__this, method) (( Object_t* (*) (List_1_t3672 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m22470_gshared (List_1_t3672 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m22470(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3672 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m22470_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m22471_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22471(__this, method) (( Object_t * (*) (List_1_t3672 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m22471_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m22472_gshared (List_1_t3672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m22472(__this, ___item, method) (( int32_t (*) (List_1_t3672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m22472_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m22473_gshared (List_1_t3672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m22473(__this, ___item, method) (( bool (*) (List_1_t3672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m22473_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m22474_gshared (List_1_t3672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m22474(__this, ___item, method) (( int32_t (*) (List_1_t3672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m22474_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m22475_gshared (List_1_t3672 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m22475(__this, ___index, ___item, method) (( void (*) (List_1_t3672 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m22475_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m22476_gshared (List_1_t3672 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m22476(__this, ___item, method) (( void (*) (List_1_t3672 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m22476_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22477_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22477(__this, method) (( bool (*) (List_1_t3672 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m22478_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22478(__this, method) (( bool (*) (List_1_t3672 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m22478_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m22479_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m22479(__this, method) (( Object_t * (*) (List_1_t3672 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m22479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m22480_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m22480(__this, method) (( bool (*) (List_1_t3672 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m22480_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m22481_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m22481(__this, method) (( bool (*) (List_1_t3672 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m22481_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m22482_gshared (List_1_t3672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m22482(__this, ___index, method) (( Object_t * (*) (List_1_t3672 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m22482_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m22483_gshared (List_1_t3672 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m22483(__this, ___index, ___value, method) (( void (*) (List_1_t3672 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m22483_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m22484_gshared (List_1_t3672 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m22484(__this, ___item, method) (( void (*) (List_1_t3672 *, float, const MethodInfo*))List_1_Add_m22484_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m22485_gshared (List_1_t3672 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m22485(__this, ___newCount, method) (( void (*) (List_1_t3672 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22485_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m22486_gshared (List_1_t3672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m22486(__this, ___collection, method) (( void (*) (List_1_t3672 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22486_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m22487_gshared (List_1_t3672 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m22487(__this, ___enumerable, method) (( void (*) (List_1_t3672 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22487_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m22488_gshared (List_1_t3672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m22488(__this, ___collection, method) (( void (*) (List_1_t3672 *, Object_t*, const MethodInfo*))List_1_AddRange_m22488_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3675 * List_1_AsReadOnly_m22489_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m22489(__this, method) (( ReadOnlyCollection_1_t3675 * (*) (List_1_t3672 *, const MethodInfo*))List_1_AsReadOnly_m22489_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m22490_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_Clear_m22490(__this, method) (( void (*) (List_1_t3672 *, const MethodInfo*))List_1_Clear_m22490_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m22491_gshared (List_1_t3672 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m22491(__this, ___item, method) (( bool (*) (List_1_t3672 *, float, const MethodInfo*))List_1_Contains_m22491_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m22492_gshared (List_1_t3672 * __this, SingleU5BU5D_t488* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m22492(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3672 *, SingleU5BU5D_t488*, int32_t, const MethodInfo*))List_1_CopyTo_m22492_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m22493_gshared (List_1_t3672 * __this, Predicate_1_t3680 * ___match, const MethodInfo* method);
#define List_1_Find_m22493(__this, ___match, method) (( float (*) (List_1_t3672 *, Predicate_1_t3680 *, const MethodInfo*))List_1_Find_m22493_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m22494_gshared (Object_t * __this /* static, unused */, Predicate_1_t3680 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m22494(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3680 *, const MethodInfo*))List_1_CheckMatch_m22494_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m22495_gshared (List_1_t3672 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3680 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m22495(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3672 *, int32_t, int32_t, Predicate_1_t3680 *, const MethodInfo*))List_1_GetIndex_m22495_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t3673  List_1_GetEnumerator_m22496_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m22496(__this, method) (( Enumerator_t3673  (*) (List_1_t3672 *, const MethodInfo*))List_1_GetEnumerator_m22496_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m22497_gshared (List_1_t3672 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m22497(__this, ___item, method) (( int32_t (*) (List_1_t3672 *, float, const MethodInfo*))List_1_IndexOf_m22497_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m22498_gshared (List_1_t3672 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m22498(__this, ___start, ___delta, method) (( void (*) (List_1_t3672 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22498_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m22499_gshared (List_1_t3672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m22499(__this, ___index, method) (( void (*) (List_1_t3672 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m22500_gshared (List_1_t3672 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m22500(__this, ___index, ___item, method) (( void (*) (List_1_t3672 *, int32_t, float, const MethodInfo*))List_1_Insert_m22500_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m22501_gshared (List_1_t3672 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m22501(__this, ___collection, method) (( void (*) (List_1_t3672 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22501_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m22502_gshared (List_1_t3672 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m22502(__this, ___item, method) (( bool (*) (List_1_t3672 *, float, const MethodInfo*))List_1_Remove_m22502_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m22503_gshared (List_1_t3672 * __this, Predicate_1_t3680 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m22503(__this, ___match, method) (( int32_t (*) (List_1_t3672 *, Predicate_1_t3680 *, const MethodInfo*))List_1_RemoveAll_m22503_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m22504_gshared (List_1_t3672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m22504(__this, ___index, method) (( void (*) (List_1_t3672 *, int32_t, const MethodInfo*))List_1_RemoveAt_m22504_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m22505_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_Reverse_m22505(__this, method) (( void (*) (List_1_t3672 *, const MethodInfo*))List_1_Reverse_m22505_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m22506_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_Sort_m22506(__this, method) (( void (*) (List_1_t3672 *, const MethodInfo*))List_1_Sort_m22506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m22507_gshared (List_1_t3672 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m22507(__this, ___comparer, method) (( void (*) (List_1_t3672 *, Object_t*, const MethodInfo*))List_1_Sort_m22507_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m22508_gshared (List_1_t3672 * __this, Comparison_1_t3684 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m22508(__this, ___comparison, method) (( void (*) (List_1_t3672 *, Comparison_1_t3684 *, const MethodInfo*))List_1_Sort_m22508_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t488* List_1_ToArray_m22509_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_ToArray_m22509(__this, method) (( SingleU5BU5D_t488* (*) (List_1_t3672 *, const MethodInfo*))List_1_ToArray_m22509_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m22510_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m22510(__this, method) (( void (*) (List_1_t3672 *, const MethodInfo*))List_1_TrimExcess_m22510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m22511_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m22511(__this, method) (( int32_t (*) (List_1_t3672 *, const MethodInfo*))List_1_get_Capacity_m22511_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m22512_gshared (List_1_t3672 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m22512(__this, ___value, method) (( void (*) (List_1_t3672 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m22513_gshared (List_1_t3672 * __this, const MethodInfo* method);
#define List_1_get_Count_m22513(__this, method) (( int32_t (*) (List_1_t3672 *, const MethodInfo*))List_1_get_Count_m22513_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m22514_gshared (List_1_t3672 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m22514(__this, ___index, method) (( float (*) (List_1_t3672 *, int32_t, const MethodInfo*))List_1_get_Item_m22514_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m22515_gshared (List_1_t3672 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m22515(__this, ___index, ___value, method) (( void (*) (List_1_t3672 *, int32_t, float, const MethodInfo*))List_1_set_Item_m22515_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct List_1_t6053;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t819;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1410;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1397;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct ICollection_1_t818;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct ReadOnlyCollection_1_t6055;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Predicate_1_t6056;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IComparer_1_t9089;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Comparison_1_t6058;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_gen_71MethodDeclarations.h"
#define List_1__ctor_m31675(__this, method) (( void (*) (List_1_t6053 *, const MethodInfo*))List_1__ctor_m31522_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31676(__this, ___collection, method) (( void (*) (List_1_t6053 *, Object_t*, const MethodInfo*))List_1__ctor_m31523_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m31677(__this, ___capacity, method) (( void (*) (List_1_t6053 *, int32_t, const MethodInfo*))List_1__ctor_m31524_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m31678(__this, ___data, ___size, method) (( void (*) (List_1_t6053 *, KeyValuePair_2U5BU5D_t1410*, int32_t, const MethodInfo*))List_1__ctor_m31525_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.cctor()
#define List_1__cctor_m31679(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m31526_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31680(__this, method) (( Object_t* (*) (List_1_t6053 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31527_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31681(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6053 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m31528_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31682(__this, method) (( Object_t * (*) (List_1_t6053 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m31529_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31683(__this, ___item, method) (( int32_t (*) (List_1_t6053 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m31530_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31684(__this, ___item, method) (( bool (*) (List_1_t6053 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m31531_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31685(__this, ___item, method) (( int32_t (*) (List_1_t6053 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m31532_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31686(__this, ___index, ___item, method) (( void (*) (List_1_t6053 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m31533_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31687(__this, ___item, method) (( void (*) (List_1_t6053 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m31534_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31688(__this, method) (( bool (*) (List_1_t6053 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31535_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31689(__this, method) (( bool (*) (List_1_t6053 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m31536_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31690(__this, method) (( Object_t * (*) (List_1_t6053 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m31537_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31691(__this, method) (( bool (*) (List_1_t6053 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m31538_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31692(__this, method) (( bool (*) (List_1_t6053 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m31539_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31693(__this, ___index, method) (( Object_t * (*) (List_1_t6053 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m31540_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31694(__this, ___index, ___value, method) (( void (*) (List_1_t6053 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m31541_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Add(T)
#define List_1_Add_m31695(__this, ___item, method) (( void (*) (List_1_t6053 *, KeyValuePair_2_t775 , const MethodInfo*))List_1_Add_m31542_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31696(__this, ___newCount, method) (( void (*) (List_1_t6053 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m31543_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31697(__this, ___idx, ___count, method) (( void (*) (List_1_t6053 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m31544_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31698(__this, ___collection, method) (( void (*) (List_1_t6053 *, Object_t*, const MethodInfo*))List_1_AddCollection_m31545_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31699(__this, ___enumerable, method) (( void (*) (List_1_t6053 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m31546_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31700(__this, ___collection, method) (( void (*) (List_1_t6053 *, Object_t*, const MethodInfo*))List_1_AddRange_m31547_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m31701(__this, method) (( ReadOnlyCollection_1_t6055 * (*) (List_1_t6053 *, const MethodInfo*))List_1_AsReadOnly_m31548_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear()
#define List_1_Clear_m31702(__this, method) (( void (*) (List_1_t6053 *, const MethodInfo*))List_1_Clear_m31549_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Contains(T)
#define List_1_Contains_m31703(__this, ___item, method) (( bool (*) (List_1_t6053 *, KeyValuePair_2_t775 , const MethodInfo*))List_1_Contains_m31550_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31704(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6053 *, KeyValuePair_2U5BU5D_t1410*, int32_t, const MethodInfo*))List_1_CopyTo_m31551_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m31705(__this, ___match, method) (( KeyValuePair_2_t775  (*) (List_1_t6053 *, Predicate_1_t6056 *, const MethodInfo*))List_1_Find_m31552_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31706(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6056 *, const MethodInfo*))List_1_CheckMatch_m31553_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31707(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6053 *, int32_t, int32_t, Predicate_1_t6056 *, const MethodInfo*))List_1_GetIndex_m31554_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator()
#define List_1_GetEnumerator_m31708(__this, method) (( Enumerator_t6057  (*) (List_1_t6053 *, const MethodInfo*))List_1_GetEnumerator_m31555_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31709(__this, ___index, ___count, method) (( List_1_t6053 * (*) (List_1_t6053 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m31556_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::IndexOf(T)
#define List_1_IndexOf_m31710(__this, ___item, method) (( int32_t (*) (List_1_t6053 *, KeyValuePair_2_t775 , const MethodInfo*))List_1_IndexOf_m31557_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31711(__this, ___start, ___delta, method) (( void (*) (List_1_t6053 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m31558_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31712(__this, ___index, method) (( void (*) (List_1_t6053 *, int32_t, const MethodInfo*))List_1_CheckIndex_m31559_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m31713(__this, ___index, ___item, method) (( void (*) (List_1_t6053 *, int32_t, KeyValuePair_2_t775 , const MethodInfo*))List_1_Insert_m31560_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31714(__this, ___collection, method) (( void (*) (List_1_t6053 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m31561_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31715(__this, ___index, ___collection, method) (( void (*) (List_1_t6053 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m31562_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31716(__this, ___index, ___collection, method) (( void (*) (List_1_t6053 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m31563_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31717(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6053 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m31564_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Remove(T)
#define List_1_Remove_m31718(__this, ___item, method) (( bool (*) (List_1_t6053 *, KeyValuePair_2_t775 , const MethodInfo*))List_1_Remove_m31565_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31719(__this, ___match, method) (( int32_t (*) (List_1_t6053 *, Predicate_1_t6056 *, const MethodInfo*))List_1_RemoveAll_m31566_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31720(__this, ___index, method) (( void (*) (List_1_t6053 *, int32_t, const MethodInfo*))List_1_RemoveAt_m31567_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31721(__this, ___index, ___count, method) (( void (*) (List_1_t6053 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m31568_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Reverse()
#define List_1_Reverse_m31722(__this, method) (( void (*) (List_1_t6053 *, const MethodInfo*))List_1_Reverse_m31569_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort()
#define List_1_Sort_m31723(__this, method) (( void (*) (List_1_t6053 *, const MethodInfo*))List_1_Sort_m31570_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31724(__this, ___comparer, method) (( void (*) (List_1_t6053 *, Object_t*, const MethodInfo*))List_1_Sort_m31571_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31725(__this, ___comparison, method) (( void (*) (List_1_t6053 *, Comparison_1_t6058 *, const MethodInfo*))List_1_Sort_m31572_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::ToArray()
#define List_1_ToArray_m31726(__this, method) (( KeyValuePair_2U5BU5D_t1410* (*) (List_1_t6053 *, const MethodInfo*))List_1_ToArray_m31573_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::TrimExcess()
#define List_1_TrimExcess_m31727(__this, method) (( void (*) (List_1_t6053 *, const MethodInfo*))List_1_TrimExcess_m31574_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Capacity()
#define List_1_get_Capacity_m31728(__this, method) (( int32_t (*) (List_1_t6053 *, const MethodInfo*))List_1_get_Capacity_m31575_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31729(__this, ___value, method) (( void (*) (List_1_t6053 *, int32_t, const MethodInfo*))List_1_set_Capacity_m31576_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count()
#define List_1_get_Count_m31730(__this, method) (( int32_t (*) (List_1_t6053 *, const MethodInfo*))List_1_get_Count_m31577_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m31731(__this, ___index, method) (( KeyValuePair_2_t775  (*) (List_1_t6053 *, int32_t, const MethodInfo*))List_1_get_Item_m31578_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m31732(__this, ___index, ___value, method) (( void (*) (List_1_t6053 *, int32_t, KeyValuePair_2_t775 , const MethodInfo*))List_1_set_Item_m31579_gshared)(__this, ___index, ___value, method)

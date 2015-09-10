#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseTrap>
struct List_1_t628;
// System.Object
struct Object_t;
// MouseTrap
struct MouseTrap_t551;
// System.Collections.Generic.IEnumerable`1<MouseTrap>
struct IEnumerable_1_t9568;
// MouseTrap[]
struct MouseTrapU5BU5D_t6301;
// System.Collections.Generic.IEnumerator`1<MouseTrap>
struct IEnumerator_1_t9569;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<MouseTrap>
struct ICollection_1_t9570;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseTrap>
struct ReadOnlyCollection_1_t6303;
// System.Predicate`1<MouseTrap>
struct Predicate_1_t6304;
// System.Collections.Generic.IComparer`1<MouseTrap>
struct IComparer_1_t9571;
// System.Comparison`1<MouseTrap>
struct Comparison_1_t6306;
// System.Collections.Generic.List`1/Enumerator<MouseTrap>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4486(__this, method) (( void (*) (List_1_t628 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31670(__this, ___collection, method) (( void (*) (List_1_t628 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Int32)
#define List_1__ctor_m31671(__this, ___capacity, method) (( void (*) (List_1_t628 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(T[],System.Int32)
#define List_1__ctor_m31672(__this, ___data, ___size, method) (( void (*) (List_1_t628 *, MouseTrapU5BU5D_t6301*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.cctor()
#define List_1__cctor_m31673(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31674(__this, method) (( Object_t* (*) (List_1_t628 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31675(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t628 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseTrap>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31676(__this, method) (( Object_t * (*) (List_1_t628 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31677(__this, ___item, method) (( int32_t (*) (List_1_t628 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31678(__this, ___item, method) (( bool (*) (List_1_t628 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31679(__this, ___item, method) (( int32_t (*) (List_1_t628 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31680(__this, ___index, ___item, method) (( void (*) (List_1_t628 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31681(__this, ___item, method) (( void (*) (List_1_t628 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31682(__this, method) (( bool (*) (List_1_t628 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31683(__this, method) (( bool (*) (List_1_t628 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31684(__this, method) (( Object_t * (*) (List_1_t628 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31685(__this, method) (( bool (*) (List_1_t628 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31686(__this, method) (( bool (*) (List_1_t628 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31687(__this, ___index, method) (( Object_t * (*) (List_1_t628 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31688(__this, ___index, ___value, method) (( void (*) (List_1_t628 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Add(T)
#define List_1_Add_m31689(__this, ___item, method) (( void (*) (List_1_t628 *, MouseTrap_t551 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31690(__this, ___newCount, method) (( void (*) (List_1_t628 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31691(__this, ___idx, ___count, method) (( void (*) (List_1_t628 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31692(__this, ___collection, method) (( void (*) (List_1_t628 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31693(__this, ___enumerable, method) (( void (*) (List_1_t628 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31694(__this, ___collection, method) (( void (*) (List_1_t628 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseTrap>::AsReadOnly()
#define List_1_AsReadOnly_m31695(__this, method) (( ReadOnlyCollection_1_t6303 * (*) (List_1_t628 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Clear()
#define List_1_Clear_m31696(__this, method) (( void (*) (List_1_t628 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Contains(T)
#define List_1_Contains_m31697(__this, ___item, method) (( bool (*) (List_1_t628 *, MouseTrap_t551 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31698(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t628 *, MouseTrapU5BU5D_t6301*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseTrap>::Find(System.Predicate`1<T>)
#define List_1_Find_m31699(__this, ___match, method) (( MouseTrap_t551 * (*) (List_1_t628 *, Predicate_1_t6304 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31700(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6304 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31701(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t628 *, int32_t, int32_t, Predicate_1_t6304 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseTrap>::GetEnumerator()
#define List_1_GetEnumerator_m31702(__this, method) (( Enumerator_t6305  (*) (List_1_t628 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<MouseTrap>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31703(__this, ___index, ___count, method) (( List_1_t628 * (*) (List_1_t628 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::IndexOf(T)
#define List_1_IndexOf_m31704(__this, ___item, method) (( int32_t (*) (List_1_t628 *, MouseTrap_t551 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31705(__this, ___start, ___delta, method) (( void (*) (List_1_t628 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31706(__this, ___index, method) (( void (*) (List_1_t628 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Insert(System.Int32,T)
#define List_1_Insert_m31707(__this, ___index, ___item, method) (( void (*) (List_1_t628 *, int32_t, MouseTrap_t551 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31708(__this, ___collection, method) (( void (*) (List_1_t628 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31709(__this, ___index, ___collection, method) (( void (*) (List_1_t628 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31710(__this, ___index, ___collection, method) (( void (*) (List_1_t628 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31711(__this, ___index, ___enumerable, method) (( void (*) (List_1_t628 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Remove(T)
#define List_1_Remove_m31712(__this, ___item, method) (( bool (*) (List_1_t628 *, MouseTrap_t551 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31713(__this, ___match, method) (( int32_t (*) (List_1_t628 *, Predicate_1_t6304 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31714(__this, ___index, method) (( void (*) (List_1_t628 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31715(__this, ___index, ___count, method) (( void (*) (List_1_t628 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Reverse()
#define List_1_Reverse_m31716(__this, method) (( void (*) (List_1_t628 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort()
#define List_1_Sort_m31717(__this, method) (( void (*) (List_1_t628 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31718(__this, ___comparer, method) (( void (*) (List_1_t628 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31719(__this, ___comparison, method) (( void (*) (List_1_t628 *, Comparison_1_t6306 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseTrap>::ToArray()
#define List_1_ToArray_m31720(__this, method) (( MouseTrapU5BU5D_t6301* (*) (List_1_t628 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::TrimExcess()
#define List_1_TrimExcess_m31721(__this, method) (( void (*) (List_1_t628 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Capacity()
#define List_1_get_Capacity_m31722(__this, method) (( int32_t (*) (List_1_t628 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31723(__this, ___value, method) (( void (*) (List_1_t628 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count()
#define List_1_get_Count_m31724(__this, method) (( int32_t (*) (List_1_t628 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32)
#define List_1_get_Item_m31725(__this, ___index, method) (( MouseTrap_t551 * (*) (List_1_t628 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Item(System.Int32,T)
#define List_1_set_Item_m31726(__this, ___index, ___value, method) (( void (*) (List_1_t628 *, int32_t, MouseTrap_t551 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)

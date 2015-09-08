#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseTrap>
struct List_1_t606;
// System.Object
struct Object_t;
// MouseTrap
struct MouseTrap_t610;
// System.Collections.Generic.IEnumerable`1<MouseTrap>
struct IEnumerable_1_t9565;
// MouseTrap[]
struct MouseTrapU5BU5D_t6305;
// System.Collections.Generic.IEnumerator`1<MouseTrap>
struct IEnumerator_1_t9566;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<MouseTrap>
struct ICollection_1_t9567;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseTrap>
struct ReadOnlyCollection_1_t6307;
// System.Predicate`1<MouseTrap>
struct Predicate_1_t6308;
// System.Collections.Generic.IComparer`1<MouseTrap>
struct IComparer_1_t9568;
// System.Comparison`1<MouseTrap>
struct Comparison_1_t6310;
// System.Collections.Generic.List`1/Enumerator<MouseTrap>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4439(__this, method) (( void (*) (List_1_t606 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31860(__this, ___collection, method) (( void (*) (List_1_t606 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Int32)
#define List_1__ctor_m31861(__this, ___capacity, method) (( void (*) (List_1_t606 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(T[],System.Int32)
#define List_1__ctor_m31862(__this, ___data, ___size, method) (( void (*) (List_1_t606 *, MouseTrapU5BU5D_t6305*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.cctor()
#define List_1__cctor_m31863(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31864(__this, method) (( Object_t* (*) (List_1_t606 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31865(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t606 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseTrap>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31866(__this, method) (( Object_t * (*) (List_1_t606 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31867(__this, ___item, method) (( int32_t (*) (List_1_t606 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31868(__this, ___item, method) (( bool (*) (List_1_t606 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31869(__this, ___item, method) (( int32_t (*) (List_1_t606 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31870(__this, ___index, ___item, method) (( void (*) (List_1_t606 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31871(__this, ___item, method) (( void (*) (List_1_t606 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31872(__this, method) (( bool (*) (List_1_t606 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31873(__this, method) (( bool (*) (List_1_t606 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31874(__this, method) (( Object_t * (*) (List_1_t606 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31875(__this, method) (( bool (*) (List_1_t606 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31876(__this, method) (( bool (*) (List_1_t606 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31877(__this, ___index, method) (( Object_t * (*) (List_1_t606 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31878(__this, ___index, ___value, method) (( void (*) (List_1_t606 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Add(T)
#define List_1_Add_m31879(__this, ___item, method) (( void (*) (List_1_t606 *, MouseTrap_t610 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31880(__this, ___newCount, method) (( void (*) (List_1_t606 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31881(__this, ___idx, ___count, method) (( void (*) (List_1_t606 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31882(__this, ___collection, method) (( void (*) (List_1_t606 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31883(__this, ___enumerable, method) (( void (*) (List_1_t606 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31884(__this, ___collection, method) (( void (*) (List_1_t606 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseTrap>::AsReadOnly()
#define List_1_AsReadOnly_m31885(__this, method) (( ReadOnlyCollection_1_t6307 * (*) (List_1_t606 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Clear()
#define List_1_Clear_m31886(__this, method) (( void (*) (List_1_t606 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Contains(T)
#define List_1_Contains_m31887(__this, ___item, method) (( bool (*) (List_1_t606 *, MouseTrap_t610 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31888(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t606 *, MouseTrapU5BU5D_t6305*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseTrap>::Find(System.Predicate`1<T>)
#define List_1_Find_m31889(__this, ___match, method) (( MouseTrap_t610 * (*) (List_1_t606 *, Predicate_1_t6308 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31890(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6308 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31891(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t606 *, int32_t, int32_t, Predicate_1_t6308 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseTrap>::GetEnumerator()
#define List_1_GetEnumerator_m31892(__this, method) (( Enumerator_t6309  (*) (List_1_t606 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<MouseTrap>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31893(__this, ___index, ___count, method) (( List_1_t606 * (*) (List_1_t606 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::IndexOf(T)
#define List_1_IndexOf_m31894(__this, ___item, method) (( int32_t (*) (List_1_t606 *, MouseTrap_t610 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31895(__this, ___start, ___delta, method) (( void (*) (List_1_t606 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31896(__this, ___index, method) (( void (*) (List_1_t606 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Insert(System.Int32,T)
#define List_1_Insert_m31897(__this, ___index, ___item, method) (( void (*) (List_1_t606 *, int32_t, MouseTrap_t610 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31898(__this, ___collection, method) (( void (*) (List_1_t606 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31899(__this, ___index, ___collection, method) (( void (*) (List_1_t606 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31900(__this, ___index, ___collection, method) (( void (*) (List_1_t606 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31901(__this, ___index, ___enumerable, method) (( void (*) (List_1_t606 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Remove(T)
#define List_1_Remove_m31902(__this, ___item, method) (( bool (*) (List_1_t606 *, MouseTrap_t610 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31903(__this, ___match, method) (( int32_t (*) (List_1_t606 *, Predicate_1_t6308 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31904(__this, ___index, method) (( void (*) (List_1_t606 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31905(__this, ___index, ___count, method) (( void (*) (List_1_t606 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Reverse()
#define List_1_Reverse_m31906(__this, method) (( void (*) (List_1_t606 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort()
#define List_1_Sort_m31907(__this, method) (( void (*) (List_1_t606 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31908(__this, ___comparer, method) (( void (*) (List_1_t606 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31909(__this, ___comparison, method) (( void (*) (List_1_t606 *, Comparison_1_t6310 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseTrap>::ToArray()
#define List_1_ToArray_m31910(__this, method) (( MouseTrapU5BU5D_t6305* (*) (List_1_t606 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::TrimExcess()
#define List_1_TrimExcess_m31911(__this, method) (( void (*) (List_1_t606 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Capacity()
#define List_1_get_Capacity_m31912(__this, method) (( int32_t (*) (List_1_t606 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31913(__this, ___value, method) (( void (*) (List_1_t606 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count()
#define List_1_get_Count_m31914(__this, method) (( int32_t (*) (List_1_t606 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32)
#define List_1_get_Item_m31915(__this, ___index, method) (( MouseTrap_t610 * (*) (List_1_t606 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Item(System.Int32,T)
#define List_1_set_Item_m31916(__this, ___index, ___value, method) (( void (*) (List_1_t606 *, int32_t, MouseTrap_t610 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseTrap>
struct List_1_t605;
// System.Object
struct Object_t;
// MouseTrap
struct MouseTrap_t609;
// System.Collections.Generic.IEnumerable`1<MouseTrap>
struct IEnumerable_1_t8977;
// MouseTrap[]
struct MouseTrapU5BU5D_t5771;
// System.Collections.Generic.IEnumerator`1<MouseTrap>
struct IEnumerator_1_t8978;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<MouseTrap>
struct ICollection_1_t8979;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseTrap>
struct ReadOnlyCollection_1_t5773;
// System.Predicate`1<MouseTrap>
struct Predicate_1_t5774;
// System.Collections.Generic.IComparer`1<MouseTrap>
struct IComparer_1_t8980;
// System.Comparison`1<MouseTrap>
struct Comparison_1_t5776;
// System.Collections.Generic.List`1/Enumerator<MouseTrap>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4424(__this, method) (( void (*) (List_1_t605 *, const MethodInfo*))List_1__ctor_m3858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27630(__this, ___collection, method) (( void (*) (List_1_t605 *, Object_t*, const MethodInfo*))List_1__ctor_m7623_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(System.Int32)
#define List_1__ctor_m27631(__this, ___capacity, method) (( void (*) (List_1_t605 *, int32_t, const MethodInfo*))List_1__ctor_m21718_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.ctor(T[],System.Int32)
#define List_1__ctor_m27632(__this, ___data, ___size, method) (( void (*) (List_1_t605 *, MouseTrapU5BU5D_t5771*, int32_t, const MethodInfo*))List_1__ctor_m21720_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::.cctor()
#define List_1__cctor_m27633(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21722_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27634(__this, method) (( Object_t* (*) (List_1_t605 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27635(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t605 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10496_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseTrap>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27636(__this, method) (( Object_t * (*) (List_1_t605 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27637(__this, ___item, method) (( int32_t (*) (List_1_t605 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27638(__this, ___item, method) (( bool (*) (List_1_t605 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10503_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27639(__this, ___item, method) (( int32_t (*) (List_1_t605 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10504_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27640(__this, ___index, ___item, method) (( void (*) (List_1_t605 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10505_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27641(__this, ___item, method) (( void (*) (List_1_t605 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10506_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27642(__this, method) (( bool (*) (List_1_t605 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27643(__this, method) (( bool (*) (List_1_t605 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10494_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27644(__this, method) (( Object_t * (*) (List_1_t605 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27645(__this, method) (( bool (*) (List_1_t605 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27646(__this, method) (( bool (*) (List_1_t605 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10498_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27647(__this, ___index, method) (( Object_t * (*) (List_1_t605 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27648(__this, ___index, ___value, method) (( void (*) (List_1_t605 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10500_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Add(T)
#define List_1_Add_m27649(__this, ___item, method) (( void (*) (List_1_t605 *, MouseTrap_t609 *, const MethodInfo*))List_1_Add_m10509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27650(__this, ___newCount, method) (( void (*) (List_1_t605 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21740_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27651(__this, ___idx, ___count, method) (( void (*) (List_1_t605 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21742_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27652(__this, ___collection, method) (( void (*) (List_1_t605 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21744_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27653(__this, ___enumerable, method) (( void (*) (List_1_t605 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21746_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27654(__this, ___collection, method) (( void (*) (List_1_t605 *, Object_t*, const MethodInfo*))List_1_AddRange_m21748_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseTrap>::AsReadOnly()
#define List_1_AsReadOnly_m27655(__this, method) (( ReadOnlyCollection_1_t5773 * (*) (List_1_t605 *, const MethodInfo*))List_1_AsReadOnly_m21750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Clear()
#define List_1_Clear_m27656(__this, method) (( void (*) (List_1_t605 *, const MethodInfo*))List_1_Clear_m10502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Contains(T)
#define List_1_Contains_m27657(__this, ___item, method) (( bool (*) (List_1_t605 *, MouseTrap_t609 *, const MethodInfo*))List_1_Contains_m10510_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27658(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t605 *, MouseTrapU5BU5D_t5771*, int32_t, const MethodInfo*))List_1_CopyTo_m10511_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseTrap>::Find(System.Predicate`1<T>)
#define List_1_Find_m27659(__this, ___match, method) (( MouseTrap_t609 * (*) (List_1_t605 *, Predicate_1_t5774 *, const MethodInfo*))List_1_Find_m21755_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27660(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5774 *, const MethodInfo*))List_1_CheckMatch_m21757_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27661(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t605 *, int32_t, int32_t, Predicate_1_t5774 *, const MethodInfo*))List_1_GetIndex_m21759_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseTrap>::GetEnumerator()
#define List_1_GetEnumerator_m27662(__this, method) (( Enumerator_t5775  (*) (List_1_t605 *, const MethodInfo*))List_1_GetEnumerator_m4014_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<MouseTrap>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27663(__this, ___index, ___count, method) (( List_1_t605 * (*) (List_1_t605 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21761_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::IndexOf(T)
#define List_1_IndexOf_m27664(__this, ___item, method) (( int32_t (*) (List_1_t605 *, MouseTrap_t609 *, const MethodInfo*))List_1_IndexOf_m10514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27665(__this, ___start, ___delta, method) (( void (*) (List_1_t605 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21764_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27666(__this, ___index, method) (( void (*) (List_1_t605 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Insert(System.Int32,T)
#define List_1_Insert_m27667(__this, ___index, ___item, method) (( void (*) (List_1_t605 *, int32_t, MouseTrap_t609 *, const MethodInfo*))List_1_Insert_m10515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27668(__this, ___collection, method) (( void (*) (List_1_t605 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21769_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27669(__this, ___index, ___collection, method) (( void (*) (List_1_t605 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27670(__this, ___index, ___collection, method) (( void (*) (List_1_t605 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21773_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27671(__this, ___index, ___enumerable, method) (( void (*) (List_1_t605 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21775_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<MouseTrap>::Remove(T)
#define List_1_Remove_m27672(__this, ___item, method) (( bool (*) (List_1_t605 *, MouseTrap_t609 *, const MethodInfo*))List_1_Remove_m10512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27673(__this, ___match, method) (( int32_t (*) (List_1_t605 *, Predicate_1_t5774 *, const MethodInfo*))List_1_RemoveAll_m21778_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27674(__this, ___index, method) (( void (*) (List_1_t605 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27675(__this, ___index, ___count, method) (( void (*) (List_1_t605 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21781_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Reverse()
#define List_1_Reverse_m27676(__this, method) (( void (*) (List_1_t605 *, const MethodInfo*))List_1_Reverse_m21783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort()
#define List_1_Sort_m27677(__this, method) (( void (*) (List_1_t605 *, const MethodInfo*))List_1_Sort_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27678(__this, ___comparer, method) (( void (*) (List_1_t605 *, Object_t*, const MethodInfo*))List_1_Sort_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27679(__this, ___comparison, method) (( void (*) (List_1_t605 *, Comparison_1_t5776 *, const MethodInfo*))List_1_Sort_m21789_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseTrap>::ToArray()
#define List_1_ToArray_m27680(__this, method) (( MouseTrapU5BU5D_t5771* (*) (List_1_t605 *, const MethodInfo*))List_1_ToArray_m21791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::TrimExcess()
#define List_1_TrimExcess_m27681(__this, method) (( void (*) (List_1_t605 *, const MethodInfo*))List_1_TrimExcess_m21793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Capacity()
#define List_1_get_Capacity_m27682(__this, method) (( int32_t (*) (List_1_t605 *, const MethodInfo*))List_1_get_Capacity_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27683(__this, ___value, method) (( void (*) (List_1_t605 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21797_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseTrap>::get_Count()
#define List_1_get_Count_m27684(__this, method) (( int32_t (*) (List_1_t605 *, const MethodInfo*))List_1_get_Count_m10493_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseTrap>::get_Item(System.Int32)
#define List_1_get_Item_m27685(__this, ___index, method) (( MouseTrap_t609 * (*) (List_1_t605 *, int32_t, const MethodInfo*))List_1_get_Item_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseTrap>::set_Item(System.Int32,T)
#define List_1_set_Item_m27686(__this, ___index, ___value, method) (( void (*) (List_1_t605 *, int32_t, MouseTrap_t609 *, const MethodInfo*))List_1_set_Item_m10517_gshared)(__this, ___index, ___value, method)

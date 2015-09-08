#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t6597;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2245;
// System.Collections.Generic.IEnumerable`1<System.WeakReference>
struct IEnumerable_1_t9716;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t6596;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t9717;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.WeakReference>
struct ICollection_1_t9718;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>
struct ReadOnlyCollection_1_t6598;
// System.Predicate`1<System.WeakReference>
struct Predicate_1_t6599;
// System.Collections.Generic.IComparer`1<System.WeakReference>
struct IComparer_1_t9719;
// System.Comparison`1<System.WeakReference>
struct Comparison_1_t6601;
// System.Collections.Generic.List`1/Enumerator<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54.h"

// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m35937(__this, method) (( void (*) (List_1_t6597 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m35938(__this, ___collection, method) (( void (*) (List_1_t6597 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Int32)
#define List_1__ctor_m35939(__this, ___capacity, method) (( void (*) (List_1_t6597 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(T[],System.Int32)
#define List_1__ctor_m35940(__this, ___data, ___size, method) (( void (*) (List_1_t6597 *, WeakReferenceU5BU5D_t6596*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.cctor()
#define List_1__cctor_m35941(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35942(__this, method) (( Object_t* (*) (List_1_t6597 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m35943(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6597 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m35944(__this, method) (( Object_t * (*) (List_1_t6597 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m35945(__this, ___item, method) (( int32_t (*) (List_1_t6597 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m35946(__this, ___item, method) (( bool (*) (List_1_t6597 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m35947(__this, ___item, method) (( int32_t (*) (List_1_t6597 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m35948(__this, ___index, ___item, method) (( void (*) (List_1_t6597 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m35949(__this, ___item, method) (( void (*) (List_1_t6597 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35950(__this, method) (( bool (*) (List_1_t6597 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m35951(__this, method) (( bool (*) (List_1_t6597 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m35952(__this, method) (( Object_t * (*) (List_1_t6597 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m35953(__this, method) (( bool (*) (List_1_t6597 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m35954(__this, method) (( bool (*) (List_1_t6597 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m35955(__this, ___index, method) (( Object_t * (*) (List_1_t6597 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m35956(__this, ___index, ___value, method) (( void (*) (List_1_t6597 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(T)
#define List_1_Add_m35957(__this, ___item, method) (( void (*) (List_1_t6597 *, WeakReference_t2245 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m35958(__this, ___newCount, method) (( void (*) (List_1_t6597 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m35959(__this, ___idx, ___count, method) (( void (*) (List_1_t6597 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m35960(__this, ___collection, method) (( void (*) (List_1_t6597 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m35961(__this, ___enumerable, method) (( void (*) (List_1_t6597 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m35962(__this, ___collection, method) (( void (*) (List_1_t6597 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.WeakReference>::AsReadOnly()
#define List_1_AsReadOnly_m35963(__this, method) (( ReadOnlyCollection_1_t6598 * (*) (List_1_t6597 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Clear()
#define List_1_Clear_m35964(__this, method) (( void (*) (List_1_t6597 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Contains(T)
#define List_1_Contains_m35965(__this, ___item, method) (( bool (*) (List_1_t6597 *, WeakReference_t2245 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m35966(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6597 *, WeakReferenceU5BU5D_t6596*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.WeakReference>::Find(System.Predicate`1<T>)
#define List_1_Find_m35967(__this, ___match, method) (( WeakReference_t2245 * (*) (List_1_t6597 *, Predicate_1_t6599 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m35968(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6599 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m35969(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6597 *, int32_t, int32_t, Predicate_1_t6599 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
#define List_1_GetEnumerator_m35970(__this, method) (( Enumerator_t6600  (*) (List_1_t6597 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m35971(__this, ___index, ___count, method) (( List_1_t6597 * (*) (List_1_t6597 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::IndexOf(T)
#define List_1_IndexOf_m35972(__this, ___item, method) (( int32_t (*) (List_1_t6597 *, WeakReference_t2245 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m35973(__this, ___start, ___delta, method) (( void (*) (List_1_t6597 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m35974(__this, ___index, method) (( void (*) (List_1_t6597 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Insert(System.Int32,T)
#define List_1_Insert_m35975(__this, ___index, ___item, method) (( void (*) (List_1_t6597 *, int32_t, WeakReference_t2245 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m35976(__this, ___collection, method) (( void (*) (List_1_t6597 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m35977(__this, ___index, ___collection, method) (( void (*) (List_1_t6597 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m35978(__this, ___index, ___collection, method) (( void (*) (List_1_t6597 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m35979(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6597 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(T)
#define List_1_Remove_m35980(__this, ___item, method) (( bool (*) (List_1_t6597 *, WeakReference_t2245 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m35981(__this, ___match, method) (( int32_t (*) (List_1_t6597 *, Predicate_1_t6599 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m35982(__this, ___index, method) (( void (*) (List_1_t6597 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m35983(__this, ___index, ___count, method) (( void (*) (List_1_t6597 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Reverse()
#define List_1_Reverse_m35984(__this, method) (( void (*) (List_1_t6597 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort()
#define List_1_Sort_m35985(__this, method) (( void (*) (List_1_t6597 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m35986(__this, ___comparer, method) (( void (*) (List_1_t6597 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m35987(__this, ___comparison, method) (( void (*) (List_1_t6597 *, Comparison_1_t6601 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.WeakReference>::ToArray()
#define List_1_ToArray_m35988(__this, method) (( WeakReferenceU5BU5D_t6596* (*) (List_1_t6597 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::TrimExcess()
#define List_1_TrimExcess_m35989(__this, method) (( void (*) (List_1_t6597 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Capacity()
#define List_1_get_Capacity_m35990(__this, method) (( int32_t (*) (List_1_t6597 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m35991(__this, ___value, method) (( void (*) (List_1_t6597 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Count()
#define List_1_get_Count_m35992(__this, method) (( int32_t (*) (List_1_t6597 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.WeakReference>::get_Item(System.Int32)
#define List_1_get_Item_m35993(__this, ___index, method) (( WeakReference_t2245 * (*) (List_1_t6597 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Item(System.Int32,T)
#define List_1_set_Item_m35994(__this, ___index, ___value, method) (( void (*) (List_1_t6597 *, int32_t, WeakReference_t2245 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)

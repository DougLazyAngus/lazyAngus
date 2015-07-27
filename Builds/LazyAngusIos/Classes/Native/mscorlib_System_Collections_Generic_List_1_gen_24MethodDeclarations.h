#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t932;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEventSystemHandler
struct IEventSystemHandler_t998;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerable_1_t4452;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerator_1_t4453;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ICollection_1_t4454;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ReadOnlyCollection_1_t3709;
// UnityEngine.EventSystems.IEventSystemHandler[]
struct IEventSystemHandlerU5BU5D_t3708;
// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Predicate_1_t3710;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IComparer_1_t4455;
// System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Comparison_1_t3712;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m22898(__this, method) (( void (*) (List_1_t932 *, const MethodInfo*))List_1__ctor_m3123_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m22899(__this, ___collection, method) (( void (*) (List_1_t932 *, Object_t*, const MethodInfo*))List_1__ctor_m17404_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Int32)
#define List_1__ctor_m22900(__this, ___capacity, method) (( void (*) (List_1_t932 *, int32_t, const MethodInfo*))List_1__ctor_m17406_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
#define List_1__cctor_m22901(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17408_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22902(__this, method) (( Object_t* (*) (List_1_t932 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m22903(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t932 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22904(__this, method) (( Object_t * (*) (List_1_t932 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m22905(__this, ___item, method) (( int32_t (*) (List_1_t932 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7418_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m22906(__this, ___item, method) (( bool (*) (List_1_t932 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7420_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m22907(__this, ___item, method) (( int32_t (*) (List_1_t932 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m22908(__this, ___index, ___item, method) (( void (*) (List_1_t932 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7422_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m22909(__this, ___item, method) (( void (*) (List_1_t932 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7423_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22910(__this, method) (( bool (*) (List_1_t932 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22911(__this, method) (( bool (*) (List_1_t932 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m22912(__this, method) (( Object_t * (*) (List_1_t932 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m22913(__this, method) (( bool (*) (List_1_t932 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m22914(__this, method) (( bool (*) (List_1_t932 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7415_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m22915(__this, ___index, method) (( Object_t * (*) (List_1_t932 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7416_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m22916(__this, ___index, ___value, method) (( void (*) (List_1_t932 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7417_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
#define List_1_Add_m22917(__this, ___item, method) (( void (*) (List_1_t932 *, Object_t *, const MethodInfo*))List_1_Add_m7426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m22918(__this, ___newCount, method) (( void (*) (List_1_t932 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17426_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m22919(__this, ___collection, method) (( void (*) (List_1_t932 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m22920(__this, ___enumerable, method) (( void (*) (List_1_t932 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17430_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m22921(__this, ___collection, method) (( void (*) (List_1_t932 *, Object_t*, const MethodInfo*))List_1_AddRange_m17432_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AsReadOnly()
#define List_1_AsReadOnly_m22922(__this, method) (( ReadOnlyCollection_1_t3709 * (*) (List_1_t932 *, const MethodInfo*))List_1_AsReadOnly_m17434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
#define List_1_Clear_m22923(__this, method) (( void (*) (List_1_t932 *, const MethodInfo*))List_1_Clear_m7419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
#define List_1_Contains_m22924(__this, ___item, method) (( bool (*) (List_1_t932 *, Object_t *, const MethodInfo*))List_1_Contains_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m22925(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t932 *, IEventSystemHandlerU5BU5D_t3708*, int32_t, const MethodInfo*))List_1_CopyTo_m7428_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m22926(__this, ___match, method) (( Object_t * (*) (List_1_t932 *, Predicate_1_t3710 *, const MethodInfo*))List_1_Find_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m22927(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3710 *, const MethodInfo*))List_1_CheckMatch_m17441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m22928(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t932 *, int32_t, int32_t, Predicate_1_t3710 *, const MethodInfo*))List_1_GetIndex_m17443_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
#define List_1_GetEnumerator_m22929(__this, method) (( Enumerator_t3711  (*) (List_1_t932 *, const MethodInfo*))List_1_GetEnumerator_m3281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
#define List_1_IndexOf_m22930(__this, ___item, method) (( int32_t (*) (List_1_t932 *, Object_t *, const MethodInfo*))List_1_IndexOf_m7431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m22931(__this, ___start, ___delta, method) (( void (*) (List_1_t932 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17446_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m22932(__this, ___index, method) (( void (*) (List_1_t932 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
#define List_1_Insert_m22933(__this, ___index, ___item, method) (( void (*) (List_1_t932 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m7432_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m22934(__this, ___collection, method) (( void (*) (List_1_t932 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17451_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
#define List_1_Remove_m22935(__this, ___item, method) (( bool (*) (List_1_t932 *, Object_t *, const MethodInfo*))List_1_Remove_m7429_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m22936(__this, ___match, method) (( int32_t (*) (List_1_t932 *, Predicate_1_t3710 *, const MethodInfo*))List_1_RemoveAll_m17454_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m22937(__this, ___index, method) (( void (*) (List_1_t932 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7424_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Reverse()
#define List_1_Reverse_m22938(__this, method) (( void (*) (List_1_t932 *, const MethodInfo*))List_1_Reverse_m17457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort()
#define List_1_Sort_m22939(__this, method) (( void (*) (List_1_t932 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m22940(__this, ___comparer, method) (( void (*) (List_1_t932 *, Object_t*, const MethodInfo*))List_1_Sort_m17461_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m22941(__this, ___comparison, method) (( void (*) (List_1_t932 *, Comparison_1_t3712 *, const MethodInfo*))List_1_Sort_m17463_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::ToArray()
#define List_1_ToArray_m22942(__this, method) (( IEventSystemHandlerU5BU5D_t3708* (*) (List_1_t932 *, const MethodInfo*))List_1_ToArray_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::TrimExcess()
#define List_1_TrimExcess_m22943(__this, method) (( void (*) (List_1_t932 *, const MethodInfo*))List_1_TrimExcess_m17467_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Capacity()
#define List_1_get_Capacity_m22944(__this, method) (( int32_t (*) (List_1_t932 *, const MethodInfo*))List_1_get_Capacity_m17469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m22945(__this, ___value, method) (( void (*) (List_1_t932 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
#define List_1_get_Count_m22946(__this, method) (( int32_t (*) (List_1_t932 *, const MethodInfo*))List_1_get_Count_m7410_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
#define List_1_get_Item_m22947(__this, ___index, method) (( Object_t * (*) (List_1_t932 *, int32_t, const MethodInfo*))List_1_get_Item_m7433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m22948(__this, ___index, ___value, method) (( void (*) (List_1_t932 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m7434_gshared)(__this, ___index, ___value, method)

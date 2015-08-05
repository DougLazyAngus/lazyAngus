#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t983;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEventSystemHandler
struct IEventSystemHandler_t1049;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerable_1_t8856;
// UnityEngine.EventSystems.IEventSystemHandler[]
struct IEventSystemHandlerU5BU5D_t5689;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerator_1_t8857;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ICollection_1_t8858;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ReadOnlyCollection_1_t5690;
// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Predicate_1_t5691;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IComparer_1_t8859;
// System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Comparison_1_t5693;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m26934(__this, method) (( void (*) (List_1_t983 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26935(__this, ___collection, method) (( void (*) (List_1_t983 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Int32)
#define List_1__ctor_m26936(__this, ___capacity, method) (( void (*) (List_1_t983 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(T[],System.Int32)
#define List_1__ctor_m26937(__this, ___data, ___size, method) (( void (*) (List_1_t983 *, IEventSystemHandlerU5BU5D_t5689*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
#define List_1__cctor_m26938(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26939(__this, method) (( Object_t* (*) (List_1_t983 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26940(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t983 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26941(__this, method) (( Object_t * (*) (List_1_t983 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26942(__this, ___item, method) (( int32_t (*) (List_1_t983 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26943(__this, ___item, method) (( bool (*) (List_1_t983 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26944(__this, ___item, method) (( int32_t (*) (List_1_t983 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26945(__this, ___index, ___item, method) (( void (*) (List_1_t983 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26946(__this, ___item, method) (( void (*) (List_1_t983 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26947(__this, method) (( bool (*) (List_1_t983 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26948(__this, method) (( bool (*) (List_1_t983 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26949(__this, method) (( Object_t * (*) (List_1_t983 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26950(__this, method) (( bool (*) (List_1_t983 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26951(__this, method) (( bool (*) (List_1_t983 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26952(__this, ___index, method) (( Object_t * (*) (List_1_t983 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26953(__this, ___index, ___value, method) (( void (*) (List_1_t983 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
#define List_1_Add_m26954(__this, ___item, method) (( void (*) (List_1_t983 *, Object_t *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26955(__this, ___newCount, method) (( void (*) (List_1_t983 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26956(__this, ___idx, ___count, method) (( void (*) (List_1_t983 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26957(__this, ___collection, method) (( void (*) (List_1_t983 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26958(__this, ___enumerable, method) (( void (*) (List_1_t983 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26959(__this, ___collection, method) (( void (*) (List_1_t983 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AsReadOnly()
#define List_1_AsReadOnly_m26960(__this, method) (( ReadOnlyCollection_1_t5690 * (*) (List_1_t983 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
#define List_1_Clear_m26961(__this, method) (( void (*) (List_1_t983 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
#define List_1_Contains_m26962(__this, ___item, method) (( bool (*) (List_1_t983 *, Object_t *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26963(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t983 *, IEventSystemHandlerU5BU5D_t5689*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m26964(__this, ___match, method) (( Object_t * (*) (List_1_t983 *, Predicate_1_t5691 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26965(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5691 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26966(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t983 *, int32_t, int32_t, Predicate_1_t5691 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
#define List_1_GetEnumerator_m26967(__this, method) (( Enumerator_t5692  (*) (List_1_t983 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26968(__this, ___index, ___count, method) (( List_1_t983 * (*) (List_1_t983 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
#define List_1_IndexOf_m26969(__this, ___item, method) (( int32_t (*) (List_1_t983 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26970(__this, ___start, ___delta, method) (( void (*) (List_1_t983 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26971(__this, ___index, method) (( void (*) (List_1_t983 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
#define List_1_Insert_m26972(__this, ___index, ___item, method) (( void (*) (List_1_t983 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26973(__this, ___collection, method) (( void (*) (List_1_t983 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26974(__this, ___index, ___collection, method) (( void (*) (List_1_t983 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26975(__this, ___index, ___collection, method) (( void (*) (List_1_t983 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26976(__this, ___index, ___enumerable, method) (( void (*) (List_1_t983 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
#define List_1_Remove_m26977(__this, ___item, method) (( bool (*) (List_1_t983 *, Object_t *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26978(__this, ___match, method) (( int32_t (*) (List_1_t983 *, Predicate_1_t5691 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26979(__this, ___index, method) (( void (*) (List_1_t983 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26980(__this, ___index, ___count, method) (( void (*) (List_1_t983 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Reverse()
#define List_1_Reverse_m26981(__this, method) (( void (*) (List_1_t983 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort()
#define List_1_Sort_m26982(__this, method) (( void (*) (List_1_t983 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26983(__this, ___comparer, method) (( void (*) (List_1_t983 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26984(__this, ___comparison, method) (( void (*) (List_1_t983 *, Comparison_1_t5693 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::ToArray()
#define List_1_ToArray_m26985(__this, method) (( IEventSystemHandlerU5BU5D_t5689* (*) (List_1_t983 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::TrimExcess()
#define List_1_TrimExcess_m26986(__this, method) (( void (*) (List_1_t983 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Capacity()
#define List_1_get_Capacity_m26987(__this, method) (( int32_t (*) (List_1_t983 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26988(__this, ___value, method) (( void (*) (List_1_t983 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
#define List_1_get_Count_m26989(__this, method) (( int32_t (*) (List_1_t983 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
#define List_1_get_Item_m26990(__this, ___index, method) (( Object_t * (*) (List_1_t983 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m26991(__this, ___index, ___value, method) (( void (*) (List_1_t983 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t902;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t904;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerable_1_t9607;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t6372;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerator_1_t9608;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ICollection_1_t9609;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ReadOnlyCollection_1_t6374;
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t6375;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseRaycaster>
struct IComparer_1_t9610;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
struct Comparison_1_t6377;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_39.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6033(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m32778(__this, ___collection, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
#define List_1__ctor_m32779(__this, ___capacity, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(T[],System.Int32)
#define List_1__ctor_m32780(__this, ___data, ___size, method) (( void (*) (List_1_t902 *, BaseRaycasterU5BU5D_t6372*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
#define List_1__cctor_m32781(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32782(__this, method) (( Object_t* (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m32783(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t902 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32784(__this, method) (( Object_t * (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m32785(__this, ___item, method) (( int32_t (*) (List_1_t902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m32786(__this, ___item, method) (( bool (*) (List_1_t902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m32787(__this, ___item, method) (( int32_t (*) (List_1_t902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m32788(__this, ___index, ___item, method) (( void (*) (List_1_t902 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m32789(__this, ___item, method) (( void (*) (List_1_t902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32790(__this, method) (( bool (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32791(__this, method) (( bool (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m32792(__this, method) (( Object_t * (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m32793(__this, method) (( bool (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m32794(__this, method) (( bool (*) (List_1_t902 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m32795(__this, ___index, method) (( Object_t * (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m32796(__this, ___index, ___value, method) (( void (*) (List_1_t902 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
#define List_1_Add_m32797(__this, ___item, method) (( void (*) (List_1_t902 *, BaseRaycaster_t904 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m32798(__this, ___newCount, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m32799(__this, ___idx, ___count, method) (( void (*) (List_1_t902 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m32800(__this, ___collection, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m32801(__this, ___enumerable, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m32802(__this, ___collection, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
#define List_1_AsReadOnly_m32803(__this, method) (( ReadOnlyCollection_1_t6374 * (*) (List_1_t902 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
#define List_1_Clear_m32804(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
#define List_1_Contains_m32805(__this, ___item, method) (( bool (*) (List_1_t902 *, BaseRaycaster_t904 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m32806(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t902 *, BaseRaycasterU5BU5D_t6372*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
#define List_1_Find_m32807(__this, ___match, method) (( BaseRaycaster_t904 * (*) (List_1_t902 *, Predicate_1_t6375 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m32808(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6375 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m32809(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t902 *, int32_t, int32_t, Predicate_1_t6375 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
#define List_1_GetEnumerator_m32810(__this, method) (( Enumerator_t6376  (*) (List_1_t902 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m32811(__this, ___index, ___count, method) (( List_1_t902 * (*) (List_1_t902 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
#define List_1_IndexOf_m32812(__this, ___item, method) (( int32_t (*) (List_1_t902 *, BaseRaycaster_t904 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m32813(__this, ___start, ___delta, method) (( void (*) (List_1_t902 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m32814(__this, ___index, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
#define List_1_Insert_m32815(__this, ___index, ___item, method) (( void (*) (List_1_t902 *, int32_t, BaseRaycaster_t904 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m32816(__this, ___collection, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m32817(__this, ___index, ___collection, method) (( void (*) (List_1_t902 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m32818(__this, ___index, ___collection, method) (( void (*) (List_1_t902 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m32819(__this, ___index, ___enumerable, method) (( void (*) (List_1_t902 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#define List_1_Remove_m32820(__this, ___item, method) (( bool (*) (List_1_t902 *, BaseRaycaster_t904 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m32821(__this, ___match, method) (( int32_t (*) (List_1_t902 *, Predicate_1_t6375 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m32822(__this, ___index, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m32823(__this, ___index, ___count, method) (( void (*) (List_1_t902 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
#define List_1_Reverse_m32824(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
#define List_1_Sort_m32825(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m32826(__this, ___comparer, method) (( void (*) (List_1_t902 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m32827(__this, ___comparison, method) (( void (*) (List_1_t902 *, Comparison_1_t6377 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
#define List_1_ToArray_m32828(__this, method) (( BaseRaycasterU5BU5D_t6372* (*) (List_1_t902 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
#define List_1_TrimExcess_m32829(__this, method) (( void (*) (List_1_t902 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
#define List_1_get_Capacity_m32830(__this, method) (( int32_t (*) (List_1_t902 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m32831(__this, ___value, method) (( void (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
#define List_1_get_Count_m32832(__this, method) (( int32_t (*) (List_1_t902 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
#define List_1_get_Item_m32833(__this, ___index, method) (( BaseRaycaster_t904 * (*) (List_1_t902 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#define List_1_set_Item_m32834(__this, ___index, ___value, method) (( void (*) (List_1_t902 *, int32_t, BaseRaycaster_t904 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)

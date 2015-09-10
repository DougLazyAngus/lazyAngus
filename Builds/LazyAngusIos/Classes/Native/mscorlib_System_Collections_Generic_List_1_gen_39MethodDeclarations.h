#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t997;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t933;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t9680;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t6471;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t9681;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t9682;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t6473;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t6474;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Selectable>
struct IComparer_1_t9683;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t6476;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_48.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6347(__this, method) (( void (*) (List_1_t997 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m34507(__this, ___collection, method) (( void (*) (List_1_t997 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m34508(__this, ___capacity, method) (( void (*) (List_1_t997 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(T[],System.Int32)
#define List_1__ctor_m34509(__this, ___data, ___size, method) (( void (*) (List_1_t997 *, SelectableU5BU5D_t6471*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m34510(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34511(__this, method) (( Object_t* (*) (List_1_t997 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m34512(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t997 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m34513(__this, method) (( Object_t * (*) (List_1_t997 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m34514(__this, ___item, method) (( int32_t (*) (List_1_t997 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m34515(__this, ___item, method) (( bool (*) (List_1_t997 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m34516(__this, ___item, method) (( int32_t (*) (List_1_t997 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m34517(__this, ___index, ___item, method) (( void (*) (List_1_t997 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m34518(__this, ___item, method) (( void (*) (List_1_t997 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34519(__this, method) (( bool (*) (List_1_t997 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m34520(__this, method) (( bool (*) (List_1_t997 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m34521(__this, method) (( Object_t * (*) (List_1_t997 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m34522(__this, method) (( bool (*) (List_1_t997 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m34523(__this, method) (( bool (*) (List_1_t997 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m34524(__this, ___index, method) (( Object_t * (*) (List_1_t997 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m34525(__this, ___index, ___value, method) (( void (*) (List_1_t997 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m34526(__this, ___item, method) (( void (*) (List_1_t997 *, Selectable_t933 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m34527(__this, ___newCount, method) (( void (*) (List_1_t997 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m34528(__this, ___idx, ___count, method) (( void (*) (List_1_t997 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m34529(__this, ___collection, method) (( void (*) (List_1_t997 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m34530(__this, ___enumerable, method) (( void (*) (List_1_t997 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m34531(__this, ___collection, method) (( void (*) (List_1_t997 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m34532(__this, method) (( ReadOnlyCollection_1_t6473 * (*) (List_1_t997 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m34533(__this, method) (( void (*) (List_1_t997 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m34534(__this, ___item, method) (( bool (*) (List_1_t997 *, Selectable_t933 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m34535(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t997 *, SelectableU5BU5D_t6471*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m34536(__this, ___match, method) (( Selectable_t933 * (*) (List_1_t997 *, Predicate_1_t6474 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m34537(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6474 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m34538(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t997 *, int32_t, int32_t, Predicate_1_t6474 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m34539(__this, method) (( Enumerator_t6475  (*) (List_1_t997 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m34540(__this, ___index, ___count, method) (( List_1_t997 * (*) (List_1_t997 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m34541(__this, ___item, method) (( int32_t (*) (List_1_t997 *, Selectable_t933 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m34542(__this, ___start, ___delta, method) (( void (*) (List_1_t997 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m34543(__this, ___index, method) (( void (*) (List_1_t997 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m34544(__this, ___index, ___item, method) (( void (*) (List_1_t997 *, int32_t, Selectable_t933 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m34545(__this, ___collection, method) (( void (*) (List_1_t997 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m34546(__this, ___index, ___collection, method) (( void (*) (List_1_t997 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m34547(__this, ___index, ___collection, method) (( void (*) (List_1_t997 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m34548(__this, ___index, ___enumerable, method) (( void (*) (List_1_t997 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m34549(__this, ___item, method) (( bool (*) (List_1_t997 *, Selectable_t933 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m34550(__this, ___match, method) (( int32_t (*) (List_1_t997 *, Predicate_1_t6474 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m34551(__this, ___index, method) (( void (*) (List_1_t997 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m34552(__this, ___index, ___count, method) (( void (*) (List_1_t997 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m34553(__this, method) (( void (*) (List_1_t997 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m34554(__this, method) (( void (*) (List_1_t997 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m34555(__this, ___comparer, method) (( void (*) (List_1_t997 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m34556(__this, ___comparison, method) (( void (*) (List_1_t997 *, Comparison_1_t6476 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m34557(__this, method) (( SelectableU5BU5D_t6471* (*) (List_1_t997 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m34558(__this, method) (( void (*) (List_1_t997 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m34559(__this, method) (( int32_t (*) (List_1_t997 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m34560(__this, ___value, method) (( void (*) (List_1_t997 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m34561(__this, method) (( int32_t (*) (List_1_t997 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m34562(__this, ___index, method) (( Selectable_t933 * (*) (List_1_t997 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m34563(__this, ___index, ___value, method) (( void (*) (List_1_t997 *, int32_t, Selectable_t933 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)

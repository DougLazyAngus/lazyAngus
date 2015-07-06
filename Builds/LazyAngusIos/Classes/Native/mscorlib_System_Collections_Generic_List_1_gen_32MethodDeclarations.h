#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t789;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t788;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t4438;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t4439;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t4440;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t3755;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t3753;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t3756;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IComparer_1_t4441;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t3758;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4755(__this, method) (( void (*) (List_1_t789 *, const MethodInfo*))List_1__ctor_m2481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23971(__this, ___collection, method) (( void (*) (List_1_t789 *, Object_t*, const MethodInfo*))List_1__ctor_m16636_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m23972(__this, ___capacity, method) (( void (*) (List_1_t789 *, int32_t, const MethodInfo*))List_1__ctor_m16638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m23973(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16640_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23974(__this, method) (( Object_t* (*) (List_1_t789 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23975(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t789 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23976(__this, method) (( Object_t * (*) (List_1_t789 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23977(__this, ___item, method) (( int32_t (*) (List_1_t789 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6646_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23978(__this, ___item, method) (( bool (*) (List_1_t789 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6648_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23979(__this, ___item, method) (( int32_t (*) (List_1_t789 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6649_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23980(__this, ___index, ___item, method) (( void (*) (List_1_t789 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6650_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23981(__this, ___item, method) (( void (*) (List_1_t789 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6651_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23982(__this, method) (( bool (*) (List_1_t789 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23983(__this, method) (( bool (*) (List_1_t789 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6639_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23984(__this, method) (( Object_t * (*) (List_1_t789 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23985(__this, method) (( bool (*) (List_1_t789 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23986(__this, method) (( bool (*) (List_1_t789 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23987(__this, ___index, method) (( Object_t * (*) (List_1_t789 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23988(__this, ___index, ___value, method) (( void (*) (List_1_t789 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6645_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m23989(__this, ___item, method) (( void (*) (List_1_t789 *, MatEntry_t788 *, const MethodInfo*))List_1_Add_m6654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23990(__this, ___newCount, method) (( void (*) (List_1_t789 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16658_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23991(__this, ___collection, method) (( void (*) (List_1_t789 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16660_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23992(__this, ___enumerable, method) (( void (*) (List_1_t789 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16662_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23993(__this, ___collection, method) (( void (*) (List_1_t789 *, Object_t*, const MethodInfo*))List_1_AddRange_m16664_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m23994(__this, method) (( ReadOnlyCollection_1_t3755 * (*) (List_1_t789 *, const MethodInfo*))List_1_AsReadOnly_m16666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m23995(__this, method) (( void (*) (List_1_t789 *, const MethodInfo*))List_1_Clear_m6647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m23996(__this, ___item, method) (( bool (*) (List_1_t789 *, MatEntry_t788 *, const MethodInfo*))List_1_Contains_m6655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23997(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t789 *, MatEntryU5BU5D_t3753*, int32_t, const MethodInfo*))List_1_CopyTo_m6656_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m23998(__this, ___match, method) (( MatEntry_t788 * (*) (List_1_t789 *, Predicate_1_t3756 *, const MethodInfo*))List_1_Find_m16671_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23999(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3756 *, const MethodInfo*))List_1_CheckMatch_m16673_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24000(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t789 *, int32_t, int32_t, Predicate_1_t3756 *, const MethodInfo*))List_1_GetIndex_m16675_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
#define List_1_GetEnumerator_m24001(__this, method) (( Enumerator_t3757  (*) (List_1_t789 *, const MethodInfo*))List_1_GetEnumerator_m2584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m24002(__this, ___item, method) (( int32_t (*) (List_1_t789 *, MatEntry_t788 *, const MethodInfo*))List_1_IndexOf_m6659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24003(__this, ___start, ___delta, method) (( void (*) (List_1_t789 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16678_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24004(__this, ___index, method) (( void (*) (List_1_t789 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m24005(__this, ___index, ___item, method) (( void (*) (List_1_t789 *, int32_t, MatEntry_t788 *, const MethodInfo*))List_1_Insert_m6660_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24006(__this, ___collection, method) (( void (*) (List_1_t789 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16683_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m24007(__this, ___item, method) (( bool (*) (List_1_t789 *, MatEntry_t788 *, const MethodInfo*))List_1_Remove_m6657_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24008(__this, ___match, method) (( int32_t (*) (List_1_t789 *, Predicate_1_t3756 *, const MethodInfo*))List_1_RemoveAll_m16686_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24009(__this, ___index, method) (( void (*) (List_1_t789 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6652_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m24010(__this, method) (( void (*) (List_1_t789 *, const MethodInfo*))List_1_Reverse_m16689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m24011(__this, method) (( void (*) (List_1_t789 *, const MethodInfo*))List_1_Sort_m16691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24012(__this, ___comparer, method) (( void (*) (List_1_t789 *, Object_t*, const MethodInfo*))List_1_Sort_m16693_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24013(__this, ___comparison, method) (( void (*) (List_1_t789 *, Comparison_1_t3758 *, const MethodInfo*))List_1_Sort_m16695_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m24014(__this, method) (( MatEntryU5BU5D_t3753* (*) (List_1_t789 *, const MethodInfo*))List_1_ToArray_m16697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m24015(__this, method) (( void (*) (List_1_t789 *, const MethodInfo*))List_1_TrimExcess_m16699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m24016(__this, method) (( int32_t (*) (List_1_t789 *, const MethodInfo*))List_1_get_Capacity_m16701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24017(__this, ___value, method) (( void (*) (List_1_t789 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16703_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m24018(__this, method) (( int32_t (*) (List_1_t789 *, const MethodInfo*))List_1_get_Count_m6638_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m24019(__this, ___index, method) (( MatEntry_t788 * (*) (List_1_t789 *, int32_t, const MethodInfo*))List_1_get_Item_m6661_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m24020(__this, ___index, ___value, method) (( void (*) (List_1_t789 *, int32_t, MatEntry_t788 *, const MethodInfo*))List_1_set_Item_m6662_gshared)(__this, ___index, ___value, method)

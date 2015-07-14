#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t757;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t755;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
struct IEnumerable_1_t4414;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t4415;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t903;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
struct ReadOnlyCollection_1_t3730;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t3729;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t3731;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Graphic>
struct IComparer_1_t4416;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t758;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4691(__this, method) (( void (*) (List_1_t757 *, const MethodInfo*))List_1__ctor_m2584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23409(__this, ___collection, method) (( void (*) (List_1_t757 *, Object_t*, const MethodInfo*))List_1__ctor_m16791_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Int32)
#define List_1__ctor_m23410(__this, ___capacity, method) (( void (*) (List_1_t757 *, int32_t, const MethodInfo*))List_1__ctor_m16793_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.cctor()
#define List_1__cctor_m23411(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16795_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23412(__this, method) (( Object_t* (*) (List_1_t757 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6813_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23413(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t757 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6796_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23414(__this, method) (( Object_t * (*) (List_1_t757 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6792_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23415(__this, ___item, method) (( int32_t (*) (List_1_t757 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6801_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23416(__this, ___item, method) (( bool (*) (List_1_t757 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6803_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23417(__this, ___item, method) (( int32_t (*) (List_1_t757 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6804_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23418(__this, ___index, ___item, method) (( void (*) (List_1_t757 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6805_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23419(__this, ___item, method) (( void (*) (List_1_t757 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6806_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23420(__this, method) (( bool (*) (List_1_t757 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23421(__this, method) (( bool (*) (List_1_t757 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6794_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23422(__this, method) (( Object_t * (*) (List_1_t757 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6795_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23423(__this, method) (( bool (*) (List_1_t757 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6797_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23424(__this, method) (( bool (*) (List_1_t757 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6798_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23425(__this, ___index, method) (( Object_t * (*) (List_1_t757 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6799_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23426(__this, ___index, ___value, method) (( void (*) (List_1_t757 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6800_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Add(T)
#define List_1_Add_m23427(__this, ___item, method) (( void (*) (List_1_t757 *, Graphic_t755 *, const MethodInfo*))List_1_Add_m6809_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23428(__this, ___newCount, method) (( void (*) (List_1_t757 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16813_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23429(__this, ___collection, method) (( void (*) (List_1_t757 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16815_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23430(__this, ___enumerable, method) (( void (*) (List_1_t757 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16817_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23431(__this, ___collection, method) (( void (*) (List_1_t757 *, Object_t*, const MethodInfo*))List_1_AddRange_m16819_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AsReadOnly()
#define List_1_AsReadOnly_m23432(__this, method) (( ReadOnlyCollection_1_t3730 * (*) (List_1_t757 *, const MethodInfo*))List_1_AsReadOnly_m16821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Clear()
#define List_1_Clear_m23433(__this, method) (( void (*) (List_1_t757 *, const MethodInfo*))List_1_Clear_m6802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Contains(T)
#define List_1_Contains_m23434(__this, ___item, method) (( bool (*) (List_1_t757 *, Graphic_t755 *, const MethodInfo*))List_1_Contains_m6810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23435(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t757 *, GraphicU5BU5D_t3729*, int32_t, const MethodInfo*))List_1_CopyTo_m6811_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Find(System.Predicate`1<T>)
#define List_1_Find_m23436(__this, ___match, method) (( Graphic_t755 * (*) (List_1_t757 *, Predicate_1_t3731 *, const MethodInfo*))List_1_Find_m16826_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23437(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3731 *, const MethodInfo*))List_1_CheckMatch_m16828_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23438(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t757 *, int32_t, int32_t, Predicate_1_t3731 *, const MethodInfo*))List_1_GetIndex_m16830_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define List_1_GetEnumerator_m23439(__this, method) (( Enumerator_t3732  (*) (List_1_t757 *, const MethodInfo*))List_1_GetEnumerator_m2687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define List_1_IndexOf_m23440(__this, ___item, method) (( int32_t (*) (List_1_t757 *, Graphic_t755 *, const MethodInfo*))List_1_IndexOf_m6814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23441(__this, ___start, ___delta, method) (( void (*) (List_1_t757 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16833_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23442(__this, ___index, method) (( void (*) (List_1_t757 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16835_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define List_1_Insert_m23443(__this, ___index, ___item, method) (( void (*) (List_1_t757 *, int32_t, Graphic_t755 *, const MethodInfo*))List_1_Insert_m6815_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23444(__this, ___collection, method) (( void (*) (List_1_t757 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16838_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Remove(T)
#define List_1_Remove_m23445(__this, ___item, method) (( bool (*) (List_1_t757 *, Graphic_t755 *, const MethodInfo*))List_1_Remove_m6812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23446(__this, ___match, method) (( int32_t (*) (List_1_t757 *, Predicate_1_t3731 *, const MethodInfo*))List_1_RemoveAll_m16841_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23447(__this, ___index, method) (( void (*) (List_1_t757 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6807_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Reverse()
#define List_1_Reverse_m23448(__this, method) (( void (*) (List_1_t757 *, const MethodInfo*))List_1_Reverse_m16844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort()
#define List_1_Sort_m23449(__this, method) (( void (*) (List_1_t757 *, const MethodInfo*))List_1_Sort_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23450(__this, ___comparer, method) (( void (*) (List_1_t757 *, Object_t*, const MethodInfo*))List_1_Sort_m16848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m4704(__this, ___comparison, method) (( void (*) (List_1_t757 *, Comparison_1_t758 *, const MethodInfo*))List_1_Sort_m16850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::ToArray()
#define List_1_ToArray_m23451(__this, method) (( GraphicU5BU5D_t3729* (*) (List_1_t757 *, const MethodInfo*))List_1_ToArray_m16852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::TrimExcess()
#define List_1_TrimExcess_m23452(__this, method) (( void (*) (List_1_t757 *, const MethodInfo*))List_1_TrimExcess_m16854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Capacity()
#define List_1_get_Capacity_m23453(__this, method) (( int32_t (*) (List_1_t757 *, const MethodInfo*))List_1_get_Capacity_m16856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23454(__this, ___value, method) (( void (*) (List_1_t757 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16858_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Count()
#define List_1_get_Count_m23455(__this, method) (( int32_t (*) (List_1_t757 *, const MethodInfo*))List_1_get_Count_m6793_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define List_1_get_Item_m23456(__this, ___index, method) (( Graphic_t755 * (*) (List_1_t757 *, int32_t, const MethodInfo*))List_1_get_Item_m6816_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define List_1_set_Item_m23457(__this, ___index, ___value, method) (( void (*) (List_1_t757 *, int32_t, Graphic_t755 *, const MethodInfo*))List_1_set_Item_m6817_gshared)(__this, ___index, ___value, method)

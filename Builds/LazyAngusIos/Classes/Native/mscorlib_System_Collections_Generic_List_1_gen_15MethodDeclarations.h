#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t443;
// System.Object
struct Object_t;
// ExplicitMouseDesc
struct ExplicitMouseDesc_t414;
// System.Collections.Generic.IEnumerable`1<ExplicitMouseDesc>
struct IEnumerable_1_t4321;
// System.Collections.Generic.IEnumerator`1<ExplicitMouseDesc>
struct IEnumerator_1_t4322;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<ExplicitMouseDesc>
struct ICollection_1_t4323;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ExplicitMouseDesc>
struct ReadOnlyCollection_1_t3590;
// ExplicitMouseDesc[]
struct ExplicitMouseDescU5BU5D_t3588;
// System.Predicate`1<ExplicitMouseDesc>
struct Predicate_1_t3591;
// System.Collections.Generic.IComparer`1<ExplicitMouseDesc>
struct IComparer_1_t4324;
// System.Comparison`1<ExplicitMouseDesc>
struct Comparison_1_t3593;
// System.Collections.Generic.List`1/Enumerator<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_23.h"

// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3025(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1__ctor_m2584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21207(__this, ___collection, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1__ctor_m16791_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Int32)
#define List_1__ctor_m21208(__this, ___capacity, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1__ctor_m16793_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.cctor()
#define List_1__cctor_m21209(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16795_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21210(__this, method) (( Object_t* (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6813_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21211(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t443 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6796_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21212(__this, method) (( Object_t * (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6792_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21213(__this, ___item, method) (( int32_t (*) (List_1_t443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6801_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21214(__this, ___item, method) (( bool (*) (List_1_t443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6803_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21215(__this, ___item, method) (( int32_t (*) (List_1_t443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6804_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21216(__this, ___index, ___item, method) (( void (*) (List_1_t443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6805_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21217(__this, ___item, method) (( void (*) (List_1_t443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6806_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21218(__this, method) (( bool (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21219(__this, method) (( bool (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6794_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21220(__this, method) (( Object_t * (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6795_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21221(__this, method) (( bool (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6797_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21222(__this, method) (( bool (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6798_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21223(__this, ___index, method) (( Object_t * (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6799_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21224(__this, ___index, ___value, method) (( void (*) (List_1_t443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6800_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(T)
#define List_1_Add_m21225(__this, ___item, method) (( void (*) (List_1_t443 *, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_Add_m6809_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21226(__this, ___newCount, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16813_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21227(__this, ___collection, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16815_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21228(__this, ___enumerable, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16817_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3052(__this, ___collection, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_AddRange_m16819_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::AsReadOnly()
#define List_1_AsReadOnly_m21229(__this, method) (( ReadOnlyCollection_1_t3590 * (*) (List_1_t443 *, const MethodInfo*))List_1_AsReadOnly_m16821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Clear()
#define List_1_Clear_m21230(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1_Clear_m6802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Contains(T)
#define List_1_Contains_m21231(__this, ___item, method) (( bool (*) (List_1_t443 *, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_Contains_m6810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21232(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t443 *, ExplicitMouseDescU5BU5D_t3588*, int32_t, const MethodInfo*))List_1_CopyTo_m6811_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m21233(__this, ___match, method) (( ExplicitMouseDesc_t414 * (*) (List_1_t443 *, Predicate_1_t3591 *, const MethodInfo*))List_1_Find_m16826_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21234(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3591 *, const MethodInfo*))List_1_CheckMatch_m16828_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21235(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t443 *, int32_t, int32_t, Predicate_1_t3591 *, const MethodInfo*))List_1_GetIndex_m16830_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::GetEnumerator()
#define List_1_GetEnumerator_m21236(__this, method) (( Enumerator_t3592  (*) (List_1_t443 *, const MethodInfo*))List_1_GetEnumerator_m2687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::IndexOf(T)
#define List_1_IndexOf_m21237(__this, ___item, method) (( int32_t (*) (List_1_t443 *, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_IndexOf_m6814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21238(__this, ___start, ___delta, method) (( void (*) (List_1_t443 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16833_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21239(__this, ___index, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16835_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Insert(System.Int32,T)
#define List_1_Insert_m21240(__this, ___index, ___item, method) (( void (*) (List_1_t443 *, int32_t, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_Insert_m6815_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21241(__this, ___collection, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16838_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Remove(T)
#define List_1_Remove_m21242(__this, ___item, method) (( bool (*) (List_1_t443 *, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_Remove_m6812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21243(__this, ___match, method) (( int32_t (*) (List_1_t443 *, Predicate_1_t3591 *, const MethodInfo*))List_1_RemoveAll_m16841_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21244(__this, ___index, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6807_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Reverse()
#define List_1_Reverse_m21245(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1_Reverse_m16844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort()
#define List_1_Sort_m21246(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1_Sort_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21247(__this, ___comparer, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_Sort_m16848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21248(__this, ___comparison, method) (( void (*) (List_1_t443 *, Comparison_1_t3593 *, const MethodInfo*))List_1_Sort_m16850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ExplicitMouseDesc>::ToArray()
#define List_1_ToArray_m21249(__this, method) (( ExplicitMouseDescU5BU5D_t3588* (*) (List_1_t443 *, const MethodInfo*))List_1_ToArray_m16852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::TrimExcess()
#define List_1_TrimExcess_m21250(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1_TrimExcess_m16854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Capacity()
#define List_1_get_Capacity_m21251(__this, method) (( int32_t (*) (List_1_t443 *, const MethodInfo*))List_1_get_Capacity_m16856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21252(__this, ___value, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16858_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count()
#define List_1_get_Count_m21253(__this, method) (( int32_t (*) (List_1_t443 *, const MethodInfo*))List_1_get_Count_m6793_gshared)(__this, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32)
#define List_1_get_Item_m21254(__this, ___index, method) (( ExplicitMouseDesc_t414 * (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_get_Item_m6816_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m21255(__this, ___index, ___value, method) (( void (*) (List_1_t443 *, int32_t, ExplicitMouseDesc_t414 *, const MethodInfo*))List_1_set_Item_m6817_gshared)(__this, ___index, ___value, method)

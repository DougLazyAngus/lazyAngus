#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t533;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t554;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1236;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t3319;
// System.Object[]
struct ObjectU5BU5D_t531;
// System.Predicate`1<System.Object>
struct Predicate_1_t3321;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3548;
// System.Comparison`1<System.Object>
struct Comparison_1_t3328;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m2584_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1__ctor_m2584(__this, method) (( void (*) (List_1_t533 *, const MethodInfo*))List_1__ctor_m2584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16791_gshared (List_1_t533 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16791(__this, ___collection, method) (( void (*) (List_1_t533 *, Object_t*, const MethodInfo*))List_1__ctor_m16791_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m16793_gshared (List_1_t533 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m16793(__this, ___capacity, method) (( void (*) (List_1_t533 *, int32_t, const MethodInfo*))List_1__ctor_m16793_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m16795_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16795(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16795_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6813_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6813(__this, method) (( Object_t* (*) (List_1_t533 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6813_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m6796_gshared (List_1_t533 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m6796(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t533 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6796_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m6792_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m6792(__this, method) (( Object_t * (*) (List_1_t533 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6792_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m6801_gshared (List_1_t533 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m6801(__this, ___item, method) (( int32_t (*) (List_1_t533 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6801_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m6803_gshared (List_1_t533 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m6803(__this, ___item, method) (( bool (*) (List_1_t533 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6803_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m6804_gshared (List_1_t533 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m6804(__this, ___item, method) (( int32_t (*) (List_1_t533 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6804_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m6805_gshared (List_1_t533 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m6805(__this, ___index, ___item, method) (( void (*) (List_1_t533 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6805_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m6806_gshared (List_1_t533 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m6806(__this, ___item, method) (( void (*) (List_1_t533 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6806_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6808_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6808(__this, method) (( bool (*) (List_1_t533 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m6794_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m6794(__this, method) (( bool (*) (List_1_t533 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6794_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m6795_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m6795(__this, method) (( Object_t * (*) (List_1_t533 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6795_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m6797_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m6797(__this, method) (( bool (*) (List_1_t533 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6797_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m6798_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m6798(__this, method) (( bool (*) (List_1_t533 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6798_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m6799_gshared (List_1_t533 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m6799(__this, ___index, method) (( Object_t * (*) (List_1_t533 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6799_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m6800_gshared (List_1_t533 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m6800(__this, ___index, ___value, method) (( void (*) (List_1_t533 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6800_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m6809_gshared (List_1_t533 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m6809(__this, ___item, method) (( void (*) (List_1_t533 *, Object_t *, const MethodInfo*))List_1_Add_m6809_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16813_gshared (List_1_t533 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16813(__this, ___newCount, method) (( void (*) (List_1_t533 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16813_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16815_gshared (List_1_t533 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16815(__this, ___collection, method) (( void (*) (List_1_t533 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16815_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16817_gshared (List_1_t533 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16817(__this, ___enumerable, method) (( void (*) (List_1_t533 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16817_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16819_gshared (List_1_t533 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16819(__this, ___collection, method) (( void (*) (List_1_t533 *, Object_t*, const MethodInfo*))List_1_AddRange_m16819_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3319 * List_1_AsReadOnly_m16821_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16821(__this, method) (( ReadOnlyCollection_1_t3319 * (*) (List_1_t533 *, const MethodInfo*))List_1_AsReadOnly_m16821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m6802_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_Clear_m6802(__this, method) (( void (*) (List_1_t533 *, const MethodInfo*))List_1_Clear_m6802_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m6810_gshared (List_1_t533 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m6810(__this, ___item, method) (( bool (*) (List_1_t533 *, Object_t *, const MethodInfo*))List_1_Contains_m6810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m6811_gshared (List_1_t533 * __this, ObjectU5BU5D_t531* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m6811(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t533 *, ObjectU5BU5D_t531*, int32_t, const MethodInfo*))List_1_CopyTo_m6811_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m16826_gshared (List_1_t533 * __this, Predicate_1_t3321 * ___match, const MethodInfo* method);
#define List_1_Find_m16826(__this, ___match, method) (( Object_t * (*) (List_1_t533 *, Predicate_1_t3321 *, const MethodInfo*))List_1_Find_m16826_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16828_gshared (Object_t * __this /* static, unused */, Predicate_1_t3321 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16828(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3321 *, const MethodInfo*))List_1_CheckMatch_m16828_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16830_gshared (List_1_t533 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3321 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16830(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t533 *, int32_t, int32_t, Predicate_1_t3321 *, const MethodInfo*))List_1_GetIndex_m16830_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t582  List_1_GetEnumerator_m2687_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2687(__this, method) (( Enumerator_t582  (*) (List_1_t533 *, const MethodInfo*))List_1_GetEnumerator_m2687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m6814_gshared (List_1_t533 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m6814(__this, ___item, method) (( int32_t (*) (List_1_t533 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16833_gshared (List_1_t533 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16833(__this, ___start, ___delta, method) (( void (*) (List_1_t533 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16833_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16835_gshared (List_1_t533 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16835(__this, ___index, method) (( void (*) (List_1_t533 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16835_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m6815_gshared (List_1_t533 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m6815(__this, ___index, ___item, method) (( void (*) (List_1_t533 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6815_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16838_gshared (List_1_t533 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16838(__this, ___collection, method) (( void (*) (List_1_t533 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16838_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m6812_gshared (List_1_t533 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m6812(__this, ___item, method) (( bool (*) (List_1_t533 *, Object_t *, const MethodInfo*))List_1_Remove_m6812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16841_gshared (List_1_t533 * __this, Predicate_1_t3321 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16841(__this, ___match, method) (( int32_t (*) (List_1_t533 *, Predicate_1_t3321 *, const MethodInfo*))List_1_RemoveAll_m16841_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m6807_gshared (List_1_t533 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m6807(__this, ___index, method) (( void (*) (List_1_t533 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6807_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m16844_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_Reverse_m16844(__this, method) (( void (*) (List_1_t533 *, const MethodInfo*))List_1_Reverse_m16844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m16846_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_Sort_m16846(__this, method) (( void (*) (List_1_t533 *, const MethodInfo*))List_1_Sort_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m16848_gshared (List_1_t533 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m16848(__this, ___comparer, method) (( void (*) (List_1_t533 *, Object_t*, const MethodInfo*))List_1_Sort_m16848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16850_gshared (List_1_t533 * __this, Comparison_1_t3328 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16850(__this, ___comparison, method) (( void (*) (List_1_t533 *, Comparison_1_t3328 *, const MethodInfo*))List_1_Sort_m16850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t531* List_1_ToArray_m16852_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_ToArray_m16852(__this, method) (( ObjectU5BU5D_t531* (*) (List_1_t533 *, const MethodInfo*))List_1_ToArray_m16852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m16854_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16854(__this, method) (( void (*) (List_1_t533 *, const MethodInfo*))List_1_TrimExcess_m16854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16856_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16856(__this, method) (( int32_t (*) (List_1_t533 *, const MethodInfo*))List_1_get_Capacity_m16856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16858_gshared (List_1_t533 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16858(__this, ___value, method) (( void (*) (List_1_t533 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16858_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m6793_gshared (List_1_t533 * __this, const MethodInfo* method);
#define List_1_get_Count_m6793(__this, method) (( int32_t (*) (List_1_t533 *, const MethodInfo*))List_1_get_Count_m6793_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m6816_gshared (List_1_t533 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m6816(__this, ___index, method) (( Object_t * (*) (List_1_t533 *, int32_t, const MethodInfo*))List_1_get_Item_m6816_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m6817_gshared (List_1_t533 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m6817(__this, ___index, ___value, method) (( void (*) (List_1_t533 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6817_gshared)(__this, ___index, ___value, method)

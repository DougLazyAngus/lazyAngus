#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t3607;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t4340;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t4341;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t4342;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t3610;
// System.Single[]
struct SingleU5BU5D_t450;
// System.Predicate`1<System.Single>
struct Predicate_1_t3615;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t4343;
// System.Comparison`1<System.Single>
struct Comparison_1_t3619;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m21443_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1__ctor_m21443(__this, method) (( void (*) (List_1_t3607 *, const MethodInfo*))List_1__ctor_m21443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m21444_gshared (List_1_t3607 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m21444(__this, ___collection, method) (( void (*) (List_1_t3607 *, Object_t*, const MethodInfo*))List_1__ctor_m21444_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21445_gshared (List_1_t3607 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21445(__this, ___capacity, method) (( void (*) (List_1_t3607 *, int32_t, const MethodInfo*))List_1__ctor_m21445_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m21446_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21446(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21446_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21447_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21447(__this, method) (( Object_t* (*) (List_1_t3607 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21447_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21448_gshared (List_1_t3607 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m21448(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3607 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21448_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21449_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21449(__this, method) (( Object_t * (*) (List_1_t3607 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21449_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21450_gshared (List_1_t3607 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21450(__this, ___item, method) (( int32_t (*) (List_1_t3607 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21450_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21451_gshared (List_1_t3607 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21451(__this, ___item, method) (( bool (*) (List_1_t3607 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21451_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21452_gshared (List_1_t3607 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21452(__this, ___item, method) (( int32_t (*) (List_1_t3607 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21452_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21453_gshared (List_1_t3607 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21453(__this, ___index, ___item, method) (( void (*) (List_1_t3607 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21453_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21454_gshared (List_1_t3607 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21454(__this, ___item, method) (( void (*) (List_1_t3607 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21454_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21455_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21455(__this, method) (( bool (*) (List_1_t3607 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21455_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m21456_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21456(__this, method) (( bool (*) (List_1_t3607 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21457_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m21457(__this, method) (( Object_t * (*) (List_1_t3607 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21457_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m21458_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m21458(__this, method) (( bool (*) (List_1_t3607 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21458_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m21459_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m21459(__this, method) (( bool (*) (List_1_t3607 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21459_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21460_gshared (List_1_t3607 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21460(__this, ___index, method) (( Object_t * (*) (List_1_t3607 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21460_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21461_gshared (List_1_t3607 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21461(__this, ___index, ___value, method) (( void (*) (List_1_t3607 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21461_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m21462_gshared (List_1_t3607 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m21462(__this, ___item, method) (( void (*) (List_1_t3607 *, float, const MethodInfo*))List_1_Add_m21462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21463_gshared (List_1_t3607 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21463(__this, ___newCount, method) (( void (*) (List_1_t3607 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21463_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21464_gshared (List_1_t3607 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21464(__this, ___collection, method) (( void (*) (List_1_t3607 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21464_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21465_gshared (List_1_t3607 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21465(__this, ___enumerable, method) (( void (*) (List_1_t3607 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21465_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21466_gshared (List_1_t3607 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21466(__this, ___collection, method) (( void (*) (List_1_t3607 *, Object_t*, const MethodInfo*))List_1_AddRange_m21466_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3610 * List_1_AsReadOnly_m21467_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21467(__this, method) (( ReadOnlyCollection_1_t3610 * (*) (List_1_t3607 *, const MethodInfo*))List_1_AsReadOnly_m21467_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m21468_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_Clear_m21468(__this, method) (( void (*) (List_1_t3607 *, const MethodInfo*))List_1_Clear_m21468_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m21469_gshared (List_1_t3607 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m21469(__this, ___item, method) (( bool (*) (List_1_t3607 *, float, const MethodInfo*))List_1_Contains_m21469_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21470_gshared (List_1_t3607 * __this, SingleU5BU5D_t450* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m21470(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3607 *, SingleU5BU5D_t450*, int32_t, const MethodInfo*))List_1_CopyTo_m21470_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m21471_gshared (List_1_t3607 * __this, Predicate_1_t3615 * ___match, const MethodInfo* method);
#define List_1_Find_m21471(__this, ___match, method) (( float (*) (List_1_t3607 *, Predicate_1_t3615 *, const MethodInfo*))List_1_Find_m21471_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21472_gshared (Object_t * __this /* static, unused */, Predicate_1_t3615 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21472(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3615 *, const MethodInfo*))List_1_CheckMatch_m21472_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21473_gshared (List_1_t3607 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3615 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21473(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3607 *, int32_t, int32_t, Predicate_1_t3615 *, const MethodInfo*))List_1_GetIndex_m21473_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t3608  List_1_GetEnumerator_m21474_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21474(__this, method) (( Enumerator_t3608  (*) (List_1_t3607 *, const MethodInfo*))List_1_GetEnumerator_m21474_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21475_gshared (List_1_t3607 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m21475(__this, ___item, method) (( int32_t (*) (List_1_t3607 *, float, const MethodInfo*))List_1_IndexOf_m21475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21476_gshared (List_1_t3607 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21476(__this, ___start, ___delta, method) (( void (*) (List_1_t3607 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21476_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21477_gshared (List_1_t3607 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21477(__this, ___index, method) (( void (*) (List_1_t3607 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21477_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21478_gshared (List_1_t3607 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m21478(__this, ___index, ___item, method) (( void (*) (List_1_t3607 *, int32_t, float, const MethodInfo*))List_1_Insert_m21478_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21479_gshared (List_1_t3607 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21479(__this, ___collection, method) (( void (*) (List_1_t3607 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21479_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m21480_gshared (List_1_t3607 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m21480(__this, ___item, method) (( bool (*) (List_1_t3607 *, float, const MethodInfo*))List_1_Remove_m21480_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21481_gshared (List_1_t3607 * __this, Predicate_1_t3615 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21481(__this, ___match, method) (( int32_t (*) (List_1_t3607 *, Predicate_1_t3615 *, const MethodInfo*))List_1_RemoveAll_m21481_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m21482_gshared (List_1_t3607 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21482(__this, ___index, method) (( void (*) (List_1_t3607 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21482_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m21483_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_Reverse_m21483(__this, method) (( void (*) (List_1_t3607 *, const MethodInfo*))List_1_Reverse_m21483_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m21484_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_Sort_m21484(__this, method) (( void (*) (List_1_t3607 *, const MethodInfo*))List_1_Sort_m21484_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21485_gshared (List_1_t3607 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21485(__this, ___comparer, method) (( void (*) (List_1_t3607 *, Object_t*, const MethodInfo*))List_1_Sort_m21485_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21486_gshared (List_1_t3607 * __this, Comparison_1_t3619 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21486(__this, ___comparison, method) (( void (*) (List_1_t3607 *, Comparison_1_t3619 *, const MethodInfo*))List_1_Sort_m21486_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t450* List_1_ToArray_m21487_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_ToArray_m21487(__this, method) (( SingleU5BU5D_t450* (*) (List_1_t3607 *, const MethodInfo*))List_1_ToArray_m21487_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m21488_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21488(__this, method) (( void (*) (List_1_t3607 *, const MethodInfo*))List_1_TrimExcess_m21488_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21489_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21489(__this, method) (( int32_t (*) (List_1_t3607 *, const MethodInfo*))List_1_get_Capacity_m21489_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21490_gshared (List_1_t3607 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21490(__this, ___value, method) (( void (*) (List_1_t3607 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21490_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m21491_gshared (List_1_t3607 * __this, const MethodInfo* method);
#define List_1_get_Count_m21491(__this, method) (( int32_t (*) (List_1_t3607 *, const MethodInfo*))List_1_get_Count_m21491_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m21492_gshared (List_1_t3607 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21492(__this, ___index, method) (( float (*) (List_1_t3607 *, int32_t, const MethodInfo*))List_1_get_Item_m21492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21493_gshared (List_1_t3607 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m21493(__this, ___index, ___value, method) (( void (*) (List_1_t3607 *, int32_t, float, const MethodInfo*))List_1_set_Item_m21493_gshared)(__this, ___index, ___value, method)

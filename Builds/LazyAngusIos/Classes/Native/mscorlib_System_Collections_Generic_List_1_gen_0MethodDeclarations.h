#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t584;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t607;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1292;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t3375;
// System.Object[]
struct ObjectU5BU5D_t582;
// System.Predicate`1<System.Object>
struct Predicate_1_t3377;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3625;
// System.Comparison`1<System.Object>
struct Comparison_1_t3384;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3119_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1__ctor_m3119(__this, method) (( void (*) (List_1_t584 *, const MethodInfo*))List_1__ctor_m3119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17400_gshared (List_1_t584 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17400(__this, ___collection, method) (( void (*) (List_1_t584 *, Object_t*, const MethodInfo*))List_1__ctor_m17400_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17402_gshared (List_1_t584 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17402(__this, ___capacity, method) (( void (*) (List_1_t584 *, int32_t, const MethodInfo*))List_1__ctor_m17402_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m17404_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17404(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17404_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7426_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7426(__this, method) (( Object_t* (*) (List_1_t584 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m7409_gshared (List_1_t584 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m7409(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t584 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7409_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m7405_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m7405(__this, method) (( Object_t * (*) (List_1_t584 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7405_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m7414_gshared (List_1_t584 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m7414(__this, ___item, method) (( int32_t (*) (List_1_t584 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7414_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m7416_gshared (List_1_t584 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m7416(__this, ___item, method) (( bool (*) (List_1_t584 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7416_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m7417_gshared (List_1_t584 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m7417(__this, ___item, method) (( int32_t (*) (List_1_t584 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7417_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m7418_gshared (List_1_t584 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m7418(__this, ___index, ___item, method) (( void (*) (List_1_t584 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7418_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m7419_gshared (List_1_t584 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m7419(__this, ___item, method) (( void (*) (List_1_t584 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7419_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7421_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7421(__this, method) (( bool (*) (List_1_t584 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7421_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m7407_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m7407(__this, method) (( bool (*) (List_1_t584 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7407_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m7408_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m7408(__this, method) (( Object_t * (*) (List_1_t584 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7408_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m7410_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m7410(__this, method) (( bool (*) (List_1_t584 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m7411_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m7411(__this, method) (( bool (*) (List_1_t584 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m7412_gshared (List_1_t584 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m7412(__this, ___index, method) (( Object_t * (*) (List_1_t584 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7412_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m7413_gshared (List_1_t584 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m7413(__this, ___index, ___value, method) (( void (*) (List_1_t584 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m7422_gshared (List_1_t584 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m7422(__this, ___item, method) (( void (*) (List_1_t584 *, Object_t *, const MethodInfo*))List_1_Add_m7422_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17422_gshared (List_1_t584 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17422(__this, ___newCount, method) (( void (*) (List_1_t584 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17422_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17424_gshared (List_1_t584 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17424(__this, ___collection, method) (( void (*) (List_1_t584 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17426_gshared (List_1_t584 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17426(__this, ___enumerable, method) (( void (*) (List_1_t584 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17426_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17428_gshared (List_1_t584 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17428(__this, ___collection, method) (( void (*) (List_1_t584 *, Object_t*, const MethodInfo*))List_1_AddRange_m17428_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3375 * List_1_AsReadOnly_m17430_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17430(__this, method) (( ReadOnlyCollection_1_t3375 * (*) (List_1_t584 *, const MethodInfo*))List_1_AsReadOnly_m17430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m7415_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_Clear_m7415(__this, method) (( void (*) (List_1_t584 *, const MethodInfo*))List_1_Clear_m7415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m7423_gshared (List_1_t584 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m7423(__this, ___item, method) (( bool (*) (List_1_t584 *, Object_t *, const MethodInfo*))List_1_Contains_m7423_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m7424_gshared (List_1_t584 * __this, ObjectU5BU5D_t582* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m7424(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t584 *, ObjectU5BU5D_t582*, int32_t, const MethodInfo*))List_1_CopyTo_m7424_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m17435_gshared (List_1_t584 * __this, Predicate_1_t3377 * ___match, const MethodInfo* method);
#define List_1_Find_m17435(__this, ___match, method) (( Object_t * (*) (List_1_t584 *, Predicate_1_t3377 *, const MethodInfo*))List_1_Find_m17435_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17437_gshared (Object_t * __this /* static, unused */, Predicate_1_t3377 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17437(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3377 *, const MethodInfo*))List_1_CheckMatch_m17437_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17439_gshared (List_1_t584 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3377 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17439(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t584 *, int32_t, int32_t, Predicate_1_t3377 *, const MethodInfo*))List_1_GetIndex_m17439_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t645  List_1_GetEnumerator_m3277_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3277(__this, method) (( Enumerator_t645  (*) (List_1_t584 *, const MethodInfo*))List_1_GetEnumerator_m3277_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m7427_gshared (List_1_t584 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m7427(__this, ___item, method) (( int32_t (*) (List_1_t584 *, Object_t *, const MethodInfo*))List_1_IndexOf_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17442_gshared (List_1_t584 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17442(__this, ___start, ___delta, method) (( void (*) (List_1_t584 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17442_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17444_gshared (List_1_t584 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17444(__this, ___index, method) (( void (*) (List_1_t584 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17444_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m7428_gshared (List_1_t584 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m7428(__this, ___index, ___item, method) (( void (*) (List_1_t584 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m7428_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17447_gshared (List_1_t584 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17447(__this, ___collection, method) (( void (*) (List_1_t584 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17447_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m7425_gshared (List_1_t584 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m7425(__this, ___item, method) (( bool (*) (List_1_t584 *, Object_t *, const MethodInfo*))List_1_Remove_m7425_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17450_gshared (List_1_t584 * __this, Predicate_1_t3377 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17450(__this, ___match, method) (( int32_t (*) (List_1_t584 *, Predicate_1_t3377 *, const MethodInfo*))List_1_RemoveAll_m17450_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m7420_gshared (List_1_t584 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m7420(__this, ___index, method) (( void (*) (List_1_t584 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7420_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m17453_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_Reverse_m17453(__this, method) (( void (*) (List_1_t584 *, const MethodInfo*))List_1_Reverse_m17453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m17455_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_Sort_m17455(__this, method) (( void (*) (List_1_t584 *, const MethodInfo*))List_1_Sort_m17455_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m17457_gshared (List_1_t584 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m17457(__this, ___comparer, method) (( void (*) (List_1_t584 *, Object_t*, const MethodInfo*))List_1_Sort_m17457_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17459_gshared (List_1_t584 * __this, Comparison_1_t3384 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17459(__this, ___comparison, method) (( void (*) (List_1_t584 *, Comparison_1_t3384 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t582* List_1_ToArray_m17461_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_ToArray_m17461(__this, method) (( ObjectU5BU5D_t582* (*) (List_1_t584 *, const MethodInfo*))List_1_ToArray_m17461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m17463_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17463(__this, method) (( void (*) (List_1_t584 *, const MethodInfo*))List_1_TrimExcess_m17463_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17465_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17465(__this, method) (( int32_t (*) (List_1_t584 *, const MethodInfo*))List_1_get_Capacity_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17467_gshared (List_1_t584 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17467(__this, ___value, method) (( void (*) (List_1_t584 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17467_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m7406_gshared (List_1_t584 * __this, const MethodInfo* method);
#define List_1_get_Count_m7406(__this, method) (( int32_t (*) (List_1_t584 *, const MethodInfo*))List_1_get_Count_m7406_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m7429_gshared (List_1_t584 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m7429(__this, ___index, method) (( Object_t * (*) (List_1_t584 *, int32_t, const MethodInfo*))List_1_get_Item_m7429_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m7430_gshared (List_1_t584 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m7430(__this, ___index, ___value, method) (( void (*) (List_1_t584 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m7430_gshared)(__this, ___index, ___value, method)

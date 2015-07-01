#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t487;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t511;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1189;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t3274;
// System.Object[]
struct ObjectU5BU5D_t485;
// System.Predicate`1<System.Object>
struct Predicate_1_t3276;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3503;
// System.Comparison`1<System.Object>
struct Comparison_1_t3283;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m2341_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1__ctor_m2341(__this, method) (( void (*) (List_1_t487 *, const MethodInfo*))List_1__ctor_m2341_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16488_gshared (List_1_t487 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16488(__this, ___collection, method) (( void (*) (List_1_t487 *, Object_t*, const MethodInfo*))List_1__ctor_m16488_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m16490_gshared (List_1_t487 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m16490(__this, ___capacity, method) (( void (*) (List_1_t487 *, int32_t, const MethodInfo*))List_1__ctor_m16490_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m16492_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16492(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16492_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6510_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6510(__this, method) (( Object_t* (*) (List_1_t487 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m6493_gshared (List_1_t487 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m6493(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t487 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m6489_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m6489(__this, method) (( Object_t * (*) (List_1_t487 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6489_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m6498_gshared (List_1_t487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m6498(__this, ___item, method) (( int32_t (*) (List_1_t487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6498_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m6500_gshared (List_1_t487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m6500(__this, ___item, method) (( bool (*) (List_1_t487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6500_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m6501_gshared (List_1_t487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m6501(__this, ___item, method) (( int32_t (*) (List_1_t487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m6502_gshared (List_1_t487 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m6502(__this, ___index, ___item, method) (( void (*) (List_1_t487 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6502_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m6503_gshared (List_1_t487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m6503(__this, ___item, method) (( void (*) (List_1_t487 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6503_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6505_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6505(__this, method) (( bool (*) (List_1_t487 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m6491_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m6491(__this, method) (( bool (*) (List_1_t487 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6491_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m6492_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m6492(__this, method) (( Object_t * (*) (List_1_t487 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m6494_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m6494(__this, method) (( bool (*) (List_1_t487 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m6495_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m6495(__this, method) (( bool (*) (List_1_t487 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6495_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m6496_gshared (List_1_t487 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m6496(__this, ___index, method) (( Object_t * (*) (List_1_t487 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m6497_gshared (List_1_t487 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m6497(__this, ___index, ___value, method) (( void (*) (List_1_t487 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6497_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m6506_gshared (List_1_t487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m6506(__this, ___item, method) (( void (*) (List_1_t487 *, Object_t *, const MethodInfo*))List_1_Add_m6506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16510_gshared (List_1_t487 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16510(__this, ___newCount, method) (( void (*) (List_1_t487 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16510_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16512_gshared (List_1_t487 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16512(__this, ___collection, method) (( void (*) (List_1_t487 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16512_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16514_gshared (List_1_t487 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16514(__this, ___enumerable, method) (( void (*) (List_1_t487 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16514_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16516_gshared (List_1_t487 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16516(__this, ___collection, method) (( void (*) (List_1_t487 *, Object_t*, const MethodInfo*))List_1_AddRange_m16516_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3274 * List_1_AsReadOnly_m16518_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16518(__this, method) (( ReadOnlyCollection_1_t3274 * (*) (List_1_t487 *, const MethodInfo*))List_1_AsReadOnly_m16518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m6499_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_Clear_m6499(__this, method) (( void (*) (List_1_t487 *, const MethodInfo*))List_1_Clear_m6499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m6507_gshared (List_1_t487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m6507(__this, ___item, method) (( bool (*) (List_1_t487 *, Object_t *, const MethodInfo*))List_1_Contains_m6507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m6508_gshared (List_1_t487 * __this, ObjectU5BU5D_t485* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m6508(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t487 *, ObjectU5BU5D_t485*, int32_t, const MethodInfo*))List_1_CopyTo_m6508_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m16523_gshared (List_1_t487 * __this, Predicate_1_t3276 * ___match, const MethodInfo* method);
#define List_1_Find_m16523(__this, ___match, method) (( Object_t * (*) (List_1_t487 *, Predicate_1_t3276 *, const MethodInfo*))List_1_Find_m16523_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16525_gshared (Object_t * __this /* static, unused */, Predicate_1_t3276 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16525(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3276 *, const MethodInfo*))List_1_CheckMatch_m16525_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16527_gshared (List_1_t487 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3276 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16527(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t487 *, int32_t, int32_t, Predicate_1_t3276 *, const MethodInfo*))List_1_GetIndex_m16527_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t539  List_1_GetEnumerator_m2444_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2444(__this, method) (( Enumerator_t539  (*) (List_1_t487 *, const MethodInfo*))List_1_GetEnumerator_m2444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m6511_gshared (List_1_t487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m6511(__this, ___item, method) (( int32_t (*) (List_1_t487 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6511_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16530_gshared (List_1_t487 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16530(__this, ___start, ___delta, method) (( void (*) (List_1_t487 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16530_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16532_gshared (List_1_t487 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16532(__this, ___index, method) (( void (*) (List_1_t487 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m6512_gshared (List_1_t487 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m6512(__this, ___index, ___item, method) (( void (*) (List_1_t487 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6512_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16535_gshared (List_1_t487 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16535(__this, ___collection, method) (( void (*) (List_1_t487 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16535_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m6509_gshared (List_1_t487 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m6509(__this, ___item, method) (( bool (*) (List_1_t487 *, Object_t *, const MethodInfo*))List_1_Remove_m6509_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16538_gshared (List_1_t487 * __this, Predicate_1_t3276 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16538(__this, ___match, method) (( int32_t (*) (List_1_t487 *, Predicate_1_t3276 *, const MethodInfo*))List_1_RemoveAll_m16538_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m6504_gshared (List_1_t487 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m6504(__this, ___index, method) (( void (*) (List_1_t487 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6504_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m16541_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_Reverse_m16541(__this, method) (( void (*) (List_1_t487 *, const MethodInfo*))List_1_Reverse_m16541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m16543_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_Sort_m16543(__this, method) (( void (*) (List_1_t487 *, const MethodInfo*))List_1_Sort_m16543_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m16545_gshared (List_1_t487 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m16545(__this, ___comparer, method) (( void (*) (List_1_t487 *, Object_t*, const MethodInfo*))List_1_Sort_m16545_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16547_gshared (List_1_t487 * __this, Comparison_1_t3283 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16547(__this, ___comparison, method) (( void (*) (List_1_t487 *, Comparison_1_t3283 *, const MethodInfo*))List_1_Sort_m16547_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t485* List_1_ToArray_m16549_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_ToArray_m16549(__this, method) (( ObjectU5BU5D_t485* (*) (List_1_t487 *, const MethodInfo*))List_1_ToArray_m16549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m16551_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16551(__this, method) (( void (*) (List_1_t487 *, const MethodInfo*))List_1_TrimExcess_m16551_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16553_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16553(__this, method) (( int32_t (*) (List_1_t487 *, const MethodInfo*))List_1_get_Capacity_m16553_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16555_gshared (List_1_t487 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16555(__this, ___value, method) (( void (*) (List_1_t487 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16555_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m6490_gshared (List_1_t487 * __this, const MethodInfo* method);
#define List_1_get_Count_m6490(__this, method) (( int32_t (*) (List_1_t487 *, const MethodInfo*))List_1_get_Count_m6490_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m6513_gshared (List_1_t487 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m6513(__this, ___index, method) (( Object_t * (*) (List_1_t487 *, int32_t, const MethodInfo*))List_1_get_Item_m6513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m6514_gshared (List_1_t487 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m6514(__this, ___index, ___value, method) (( void (*) (List_1_t487 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6514_gshared)(__this, ___index, ___value, method)

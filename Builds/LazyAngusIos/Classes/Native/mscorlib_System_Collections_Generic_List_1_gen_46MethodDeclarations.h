#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t1491;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1412;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1340;
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>
struct IEnumerator_1_t2154;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Threading.Tasks.Task>
struct ICollection_1_t9071;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Threading.Tasks.Task>
struct ReadOnlyCollection_1_t5990;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t5991;
// System.Collections.Generic.IComparer`1<System.Threading.Tasks.Task>
struct IComparer_1_t9072;
// System.Comparison`1<System.Threading.Tasks.Task>
struct Comparison_1_t5993;
// System.Collections.Generic.List`1/Enumerator<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"

// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30959(__this, method) (( void (*) (List_1_t1491 *, const MethodInfo*))List_1__ctor_m3699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30960(__this, ___collection, method) (( void (*) (List_1_t1491 *, Object_t*, const MethodInfo*))List_1__ctor_m7459_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Int32)
#define List_1__ctor_m30961(__this, ___capacity, method) (( void (*) (List_1_t1491 *, int32_t, const MethodInfo*))List_1__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(T[],System.Int32)
#define List_1__ctor_m30962(__this, ___data, ___size, method) (( void (*) (List_1_t1491 *, TaskU5BU5D_t1340*, int32_t, const MethodInfo*))List_1__ctor_m21559_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.cctor()
#define List_1__cctor_m30963(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21561_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30964(__this, method) (( Object_t* (*) (List_1_t1491 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30965(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1491 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10335_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30966(__this, method) (( Object_t * (*) (List_1_t1491 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30967(__this, ___item, method) (( int32_t (*) (List_1_t1491 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10340_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30968(__this, ___item, method) (( bool (*) (List_1_t1491 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10342_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30969(__this, ___item, method) (( int32_t (*) (List_1_t1491 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10343_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30970(__this, ___index, ___item, method) (( void (*) (List_1_t1491 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10344_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30971(__this, ___item, method) (( void (*) (List_1_t1491 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10345_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30972(__this, method) (( bool (*) (List_1_t1491 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30973(__this, method) (( bool (*) (List_1_t1491 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10333_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30974(__this, method) (( Object_t * (*) (List_1_t1491 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30975(__this, method) (( bool (*) (List_1_t1491 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10336_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30976(__this, method) (( bool (*) (List_1_t1491 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10337_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30977(__this, ___index, method) (( Object_t * (*) (List_1_t1491 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10338_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30978(__this, ___index, ___value, method) (( void (*) (List_1_t1491 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10339_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(T)
#define List_1_Add_m30979(__this, ___item, method) (( void (*) (List_1_t1491 *, Task_t1208 *, const MethodInfo*))List_1_Add_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30980(__this, ___newCount, method) (( void (*) (List_1_t1491 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21579_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30981(__this, ___idx, ___count, method) (( void (*) (List_1_t1491 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21581_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30982(__this, ___collection, method) (( void (*) (List_1_t1491 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21583_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30983(__this, ___enumerable, method) (( void (*) (List_1_t1491 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21585_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30984(__this, ___collection, method) (( void (*) (List_1_t1491 *, Object_t*, const MethodInfo*))List_1_AddRange_m21587_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AsReadOnly()
#define List_1_AsReadOnly_m30985(__this, method) (( ReadOnlyCollection_1_t5990 * (*) (List_1_t1491 *, const MethodInfo*))List_1_AsReadOnly_m21589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Clear()
#define List_1_Clear_m30986(__this, method) (( void (*) (List_1_t1491 *, const MethodInfo*))List_1_Clear_m10341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Contains(T)
#define List_1_Contains_m30987(__this, ___item, method) (( bool (*) (List_1_t1491 *, Task_t1208 *, const MethodInfo*))List_1_Contains_m10349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30988(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1491 *, TaskU5BU5D_t1340*, int32_t, const MethodInfo*))List_1_CopyTo_m10350_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Find(System.Predicate`1<T>)
#define List_1_Find_m30989(__this, ___match, method) (( Task_t1208 * (*) (List_1_t1491 *, Predicate_1_t5991 *, const MethodInfo*))List_1_Find_m21594_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30990(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5991 *, const MethodInfo*))List_1_CheckMatch_m21596_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30991(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1491 *, int32_t, int32_t, Predicate_1_t5991 *, const MethodInfo*))List_1_GetIndex_m21598_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetEnumerator()
#define List_1_GetEnumerator_m30992(__this, method) (( Enumerator_t5992  (*) (List_1_t1491 *, const MethodInfo*))List_1_GetEnumerator_m3855_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30993(__this, ___index, ___count, method) (( List_1_t1491 * (*) (List_1_t1491 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21600_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::IndexOf(T)
#define List_1_IndexOf_m30994(__this, ___item, method) (( int32_t (*) (List_1_t1491 *, Task_t1208 *, const MethodInfo*))List_1_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30995(__this, ___start, ___delta, method) (( void (*) (List_1_t1491 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21603_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30996(__this, ___index, method) (( void (*) (List_1_t1491 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21605_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Insert(System.Int32,T)
#define List_1_Insert_m30997(__this, ___index, ___item, method) (( void (*) (List_1_t1491 *, int32_t, Task_t1208 *, const MethodInfo*))List_1_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30998(__this, ___collection, method) (( void (*) (List_1_t1491 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21608_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30999(__this, ___index, ___collection, method) (( void (*) (List_1_t1491 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21610_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31000(__this, ___index, ___collection, method) (( void (*) (List_1_t1491 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21612_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31001(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1491 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21614_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Remove(T)
#define List_1_Remove_m31002(__this, ___item, method) (( bool (*) (List_1_t1491 *, Task_t1208 *, const MethodInfo*))List_1_Remove_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31003(__this, ___match, method) (( int32_t (*) (List_1_t1491 *, Predicate_1_t5991 *, const MethodInfo*))List_1_RemoveAll_m21617_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31004(__this, ___index, method) (( void (*) (List_1_t1491 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31005(__this, ___index, ___count, method) (( void (*) (List_1_t1491 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21620_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Reverse()
#define List_1_Reverse_m31006(__this, method) (( void (*) (List_1_t1491 *, const MethodInfo*))List_1_Reverse_m21622_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort()
#define List_1_Sort_m31007(__this, method) (( void (*) (List_1_t1491 *, const MethodInfo*))List_1_Sort_m21624_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31008(__this, ___comparer, method) (( void (*) (List_1_t1491 *, Object_t*, const MethodInfo*))List_1_Sort_m21626_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31009(__this, ___comparison, method) (( void (*) (List_1_t1491 *, Comparison_1_t5993 *, const MethodInfo*))List_1_Sort_m21628_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Threading.Tasks.Task>::ToArray()
#define List_1_ToArray_m31010(__this, method) (( TaskU5BU5D_t1340* (*) (List_1_t1491 *, const MethodInfo*))List_1_ToArray_m21630_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::TrimExcess()
#define List_1_TrimExcess_m31011(__this, method) (( void (*) (List_1_t1491 *, const MethodInfo*))List_1_TrimExcess_m21632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Capacity()
#define List_1_get_Capacity_m31012(__this, method) (( int32_t (*) (List_1_t1491 *, const MethodInfo*))List_1_get_Capacity_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31013(__this, ___value, method) (( void (*) (List_1_t1491 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21636_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Count()
#define List_1_get_Count_m31014(__this, method) (( int32_t (*) (List_1_t1491 *, const MethodInfo*))List_1_get_Count_m10332_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Item(System.Int32)
#define List_1_get_Item_m31015(__this, ___index, method) (( Task_t1208 * (*) (List_1_t1491 *, int32_t, const MethodInfo*))List_1_get_Item_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Item(System.Int32,T)
#define List_1_set_Item_m31016(__this, ___index, ___value, method) (( void (*) (List_1_t1491 *, int32_t, Task_t1208 *, const MethodInfo*))List_1_set_Item_m10356_gshared)(__this, ___index, ___value, method)

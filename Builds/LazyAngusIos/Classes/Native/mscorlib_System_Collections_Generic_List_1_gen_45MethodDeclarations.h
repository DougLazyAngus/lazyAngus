#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t1493;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1414;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1342;
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>
struct IEnumerator_1_t2156;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Threading.Tasks.Task>
struct ICollection_1_t9063;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Threading.Tasks.Task>
struct ReadOnlyCollection_1_t5986;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t5987;
// System.Collections.Generic.IComparer`1<System.Threading.Tasks.Task>
struct IComparer_1_t9064;
// System.Comparison`1<System.Threading.Tasks.Task>
struct Comparison_1_t5989;
// System.Collections.Generic.List`1/Enumerator<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_49.h"

// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30870(__this, method) (( void (*) (List_1_t1493 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30871(__this, ___collection, method) (( void (*) (List_1_t1493 *, Object_t*, const MethodInfo*))List_1__ctor_m7470_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Int32)
#define List_1__ctor_m30872(__this, ___capacity, method) (( void (*) (List_1_t1493 *, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(T[],System.Int32)
#define List_1__ctor_m30873(__this, ___data, ___size, method) (( void (*) (List_1_t1493 *, TaskU5BU5D_t1342*, int32_t, const MethodInfo*))List_1__ctor_m21571_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.cctor()
#define List_1__cctor_m30874(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21573_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30875(__this, method) (( Object_t* (*) (List_1_t1493 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30876(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1493 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10343_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30877(__this, method) (( Object_t * (*) (List_1_t1493 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30878(__this, ___item, method) (( int32_t (*) (List_1_t1493 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30879(__this, ___item, method) (( bool (*) (List_1_t1493 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30880(__this, ___item, method) (( int32_t (*) (List_1_t1493 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30881(__this, ___index, ___item, method) (( void (*) (List_1_t1493 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30882(__this, ___item, method) (( void (*) (List_1_t1493 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30883(__this, method) (( bool (*) (List_1_t1493 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30884(__this, method) (( bool (*) (List_1_t1493 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10341_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30885(__this, method) (( Object_t * (*) (List_1_t1493 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10342_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30886(__this, method) (( bool (*) (List_1_t1493 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30887(__this, method) (( bool (*) (List_1_t1493 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10345_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30888(__this, ___index, method) (( Object_t * (*) (List_1_t1493 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30889(__this, ___index, ___value, method) (( void (*) (List_1_t1493 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10347_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(T)
#define List_1_Add_m30890(__this, ___item, method) (( void (*) (List_1_t1493 *, Task_t1210 *, const MethodInfo*))List_1_Add_m10356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30891(__this, ___newCount, method) (( void (*) (List_1_t1493 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21591_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30892(__this, ___idx, ___count, method) (( void (*) (List_1_t1493 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21593_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30893(__this, ___collection, method) (( void (*) (List_1_t1493 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21595_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30894(__this, ___enumerable, method) (( void (*) (List_1_t1493 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21597_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30895(__this, ___collection, method) (( void (*) (List_1_t1493 *, Object_t*, const MethodInfo*))List_1_AddRange_m21599_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AsReadOnly()
#define List_1_AsReadOnly_m30896(__this, method) (( ReadOnlyCollection_1_t5986 * (*) (List_1_t1493 *, const MethodInfo*))List_1_AsReadOnly_m21601_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Clear()
#define List_1_Clear_m30897(__this, method) (( void (*) (List_1_t1493 *, const MethodInfo*))List_1_Clear_m10349_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Contains(T)
#define List_1_Contains_m30898(__this, ___item, method) (( bool (*) (List_1_t1493 *, Task_t1210 *, const MethodInfo*))List_1_Contains_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30899(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1493 *, TaskU5BU5D_t1342*, int32_t, const MethodInfo*))List_1_CopyTo_m10358_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Find(System.Predicate`1<T>)
#define List_1_Find_m30900(__this, ___match, method) (( Task_t1210 * (*) (List_1_t1493 *, Predicate_1_t5987 *, const MethodInfo*))List_1_Find_m21606_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30901(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5987 *, const MethodInfo*))List_1_CheckMatch_m21608_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30902(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1493 *, int32_t, int32_t, Predicate_1_t5987 *, const MethodInfo*))List_1_GetIndex_m21610_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetEnumerator()
#define List_1_GetEnumerator_m30903(__this, method) (( Enumerator_t5988  (*) (List_1_t1493 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30904(__this, ___index, ___count, method) (( List_1_t1493 * (*) (List_1_t1493 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21612_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::IndexOf(T)
#define List_1_IndexOf_m30905(__this, ___item, method) (( int32_t (*) (List_1_t1493 *, Task_t1210 *, const MethodInfo*))List_1_IndexOf_m10361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30906(__this, ___start, ___delta, method) (( void (*) (List_1_t1493 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21615_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30907(__this, ___index, method) (( void (*) (List_1_t1493 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Insert(System.Int32,T)
#define List_1_Insert_m30908(__this, ___index, ___item, method) (( void (*) (List_1_t1493 *, int32_t, Task_t1210 *, const MethodInfo*))List_1_Insert_m10362_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30909(__this, ___collection, method) (( void (*) (List_1_t1493 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21620_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30910(__this, ___index, ___collection, method) (( void (*) (List_1_t1493 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30911(__this, ___index, ___collection, method) (( void (*) (List_1_t1493 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21624_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30912(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1493 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21626_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Remove(T)
#define List_1_Remove_m30913(__this, ___item, method) (( bool (*) (List_1_t1493 *, Task_t1210 *, const MethodInfo*))List_1_Remove_m10359_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30914(__this, ___match, method) (( int32_t (*) (List_1_t1493 *, Predicate_1_t5987 *, const MethodInfo*))List_1_RemoveAll_m21629_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30915(__this, ___index, method) (( void (*) (List_1_t1493 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30916(__this, ___index, ___count, method) (( void (*) (List_1_t1493 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Reverse()
#define List_1_Reverse_m30917(__this, method) (( void (*) (List_1_t1493 *, const MethodInfo*))List_1_Reverse_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort()
#define List_1_Sort_m30918(__this, method) (( void (*) (List_1_t1493 *, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30919(__this, ___comparer, method) (( void (*) (List_1_t1493 *, Object_t*, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30920(__this, ___comparison, method) (( void (*) (List_1_t1493 *, Comparison_1_t5989 *, const MethodInfo*))List_1_Sort_m21640_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Threading.Tasks.Task>::ToArray()
#define List_1_ToArray_m30921(__this, method) (( TaskU5BU5D_t1342* (*) (List_1_t1493 *, const MethodInfo*))List_1_ToArray_m21642_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::TrimExcess()
#define List_1_TrimExcess_m30922(__this, method) (( void (*) (List_1_t1493 *, const MethodInfo*))List_1_TrimExcess_m21644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Capacity()
#define List_1_get_Capacity_m30923(__this, method) (( int32_t (*) (List_1_t1493 *, const MethodInfo*))List_1_get_Capacity_m21646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30924(__this, ___value, method) (( void (*) (List_1_t1493 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21648_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Count()
#define List_1_get_Count_m30925(__this, method) (( int32_t (*) (List_1_t1493 *, const MethodInfo*))List_1_get_Count_m10340_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Item(System.Int32)
#define List_1_get_Item_m30926(__this, ___index, method) (( Task_t1210 * (*) (List_1_t1493 *, int32_t, const MethodInfo*))List_1_get_Item_m10363_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Item(System.Int32,T)
#define List_1_set_Item_m30927(__this, ___index, ___value, method) (( void (*) (List_1_t1493 *, int32_t, Task_t1210 *, const MethodInfo*))List_1_set_Item_m10364_gshared)(__this, ___index, ___value, method)

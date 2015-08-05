#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t1444;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1365;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1293;
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>
struct IEnumerator_1_t2107;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Threading.Tasks.Task>
struct ICollection_1_t8974;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Threading.Tasks.Task>
struct ReadOnlyCollection_1_t5915;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t5916;
// System.Collections.Generic.IComparer`1<System.Threading.Tasks.Task>
struct IComparer_1_t8975;
// System.Comparison`1<System.Threading.Tasks.Task>
struct Comparison_1_t5918;
// System.Collections.Generic.List`1/Enumerator<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_46.h"

// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30194(__this, method) (( void (*) (List_1_t1444 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30195(__this, ___collection, method) (( void (*) (List_1_t1444 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Int32)
#define List_1__ctor_m30196(__this, ___capacity, method) (( void (*) (List_1_t1444 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(T[],System.Int32)
#define List_1__ctor_m30197(__this, ___data, ___size, method) (( void (*) (List_1_t1444 *, TaskU5BU5D_t1293*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.cctor()
#define List_1__cctor_m30198(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30199(__this, method) (( Object_t* (*) (List_1_t1444 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30200(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1444 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30201(__this, method) (( Object_t * (*) (List_1_t1444 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30202(__this, ___item, method) (( int32_t (*) (List_1_t1444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30203(__this, ___item, method) (( bool (*) (List_1_t1444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30204(__this, ___item, method) (( int32_t (*) (List_1_t1444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30205(__this, ___index, ___item, method) (( void (*) (List_1_t1444 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30206(__this, ___item, method) (( void (*) (List_1_t1444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30207(__this, method) (( bool (*) (List_1_t1444 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30208(__this, method) (( bool (*) (List_1_t1444 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30209(__this, method) (( Object_t * (*) (List_1_t1444 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30210(__this, method) (( bool (*) (List_1_t1444 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30211(__this, method) (( bool (*) (List_1_t1444 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30212(__this, ___index, method) (( Object_t * (*) (List_1_t1444 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30213(__this, ___index, ___value, method) (( void (*) (List_1_t1444 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(T)
#define List_1_Add_m30214(__this, ___item, method) (( void (*) (List_1_t1444 *, Task_t1159 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30215(__this, ___newCount, method) (( void (*) (List_1_t1444 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30216(__this, ___idx, ___count, method) (( void (*) (List_1_t1444 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30217(__this, ___collection, method) (( void (*) (List_1_t1444 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30218(__this, ___enumerable, method) (( void (*) (List_1_t1444 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30219(__this, ___collection, method) (( void (*) (List_1_t1444 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AsReadOnly()
#define List_1_AsReadOnly_m30220(__this, method) (( ReadOnlyCollection_1_t5915 * (*) (List_1_t1444 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Clear()
#define List_1_Clear_m30221(__this, method) (( void (*) (List_1_t1444 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Contains(T)
#define List_1_Contains_m30222(__this, ___item, method) (( bool (*) (List_1_t1444 *, Task_t1159 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30223(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1444 *, TaskU5BU5D_t1293*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Find(System.Predicate`1<T>)
#define List_1_Find_m30224(__this, ___match, method) (( Task_t1159 * (*) (List_1_t1444 *, Predicate_1_t5916 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30225(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5916 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30226(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1444 *, int32_t, int32_t, Predicate_1_t5916 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetEnumerator()
#define List_1_GetEnumerator_m30227(__this, method) (( Enumerator_t5917  (*) (List_1_t1444 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30228(__this, ___index, ___count, method) (( List_1_t1444 * (*) (List_1_t1444 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::IndexOf(T)
#define List_1_IndexOf_m30229(__this, ___item, method) (( int32_t (*) (List_1_t1444 *, Task_t1159 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30230(__this, ___start, ___delta, method) (( void (*) (List_1_t1444 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30231(__this, ___index, method) (( void (*) (List_1_t1444 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Insert(System.Int32,T)
#define List_1_Insert_m30232(__this, ___index, ___item, method) (( void (*) (List_1_t1444 *, int32_t, Task_t1159 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30233(__this, ___collection, method) (( void (*) (List_1_t1444 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30234(__this, ___index, ___collection, method) (( void (*) (List_1_t1444 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30235(__this, ___index, ___collection, method) (( void (*) (List_1_t1444 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30236(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1444 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Remove(T)
#define List_1_Remove_m30237(__this, ___item, method) (( bool (*) (List_1_t1444 *, Task_t1159 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30238(__this, ___match, method) (( int32_t (*) (List_1_t1444 *, Predicate_1_t5916 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30239(__this, ___index, method) (( void (*) (List_1_t1444 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30240(__this, ___index, ___count, method) (( void (*) (List_1_t1444 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Reverse()
#define List_1_Reverse_m30241(__this, method) (( void (*) (List_1_t1444 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort()
#define List_1_Sort_m30242(__this, method) (( void (*) (List_1_t1444 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30243(__this, ___comparer, method) (( void (*) (List_1_t1444 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30244(__this, ___comparison, method) (( void (*) (List_1_t1444 *, Comparison_1_t5918 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Threading.Tasks.Task>::ToArray()
#define List_1_ToArray_m30245(__this, method) (( TaskU5BU5D_t1293* (*) (List_1_t1444 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::TrimExcess()
#define List_1_TrimExcess_m30246(__this, method) (( void (*) (List_1_t1444 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Capacity()
#define List_1_get_Capacity_m30247(__this, method) (( int32_t (*) (List_1_t1444 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30248(__this, ___value, method) (( void (*) (List_1_t1444 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Count()
#define List_1_get_Count_m30249(__this, method) (( int32_t (*) (List_1_t1444 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Item(System.Int32)
#define List_1_get_Item_m30250(__this, ___index, method) (( Task_t1159 * (*) (List_1_t1444 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Item(System.Int32,T)
#define List_1_set_Item_m30251(__this, ___index, ___value, method) (( void (*) (List_1_t1444 *, int32_t, Task_t1159 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

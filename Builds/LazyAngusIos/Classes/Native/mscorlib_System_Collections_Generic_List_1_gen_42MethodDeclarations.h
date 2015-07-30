#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t1440;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1361;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1289;
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>
struct IEnumerator_1_t2103;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Threading.Tasks.Task>
struct ICollection_1_t8970;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Threading.Tasks.Task>
struct ReadOnlyCollection_1_t5911;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t5912;
// System.Collections.Generic.IComparer`1<System.Threading.Tasks.Task>
struct IComparer_1_t8971;
// System.Comparison`1<System.Threading.Tasks.Task>
struct Comparison_1_t5914;
// System.Collections.Generic.List`1/Enumerator<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_46.h"

// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30163(__this, method) (( void (*) (List_1_t1440 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30164(__this, ___collection, method) (( void (*) (List_1_t1440 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Int32)
#define List_1__ctor_m30165(__this, ___capacity, method) (( void (*) (List_1_t1440 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(T[],System.Int32)
#define List_1__ctor_m30166(__this, ___data, ___size, method) (( void (*) (List_1_t1440 *, TaskU5BU5D_t1289*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.cctor()
#define List_1__cctor_m30167(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30168(__this, method) (( Object_t* (*) (List_1_t1440 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30169(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1440 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30170(__this, method) (( Object_t * (*) (List_1_t1440 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30171(__this, ___item, method) (( int32_t (*) (List_1_t1440 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30172(__this, ___item, method) (( bool (*) (List_1_t1440 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30173(__this, ___item, method) (( int32_t (*) (List_1_t1440 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30174(__this, ___index, ___item, method) (( void (*) (List_1_t1440 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30175(__this, ___item, method) (( void (*) (List_1_t1440 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30176(__this, method) (( bool (*) (List_1_t1440 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30177(__this, method) (( bool (*) (List_1_t1440 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30178(__this, method) (( Object_t * (*) (List_1_t1440 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30179(__this, method) (( bool (*) (List_1_t1440 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30180(__this, method) (( bool (*) (List_1_t1440 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30181(__this, ___index, method) (( Object_t * (*) (List_1_t1440 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30182(__this, ___index, ___value, method) (( void (*) (List_1_t1440 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(T)
#define List_1_Add_m30183(__this, ___item, method) (( void (*) (List_1_t1440 *, Task_t1155 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30184(__this, ___newCount, method) (( void (*) (List_1_t1440 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30185(__this, ___idx, ___count, method) (( void (*) (List_1_t1440 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30186(__this, ___collection, method) (( void (*) (List_1_t1440 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30187(__this, ___enumerable, method) (( void (*) (List_1_t1440 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30188(__this, ___collection, method) (( void (*) (List_1_t1440 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AsReadOnly()
#define List_1_AsReadOnly_m30189(__this, method) (( ReadOnlyCollection_1_t5911 * (*) (List_1_t1440 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Clear()
#define List_1_Clear_m30190(__this, method) (( void (*) (List_1_t1440 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Contains(T)
#define List_1_Contains_m30191(__this, ___item, method) (( bool (*) (List_1_t1440 *, Task_t1155 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30192(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1440 *, TaskU5BU5D_t1289*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Find(System.Predicate`1<T>)
#define List_1_Find_m30193(__this, ___match, method) (( Task_t1155 * (*) (List_1_t1440 *, Predicate_1_t5912 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30194(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5912 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30195(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1440 *, int32_t, int32_t, Predicate_1_t5912 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetEnumerator()
#define List_1_GetEnumerator_m30196(__this, method) (( Enumerator_t5913  (*) (List_1_t1440 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30197(__this, ___index, ___count, method) (( List_1_t1440 * (*) (List_1_t1440 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::IndexOf(T)
#define List_1_IndexOf_m30198(__this, ___item, method) (( int32_t (*) (List_1_t1440 *, Task_t1155 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30199(__this, ___start, ___delta, method) (( void (*) (List_1_t1440 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30200(__this, ___index, method) (( void (*) (List_1_t1440 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Insert(System.Int32,T)
#define List_1_Insert_m30201(__this, ___index, ___item, method) (( void (*) (List_1_t1440 *, int32_t, Task_t1155 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30202(__this, ___collection, method) (( void (*) (List_1_t1440 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30203(__this, ___index, ___collection, method) (( void (*) (List_1_t1440 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30204(__this, ___index, ___collection, method) (( void (*) (List_1_t1440 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30205(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1440 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Remove(T)
#define List_1_Remove_m30206(__this, ___item, method) (( bool (*) (List_1_t1440 *, Task_t1155 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30207(__this, ___match, method) (( int32_t (*) (List_1_t1440 *, Predicate_1_t5912 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30208(__this, ___index, method) (( void (*) (List_1_t1440 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30209(__this, ___index, ___count, method) (( void (*) (List_1_t1440 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Reverse()
#define List_1_Reverse_m30210(__this, method) (( void (*) (List_1_t1440 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort()
#define List_1_Sort_m30211(__this, method) (( void (*) (List_1_t1440 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30212(__this, ___comparer, method) (( void (*) (List_1_t1440 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30213(__this, ___comparison, method) (( void (*) (List_1_t1440 *, Comparison_1_t5914 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Threading.Tasks.Task>::ToArray()
#define List_1_ToArray_m30214(__this, method) (( TaskU5BU5D_t1289* (*) (List_1_t1440 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::TrimExcess()
#define List_1_TrimExcess_m30215(__this, method) (( void (*) (List_1_t1440 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Capacity()
#define List_1_get_Capacity_m30216(__this, method) (( int32_t (*) (List_1_t1440 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30217(__this, ___value, method) (( void (*) (List_1_t1440 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Count()
#define List_1_get_Count_m30218(__this, method) (( int32_t (*) (List_1_t1440 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Item(System.Int32)
#define List_1_get_Item_m30219(__this, ___index, method) (( Task_t1155 * (*) (List_1_t1440 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Item(System.Int32,T)
#define List_1_set_Item_m30220(__this, ___index, ___value, method) (( void (*) (List_1_t1440 *, int32_t, Task_t1155 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)

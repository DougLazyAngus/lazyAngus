#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t1510;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1431;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1359;
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>
struct IEnumerator_1_t2173;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Threading.Tasks.Task>
struct ICollection_1_t9698;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Threading.Tasks.Task>
struct ReadOnlyCollection_1_t6555;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t6556;
// System.Collections.Generic.IComparer`1<System.Threading.Tasks.Task>
struct IComparer_1_t9699;
// System.Comparison`1<System.Threading.Tasks.Task>
struct Comparison_1_t6558;
// System.Collections.Generic.List`1/Enumerator<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"

// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m35552(__this, method) (( void (*) (List_1_t1510 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m35553(__this, ___collection, method) (( void (*) (List_1_t1510 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Int32)
#define List_1__ctor_m35554(__this, ___capacity, method) (( void (*) (List_1_t1510 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(T[],System.Int32)
#define List_1__ctor_m35555(__this, ___data, ___size, method) (( void (*) (List_1_t1510 *, TaskU5BU5D_t1359*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.cctor()
#define List_1__cctor_m35556(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35557(__this, method) (( Object_t* (*) (List_1_t1510 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m35558(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1510 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m35559(__this, method) (( Object_t * (*) (List_1_t1510 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m35560(__this, ___item, method) (( int32_t (*) (List_1_t1510 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m35561(__this, ___item, method) (( bool (*) (List_1_t1510 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m35562(__this, ___item, method) (( int32_t (*) (List_1_t1510 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m35563(__this, ___index, ___item, method) (( void (*) (List_1_t1510 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m35564(__this, ___item, method) (( void (*) (List_1_t1510 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35565(__this, method) (( bool (*) (List_1_t1510 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m35566(__this, method) (( bool (*) (List_1_t1510 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m35567(__this, method) (( Object_t * (*) (List_1_t1510 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m35568(__this, method) (( bool (*) (List_1_t1510 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m35569(__this, method) (( bool (*) (List_1_t1510 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m35570(__this, ___index, method) (( Object_t * (*) (List_1_t1510 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m35571(__this, ___index, ___value, method) (( void (*) (List_1_t1510 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(T)
#define List_1_Add_m35572(__this, ___item, method) (( void (*) (List_1_t1510 *, Task_t1227 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m35573(__this, ___newCount, method) (( void (*) (List_1_t1510 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m35574(__this, ___idx, ___count, method) (( void (*) (List_1_t1510 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m35575(__this, ___collection, method) (( void (*) (List_1_t1510 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m35576(__this, ___enumerable, method) (( void (*) (List_1_t1510 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m35577(__this, ___collection, method) (( void (*) (List_1_t1510 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AsReadOnly()
#define List_1_AsReadOnly_m35578(__this, method) (( ReadOnlyCollection_1_t6555 * (*) (List_1_t1510 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Clear()
#define List_1_Clear_m35579(__this, method) (( void (*) (List_1_t1510 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Contains(T)
#define List_1_Contains_m35580(__this, ___item, method) (( bool (*) (List_1_t1510 *, Task_t1227 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m35581(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1510 *, TaskU5BU5D_t1359*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Find(System.Predicate`1<T>)
#define List_1_Find_m35582(__this, ___match, method) (( Task_t1227 * (*) (List_1_t1510 *, Predicate_1_t6556 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m35583(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6556 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m35584(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1510 *, int32_t, int32_t, Predicate_1_t6556 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetEnumerator()
#define List_1_GetEnumerator_m35585(__this, method) (( Enumerator_t6557  (*) (List_1_t1510 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m35586(__this, ___index, ___count, method) (( List_1_t1510 * (*) (List_1_t1510 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::IndexOf(T)
#define List_1_IndexOf_m35587(__this, ___item, method) (( int32_t (*) (List_1_t1510 *, Task_t1227 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m35588(__this, ___start, ___delta, method) (( void (*) (List_1_t1510 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m35589(__this, ___index, method) (( void (*) (List_1_t1510 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Insert(System.Int32,T)
#define List_1_Insert_m35590(__this, ___index, ___item, method) (( void (*) (List_1_t1510 *, int32_t, Task_t1227 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m35591(__this, ___collection, method) (( void (*) (List_1_t1510 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m35592(__this, ___index, ___collection, method) (( void (*) (List_1_t1510 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m35593(__this, ___index, ___collection, method) (( void (*) (List_1_t1510 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m35594(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1510 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Remove(T)
#define List_1_Remove_m35595(__this, ___item, method) (( bool (*) (List_1_t1510 *, Task_t1227 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m35596(__this, ___match, method) (( int32_t (*) (List_1_t1510 *, Predicate_1_t6556 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m35597(__this, ___index, method) (( void (*) (List_1_t1510 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m35598(__this, ___index, ___count, method) (( void (*) (List_1_t1510 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Reverse()
#define List_1_Reverse_m35599(__this, method) (( void (*) (List_1_t1510 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort()
#define List_1_Sort_m35600(__this, method) (( void (*) (List_1_t1510 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m35601(__this, ___comparer, method) (( void (*) (List_1_t1510 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m35602(__this, ___comparison, method) (( void (*) (List_1_t1510 *, Comparison_1_t6558 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Threading.Tasks.Task>::ToArray()
#define List_1_ToArray_m35603(__this, method) (( TaskU5BU5D_t1359* (*) (List_1_t1510 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::TrimExcess()
#define List_1_TrimExcess_m35604(__this, method) (( void (*) (List_1_t1510 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Capacity()
#define List_1_get_Capacity_m35605(__this, method) (( int32_t (*) (List_1_t1510 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m35606(__this, ___value, method) (( void (*) (List_1_t1510 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Count()
#define List_1_get_Count_m35607(__this, method) (( int32_t (*) (List_1_t1510 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Item(System.Int32)
#define List_1_get_Item_m35608(__this, ___index, method) (( Task_t1227 * (*) (List_1_t1510 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Item(System.Int32,T)
#define List_1_set_Item_m35609(__this, ___index, ___value, method) (( void (*) (List_1_t1510 *, int32_t, Task_t1227 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

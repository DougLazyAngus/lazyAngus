#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
struct List_1_t2172;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1189;
// System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerable_1_t10209;
// System.Action`1<System.Threading.Tasks.Task>[]
struct Action_1U5BU5D_t8921;
// System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerator_1_t10210;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ICollection_1_t10211;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ReadOnlyCollection_1_t8922;
// System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>
struct Predicate_1_t8923;
// System.Collections.Generic.IComparer`1<System.Action`1<System.Threading.Tasks.Task>>
struct IComparer_1_t10212;
// System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>
struct Comparison_1_t8925;
// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Threading.Tasks.Task>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_101.h"

// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7969(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m64510(__this, ___collection, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Int32)
#define List_1__ctor_m64511(__this, ___capacity, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(T[],System.Int32)
#define List_1__ctor_m64512(__this, ___data, ___size, method) (( void (*) (List_1_t2172 *, Action_1U5BU5D_t8921*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.cctor()
#define List_1__cctor_m64513(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m64514(__this, method) (( Object_t* (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m64515(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2172 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m64516(__this, method) (( Object_t * (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m64517(__this, ___item, method) (( int32_t (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m64518(__this, ___item, method) (( bool (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m64519(__this, ___item, method) (( int32_t (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m64520(__this, ___index, ___item, method) (( void (*) (List_1_t2172 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m64521(__this, ___item, method) (( void (*) (List_1_t2172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m64522(__this, method) (( bool (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m64523(__this, method) (( bool (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m64524(__this, method) (( Object_t * (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m64525(__this, method) (( bool (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m64526(__this, method) (( bool (*) (List_1_t2172 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m64527(__this, ___index, method) (( Object_t * (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m64528(__this, ___index, ___value, method) (( void (*) (List_1_t2172 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Add(T)
#define List_1_Add_m64529(__this, ___item, method) (( void (*) (List_1_t2172 *, Action_1_t1189 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m64530(__this, ___newCount, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m64531(__this, ___idx, ___count, method) (( void (*) (List_1_t2172 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m64532(__this, ___collection, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m64533(__this, ___enumerable, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m64534(__this, ___collection, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AsReadOnly()
#define List_1_AsReadOnly_m64535(__this, method) (( ReadOnlyCollection_1_t8922 * (*) (List_1_t2172 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Clear()
#define List_1_Clear_m64536(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Contains(T)
#define List_1_Contains_m64537(__this, ___item, method) (( bool (*) (List_1_t2172 *, Action_1_t1189 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m64538(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2172 *, Action_1U5BU5D_t8921*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Find(System.Predicate`1<T>)
#define List_1_Find_m64539(__this, ___match, method) (( Action_1_t1189 * (*) (List_1_t2172 *, Predicate_1_t8923 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m64540(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8923 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m64541(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2172 *, int32_t, int32_t, Predicate_1_t8923 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator()
#define List_1_GetEnumerator_m64542(__this, method) (( Enumerator_t8924  (*) (List_1_t2172 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m64543(__this, ___index, ___count, method) (( List_1_t2172 * (*) (List_1_t2172 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::IndexOf(T)
#define List_1_IndexOf_m64544(__this, ___item, method) (( int32_t (*) (List_1_t2172 *, Action_1_t1189 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m64545(__this, ___start, ___delta, method) (( void (*) (List_1_t2172 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m64546(__this, ___index, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Insert(System.Int32,T)
#define List_1_Insert_m64547(__this, ___index, ___item, method) (( void (*) (List_1_t2172 *, int32_t, Action_1_t1189 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m64548(__this, ___collection, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m64549(__this, ___index, ___collection, method) (( void (*) (List_1_t2172 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m64550(__this, ___index, ___collection, method) (( void (*) (List_1_t2172 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m64551(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2172 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Remove(T)
#define List_1_Remove_m64552(__this, ___item, method) (( bool (*) (List_1_t2172 *, Action_1_t1189 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m64553(__this, ___match, method) (( int32_t (*) (List_1_t2172 *, Predicate_1_t8923 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m64554(__this, ___index, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m64555(__this, ___index, ___count, method) (( void (*) (List_1_t2172 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Reverse()
#define List_1_Reverse_m64556(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort()
#define List_1_Sort_m64557(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m64558(__this, ___comparer, method) (( void (*) (List_1_t2172 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m64559(__this, ___comparison, method) (( void (*) (List_1_t2172 *, Comparison_1_t8925 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::ToArray()
#define List_1_ToArray_m64560(__this, method) (( Action_1U5BU5D_t8921* (*) (List_1_t2172 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::TrimExcess()
#define List_1_TrimExcess_m64561(__this, method) (( void (*) (List_1_t2172 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Capacity()
#define List_1_get_Capacity_m64562(__this, method) (( int32_t (*) (List_1_t2172 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m64563(__this, ___value, method) (( void (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Count()
#define List_1_get_Count_m64564(__this, method) (( int32_t (*) (List_1_t2172 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Item(System.Int32)
#define List_1_get_Item_m64565(__this, ___index, method) (( Action_1_t1189 * (*) (List_1_t2172 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Item(System.Int32,T)
#define List_1_set_Item_m64566(__this, ___index, ___value, method) (( void (*) (List_1_t2172 *, int32_t, Action_1_t1189 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

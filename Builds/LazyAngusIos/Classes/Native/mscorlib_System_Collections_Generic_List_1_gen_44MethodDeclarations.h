#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
struct List_1_t2106;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1120;
// System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerable_1_t9485;
// System.Action`1<System.Threading.Tasks.Task>[]
struct Action_1U5BU5D_t8280;
// System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerator_1_t9486;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ICollection_1_t9487;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ReadOnlyCollection_1_t8281;
// System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>
struct Predicate_1_t8282;
// System.Collections.Generic.IComparer`1<System.Action`1<System.Threading.Tasks.Task>>
struct IComparer_1_t9488;
// System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>
struct Comparison_1_t8284;
// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Threading.Tasks.Task>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_94.h"

// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7566(__this, method) (( void (*) (List_1_t2106 *, const MethodInfo*))List_1__ctor_m3485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59122(__this, ___collection, method) (( void (*) (List_1_t2106 *, Object_t*, const MethodInfo*))List_1__ctor_m7223_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Int32)
#define List_1__ctor_m59123(__this, ___capacity, method) (( void (*) (List_1_t2106 *, int32_t, const MethodInfo*))List_1__ctor_m21323_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(T[],System.Int32)
#define List_1__ctor_m59124(__this, ___data, ___size, method) (( void (*) (List_1_t2106 *, Action_1U5BU5D_t8280*, int32_t, const MethodInfo*))List_1__ctor_m21325_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.cctor()
#define List_1__cctor_m59125(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21327_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59126(__this, method) (( Object_t* (*) (List_1_t2106 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59127(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2106 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10099_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59128(__this, method) (( Object_t * (*) (List_1_t2106 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10095_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59129(__this, ___item, method) (( int32_t (*) (List_1_t2106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59130(__this, ___item, method) (( bool (*) (List_1_t2106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10106_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59131(__this, ___item, method) (( int32_t (*) (List_1_t2106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59132(__this, ___index, ___item, method) (( void (*) (List_1_t2106 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10108_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59133(__this, ___item, method) (( void (*) (List_1_t2106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10109_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59134(__this, method) (( bool (*) (List_1_t2106 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10111_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59135(__this, method) (( bool (*) (List_1_t2106 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10097_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59136(__this, method) (( Object_t * (*) (List_1_t2106 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10098_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59137(__this, method) (( bool (*) (List_1_t2106 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59138(__this, method) (( bool (*) (List_1_t2106 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10101_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59139(__this, ___index, method) (( Object_t * (*) (List_1_t2106 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10102_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59140(__this, ___index, ___value, method) (( void (*) (List_1_t2106 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10103_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Add(T)
#define List_1_Add_m59141(__this, ___item, method) (( void (*) (List_1_t2106 *, Action_1_t1120 *, const MethodInfo*))List_1_Add_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59142(__this, ___newCount, method) (( void (*) (List_1_t2106 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21345_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59143(__this, ___idx, ___count, method) (( void (*) (List_1_t2106 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21347_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59144(__this, ___collection, method) (( void (*) (List_1_t2106 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21349_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59145(__this, ___enumerable, method) (( void (*) (List_1_t2106 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21351_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m59146(__this, ___collection, method) (( void (*) (List_1_t2106 *, Object_t*, const MethodInfo*))List_1_AddRange_m21353_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AsReadOnly()
#define List_1_AsReadOnly_m59147(__this, method) (( ReadOnlyCollection_1_t8281 * (*) (List_1_t2106 *, const MethodInfo*))List_1_AsReadOnly_m21355_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Clear()
#define List_1_Clear_m59148(__this, method) (( void (*) (List_1_t2106 *, const MethodInfo*))List_1_Clear_m10105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Contains(T)
#define List_1_Contains_m59149(__this, ___item, method) (( bool (*) (List_1_t2106 *, Action_1_t1120 *, const MethodInfo*))List_1_Contains_m10113_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59150(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2106 *, Action_1U5BU5D_t8280*, int32_t, const MethodInfo*))List_1_CopyTo_m10114_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Find(System.Predicate`1<T>)
#define List_1_Find_m59151(__this, ___match, method) (( Action_1_t1120 * (*) (List_1_t2106 *, Predicate_1_t8282 *, const MethodInfo*))List_1_Find_m21360_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59152(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8282 *, const MethodInfo*))List_1_CheckMatch_m21362_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59153(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2106 *, int32_t, int32_t, Predicate_1_t8282 *, const MethodInfo*))List_1_GetIndex_m21364_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator()
#define List_1_GetEnumerator_m59154(__this, method) (( Enumerator_t8283  (*) (List_1_t2106 *, const MethodInfo*))List_1_GetEnumerator_m3641_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59155(__this, ___index, ___count, method) (( List_1_t2106 * (*) (List_1_t2106 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21366_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::IndexOf(T)
#define List_1_IndexOf_m59156(__this, ___item, method) (( int32_t (*) (List_1_t2106 *, Action_1_t1120 *, const MethodInfo*))List_1_IndexOf_m10117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59157(__this, ___start, ___delta, method) (( void (*) (List_1_t2106 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21369_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59158(__this, ___index, method) (( void (*) (List_1_t2106 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21371_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Insert(System.Int32,T)
#define List_1_Insert_m59159(__this, ___index, ___item, method) (( void (*) (List_1_t2106 *, int32_t, Action_1_t1120 *, const MethodInfo*))List_1_Insert_m10118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59160(__this, ___collection, method) (( void (*) (List_1_t2106 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21374_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59161(__this, ___index, ___collection, method) (( void (*) (List_1_t2106 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21376_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59162(__this, ___index, ___collection, method) (( void (*) (List_1_t2106 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21378_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59163(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2106 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21380_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Remove(T)
#define List_1_Remove_m59164(__this, ___item, method) (( bool (*) (List_1_t2106 *, Action_1_t1120 *, const MethodInfo*))List_1_Remove_m10115_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59165(__this, ___match, method) (( int32_t (*) (List_1_t2106 *, Predicate_1_t8282 *, const MethodInfo*))List_1_RemoveAll_m21383_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59166(__this, ___index, method) (( void (*) (List_1_t2106 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10110_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59167(__this, ___index, ___count, method) (( void (*) (List_1_t2106 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21386_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Reverse()
#define List_1_Reverse_m59168(__this, method) (( void (*) (List_1_t2106 *, const MethodInfo*))List_1_Reverse_m21388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort()
#define List_1_Sort_m59169(__this, method) (( void (*) (List_1_t2106 *, const MethodInfo*))List_1_Sort_m21390_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59170(__this, ___comparer, method) (( void (*) (List_1_t2106 *, Object_t*, const MethodInfo*))List_1_Sort_m21392_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59171(__this, ___comparison, method) (( void (*) (List_1_t2106 *, Comparison_1_t8284 *, const MethodInfo*))List_1_Sort_m21394_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::ToArray()
#define List_1_ToArray_m59172(__this, method) (( Action_1U5BU5D_t8280* (*) (List_1_t2106 *, const MethodInfo*))List_1_ToArray_m21396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::TrimExcess()
#define List_1_TrimExcess_m59173(__this, method) (( void (*) (List_1_t2106 *, const MethodInfo*))List_1_TrimExcess_m21398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Capacity()
#define List_1_get_Capacity_m59174(__this, method) (( int32_t (*) (List_1_t2106 *, const MethodInfo*))List_1_get_Capacity_m21400_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59175(__this, ___value, method) (( void (*) (List_1_t2106 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21402_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Count()
#define List_1_get_Count_m59176(__this, method) (( int32_t (*) (List_1_t2106 *, const MethodInfo*))List_1_get_Count_m10096_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Item(System.Int32)
#define List_1_get_Item_m59177(__this, ___index, method) (( Action_1_t1120 * (*) (List_1_t2106 *, int32_t, const MethodInfo*))List_1_get_Item_m10119_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Item(System.Int32,T)
#define List_1_set_Item_m59178(__this, ___index, ___value, method) (( void (*) (List_1_t2106 *, int32_t, Action_1_t1120 *, const MethodInfo*))List_1_set_Item_m10120_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
struct List_1_t2153;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1170;
// System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerable_1_t9582;
// System.Action`1<System.Threading.Tasks.Task>[]
struct Action_1U5BU5D_t8354;
// System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>
struct IEnumerator_1_t9583;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ICollection_1_t9584;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Action`1<System.Threading.Tasks.Task>>
struct ReadOnlyCollection_1_t8355;
// System.Predicate`1<System.Action`1<System.Threading.Tasks.Task>>
struct Predicate_1_t8356;
// System.Collections.Generic.IComparer`1<System.Action`1<System.Threading.Tasks.Task>>
struct IComparer_1_t9585;
// System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>
struct Comparison_1_t8358;
// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Threading.Tasks.Task>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_98.h"

// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7802(__this, method) (( void (*) (List_1_t2153 *, const MethodInfo*))List_1__ctor_m3699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59883(__this, ___collection, method) (( void (*) (List_1_t2153 *, Object_t*, const MethodInfo*))List_1__ctor_m7459_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Int32)
#define List_1__ctor_m59884(__this, ___capacity, method) (( void (*) (List_1_t2153 *, int32_t, const MethodInfo*))List_1__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(T[],System.Int32)
#define List_1__ctor_m59885(__this, ___data, ___size, method) (( void (*) (List_1_t2153 *, Action_1U5BU5D_t8354*, int32_t, const MethodInfo*))List_1__ctor_m21559_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.cctor()
#define List_1__cctor_m59886(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21561_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59887(__this, method) (( Object_t* (*) (List_1_t2153 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59888(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2153 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10335_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59889(__this, method) (( Object_t * (*) (List_1_t2153 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59890(__this, ___item, method) (( int32_t (*) (List_1_t2153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10340_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59891(__this, ___item, method) (( bool (*) (List_1_t2153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10342_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59892(__this, ___item, method) (( int32_t (*) (List_1_t2153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10343_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59893(__this, ___index, ___item, method) (( void (*) (List_1_t2153 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10344_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59894(__this, ___item, method) (( void (*) (List_1_t2153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10345_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59895(__this, method) (( bool (*) (List_1_t2153 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59896(__this, method) (( bool (*) (List_1_t2153 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10333_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59897(__this, method) (( Object_t * (*) (List_1_t2153 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59898(__this, method) (( bool (*) (List_1_t2153 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10336_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59899(__this, method) (( bool (*) (List_1_t2153 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10337_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59900(__this, ___index, method) (( Object_t * (*) (List_1_t2153 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10338_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59901(__this, ___index, ___value, method) (( void (*) (List_1_t2153 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10339_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Add(T)
#define List_1_Add_m59902(__this, ___item, method) (( void (*) (List_1_t2153 *, Action_1_t1170 *, const MethodInfo*))List_1_Add_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59903(__this, ___newCount, method) (( void (*) (List_1_t2153 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21579_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59904(__this, ___idx, ___count, method) (( void (*) (List_1_t2153 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21581_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59905(__this, ___collection, method) (( void (*) (List_1_t2153 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21583_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59906(__this, ___enumerable, method) (( void (*) (List_1_t2153 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21585_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m59907(__this, ___collection, method) (( void (*) (List_1_t2153 *, Object_t*, const MethodInfo*))List_1_AddRange_m21587_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::AsReadOnly()
#define List_1_AsReadOnly_m59908(__this, method) (( ReadOnlyCollection_1_t8355 * (*) (List_1_t2153 *, const MethodInfo*))List_1_AsReadOnly_m21589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Clear()
#define List_1_Clear_m59909(__this, method) (( void (*) (List_1_t2153 *, const MethodInfo*))List_1_Clear_m10341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Contains(T)
#define List_1_Contains_m59910(__this, ___item, method) (( bool (*) (List_1_t2153 *, Action_1_t1170 *, const MethodInfo*))List_1_Contains_m10349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59911(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2153 *, Action_1U5BU5D_t8354*, int32_t, const MethodInfo*))List_1_CopyTo_m10350_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Find(System.Predicate`1<T>)
#define List_1_Find_m59912(__this, ___match, method) (( Action_1_t1170 * (*) (List_1_t2153 *, Predicate_1_t8356 *, const MethodInfo*))List_1_Find_m21594_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59913(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8356 *, const MethodInfo*))List_1_CheckMatch_m21596_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59914(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2153 *, int32_t, int32_t, Predicate_1_t8356 *, const MethodInfo*))List_1_GetIndex_m21598_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator()
#define List_1_GetEnumerator_m59915(__this, method) (( Enumerator_t8357  (*) (List_1_t2153 *, const MethodInfo*))List_1_GetEnumerator_m3855_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59916(__this, ___index, ___count, method) (( List_1_t2153 * (*) (List_1_t2153 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21600_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::IndexOf(T)
#define List_1_IndexOf_m59917(__this, ___item, method) (( int32_t (*) (List_1_t2153 *, Action_1_t1170 *, const MethodInfo*))List_1_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59918(__this, ___start, ___delta, method) (( void (*) (List_1_t2153 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21603_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59919(__this, ___index, method) (( void (*) (List_1_t2153 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21605_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Insert(System.Int32,T)
#define List_1_Insert_m59920(__this, ___index, ___item, method) (( void (*) (List_1_t2153 *, int32_t, Action_1_t1170 *, const MethodInfo*))List_1_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59921(__this, ___collection, method) (( void (*) (List_1_t2153 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21608_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59922(__this, ___index, ___collection, method) (( void (*) (List_1_t2153 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21610_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59923(__this, ___index, ___collection, method) (( void (*) (List_1_t2153 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21612_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59924(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2153 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21614_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Remove(T)
#define List_1_Remove_m59925(__this, ___item, method) (( bool (*) (List_1_t2153 *, Action_1_t1170 *, const MethodInfo*))List_1_Remove_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59926(__this, ___match, method) (( int32_t (*) (List_1_t2153 *, Predicate_1_t8356 *, const MethodInfo*))List_1_RemoveAll_m21617_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59927(__this, ___index, method) (( void (*) (List_1_t2153 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59928(__this, ___index, ___count, method) (( void (*) (List_1_t2153 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21620_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Reverse()
#define List_1_Reverse_m59929(__this, method) (( void (*) (List_1_t2153 *, const MethodInfo*))List_1_Reverse_m21622_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort()
#define List_1_Sort_m59930(__this, method) (( void (*) (List_1_t2153 *, const MethodInfo*))List_1_Sort_m21624_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59931(__this, ___comparer, method) (( void (*) (List_1_t2153 *, Object_t*, const MethodInfo*))List_1_Sort_m21626_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59932(__this, ___comparison, method) (( void (*) (List_1_t2153 *, Comparison_1_t8358 *, const MethodInfo*))List_1_Sort_m21628_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::ToArray()
#define List_1_ToArray_m59933(__this, method) (( Action_1U5BU5D_t8354* (*) (List_1_t2153 *, const MethodInfo*))List_1_ToArray_m21630_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::TrimExcess()
#define List_1_TrimExcess_m59934(__this, method) (( void (*) (List_1_t2153 *, const MethodInfo*))List_1_TrimExcess_m21632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Capacity()
#define List_1_get_Capacity_m59935(__this, method) (( int32_t (*) (List_1_t2153 *, const MethodInfo*))List_1_get_Capacity_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59936(__this, ___value, method) (( void (*) (List_1_t2153 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21636_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Count()
#define List_1_get_Count_m59937(__this, method) (( int32_t (*) (List_1_t2153 *, const MethodInfo*))List_1_get_Count_m10332_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::get_Item(System.Int32)
#define List_1_get_Item_m59938(__this, ___index, method) (( Action_1_t1170 * (*) (List_1_t2153 *, int32_t, const MethodInfo*))List_1_get_Item_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::set_Item(System.Int32,T)
#define List_1_set_Item_m59939(__this, ___index, ___value, method) (( void (*) (List_1_t2153 *, int32_t, Action_1_t1170 *, const MethodInfo*))List_1_set_Item_m10356_gshared)(__this, ___index, ___value, method)

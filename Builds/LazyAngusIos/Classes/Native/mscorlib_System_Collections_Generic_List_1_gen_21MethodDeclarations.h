#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<RealAngusItemDesc>
struct List_1_t683;
// System.Object
struct Object_t;
// RealAngusItemDesc
struct RealAngusItemDesc_t571;
// System.Collections.Generic.IEnumerable`1<RealAngusItemDesc>
struct IEnumerable_1_t9564;
// RealAngusItemDesc[]
struct RealAngusItemDescU5BU5D_t6284;
// System.Collections.Generic.IEnumerator`1<RealAngusItemDesc>
struct IEnumerator_1_t9565;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<RealAngusItemDesc>
struct ICollection_1_t9566;
// System.Collections.ObjectModel.ReadOnlyCollection`1<RealAngusItemDesc>
struct ReadOnlyCollection_1_t6286;
// System.Predicate`1<RealAngusItemDesc>
struct Predicate_1_t6287;
// System.Collections.Generic.IComparer`1<RealAngusItemDesc>
struct IComparer_1_t9567;
// System.Comparison`1<RealAngusItemDesc>
struct Comparison_1_t6289;
// System.Collections.Generic.List`1/Enumerator<RealAngusItemDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4543(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31496(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor(System.Int32)
#define List_1__ctor_m31497(__this, ___capacity, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor(T[],System.Int32)
#define List_1__ctor_m31498(__this, ___data, ___size, method) (( void (*) (List_1_t683 *, RealAngusItemDescU5BU5D_t6284*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.cctor()
#define List_1__cctor_m31499(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31500(__this, method) (( Object_t* (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31501(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t683 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31502(__this, method) (( Object_t * (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31503(__this, ___item, method) (( int32_t (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31504(__this, ___item, method) (( bool (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31505(__this, ___item, method) (( int32_t (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31506(__this, ___index, ___item, method) (( void (*) (List_1_t683 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31507(__this, ___item, method) (( void (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31508(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31509(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31510(__this, method) (( Object_t * (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31511(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31512(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31513(__this, ___index, method) (( Object_t * (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31514(__this, ___index, ___value, method) (( void (*) (List_1_t683 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(T)
#define List_1_Add_m31515(__this, ___item, method) (( void (*) (List_1_t683 *, RealAngusItemDesc_t571 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31516(__this, ___newCount, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31517(__this, ___idx, ___count, method) (( void (*) (List_1_t683 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31518(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31519(__this, ___enumerable, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31520(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<RealAngusItemDesc>::AsReadOnly()
#define List_1_AsReadOnly_m31521(__this, method) (( ReadOnlyCollection_1_t6286 * (*) (List_1_t683 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Clear()
#define List_1_Clear_m31522(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::Contains(T)
#define List_1_Contains_m31523(__this, ___item, method) (( bool (*) (List_1_t683 *, RealAngusItemDesc_t571 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31524(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t683 *, RealAngusItemDescU5BU5D_t6284*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<RealAngusItemDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m31525(__this, ___match, method) (( RealAngusItemDesc_t571 * (*) (List_1_t683 *, Predicate_1_t6287 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31526(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6287 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31527(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t683 *, int32_t, int32_t, Predicate_1_t6287 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RealAngusItemDesc>::GetEnumerator()
#define List_1_GetEnumerator_m31528(__this, method) (( Enumerator_t6288  (*) (List_1_t683 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RealAngusItemDesc>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31529(__this, ___index, ___count, method) (( List_1_t683 * (*) (List_1_t683 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::IndexOf(T)
#define List_1_IndexOf_m31530(__this, ___item, method) (( int32_t (*) (List_1_t683 *, RealAngusItemDesc_t571 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31531(__this, ___start, ___delta, method) (( void (*) (List_1_t683 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31532(__this, ___index, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Insert(System.Int32,T)
#define List_1_Insert_m31533(__this, ___index, ___item, method) (( void (*) (List_1_t683 *, int32_t, RealAngusItemDesc_t571 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31534(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31535(__this, ___index, ___collection, method) (( void (*) (List_1_t683 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31536(__this, ___index, ___collection, method) (( void (*) (List_1_t683 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31537(__this, ___index, ___enumerable, method) (( void (*) (List_1_t683 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::Remove(T)
#define List_1_Remove_m31538(__this, ___item, method) (( bool (*) (List_1_t683 *, RealAngusItemDesc_t571 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31539(__this, ___match, method) (( int32_t (*) (List_1_t683 *, Predicate_1_t6287 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31540(__this, ___index, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31541(__this, ___index, ___count, method) (( void (*) (List_1_t683 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Reverse()
#define List_1_Reverse_m31542(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Sort()
#define List_1_Sort_m31543(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31544(__this, ___comparer, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31545(__this, ___comparison, method) (( void (*) (List_1_t683 *, Comparison_1_t6289 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<RealAngusItemDesc>::ToArray()
#define List_1_ToArray_m31546(__this, method) (( RealAngusItemDescU5BU5D_t6284* (*) (List_1_t683 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::TrimExcess()
#define List_1_TrimExcess_m31547(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Capacity()
#define List_1_get_Capacity_m31548(__this, method) (( int32_t (*) (List_1_t683 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31549(__this, ___value, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count()
#define List_1_get_Count_m31550(__this, method) (( int32_t (*) (List_1_t683 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32)
#define List_1_get_Item_m31551(__this, ___index, method) (( RealAngusItemDesc_t571 * (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m31552(__this, ___index, ___value, method) (( void (*) (List_1_t683 *, int32_t, RealAngusItemDesc_t571 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)

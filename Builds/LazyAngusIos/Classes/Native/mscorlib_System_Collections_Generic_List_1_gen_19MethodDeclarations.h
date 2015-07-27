#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
struct List_1_t697;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<MouseHole/MouseHoleLocation>
struct IEnumerable_1_t4433;
// System.Collections.Generic.IEnumerator`1<MouseHole/MouseHoleLocation>
struct IEnumerator_1_t4434;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<MouseHole/MouseHoleLocation>
struct ICollection_1_t4435;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseHole/MouseHoleLocation>
struct ReadOnlyCollection_1_t3694;
// MouseHole/MouseHoleLocation[]
struct MouseHoleLocationU5BU5D_t3673;
// System.Predicate`1<MouseHole/MouseHoleLocation>
struct Predicate_1_t3695;
// System.Collections.Generic.IComparer`1<MouseHole/MouseHoleLocation>
struct IComparer_1_t4436;
// System.Comparison`1<MouseHole/MouseHoleLocation>
struct Comparison_1_t3697;
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// System.Collections.Generic.List`1/Enumerator<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor()
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_18MethodDeclarations.h"
#define List_1__ctor_m3659(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1__ctor_m3661_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m22427(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1__ctor_m22150_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Int32)
#define List_1__ctor_m22428(__this, ___capacity, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1__ctor_m22151_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.cctor()
#define List_1__cctor_m22429(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22152_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22430(__this, method) (( Object_t* (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m22431(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t697 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m22154_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22432(__this, method) (( Object_t * (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m22155_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m22433(__this, ___item, method) (( int32_t (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m22156_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m22434(__this, ___item, method) (( bool (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m22157_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m22435(__this, ___item, method) (( int32_t (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m22158_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m22436(__this, ___index, ___item, method) (( void (*) (List_1_t697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m22159_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m22437(__this, ___item, method) (( void (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m22160_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22438(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22161_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22439(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m22162_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m22440(__this, method) (( Object_t * (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m22163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m22441(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m22164_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m22442(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m22165_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m22443(__this, ___index, method) (( Object_t * (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m22166_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m22444(__this, ___index, ___value, method) (( void (*) (List_1_t697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m22167_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(T)
#define List_1_Add_m22445(__this, ___item, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_Add_m22168_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m22446(__this, ___newCount, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22169_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m22447(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22170_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m22448(__this, ___enumerable, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22171_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m22449(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddRange_m22172_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AsReadOnly()
#define List_1_AsReadOnly_m22450(__this, method) (( ReadOnlyCollection_1_t3694 * (*) (List_1_t697 *, const MethodInfo*))List_1_AsReadOnly_m22173_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Clear()
#define List_1_Clear_m22451(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Clear_m22174_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Contains(T)
#define List_1_Contains_m22452(__this, ___item, method) (( bool (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_Contains_m22175_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m22453(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t697 *, MouseHoleLocationU5BU5D_t3673*, int32_t, const MethodInfo*))List_1_CopyTo_m22176_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Find(System.Predicate`1<T>)
#define List_1_Find_m22454(__this, ___match, method) (( int32_t (*) (List_1_t697 *, Predicate_1_t3695 *, const MethodInfo*))List_1_Find_m22177_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m22455(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3695 *, const MethodInfo*))List_1_CheckMatch_m22178_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m22456(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t697 *, int32_t, int32_t, Predicate_1_t3695 *, const MethodInfo*))List_1_GetIndex_m22179_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetEnumerator()
#define List_1_GetEnumerator_m22457(__this, method) (( Enumerator_t3696  (*) (List_1_t697 *, const MethodInfo*))List_1_GetEnumerator_m22180_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::IndexOf(T)
#define List_1_IndexOf_m22458(__this, ___item, method) (( int32_t (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_IndexOf_m22181_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m22459(__this, ___start, ___delta, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22182_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m22460(__this, ___index, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22183_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Insert(System.Int32,T)
#define List_1_Insert_m22461(__this, ___index, ___item, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m22184_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m22462(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22185_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Remove(T)
#define List_1_Remove_m22463(__this, ___item, method) (( bool (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_Remove_m22186_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m22464(__this, ___match, method) (( int32_t (*) (List_1_t697 *, Predicate_1_t3695 *, const MethodInfo*))List_1_RemoveAll_m22187_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m22465(__this, ___index, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_RemoveAt_m22188_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Reverse()
#define List_1_Reverse_m22466(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Reverse_m22189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort()
#define List_1_Sort_m22467(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Sort_m22190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m22468(__this, ___comparer, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_Sort_m22191_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m22469(__this, ___comparison, method) (( void (*) (List_1_t697 *, Comparison_1_t3697 *, const MethodInfo*))List_1_Sort_m22192_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::ToArray()
#define List_1_ToArray_m22470(__this, method) (( MouseHoleLocationU5BU5D_t3673* (*) (List_1_t697 *, const MethodInfo*))List_1_ToArray_m22193_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::TrimExcess()
#define List_1_TrimExcess_m22471(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_TrimExcess_m22194_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Capacity()
#define List_1_get_Capacity_m22472(__this, method) (( int32_t (*) (List_1_t697 *, const MethodInfo*))List_1_get_Capacity_m22195_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m22473(__this, ___value, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22196_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Count()
#define List_1_get_Count_m22474(__this, method) (( int32_t (*) (List_1_t697 *, const MethodInfo*))List_1_get_Count_m22197_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Item(System.Int32)
#define List_1_get_Item_m22475(__this, ___index, method) (( int32_t (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_get_Item_m22198_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Item(System.Int32,T)
#define List_1_set_Item_m22476(__this, ___index, ___value, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m22199_gshared)(__this, ___index, ___value, method)

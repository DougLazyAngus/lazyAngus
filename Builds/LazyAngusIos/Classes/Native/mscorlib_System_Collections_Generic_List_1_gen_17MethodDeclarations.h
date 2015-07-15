#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
struct List_1_t637;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<MouseHole/MouseHoleLocation>
struct IEnumerable_1_t4327;
// System.Collections.Generic.IEnumerator`1<MouseHole/MouseHoleLocation>
struct IEnumerator_1_t4328;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<MouseHole/MouseHoleLocation>
struct ICollection_1_t4329;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseHole/MouseHoleLocation>
struct ReadOnlyCollection_1_t3619;
// MouseHole/MouseHoleLocation[]
struct MouseHoleLocationU5BU5D_t3598;
// System.Predicate`1<MouseHole/MouseHoleLocation>
struct Predicate_1_t3620;
// System.Collections.Generic.IComparer`1<MouseHole/MouseHoleLocation>
struct IComparer_1_t4330;
// System.Comparison`1<MouseHole/MouseHoleLocation>
struct Comparison_1_t3622;
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// System.Collections.Generic.List`1/Enumerator<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor()
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_16MethodDeclarations.h"
#define List_1__ctor_m3081(__this, method) (( void (*) (List_1_t637 *, const MethodInfo*))List_1__ctor_m3083_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21354(__this, ___collection, method) (( void (*) (List_1_t637 *, Object_t*, const MethodInfo*))List_1__ctor_m21077_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Int32)
#define List_1__ctor_m21355(__this, ___capacity, method) (( void (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1__ctor_m21078_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.cctor()
#define List_1__cctor_m21356(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21079_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21357(__this, method) (( Object_t* (*) (List_1_t637 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21080_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21358(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t637 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21081_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21359(__this, method) (( Object_t * (*) (List_1_t637 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21082_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21360(__this, ___item, method) (( int32_t (*) (List_1_t637 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21083_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21361(__this, ___item, method) (( bool (*) (List_1_t637 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21084_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21362(__this, ___item, method) (( int32_t (*) (List_1_t637 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21363(__this, ___index, ___item, method) (( void (*) (List_1_t637 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21086_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21364(__this, ___item, method) (( void (*) (List_1_t637 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21087_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21365(__this, method) (( bool (*) (List_1_t637 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21366(__this, method) (( bool (*) (List_1_t637 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21089_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21367(__this, method) (( Object_t * (*) (List_1_t637 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21090_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21368(__this, method) (( bool (*) (List_1_t637 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21091_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21369(__this, method) (( bool (*) (List_1_t637 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21092_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21370(__this, ___index, method) (( Object_t * (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21093_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21371(__this, ___index, ___value, method) (( void (*) (List_1_t637 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21094_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(T)
#define List_1_Add_m21372(__this, ___item, method) (( void (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_Add_m21095_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21373(__this, ___newCount, method) (( void (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21096_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21374(__this, ___collection, method) (( void (*) (List_1_t637 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21097_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21375(__this, ___enumerable, method) (( void (*) (List_1_t637 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21098_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m21376(__this, ___collection, method) (( void (*) (List_1_t637 *, Object_t*, const MethodInfo*))List_1_AddRange_m21099_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AsReadOnly()
#define List_1_AsReadOnly_m21377(__this, method) (( ReadOnlyCollection_1_t3619 * (*) (List_1_t637 *, const MethodInfo*))List_1_AsReadOnly_m21100_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Clear()
#define List_1_Clear_m21378(__this, method) (( void (*) (List_1_t637 *, const MethodInfo*))List_1_Clear_m21101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Contains(T)
#define List_1_Contains_m21379(__this, ___item, method) (( bool (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_Contains_m21102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21380(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t637 *, MouseHoleLocationU5BU5D_t3598*, int32_t, const MethodInfo*))List_1_CopyTo_m21103_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Find(System.Predicate`1<T>)
#define List_1_Find_m21381(__this, ___match, method) (( int32_t (*) (List_1_t637 *, Predicate_1_t3620 *, const MethodInfo*))List_1_Find_m21104_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21382(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3620 *, const MethodInfo*))List_1_CheckMatch_m21105_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21383(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t637 *, int32_t, int32_t, Predicate_1_t3620 *, const MethodInfo*))List_1_GetIndex_m21106_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetEnumerator()
#define List_1_GetEnumerator_m21384(__this, method) (( Enumerator_t3621  (*) (List_1_t637 *, const MethodInfo*))List_1_GetEnumerator_m21107_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::IndexOf(T)
#define List_1_IndexOf_m21385(__this, ___item, method) (( int32_t (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_IndexOf_m21108_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21386(__this, ___start, ___delta, method) (( void (*) (List_1_t637 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21109_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21387(__this, ___index, method) (( void (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21110_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Insert(System.Int32,T)
#define List_1_Insert_m21388(__this, ___index, ___item, method) (( void (*) (List_1_t637 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m21111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21389(__this, ___collection, method) (( void (*) (List_1_t637 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21112_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Remove(T)
#define List_1_Remove_m21390(__this, ___item, method) (( bool (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_Remove_m21113_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21391(__this, ___match, method) (( int32_t (*) (List_1_t637 *, Predicate_1_t3620 *, const MethodInfo*))List_1_RemoveAll_m21114_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21392(__this, ___index, method) (( void (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21115_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Reverse()
#define List_1_Reverse_m21393(__this, method) (( void (*) (List_1_t637 *, const MethodInfo*))List_1_Reverse_m21116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort()
#define List_1_Sort_m21394(__this, method) (( void (*) (List_1_t637 *, const MethodInfo*))List_1_Sort_m21117_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21395(__this, ___comparer, method) (( void (*) (List_1_t637 *, Object_t*, const MethodInfo*))List_1_Sort_m21118_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21396(__this, ___comparison, method) (( void (*) (List_1_t637 *, Comparison_1_t3622 *, const MethodInfo*))List_1_Sort_m21119_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::ToArray()
#define List_1_ToArray_m21397(__this, method) (( MouseHoleLocationU5BU5D_t3598* (*) (List_1_t637 *, const MethodInfo*))List_1_ToArray_m21120_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::TrimExcess()
#define List_1_TrimExcess_m21398(__this, method) (( void (*) (List_1_t637 *, const MethodInfo*))List_1_TrimExcess_m21121_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Capacity()
#define List_1_get_Capacity_m21399(__this, method) (( int32_t (*) (List_1_t637 *, const MethodInfo*))List_1_get_Capacity_m21122_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21400(__this, ___value, method) (( void (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21123_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Count()
#define List_1_get_Count_m21401(__this, method) (( int32_t (*) (List_1_t637 *, const MethodInfo*))List_1_get_Count_m21124_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Item(System.Int32)
#define List_1_get_Item_m21402(__this, ___index, method) (( int32_t (*) (List_1_t637 *, int32_t, const MethodInfo*))List_1_get_Item_m21125_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Item(System.Int32,T)
#define List_1_set_Item_m21403(__this, ___index, ___value, method) (( void (*) (List_1_t637 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m21126_gshared)(__this, ___index, ___value, method)

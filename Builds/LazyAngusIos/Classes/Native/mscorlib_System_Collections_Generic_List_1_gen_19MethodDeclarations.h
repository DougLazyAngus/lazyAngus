#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
struct List_1_t738;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<MouseHole/MouseHoleLocation>
struct IEnumerable_1_t8827;
// MouseHole/MouseHoleLocation[]
struct MouseHoleLocationU5BU5D_t5642;
// System.Collections.Generic.IEnumerator`1<MouseHole/MouseHoleLocation>
struct IEnumerator_1_t8828;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<MouseHole/MouseHoleLocation>
struct ICollection_1_t8829;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseHole/MouseHoleLocation>
struct ReadOnlyCollection_1_t5663;
// System.Predicate`1<MouseHole/MouseHoleLocation>
struct Predicate_1_t5664;
// System.Collections.Generic.IComparer`1<MouseHole/MouseHoleLocation>
struct IComparer_1_t8830;
// System.Comparison`1<MouseHole/MouseHoleLocation>
struct Comparison_1_t5666;
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// System.Collections.Generic.List`1/Enumerator<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor()
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_18MethodDeclarations.h"
#define List_1__ctor_m3951(__this, method) (( void (*) (List_1_t738 *, const MethodInfo*))List_1__ctor_m3953_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26356(__this, ___collection, method) (( void (*) (List_1_t738 *, Object_t*, const MethodInfo*))List_1__ctor_m26060_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Int32)
#define List_1__ctor_m26357(__this, ___capacity, method) (( void (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1__ctor_m26061_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(T[],System.Int32)
#define List_1__ctor_m26358(__this, ___data, ___size, method) (( void (*) (List_1_t738 *, MouseHoleLocationU5BU5D_t5642*, int32_t, const MethodInfo*))List_1__ctor_m26062_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.cctor()
#define List_1__cctor_m26359(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26063_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26360(__this, method) (( Object_t* (*) (List_1_t738 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26361(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t738 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26065_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26362(__this, method) (( Object_t * (*) (List_1_t738 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26066_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26363(__this, ___item, method) (( int32_t (*) (List_1_t738 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26067_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26364(__this, ___item, method) (( bool (*) (List_1_t738 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26365(__this, ___item, method) (( int32_t (*) (List_1_t738 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26366(__this, ___index, ___item, method) (( void (*) (List_1_t738 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26070_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26367(__this, ___item, method) (( void (*) (List_1_t738 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26071_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26368(__this, method) (( bool (*) (List_1_t738 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26369(__this, method) (( bool (*) (List_1_t738 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26370(__this, method) (( Object_t * (*) (List_1_t738 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26074_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26371(__this, method) (( bool (*) (List_1_t738 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26075_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26372(__this, method) (( bool (*) (List_1_t738 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26076_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26373(__this, ___index, method) (( Object_t * (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26077_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26374(__this, ___index, ___value, method) (( void (*) (List_1_t738 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26078_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(T)
#define List_1_Add_m26375(__this, ___item, method) (( void (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_Add_m26079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26376(__this, ___newCount, method) (( void (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26080_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26377(__this, ___idx, ___count, method) (( void (*) (List_1_t738 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26081_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26378(__this, ___collection, method) (( void (*) (List_1_t738 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26082_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26379(__this, ___enumerable, method) (( void (*) (List_1_t738 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26083_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26380(__this, ___collection, method) (( void (*) (List_1_t738 *, Object_t*, const MethodInfo*))List_1_AddRange_m26084_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AsReadOnly()
#define List_1_AsReadOnly_m26381(__this, method) (( ReadOnlyCollection_1_t5663 * (*) (List_1_t738 *, const MethodInfo*))List_1_AsReadOnly_m26085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Clear()
#define List_1_Clear_m26382(__this, method) (( void (*) (List_1_t738 *, const MethodInfo*))List_1_Clear_m26086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Contains(T)
#define List_1_Contains_m26383(__this, ___item, method) (( bool (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_Contains_m26087_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26384(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t738 *, MouseHoleLocationU5BU5D_t5642*, int32_t, const MethodInfo*))List_1_CopyTo_m26088_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Find(System.Predicate`1<T>)
#define List_1_Find_m26385(__this, ___match, method) (( int32_t (*) (List_1_t738 *, Predicate_1_t5664 *, const MethodInfo*))List_1_Find_m26089_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26386(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5664 *, const MethodInfo*))List_1_CheckMatch_m26090_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26387(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t738 *, int32_t, int32_t, Predicate_1_t5664 *, const MethodInfo*))List_1_GetIndex_m26091_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetEnumerator()
#define List_1_GetEnumerator_m26388(__this, method) (( Enumerator_t5665  (*) (List_1_t738 *, const MethodInfo*))List_1_GetEnumerator_m26092_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26389(__this, ___index, ___count, method) (( List_1_t738 * (*) (List_1_t738 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26093_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::IndexOf(T)
#define List_1_IndexOf_m26390(__this, ___item, method) (( int32_t (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_IndexOf_m26094_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26391(__this, ___start, ___delta, method) (( void (*) (List_1_t738 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26095_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26392(__this, ___index, method) (( void (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26096_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Insert(System.Int32,T)
#define List_1_Insert_m26393(__this, ___index, ___item, method) (( void (*) (List_1_t738 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m26097_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26394(__this, ___collection, method) (( void (*) (List_1_t738 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26098_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26395(__this, ___index, ___collection, method) (( void (*) (List_1_t738 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26099_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26396(__this, ___index, ___collection, method) (( void (*) (List_1_t738 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26100_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26397(__this, ___index, ___enumerable, method) (( void (*) (List_1_t738 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26101_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Remove(T)
#define List_1_Remove_m26398(__this, ___item, method) (( bool (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_Remove_m26102_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26399(__this, ___match, method) (( int32_t (*) (List_1_t738 *, Predicate_1_t5664 *, const MethodInfo*))List_1_RemoveAll_m26103_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26400(__this, ___index, method) (( void (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26401(__this, ___index, ___count, method) (( void (*) (List_1_t738 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26105_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Reverse()
#define List_1_Reverse_m26402(__this, method) (( void (*) (List_1_t738 *, const MethodInfo*))List_1_Reverse_m26106_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort()
#define List_1_Sort_m26403(__this, method) (( void (*) (List_1_t738 *, const MethodInfo*))List_1_Sort_m26107_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26404(__this, ___comparer, method) (( void (*) (List_1_t738 *, Object_t*, const MethodInfo*))List_1_Sort_m26108_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26405(__this, ___comparison, method) (( void (*) (List_1_t738 *, Comparison_1_t5666 *, const MethodInfo*))List_1_Sort_m26109_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::ToArray()
#define List_1_ToArray_m26406(__this, method) (( MouseHoleLocationU5BU5D_t5642* (*) (List_1_t738 *, const MethodInfo*))List_1_ToArray_m26110_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::TrimExcess()
#define List_1_TrimExcess_m26407(__this, method) (( void (*) (List_1_t738 *, const MethodInfo*))List_1_TrimExcess_m26111_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Capacity()
#define List_1_get_Capacity_m26408(__this, method) (( int32_t (*) (List_1_t738 *, const MethodInfo*))List_1_get_Capacity_m26112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26409(__this, ___value, method) (( void (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26113_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Count()
#define List_1_get_Count_m26410(__this, method) (( int32_t (*) (List_1_t738 *, const MethodInfo*))List_1_get_Count_m26114_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Item(System.Int32)
#define List_1_get_Item_m26411(__this, ___index, method) (( int32_t (*) (List_1_t738 *, int32_t, const MethodInfo*))List_1_get_Item_m26115_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Item(System.Int32,T)
#define List_1_set_Item_m26412(__this, ___index, ___value, method) (( void (*) (List_1_t738 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m26116_gshared)(__this, ___index, ___value, method)

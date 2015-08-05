#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
struct List_1_t746;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<MouseHole/MouseHoleLocation>
struct IEnumerable_1_t8838;
// MouseHole/MouseHoleLocation[]
struct MouseHoleLocationU5BU5D_t5652;
// System.Collections.Generic.IEnumerator`1<MouseHole/MouseHoleLocation>
struct IEnumerator_1_t8839;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<MouseHole/MouseHoleLocation>
struct ICollection_1_t8840;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseHole/MouseHoleLocation>
struct ReadOnlyCollection_1_t5673;
// System.Predicate`1<MouseHole/MouseHoleLocation>
struct Predicate_1_t5674;
// System.Collections.Generic.IComparer`1<MouseHole/MouseHoleLocation>
struct IComparer_1_t8841;
// System.Comparison`1<MouseHole/MouseHoleLocation>
struct Comparison_1_t5676;
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// System.Collections.Generic.List`1/Enumerator<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor()
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_18MethodDeclarations.h"
#define List_1__ctor_m4014(__this, method) (( void (*) (List_1_t746 *, const MethodInfo*))List_1__ctor_m4016_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26420(__this, ___collection, method) (( void (*) (List_1_t746 *, Object_t*, const MethodInfo*))List_1__ctor_m26124_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Int32)
#define List_1__ctor_m26421(__this, ___capacity, method) (( void (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1__ctor_m26125_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(T[],System.Int32)
#define List_1__ctor_m26422(__this, ___data, ___size, method) (( void (*) (List_1_t746 *, MouseHoleLocationU5BU5D_t5652*, int32_t, const MethodInfo*))List_1__ctor_m26126_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.cctor()
#define List_1__cctor_m26423(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26127_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26424(__this, method) (( Object_t* (*) (List_1_t746 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26128_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26425(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t746 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26129_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26426(__this, method) (( Object_t * (*) (List_1_t746 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26130_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26427(__this, ___item, method) (( int32_t (*) (List_1_t746 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26131_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26428(__this, ___item, method) (( bool (*) (List_1_t746 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26132_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26429(__this, ___item, method) (( int32_t (*) (List_1_t746 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26133_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26430(__this, ___index, ___item, method) (( void (*) (List_1_t746 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26134_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26431(__this, ___item, method) (( void (*) (List_1_t746 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26135_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26432(__this, method) (( bool (*) (List_1_t746 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26136_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26433(__this, method) (( bool (*) (List_1_t746 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26137_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26434(__this, method) (( Object_t * (*) (List_1_t746 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26138_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26435(__this, method) (( bool (*) (List_1_t746 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26139_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26436(__this, method) (( bool (*) (List_1_t746 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26140_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26437(__this, ___index, method) (( Object_t * (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26141_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26438(__this, ___index, ___value, method) (( void (*) (List_1_t746 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26142_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(T)
#define List_1_Add_m26439(__this, ___item, method) (( void (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_Add_m26143_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26440(__this, ___newCount, method) (( void (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26144_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26441(__this, ___idx, ___count, method) (( void (*) (List_1_t746 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26145_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26442(__this, ___collection, method) (( void (*) (List_1_t746 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26146_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26443(__this, ___enumerable, method) (( void (*) (List_1_t746 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26147_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26444(__this, ___collection, method) (( void (*) (List_1_t746 *, Object_t*, const MethodInfo*))List_1_AddRange_m26148_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AsReadOnly()
#define List_1_AsReadOnly_m26445(__this, method) (( ReadOnlyCollection_1_t5673 * (*) (List_1_t746 *, const MethodInfo*))List_1_AsReadOnly_m26149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Clear()
#define List_1_Clear_m26446(__this, method) (( void (*) (List_1_t746 *, const MethodInfo*))List_1_Clear_m26150_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Contains(T)
#define List_1_Contains_m26447(__this, ___item, method) (( bool (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_Contains_m26151_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26448(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t746 *, MouseHoleLocationU5BU5D_t5652*, int32_t, const MethodInfo*))List_1_CopyTo_m26152_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Find(System.Predicate`1<T>)
#define List_1_Find_m26449(__this, ___match, method) (( int32_t (*) (List_1_t746 *, Predicate_1_t5674 *, const MethodInfo*))List_1_Find_m26153_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26450(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5674 *, const MethodInfo*))List_1_CheckMatch_m26154_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26451(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t746 *, int32_t, int32_t, Predicate_1_t5674 *, const MethodInfo*))List_1_GetIndex_m26155_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetEnumerator()
#define List_1_GetEnumerator_m26452(__this, method) (( Enumerator_t5675  (*) (List_1_t746 *, const MethodInfo*))List_1_GetEnumerator_m26156_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26453(__this, ___index, ___count, method) (( List_1_t746 * (*) (List_1_t746 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26157_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::IndexOf(T)
#define List_1_IndexOf_m26454(__this, ___item, method) (( int32_t (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_IndexOf_m26158_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26455(__this, ___start, ___delta, method) (( void (*) (List_1_t746 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26159_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26456(__this, ___index, method) (( void (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26160_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Insert(System.Int32,T)
#define List_1_Insert_m26457(__this, ___index, ___item, method) (( void (*) (List_1_t746 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m26161_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26458(__this, ___collection, method) (( void (*) (List_1_t746 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26162_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26459(__this, ___index, ___collection, method) (( void (*) (List_1_t746 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26163_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26460(__this, ___index, ___collection, method) (( void (*) (List_1_t746 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26164_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26461(__this, ___index, ___enumerable, method) (( void (*) (List_1_t746 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26165_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Remove(T)
#define List_1_Remove_m26462(__this, ___item, method) (( bool (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_Remove_m26166_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26463(__this, ___match, method) (( int32_t (*) (List_1_t746 *, Predicate_1_t5674 *, const MethodInfo*))List_1_RemoveAll_m26167_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26464(__this, ___index, method) (( void (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26168_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26465(__this, ___index, ___count, method) (( void (*) (List_1_t746 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26169_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Reverse()
#define List_1_Reverse_m26466(__this, method) (( void (*) (List_1_t746 *, const MethodInfo*))List_1_Reverse_m26170_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort()
#define List_1_Sort_m26467(__this, method) (( void (*) (List_1_t746 *, const MethodInfo*))List_1_Sort_m26171_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26468(__this, ___comparer, method) (( void (*) (List_1_t746 *, Object_t*, const MethodInfo*))List_1_Sort_m26172_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26469(__this, ___comparison, method) (( void (*) (List_1_t746 *, Comparison_1_t5676 *, const MethodInfo*))List_1_Sort_m26173_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::ToArray()
#define List_1_ToArray_m26470(__this, method) (( MouseHoleLocationU5BU5D_t5652* (*) (List_1_t746 *, const MethodInfo*))List_1_ToArray_m26174_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::TrimExcess()
#define List_1_TrimExcess_m26471(__this, method) (( void (*) (List_1_t746 *, const MethodInfo*))List_1_TrimExcess_m26175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Capacity()
#define List_1_get_Capacity_m26472(__this, method) (( int32_t (*) (List_1_t746 *, const MethodInfo*))List_1_get_Capacity_m26176_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26473(__this, ___value, method) (( void (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26177_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Count()
#define List_1_get_Count_m26474(__this, method) (( int32_t (*) (List_1_t746 *, const MethodInfo*))List_1_get_Count_m26178_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Item(System.Int32)
#define List_1_get_Item_m26475(__this, ___index, method) (( int32_t (*) (List_1_t746 *, int32_t, const MethodInfo*))List_1_get_Item_m26179_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Item(System.Int32,T)
#define List_1_set_Item_m26476(__this, ___index, ___value, method) (( void (*) (List_1_t746 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m26180_gshared)(__this, ___index, ___value, method)

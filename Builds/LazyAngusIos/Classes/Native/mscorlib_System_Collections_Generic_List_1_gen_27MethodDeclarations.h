#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t739;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t4383;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t4380;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t875;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t3671;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t736;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3672;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t4384;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3674;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m4478_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1__ctor_m4478(__this, method) (( void (*) (List_1_t739 *, const MethodInfo*))List_1__ctor_m4478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23019_gshared (List_1_t739 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23019(__this, ___collection, method) (( void (*) (List_1_t739 *, Object_t*, const MethodInfo*))List_1__ctor_m23019_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6259_gshared (List_1_t739 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6259(__this, ___capacity, method) (( void (*) (List_1_t739 *, int32_t, const MethodInfo*))List_1__ctor_m6259_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m23020_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23020(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23020_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23021_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23021(__this, method) (( Object_t* (*) (List_1_t739 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23022_gshared (List_1_t739 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23022(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t739 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23022_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23023_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23023(__this, method) (( Object_t * (*) (List_1_t739 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23023_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23024_gshared (List_1_t739 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23024(__this, ___item, method) (( int32_t (*) (List_1_t739 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23024_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23025_gshared (List_1_t739 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23025(__this, ___item, method) (( bool (*) (List_1_t739 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23025_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23026_gshared (List_1_t739 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23026(__this, ___item, method) (( int32_t (*) (List_1_t739 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23026_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23027_gshared (List_1_t739 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23027(__this, ___index, ___item, method) (( void (*) (List_1_t739 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23027_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23028_gshared (List_1_t739 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23028(__this, ___item, method) (( void (*) (List_1_t739 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23028_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23029_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23029(__this, method) (( bool (*) (List_1_t739 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23029_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23030_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23030(__this, method) (( bool (*) (List_1_t739 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23030_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23031_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23031(__this, method) (( Object_t * (*) (List_1_t739 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23031_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23032_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23032(__this, method) (( bool (*) (List_1_t739 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23032_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23033_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23033(__this, method) (( bool (*) (List_1_t739 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23033_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23034_gshared (List_1_t739 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23034(__this, ___index, method) (( Object_t * (*) (List_1_t739 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23034_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23035_gshared (List_1_t739 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23035(__this, ___index, ___value, method) (( void (*) (List_1_t739 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23035_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m23036_gshared (List_1_t739 * __this, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_Add_m23036(__this, ___item, method) (( void (*) (List_1_t739 *, UIVertex_t737 , const MethodInfo*))List_1_Add_m23036_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23037_gshared (List_1_t739 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23037(__this, ___newCount, method) (( void (*) (List_1_t739 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23037_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23038_gshared (List_1_t739 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23038(__this, ___collection, method) (( void (*) (List_1_t739 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23038_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23039_gshared (List_1_t739 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23039(__this, ___enumerable, method) (( void (*) (List_1_t739 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23039_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23040_gshared (List_1_t739 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23040(__this, ___collection, method) (( void (*) (List_1_t739 *, Object_t*, const MethodInfo*))List_1_AddRange_m23040_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3671 * List_1_AsReadOnly_m23041_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23041(__this, method) (( ReadOnlyCollection_1_t3671 * (*) (List_1_t739 *, const MethodInfo*))List_1_AsReadOnly_m23041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m23042_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_Clear_m23042(__this, method) (( void (*) (List_1_t739 *, const MethodInfo*))List_1_Clear_m23042_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m23043_gshared (List_1_t739 * __this, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_Contains_m23043(__this, ___item, method) (( bool (*) (List_1_t739 *, UIVertex_t737 , const MethodInfo*))List_1_Contains_m23043_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23044_gshared (List_1_t739 * __this, UIVertexU5BU5D_t736* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23044(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t739 *, UIVertexU5BU5D_t736*, int32_t, const MethodInfo*))List_1_CopyTo_m23044_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t737  List_1_Find_m23045_gshared (List_1_t739 * __this, Predicate_1_t3672 * ___match, const MethodInfo* method);
#define List_1_Find_m23045(__this, ___match, method) (( UIVertex_t737  (*) (List_1_t739 *, Predicate_1_t3672 *, const MethodInfo*))List_1_Find_m23045_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23046_gshared (Object_t * __this /* static, unused */, Predicate_1_t3672 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23046(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3672 *, const MethodInfo*))List_1_CheckMatch_m23046_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23047_gshared (List_1_t739 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3672 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23047(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t739 *, int32_t, int32_t, Predicate_1_t3672 *, const MethodInfo*))List_1_GetIndex_m23047_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t3673  List_1_GetEnumerator_m23048_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23048(__this, method) (( Enumerator_t3673  (*) (List_1_t739 *, const MethodInfo*))List_1_GetEnumerator_m23048_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23049_gshared (List_1_t739 * __this, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_IndexOf_m23049(__this, ___item, method) (( int32_t (*) (List_1_t739 *, UIVertex_t737 , const MethodInfo*))List_1_IndexOf_m23049_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23050_gshared (List_1_t739 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23050(__this, ___start, ___delta, method) (( void (*) (List_1_t739 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23050_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23051_gshared (List_1_t739 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23051(__this, ___index, method) (( void (*) (List_1_t739 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23051_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23052_gshared (List_1_t739 * __this, int32_t ___index, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_Insert_m23052(__this, ___index, ___item, method) (( void (*) (List_1_t739 *, int32_t, UIVertex_t737 , const MethodInfo*))List_1_Insert_m23052_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23053_gshared (List_1_t739 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23053(__this, ___collection, method) (( void (*) (List_1_t739 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23053_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m23054_gshared (List_1_t739 * __this, UIVertex_t737  ___item, const MethodInfo* method);
#define List_1_Remove_m23054(__this, ___item, method) (( bool (*) (List_1_t739 *, UIVertex_t737 , const MethodInfo*))List_1_Remove_m23054_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23055_gshared (List_1_t739 * __this, Predicate_1_t3672 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23055(__this, ___match, method) (( int32_t (*) (List_1_t739 *, Predicate_1_t3672 *, const MethodInfo*))List_1_RemoveAll_m23055_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23056_gshared (List_1_t739 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23056(__this, ___index, method) (( void (*) (List_1_t739 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23056_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m23057_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_Reverse_m23057(__this, method) (( void (*) (List_1_t739 *, const MethodInfo*))List_1_Reverse_m23057_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m23058_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_Sort_m23058(__this, method) (( void (*) (List_1_t739 *, const MethodInfo*))List_1_Sort_m23058_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m23059_gshared (List_1_t739 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m23059(__this, ___comparer, method) (( void (*) (List_1_t739 *, Object_t*, const MethodInfo*))List_1_Sort_m23059_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23060_gshared (List_1_t739 * __this, Comparison_1_t3674 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23060(__this, ___comparison, method) (( void (*) (List_1_t739 *, Comparison_1_t3674 *, const MethodInfo*))List_1_Sort_m23060_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t736* List_1_ToArray_m4525_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_ToArray_m4525(__this, method) (( UIVertexU5BU5D_t736* (*) (List_1_t739 *, const MethodInfo*))List_1_ToArray_m4525_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m23061_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23061(__this, method) (( void (*) (List_1_t739 *, const MethodInfo*))List_1_TrimExcess_m23061_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m4396_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m4396(__this, method) (( int32_t (*) (List_1_t739 *, const MethodInfo*))List_1_get_Capacity_m4396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m4397_gshared (List_1_t739 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m4397(__this, ___value, method) (( void (*) (List_1_t739 *, int32_t, const MethodInfo*))List_1_set_Capacity_m4397_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m23062_gshared (List_1_t739 * __this, const MethodInfo* method);
#define List_1_get_Count_m23062(__this, method) (( int32_t (*) (List_1_t739 *, const MethodInfo*))List_1_get_Count_m23062_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t737  List_1_get_Item_m23063_gshared (List_1_t739 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23063(__this, ___index, method) (( UIVertex_t737  (*) (List_1_t739 *, int32_t, const MethodInfo*))List_1_get_Item_m23063_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23064_gshared (List_1_t739 * __this, int32_t ___index, UIVertex_t737  ___value, const MethodInfo* method);
#define List_1_set_Item_m23064(__this, ___index, ___value, method) (( void (*) (List_1_t739 *, int32_t, UIVertex_t737 , const MethodInfo*))List_1_set_Item_m23064_gshared)(__this, ___index, ___value, method)

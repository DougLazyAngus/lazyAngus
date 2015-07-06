#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t762;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t4407;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t4404;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t897;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t3695;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t759;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3696;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t4408;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3698;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m4626_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1__ctor_m4626(__this, method) (( void (*) (List_1_t762 *, const MethodInfo*))List_1__ctor_m4626_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23177_gshared (List_1_t762 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23177(__this, ___collection, method) (( void (*) (List_1_t762 *, Object_t*, const MethodInfo*))List_1__ctor_m23177_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6407_gshared (List_1_t762 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6407(__this, ___capacity, method) (( void (*) (List_1_t762 *, int32_t, const MethodInfo*))List_1__ctor_m6407_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m23178_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23178(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23178_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23179_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23179(__this, method) (( Object_t* (*) (List_1_t762 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23179_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23180_gshared (List_1_t762 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23180(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t762 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23180_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23181_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23181(__this, method) (( Object_t * (*) (List_1_t762 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23181_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23182_gshared (List_1_t762 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23182(__this, ___item, method) (( int32_t (*) (List_1_t762 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23182_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23183_gshared (List_1_t762 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23183(__this, ___item, method) (( bool (*) (List_1_t762 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23183_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23184_gshared (List_1_t762 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23184(__this, ___item, method) (( int32_t (*) (List_1_t762 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23184_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23185_gshared (List_1_t762 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23185(__this, ___index, ___item, method) (( void (*) (List_1_t762 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23185_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23186_gshared (List_1_t762 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23186(__this, ___item, method) (( void (*) (List_1_t762 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23186_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23187_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23187(__this, method) (( bool (*) (List_1_t762 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23187_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23188_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23188(__this, method) (( bool (*) (List_1_t762 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23188_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23189_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23189(__this, method) (( Object_t * (*) (List_1_t762 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23190_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23190(__this, method) (( bool (*) (List_1_t762 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23190_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23191_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23191(__this, method) (( bool (*) (List_1_t762 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23191_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23192_gshared (List_1_t762 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23192(__this, ___index, method) (( Object_t * (*) (List_1_t762 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23192_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23193_gshared (List_1_t762 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23193(__this, ___index, ___value, method) (( void (*) (List_1_t762 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23193_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m23194_gshared (List_1_t762 * __this, UIVertex_t760  ___item, const MethodInfo* method);
#define List_1_Add_m23194(__this, ___item, method) (( void (*) (List_1_t762 *, UIVertex_t760 , const MethodInfo*))List_1_Add_m23194_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23195_gshared (List_1_t762 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23195(__this, ___newCount, method) (( void (*) (List_1_t762 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23195_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23196_gshared (List_1_t762 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23196(__this, ___collection, method) (( void (*) (List_1_t762 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23196_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23197_gshared (List_1_t762 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23197(__this, ___enumerable, method) (( void (*) (List_1_t762 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23197_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23198_gshared (List_1_t762 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23198(__this, ___collection, method) (( void (*) (List_1_t762 *, Object_t*, const MethodInfo*))List_1_AddRange_m23198_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3695 * List_1_AsReadOnly_m23199_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23199(__this, method) (( ReadOnlyCollection_1_t3695 * (*) (List_1_t762 *, const MethodInfo*))List_1_AsReadOnly_m23199_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m23200_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_Clear_m23200(__this, method) (( void (*) (List_1_t762 *, const MethodInfo*))List_1_Clear_m23200_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m23201_gshared (List_1_t762 * __this, UIVertex_t760  ___item, const MethodInfo* method);
#define List_1_Contains_m23201(__this, ___item, method) (( bool (*) (List_1_t762 *, UIVertex_t760 , const MethodInfo*))List_1_Contains_m23201_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23202_gshared (List_1_t762 * __this, UIVertexU5BU5D_t759* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23202(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t762 *, UIVertexU5BU5D_t759*, int32_t, const MethodInfo*))List_1_CopyTo_m23202_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t760  List_1_Find_m23203_gshared (List_1_t762 * __this, Predicate_1_t3696 * ___match, const MethodInfo* method);
#define List_1_Find_m23203(__this, ___match, method) (( UIVertex_t760  (*) (List_1_t762 *, Predicate_1_t3696 *, const MethodInfo*))List_1_Find_m23203_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23204_gshared (Object_t * __this /* static, unused */, Predicate_1_t3696 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23204(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3696 *, const MethodInfo*))List_1_CheckMatch_m23204_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23205_gshared (List_1_t762 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3696 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23205(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t762 *, int32_t, int32_t, Predicate_1_t3696 *, const MethodInfo*))List_1_GetIndex_m23205_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t3697  List_1_GetEnumerator_m23206_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23206(__this, method) (( Enumerator_t3697  (*) (List_1_t762 *, const MethodInfo*))List_1_GetEnumerator_m23206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23207_gshared (List_1_t762 * __this, UIVertex_t760  ___item, const MethodInfo* method);
#define List_1_IndexOf_m23207(__this, ___item, method) (( int32_t (*) (List_1_t762 *, UIVertex_t760 , const MethodInfo*))List_1_IndexOf_m23207_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23208_gshared (List_1_t762 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23208(__this, ___start, ___delta, method) (( void (*) (List_1_t762 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23208_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23209_gshared (List_1_t762 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23209(__this, ___index, method) (( void (*) (List_1_t762 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23209_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23210_gshared (List_1_t762 * __this, int32_t ___index, UIVertex_t760  ___item, const MethodInfo* method);
#define List_1_Insert_m23210(__this, ___index, ___item, method) (( void (*) (List_1_t762 *, int32_t, UIVertex_t760 , const MethodInfo*))List_1_Insert_m23210_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23211_gshared (List_1_t762 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23211(__this, ___collection, method) (( void (*) (List_1_t762 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23211_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m23212_gshared (List_1_t762 * __this, UIVertex_t760  ___item, const MethodInfo* method);
#define List_1_Remove_m23212(__this, ___item, method) (( bool (*) (List_1_t762 *, UIVertex_t760 , const MethodInfo*))List_1_Remove_m23212_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23213_gshared (List_1_t762 * __this, Predicate_1_t3696 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23213(__this, ___match, method) (( int32_t (*) (List_1_t762 *, Predicate_1_t3696 *, const MethodInfo*))List_1_RemoveAll_m23213_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23214_gshared (List_1_t762 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23214(__this, ___index, method) (( void (*) (List_1_t762 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23214_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m23215_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_Reverse_m23215(__this, method) (( void (*) (List_1_t762 *, const MethodInfo*))List_1_Reverse_m23215_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m23216_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_Sort_m23216(__this, method) (( void (*) (List_1_t762 *, const MethodInfo*))List_1_Sort_m23216_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m23217_gshared (List_1_t762 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m23217(__this, ___comparer, method) (( void (*) (List_1_t762 *, Object_t*, const MethodInfo*))List_1_Sort_m23217_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23218_gshared (List_1_t762 * __this, Comparison_1_t3698 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23218(__this, ___comparison, method) (( void (*) (List_1_t762 *, Comparison_1_t3698 *, const MethodInfo*))List_1_Sort_m23218_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t759* List_1_ToArray_m4673_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_ToArray_m4673(__this, method) (( UIVertexU5BU5D_t759* (*) (List_1_t762 *, const MethodInfo*))List_1_ToArray_m4673_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m23219_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23219(__this, method) (( void (*) (List_1_t762 *, const MethodInfo*))List_1_TrimExcess_m23219_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m4545_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m4545(__this, method) (( int32_t (*) (List_1_t762 *, const MethodInfo*))List_1_get_Capacity_m4545_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m4546_gshared (List_1_t762 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m4546(__this, ___value, method) (( void (*) (List_1_t762 *, int32_t, const MethodInfo*))List_1_set_Capacity_m4546_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m23220_gshared (List_1_t762 * __this, const MethodInfo* method);
#define List_1_get_Count_m23220(__this, method) (( int32_t (*) (List_1_t762 *, const MethodInfo*))List_1_get_Count_m23220_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t760  List_1_get_Item_m23221_gshared (List_1_t762 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23221(__this, ___index, method) (( UIVertex_t760  (*) (List_1_t762 *, int32_t, const MethodInfo*))List_1_get_Item_m23221_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23222_gshared (List_1_t762 * __this, int32_t ___index, UIVertex_t760  ___value, const MethodInfo* method);
#define List_1_set_Item_m23222(__this, ___index, ___value, method) (( void (*) (List_1_t762 *, int32_t, UIVertex_t760 , const MethodInfo*))List_1_set_Item_m23222_gshared)(__this, ___index, ___value, method)

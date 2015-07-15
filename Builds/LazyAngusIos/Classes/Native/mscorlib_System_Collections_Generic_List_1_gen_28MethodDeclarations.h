#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t787;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t4410;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t4407;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t922;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t3714;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t784;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3715;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t4411;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3717;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m4793_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1__ctor_m4793(__this, method) (( void (*) (List_1_t787 *, const MethodInfo*))List_1__ctor_m4793_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23233_gshared (List_1_t787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23233(__this, ___collection, method) (( void (*) (List_1_t787 *, Object_t*, const MethodInfo*))List_1__ctor_m23233_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6579_gshared (List_1_t787 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6579(__this, ___capacity, method) (( void (*) (List_1_t787 *, int32_t, const MethodInfo*))List_1__ctor_m6579_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m23234_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23234(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23234_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23235_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23235(__this, method) (( Object_t* (*) (List_1_t787 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23235_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23236_gshared (List_1_t787 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23236(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t787 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23236_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23237_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23237(__this, method) (( Object_t * (*) (List_1_t787 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23237_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23238_gshared (List_1_t787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23238(__this, ___item, method) (( int32_t (*) (List_1_t787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23238_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23239_gshared (List_1_t787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23239(__this, ___item, method) (( bool (*) (List_1_t787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23239_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23240_gshared (List_1_t787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23240(__this, ___item, method) (( int32_t (*) (List_1_t787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23240_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23241_gshared (List_1_t787 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23241(__this, ___index, ___item, method) (( void (*) (List_1_t787 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23241_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23242_gshared (List_1_t787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23242(__this, ___item, method) (( void (*) (List_1_t787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23242_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23243_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23243(__this, method) (( bool (*) (List_1_t787 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23243_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23244_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23244(__this, method) (( bool (*) (List_1_t787 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23244_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23245_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23245(__this, method) (( Object_t * (*) (List_1_t787 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23245_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23246_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23246(__this, method) (( bool (*) (List_1_t787 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23246_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23247_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23247(__this, method) (( bool (*) (List_1_t787 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23247_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23248_gshared (List_1_t787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23248(__this, ___index, method) (( Object_t * (*) (List_1_t787 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23248_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23249_gshared (List_1_t787 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23249(__this, ___index, ___value, method) (( void (*) (List_1_t787 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23249_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m23250_gshared (List_1_t787 * __this, UIVertex_t785  ___item, const MethodInfo* method);
#define List_1_Add_m23250(__this, ___item, method) (( void (*) (List_1_t787 *, UIVertex_t785 , const MethodInfo*))List_1_Add_m23250_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23251_gshared (List_1_t787 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23251(__this, ___newCount, method) (( void (*) (List_1_t787 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23251_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23252_gshared (List_1_t787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23252(__this, ___collection, method) (( void (*) (List_1_t787 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23252_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23253_gshared (List_1_t787 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23253(__this, ___enumerable, method) (( void (*) (List_1_t787 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23253_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23254_gshared (List_1_t787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23254(__this, ___collection, method) (( void (*) (List_1_t787 *, Object_t*, const MethodInfo*))List_1_AddRange_m23254_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3714 * List_1_AsReadOnly_m23255_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23255(__this, method) (( ReadOnlyCollection_1_t3714 * (*) (List_1_t787 *, const MethodInfo*))List_1_AsReadOnly_m23255_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m23256_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_Clear_m23256(__this, method) (( void (*) (List_1_t787 *, const MethodInfo*))List_1_Clear_m23256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m23257_gshared (List_1_t787 * __this, UIVertex_t785  ___item, const MethodInfo* method);
#define List_1_Contains_m23257(__this, ___item, method) (( bool (*) (List_1_t787 *, UIVertex_t785 , const MethodInfo*))List_1_Contains_m23257_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23258_gshared (List_1_t787 * __this, UIVertexU5BU5D_t784* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23258(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t787 *, UIVertexU5BU5D_t784*, int32_t, const MethodInfo*))List_1_CopyTo_m23258_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t785  List_1_Find_m23259_gshared (List_1_t787 * __this, Predicate_1_t3715 * ___match, const MethodInfo* method);
#define List_1_Find_m23259(__this, ___match, method) (( UIVertex_t785  (*) (List_1_t787 *, Predicate_1_t3715 *, const MethodInfo*))List_1_Find_m23259_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23260_gshared (Object_t * __this /* static, unused */, Predicate_1_t3715 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23260(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3715 *, const MethodInfo*))List_1_CheckMatch_m23260_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23261_gshared (List_1_t787 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3715 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23261(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t787 *, int32_t, int32_t, Predicate_1_t3715 *, const MethodInfo*))List_1_GetIndex_m23261_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t3716  List_1_GetEnumerator_m23262_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23262(__this, method) (( Enumerator_t3716  (*) (List_1_t787 *, const MethodInfo*))List_1_GetEnumerator_m23262_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23263_gshared (List_1_t787 * __this, UIVertex_t785  ___item, const MethodInfo* method);
#define List_1_IndexOf_m23263(__this, ___item, method) (( int32_t (*) (List_1_t787 *, UIVertex_t785 , const MethodInfo*))List_1_IndexOf_m23263_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23264_gshared (List_1_t787 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23264(__this, ___start, ___delta, method) (( void (*) (List_1_t787 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23265_gshared (List_1_t787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23265(__this, ___index, method) (( void (*) (List_1_t787 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23265_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23266_gshared (List_1_t787 * __this, int32_t ___index, UIVertex_t785  ___item, const MethodInfo* method);
#define List_1_Insert_m23266(__this, ___index, ___item, method) (( void (*) (List_1_t787 *, int32_t, UIVertex_t785 , const MethodInfo*))List_1_Insert_m23266_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23267_gshared (List_1_t787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23267(__this, ___collection, method) (( void (*) (List_1_t787 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23267_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m23268_gshared (List_1_t787 * __this, UIVertex_t785  ___item, const MethodInfo* method);
#define List_1_Remove_m23268(__this, ___item, method) (( bool (*) (List_1_t787 *, UIVertex_t785 , const MethodInfo*))List_1_Remove_m23268_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23269_gshared (List_1_t787 * __this, Predicate_1_t3715 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23269(__this, ___match, method) (( int32_t (*) (List_1_t787 *, Predicate_1_t3715 *, const MethodInfo*))List_1_RemoveAll_m23269_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23270_gshared (List_1_t787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23270(__this, ___index, method) (( void (*) (List_1_t787 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23270_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m23271_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_Reverse_m23271(__this, method) (( void (*) (List_1_t787 *, const MethodInfo*))List_1_Reverse_m23271_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m23272_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_Sort_m23272(__this, method) (( void (*) (List_1_t787 *, const MethodInfo*))List_1_Sort_m23272_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m23273_gshared (List_1_t787 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m23273(__this, ___comparer, method) (( void (*) (List_1_t787 *, Object_t*, const MethodInfo*))List_1_Sort_m23273_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23274_gshared (List_1_t787 * __this, Comparison_1_t3717 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23274(__this, ___comparison, method) (( void (*) (List_1_t787 *, Comparison_1_t3717 *, const MethodInfo*))List_1_Sort_m23274_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t784* List_1_ToArray_m4839_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_ToArray_m4839(__this, method) (( UIVertexU5BU5D_t784* (*) (List_1_t787 *, const MethodInfo*))List_1_ToArray_m4839_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m23275_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23275(__this, method) (( void (*) (List_1_t787 *, const MethodInfo*))List_1_TrimExcess_m23275_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m4713_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m4713(__this, method) (( int32_t (*) (List_1_t787 *, const MethodInfo*))List_1_get_Capacity_m4713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m4714_gshared (List_1_t787 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m4714(__this, ___value, method) (( void (*) (List_1_t787 *, int32_t, const MethodInfo*))List_1_set_Capacity_m4714_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m23276_gshared (List_1_t787 * __this, const MethodInfo* method);
#define List_1_get_Count_m23276(__this, method) (( int32_t (*) (List_1_t787 *, const MethodInfo*))List_1_get_Count_m23276_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t785  List_1_get_Item_m23277_gshared (List_1_t787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23277(__this, ___index, method) (( UIVertex_t785  (*) (List_1_t787 *, int32_t, const MethodInfo*))List_1_get_Item_m23277_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23278_gshared (List_1_t787 * __this, int32_t ___index, UIVertex_t785  ___value, const MethodInfo* method);
#define List_1_set_Item_m23278(__this, ___index, ___value, method) (( void (*) (List_1_t787 *, int32_t, UIVertex_t785 , const MethodInfo*))List_1_set_Item_m23278_gshared)(__this, ___index, ___value, method)

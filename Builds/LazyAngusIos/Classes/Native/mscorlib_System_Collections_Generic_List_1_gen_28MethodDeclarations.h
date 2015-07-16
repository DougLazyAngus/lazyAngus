#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t795;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t4419;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t4416;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t930;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t3723;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t792;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3724;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t4420;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3726;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m4831_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1__ctor_m4831(__this, method) (( void (*) (List_1_t795 *, const MethodInfo*))List_1__ctor_m4831_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23274_gshared (List_1_t795 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23274(__this, ___collection, method) (( void (*) (List_1_t795 *, Object_t*, const MethodInfo*))List_1__ctor_m23274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6617_gshared (List_1_t795 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6617(__this, ___capacity, method) (( void (*) (List_1_t795 *, int32_t, const MethodInfo*))List_1__ctor_m6617_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m23275_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23275(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23275_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23276_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23276(__this, method) (( Object_t* (*) (List_1_t795 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23276_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23277_gshared (List_1_t795 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23277(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t795 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23277_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23278_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23278(__this, method) (( Object_t * (*) (List_1_t795 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23278_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23279_gshared (List_1_t795 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23279(__this, ___item, method) (( int32_t (*) (List_1_t795 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23279_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23280_gshared (List_1_t795 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23280(__this, ___item, method) (( bool (*) (List_1_t795 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23280_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23281_gshared (List_1_t795 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23281(__this, ___item, method) (( int32_t (*) (List_1_t795 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23281_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23282_gshared (List_1_t795 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23282(__this, ___index, ___item, method) (( void (*) (List_1_t795 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23282_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23283_gshared (List_1_t795 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23283(__this, ___item, method) (( void (*) (List_1_t795 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23283_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23284_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23284(__this, method) (( bool (*) (List_1_t795 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23284_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23285_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23285(__this, method) (( bool (*) (List_1_t795 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23285_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23286_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23286(__this, method) (( Object_t * (*) (List_1_t795 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23286_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23287_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23287(__this, method) (( bool (*) (List_1_t795 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23288_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23288(__this, method) (( bool (*) (List_1_t795 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23288_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23289_gshared (List_1_t795 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23289(__this, ___index, method) (( Object_t * (*) (List_1_t795 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23289_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23290_gshared (List_1_t795 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23290(__this, ___index, ___value, method) (( void (*) (List_1_t795 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23290_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m23291_gshared (List_1_t795 * __this, UIVertex_t793  ___item, const MethodInfo* method);
#define List_1_Add_m23291(__this, ___item, method) (( void (*) (List_1_t795 *, UIVertex_t793 , const MethodInfo*))List_1_Add_m23291_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23292_gshared (List_1_t795 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23292(__this, ___newCount, method) (( void (*) (List_1_t795 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23292_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23293_gshared (List_1_t795 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23293(__this, ___collection, method) (( void (*) (List_1_t795 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23293_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23294_gshared (List_1_t795 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23294(__this, ___enumerable, method) (( void (*) (List_1_t795 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23294_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23295_gshared (List_1_t795 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23295(__this, ___collection, method) (( void (*) (List_1_t795 *, Object_t*, const MethodInfo*))List_1_AddRange_m23295_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3723 * List_1_AsReadOnly_m23296_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23296(__this, method) (( ReadOnlyCollection_1_t3723 * (*) (List_1_t795 *, const MethodInfo*))List_1_AsReadOnly_m23296_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m23297_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_Clear_m23297(__this, method) (( void (*) (List_1_t795 *, const MethodInfo*))List_1_Clear_m23297_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m23298_gshared (List_1_t795 * __this, UIVertex_t793  ___item, const MethodInfo* method);
#define List_1_Contains_m23298(__this, ___item, method) (( bool (*) (List_1_t795 *, UIVertex_t793 , const MethodInfo*))List_1_Contains_m23298_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23299_gshared (List_1_t795 * __this, UIVertexU5BU5D_t792* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23299(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t795 *, UIVertexU5BU5D_t792*, int32_t, const MethodInfo*))List_1_CopyTo_m23299_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t793  List_1_Find_m23300_gshared (List_1_t795 * __this, Predicate_1_t3724 * ___match, const MethodInfo* method);
#define List_1_Find_m23300(__this, ___match, method) (( UIVertex_t793  (*) (List_1_t795 *, Predicate_1_t3724 *, const MethodInfo*))List_1_Find_m23300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23301_gshared (Object_t * __this /* static, unused */, Predicate_1_t3724 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23301(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3724 *, const MethodInfo*))List_1_CheckMatch_m23301_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23302_gshared (List_1_t795 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3724 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23302(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t795 *, int32_t, int32_t, Predicate_1_t3724 *, const MethodInfo*))List_1_GetIndex_m23302_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t3725  List_1_GetEnumerator_m23303_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23303(__this, method) (( Enumerator_t3725  (*) (List_1_t795 *, const MethodInfo*))List_1_GetEnumerator_m23303_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23304_gshared (List_1_t795 * __this, UIVertex_t793  ___item, const MethodInfo* method);
#define List_1_IndexOf_m23304(__this, ___item, method) (( int32_t (*) (List_1_t795 *, UIVertex_t793 , const MethodInfo*))List_1_IndexOf_m23304_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23305_gshared (List_1_t795 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23305(__this, ___start, ___delta, method) (( void (*) (List_1_t795 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23305_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23306_gshared (List_1_t795 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23306(__this, ___index, method) (( void (*) (List_1_t795 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23306_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23307_gshared (List_1_t795 * __this, int32_t ___index, UIVertex_t793  ___item, const MethodInfo* method);
#define List_1_Insert_m23307(__this, ___index, ___item, method) (( void (*) (List_1_t795 *, int32_t, UIVertex_t793 , const MethodInfo*))List_1_Insert_m23307_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23308_gshared (List_1_t795 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23308(__this, ___collection, method) (( void (*) (List_1_t795 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23308_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m23309_gshared (List_1_t795 * __this, UIVertex_t793  ___item, const MethodInfo* method);
#define List_1_Remove_m23309(__this, ___item, method) (( bool (*) (List_1_t795 *, UIVertex_t793 , const MethodInfo*))List_1_Remove_m23309_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23310_gshared (List_1_t795 * __this, Predicate_1_t3724 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23310(__this, ___match, method) (( int32_t (*) (List_1_t795 *, Predicate_1_t3724 *, const MethodInfo*))List_1_RemoveAll_m23310_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23311_gshared (List_1_t795 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23311(__this, ___index, method) (( void (*) (List_1_t795 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23311_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m23312_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_Reverse_m23312(__this, method) (( void (*) (List_1_t795 *, const MethodInfo*))List_1_Reverse_m23312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m23313_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_Sort_m23313(__this, method) (( void (*) (List_1_t795 *, const MethodInfo*))List_1_Sort_m23313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m23314_gshared (List_1_t795 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m23314(__this, ___comparer, method) (( void (*) (List_1_t795 *, Object_t*, const MethodInfo*))List_1_Sort_m23314_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23315_gshared (List_1_t795 * __this, Comparison_1_t3726 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23315(__this, ___comparison, method) (( void (*) (List_1_t795 *, Comparison_1_t3726 *, const MethodInfo*))List_1_Sort_m23315_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t792* List_1_ToArray_m4877_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_ToArray_m4877(__this, method) (( UIVertexU5BU5D_t792* (*) (List_1_t795 *, const MethodInfo*))List_1_ToArray_m4877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m23316_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23316(__this, method) (( void (*) (List_1_t795 *, const MethodInfo*))List_1_TrimExcess_m23316_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m4751_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m4751(__this, method) (( int32_t (*) (List_1_t795 *, const MethodInfo*))List_1_get_Capacity_m4751_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m4752_gshared (List_1_t795 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m4752(__this, ___value, method) (( void (*) (List_1_t795 *, int32_t, const MethodInfo*))List_1_set_Capacity_m4752_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m23317_gshared (List_1_t795 * __this, const MethodInfo* method);
#define List_1_get_Count_m23317(__this, method) (( int32_t (*) (List_1_t795 *, const MethodInfo*))List_1_get_Count_m23317_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t793  List_1_get_Item_m23318_gshared (List_1_t795 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23318(__this, ___index, method) (( UIVertex_t793  (*) (List_1_t795 *, int32_t, const MethodInfo*))List_1_get_Item_m23318_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23319_gshared (List_1_t795 * __this, int32_t ___index, UIVertex_t793  ___value, const MethodInfo* method);
#define List_1_set_Item_m23319(__this, ___index, ___value, method) (( void (*) (List_1_t795 *, int32_t, UIVertex_t793 , const MethodInfo*))List_1_set_Item_m23319_gshared)(__this, ___index, ___value, method)

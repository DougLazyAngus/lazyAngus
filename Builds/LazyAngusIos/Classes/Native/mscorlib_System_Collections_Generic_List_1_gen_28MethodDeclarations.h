#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t786;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t4408;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t4405;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t921;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t3712;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t783;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3713;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t4409;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3715;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m4768_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1__ctor_m4768(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1__ctor_m4768_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23208_gshared (List_1_t786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23208(__this, ___collection, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1__ctor_m23208_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6554_gshared (List_1_t786 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6554(__this, ___capacity, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1__ctor_m6554_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m23209_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23209(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23209_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23210_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23210(__this, method) (( Object_t* (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23210_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23211_gshared (List_1_t786 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23211(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t786 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23211_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23212_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23212(__this, method) (( Object_t * (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23213_gshared (List_1_t786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23213(__this, ___item, method) (( int32_t (*) (List_1_t786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23213_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23214_gshared (List_1_t786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23214(__this, ___item, method) (( bool (*) (List_1_t786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23214_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23215_gshared (List_1_t786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23215(__this, ___item, method) (( int32_t (*) (List_1_t786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23215_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23216_gshared (List_1_t786 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23216(__this, ___index, ___item, method) (( void (*) (List_1_t786 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23216_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23217_gshared (List_1_t786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23217(__this, ___item, method) (( void (*) (List_1_t786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23217_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23218_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23218(__this, method) (( bool (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23218_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23219_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23219(__this, method) (( bool (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23219_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23220_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23220(__this, method) (( Object_t * (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23220_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23221_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23221(__this, method) (( bool (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23222_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23222(__this, method) (( bool (*) (List_1_t786 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23222_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23223_gshared (List_1_t786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23223(__this, ___index, method) (( Object_t * (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23224_gshared (List_1_t786 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23224(__this, ___index, ___value, method) (( void (*) (List_1_t786 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23224_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m23225_gshared (List_1_t786 * __this, UIVertex_t784  ___item, const MethodInfo* method);
#define List_1_Add_m23225(__this, ___item, method) (( void (*) (List_1_t786 *, UIVertex_t784 , const MethodInfo*))List_1_Add_m23225_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23226_gshared (List_1_t786 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23226(__this, ___newCount, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23226_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23227_gshared (List_1_t786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23227(__this, ___collection, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23227_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23228_gshared (List_1_t786 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23228(__this, ___enumerable, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23228_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23229_gshared (List_1_t786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23229(__this, ___collection, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_AddRange_m23229_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3712 * List_1_AsReadOnly_m23230_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23230(__this, method) (( ReadOnlyCollection_1_t3712 * (*) (List_1_t786 *, const MethodInfo*))List_1_AsReadOnly_m23230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m23231_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_Clear_m23231(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1_Clear_m23231_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m23232_gshared (List_1_t786 * __this, UIVertex_t784  ___item, const MethodInfo* method);
#define List_1_Contains_m23232(__this, ___item, method) (( bool (*) (List_1_t786 *, UIVertex_t784 , const MethodInfo*))List_1_Contains_m23232_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23233_gshared (List_1_t786 * __this, UIVertexU5BU5D_t783* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23233(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t786 *, UIVertexU5BU5D_t783*, int32_t, const MethodInfo*))List_1_CopyTo_m23233_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t784  List_1_Find_m23234_gshared (List_1_t786 * __this, Predicate_1_t3713 * ___match, const MethodInfo* method);
#define List_1_Find_m23234(__this, ___match, method) (( UIVertex_t784  (*) (List_1_t786 *, Predicate_1_t3713 *, const MethodInfo*))List_1_Find_m23234_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23235_gshared (Object_t * __this /* static, unused */, Predicate_1_t3713 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23235(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3713 *, const MethodInfo*))List_1_CheckMatch_m23235_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23236_gshared (List_1_t786 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3713 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23236(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t786 *, int32_t, int32_t, Predicate_1_t3713 *, const MethodInfo*))List_1_GetIndex_m23236_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t3714  List_1_GetEnumerator_m23237_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23237(__this, method) (( Enumerator_t3714  (*) (List_1_t786 *, const MethodInfo*))List_1_GetEnumerator_m23237_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23238_gshared (List_1_t786 * __this, UIVertex_t784  ___item, const MethodInfo* method);
#define List_1_IndexOf_m23238(__this, ___item, method) (( int32_t (*) (List_1_t786 *, UIVertex_t784 , const MethodInfo*))List_1_IndexOf_m23238_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23239_gshared (List_1_t786 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23239(__this, ___start, ___delta, method) (( void (*) (List_1_t786 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23239_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23240_gshared (List_1_t786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23240(__this, ___index, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23241_gshared (List_1_t786 * __this, int32_t ___index, UIVertex_t784  ___item, const MethodInfo* method);
#define List_1_Insert_m23241(__this, ___index, ___item, method) (( void (*) (List_1_t786 *, int32_t, UIVertex_t784 , const MethodInfo*))List_1_Insert_m23241_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23242_gshared (List_1_t786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23242(__this, ___collection, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23242_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m23243_gshared (List_1_t786 * __this, UIVertex_t784  ___item, const MethodInfo* method);
#define List_1_Remove_m23243(__this, ___item, method) (( bool (*) (List_1_t786 *, UIVertex_t784 , const MethodInfo*))List_1_Remove_m23243_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23244_gshared (List_1_t786 * __this, Predicate_1_t3713 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23244(__this, ___match, method) (( int32_t (*) (List_1_t786 *, Predicate_1_t3713 *, const MethodInfo*))List_1_RemoveAll_m23244_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23245_gshared (List_1_t786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23245(__this, ___index, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23245_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m23246_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_Reverse_m23246(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1_Reverse_m23246_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m23247_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_Sort_m23247(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1_Sort_m23247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m23248_gshared (List_1_t786 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m23248(__this, ___comparer, method) (( void (*) (List_1_t786 *, Object_t*, const MethodInfo*))List_1_Sort_m23248_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23249_gshared (List_1_t786 * __this, Comparison_1_t3715 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23249(__this, ___comparison, method) (( void (*) (List_1_t786 *, Comparison_1_t3715 *, const MethodInfo*))List_1_Sort_m23249_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t783* List_1_ToArray_m4814_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_ToArray_m4814(__this, method) (( UIVertexU5BU5D_t783* (*) (List_1_t786 *, const MethodInfo*))List_1_ToArray_m4814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m23250_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23250(__this, method) (( void (*) (List_1_t786 *, const MethodInfo*))List_1_TrimExcess_m23250_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m4688_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m4688(__this, method) (( int32_t (*) (List_1_t786 *, const MethodInfo*))List_1_get_Capacity_m4688_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m4689_gshared (List_1_t786 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m4689(__this, ___value, method) (( void (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_set_Capacity_m4689_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m23251_gshared (List_1_t786 * __this, const MethodInfo* method);
#define List_1_get_Count_m23251(__this, method) (( int32_t (*) (List_1_t786 *, const MethodInfo*))List_1_get_Count_m23251_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t784  List_1_get_Item_m23252_gshared (List_1_t786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23252(__this, ___index, method) (( UIVertex_t784  (*) (List_1_t786 *, int32_t, const MethodInfo*))List_1_get_Item_m23252_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23253_gshared (List_1_t786 * __this, int32_t ___index, UIVertex_t784  ___value, const MethodInfo* method);
#define List_1_set_Item_m23253(__this, ___index, ___value, method) (( void (*) (List_1_t786 *, int32_t, UIVertex_t784 , const MethodInfo*))List_1_set_Item_m23253_gshared)(__this, ___index, ___value, method)

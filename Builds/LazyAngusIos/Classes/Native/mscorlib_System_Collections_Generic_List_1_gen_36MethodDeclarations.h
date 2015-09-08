#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t968;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t9643;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t965;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t9642;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1104;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t6415;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t6416;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t9644;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t6418;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m6178_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1__ctor_m6178(__this, method) (( void (*) (List_1_t968 *, const MethodInfo*))List_1__ctor_m6178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m33794_gshared (List_1_t968 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m33794(__this, ___collection, method) (( void (*) (List_1_t968 *, Object_t*, const MethodInfo*))List_1__ctor_m33794_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10286_gshared (List_1_t968 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10286(__this, ___capacity, method) (( void (*) (List_1_t968 *, int32_t, const MethodInfo*))List_1__ctor_m10286_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m33795_gshared (List_1_t968 * __this, UIVertexU5BU5D_t965* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m33795(__this, ___data, ___size, method) (( void (*) (List_1_t968 *, UIVertexU5BU5D_t965*, int32_t, const MethodInfo*))List_1__ctor_m33795_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m33796_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m33796(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m33796_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33797_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33797(__this, method) (( Object_t* (*) (List_1_t968 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33797_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m33798_gshared (List_1_t968 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m33798(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t968 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m33798_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m33799_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33799(__this, method) (( Object_t * (*) (List_1_t968 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m33799_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m33800_gshared (List_1_t968 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m33800(__this, ___item, method) (( int32_t (*) (List_1_t968 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m33800_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m33801_gshared (List_1_t968 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m33801(__this, ___item, method) (( bool (*) (List_1_t968 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m33801_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m33802_gshared (List_1_t968 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m33802(__this, ___item, method) (( int32_t (*) (List_1_t968 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m33802_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m33803_gshared (List_1_t968 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m33803(__this, ___index, ___item, method) (( void (*) (List_1_t968 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m33803_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m33804_gshared (List_1_t968 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m33804(__this, ___item, method) (( void (*) (List_1_t968 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m33804_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33805_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33805(__this, method) (( bool (*) (List_1_t968 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33805_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m33806_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33806(__this, method) (( bool (*) (List_1_t968 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m33806_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m33807_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m33807(__this, method) (( Object_t * (*) (List_1_t968 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m33807_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m33808_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m33808(__this, method) (( bool (*) (List_1_t968 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m33808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m33809_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m33809(__this, method) (( bool (*) (List_1_t968 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m33809_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m33810_gshared (List_1_t968 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m33810(__this, ___index, method) (( Object_t * (*) (List_1_t968 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m33810_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m33811_gshared (List_1_t968 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m33811(__this, ___index, ___value, method) (( void (*) (List_1_t968 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m33811_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m33812_gshared (List_1_t968 * __this, UIVertex_t966  ___item, const MethodInfo* method);
#define List_1_Add_m33812(__this, ___item, method) (( void (*) (List_1_t968 *, UIVertex_t966 , const MethodInfo*))List_1_Add_m33812_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m33813_gshared (List_1_t968 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m33813(__this, ___newCount, method) (( void (*) (List_1_t968 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m33813_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m33814_gshared (List_1_t968 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m33814(__this, ___idx, ___count, method) (( void (*) (List_1_t968 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m33814_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m33815_gshared (List_1_t968 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m33815(__this, ___collection, method) (( void (*) (List_1_t968 *, Object_t*, const MethodInfo*))List_1_AddCollection_m33815_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m33816_gshared (List_1_t968 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m33816(__this, ___enumerable, method) (( void (*) (List_1_t968 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m33816_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m33817_gshared (List_1_t968 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m33817(__this, ___collection, method) (( void (*) (List_1_t968 *, Object_t*, const MethodInfo*))List_1_AddRange_m33817_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6415 * List_1_AsReadOnly_m33818_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m33818(__this, method) (( ReadOnlyCollection_1_t6415 * (*) (List_1_t968 *, const MethodInfo*))List_1_AsReadOnly_m33818_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m33819_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_Clear_m33819(__this, method) (( void (*) (List_1_t968 *, const MethodInfo*))List_1_Clear_m33819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m33820_gshared (List_1_t968 * __this, UIVertex_t966  ___item, const MethodInfo* method);
#define List_1_Contains_m33820(__this, ___item, method) (( bool (*) (List_1_t968 *, UIVertex_t966 , const MethodInfo*))List_1_Contains_m33820_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m33821_gshared (List_1_t968 * __this, UIVertexU5BU5D_t965* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m33821(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t968 *, UIVertexU5BU5D_t965*, int32_t, const MethodInfo*))List_1_CopyTo_m33821_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t966  List_1_Find_m33822_gshared (List_1_t968 * __this, Predicate_1_t6416 * ___match, const MethodInfo* method);
#define List_1_Find_m33822(__this, ___match, method) (( UIVertex_t966  (*) (List_1_t968 *, Predicate_1_t6416 *, const MethodInfo*))List_1_Find_m33822_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m33823_gshared (Object_t * __this /* static, unused */, Predicate_1_t6416 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m33823(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6416 *, const MethodInfo*))List_1_CheckMatch_m33823_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m33824_gshared (List_1_t968 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6416 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m33824(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t968 *, int32_t, int32_t, Predicate_1_t6416 *, const MethodInfo*))List_1_GetIndex_m33824_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t6417  List_1_GetEnumerator_m33825_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m33825(__this, method) (( Enumerator_t6417  (*) (List_1_t968 *, const MethodInfo*))List_1_GetEnumerator_m33825_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t968 * List_1_GetRange_m33826_gshared (List_1_t968 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m33826(__this, ___index, ___count, method) (( List_1_t968 * (*) (List_1_t968 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m33826_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m33827_gshared (List_1_t968 * __this, UIVertex_t966  ___item, const MethodInfo* method);
#define List_1_IndexOf_m33827(__this, ___item, method) (( int32_t (*) (List_1_t968 *, UIVertex_t966 , const MethodInfo*))List_1_IndexOf_m33827_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m33828_gshared (List_1_t968 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m33828(__this, ___start, ___delta, method) (( void (*) (List_1_t968 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m33828_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m33829_gshared (List_1_t968 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m33829(__this, ___index, method) (( void (*) (List_1_t968 *, int32_t, const MethodInfo*))List_1_CheckIndex_m33829_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m33830_gshared (List_1_t968 * __this, int32_t ___index, UIVertex_t966  ___item, const MethodInfo* method);
#define List_1_Insert_m33830(__this, ___index, ___item, method) (( void (*) (List_1_t968 *, int32_t, UIVertex_t966 , const MethodInfo*))List_1_Insert_m33830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m33831_gshared (List_1_t968 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m33831(__this, ___collection, method) (( void (*) (List_1_t968 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m33831_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m33832_gshared (List_1_t968 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m33832(__this, ___index, ___collection, method) (( void (*) (List_1_t968 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m33832_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m33833_gshared (List_1_t968 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m33833(__this, ___index, ___collection, method) (( void (*) (List_1_t968 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m33833_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m33834_gshared (List_1_t968 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m33834(__this, ___index, ___enumerable, method) (( void (*) (List_1_t968 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m33834_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m33835_gshared (List_1_t968 * __this, UIVertex_t966  ___item, const MethodInfo* method);
#define List_1_Remove_m33835(__this, ___item, method) (( bool (*) (List_1_t968 *, UIVertex_t966 , const MethodInfo*))List_1_Remove_m33835_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m33836_gshared (List_1_t968 * __this, Predicate_1_t6416 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m33836(__this, ___match, method) (( int32_t (*) (List_1_t968 *, Predicate_1_t6416 *, const MethodInfo*))List_1_RemoveAll_m33836_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m33837_gshared (List_1_t968 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m33837(__this, ___index, method) (( void (*) (List_1_t968 *, int32_t, const MethodInfo*))List_1_RemoveAt_m33837_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m33838_gshared (List_1_t968 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m33838(__this, ___index, ___count, method) (( void (*) (List_1_t968 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m33838_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m33839_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_Reverse_m33839(__this, method) (( void (*) (List_1_t968 *, const MethodInfo*))List_1_Reverse_m33839_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m33840_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_Sort_m33840(__this, method) (( void (*) (List_1_t968 *, const MethodInfo*))List_1_Sort_m33840_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m33841_gshared (List_1_t968 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m33841(__this, ___comparer, method) (( void (*) (List_1_t968 *, Object_t*, const MethodInfo*))List_1_Sort_m33841_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m33842_gshared (List_1_t968 * __this, Comparison_1_t6418 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m33842(__this, ___comparison, method) (( void (*) (List_1_t968 *, Comparison_1_t6418 *, const MethodInfo*))List_1_Sort_m33842_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t965* List_1_ToArray_m6222_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_ToArray_m6222(__this, method) (( UIVertexU5BU5D_t965* (*) (List_1_t968 *, const MethodInfo*))List_1_ToArray_m6222_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m33843_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m33843(__this, method) (( void (*) (List_1_t968 *, const MethodInfo*))List_1_TrimExcess_m33843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m6100_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m6100(__this, method) (( int32_t (*) (List_1_t968 *, const MethodInfo*))List_1_get_Capacity_m6100_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m6101_gshared (List_1_t968 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m6101(__this, ___value, method) (( void (*) (List_1_t968 *, int32_t, const MethodInfo*))List_1_set_Capacity_m6101_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m33844_gshared (List_1_t968 * __this, const MethodInfo* method);
#define List_1_get_Count_m33844(__this, method) (( int32_t (*) (List_1_t968 *, const MethodInfo*))List_1_get_Count_m33844_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t966  List_1_get_Item_m33845_gshared (List_1_t968 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m33845(__this, ___index, method) (( UIVertex_t966  (*) (List_1_t968 *, int32_t, const MethodInfo*))List_1_get_Item_m33845_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m33846_gshared (List_1_t968 * __this, int32_t ___index, UIVertex_t966  ___value, const MethodInfo* method);
#define List_1_set_Item_m33846(__this, ___index, ___value, method) (( void (*) (List_1_t968 *, int32_t, UIVertex_t966 , const MethodInfo*))List_1_set_Item_m33846_gshared)(__this, ___index, ___value, method)

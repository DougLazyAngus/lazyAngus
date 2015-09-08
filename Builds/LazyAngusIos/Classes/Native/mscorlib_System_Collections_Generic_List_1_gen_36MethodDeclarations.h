#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t971;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t9648;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t968;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t9647;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1107;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t6420;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t6421;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t9649;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t6423;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m6178_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1__ctor_m6178(__this, method) (( void (*) (List_1_t971 *, const MethodInfo*))List_1__ctor_m6178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m33806_gshared (List_1_t971 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m33806(__this, ___collection, method) (( void (*) (List_1_t971 *, Object_t*, const MethodInfo*))List_1__ctor_m33806_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10286_gshared (List_1_t971 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10286(__this, ___capacity, method) (( void (*) (List_1_t971 *, int32_t, const MethodInfo*))List_1__ctor_m10286_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m33807_gshared (List_1_t971 * __this, UIVertexU5BU5D_t968* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m33807(__this, ___data, ___size, method) (( void (*) (List_1_t971 *, UIVertexU5BU5D_t968*, int32_t, const MethodInfo*))List_1__ctor_m33807_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m33808_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m33808(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m33808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33809_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33809(__this, method) (( Object_t* (*) (List_1_t971 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33809_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m33810_gshared (List_1_t971 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m33810(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t971 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m33810_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m33811_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33811(__this, method) (( Object_t * (*) (List_1_t971 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m33811_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m33812_gshared (List_1_t971 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m33812(__this, ___item, method) (( int32_t (*) (List_1_t971 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m33812_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m33813_gshared (List_1_t971 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m33813(__this, ___item, method) (( bool (*) (List_1_t971 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m33813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m33814_gshared (List_1_t971 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m33814(__this, ___item, method) (( int32_t (*) (List_1_t971 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m33814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m33815_gshared (List_1_t971 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m33815(__this, ___index, ___item, method) (( void (*) (List_1_t971 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m33815_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m33816_gshared (List_1_t971 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m33816(__this, ___item, method) (( void (*) (List_1_t971 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m33816_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33817_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33817(__this, method) (( bool (*) (List_1_t971 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m33818_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33818(__this, method) (( bool (*) (List_1_t971 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m33818_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m33819_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m33819(__this, method) (( Object_t * (*) (List_1_t971 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m33819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m33820_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m33820(__this, method) (( bool (*) (List_1_t971 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m33820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m33821_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m33821(__this, method) (( bool (*) (List_1_t971 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m33821_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m33822_gshared (List_1_t971 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m33822(__this, ___index, method) (( Object_t * (*) (List_1_t971 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m33822_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m33823_gshared (List_1_t971 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m33823(__this, ___index, ___value, method) (( void (*) (List_1_t971 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m33823_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m33824_gshared (List_1_t971 * __this, UIVertex_t969  ___item, const MethodInfo* method);
#define List_1_Add_m33824(__this, ___item, method) (( void (*) (List_1_t971 *, UIVertex_t969 , const MethodInfo*))List_1_Add_m33824_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m33825_gshared (List_1_t971 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m33825(__this, ___newCount, method) (( void (*) (List_1_t971 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m33825_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m33826_gshared (List_1_t971 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m33826(__this, ___idx, ___count, method) (( void (*) (List_1_t971 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m33826_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m33827_gshared (List_1_t971 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m33827(__this, ___collection, method) (( void (*) (List_1_t971 *, Object_t*, const MethodInfo*))List_1_AddCollection_m33827_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m33828_gshared (List_1_t971 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m33828(__this, ___enumerable, method) (( void (*) (List_1_t971 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m33828_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m33829_gshared (List_1_t971 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m33829(__this, ___collection, method) (( void (*) (List_1_t971 *, Object_t*, const MethodInfo*))List_1_AddRange_m33829_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6420 * List_1_AsReadOnly_m33830_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m33830(__this, method) (( ReadOnlyCollection_1_t6420 * (*) (List_1_t971 *, const MethodInfo*))List_1_AsReadOnly_m33830_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m33831_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_Clear_m33831(__this, method) (( void (*) (List_1_t971 *, const MethodInfo*))List_1_Clear_m33831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m33832_gshared (List_1_t971 * __this, UIVertex_t969  ___item, const MethodInfo* method);
#define List_1_Contains_m33832(__this, ___item, method) (( bool (*) (List_1_t971 *, UIVertex_t969 , const MethodInfo*))List_1_Contains_m33832_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m33833_gshared (List_1_t971 * __this, UIVertexU5BU5D_t968* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m33833(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t971 *, UIVertexU5BU5D_t968*, int32_t, const MethodInfo*))List_1_CopyTo_m33833_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t969  List_1_Find_m33834_gshared (List_1_t971 * __this, Predicate_1_t6421 * ___match, const MethodInfo* method);
#define List_1_Find_m33834(__this, ___match, method) (( UIVertex_t969  (*) (List_1_t971 *, Predicate_1_t6421 *, const MethodInfo*))List_1_Find_m33834_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m33835_gshared (Object_t * __this /* static, unused */, Predicate_1_t6421 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m33835(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6421 *, const MethodInfo*))List_1_CheckMatch_m33835_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m33836_gshared (List_1_t971 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6421 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m33836(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t971 *, int32_t, int32_t, Predicate_1_t6421 *, const MethodInfo*))List_1_GetIndex_m33836_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t6422  List_1_GetEnumerator_m33837_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m33837(__this, method) (( Enumerator_t6422  (*) (List_1_t971 *, const MethodInfo*))List_1_GetEnumerator_m33837_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t971 * List_1_GetRange_m33838_gshared (List_1_t971 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m33838(__this, ___index, ___count, method) (( List_1_t971 * (*) (List_1_t971 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m33838_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m33839_gshared (List_1_t971 * __this, UIVertex_t969  ___item, const MethodInfo* method);
#define List_1_IndexOf_m33839(__this, ___item, method) (( int32_t (*) (List_1_t971 *, UIVertex_t969 , const MethodInfo*))List_1_IndexOf_m33839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m33840_gshared (List_1_t971 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m33840(__this, ___start, ___delta, method) (( void (*) (List_1_t971 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m33840_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m33841_gshared (List_1_t971 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m33841(__this, ___index, method) (( void (*) (List_1_t971 *, int32_t, const MethodInfo*))List_1_CheckIndex_m33841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m33842_gshared (List_1_t971 * __this, int32_t ___index, UIVertex_t969  ___item, const MethodInfo* method);
#define List_1_Insert_m33842(__this, ___index, ___item, method) (( void (*) (List_1_t971 *, int32_t, UIVertex_t969 , const MethodInfo*))List_1_Insert_m33842_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m33843_gshared (List_1_t971 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m33843(__this, ___collection, method) (( void (*) (List_1_t971 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m33843_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m33844_gshared (List_1_t971 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m33844(__this, ___index, ___collection, method) (( void (*) (List_1_t971 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m33844_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m33845_gshared (List_1_t971 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m33845(__this, ___index, ___collection, method) (( void (*) (List_1_t971 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m33845_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m33846_gshared (List_1_t971 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m33846(__this, ___index, ___enumerable, method) (( void (*) (List_1_t971 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m33846_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m33847_gshared (List_1_t971 * __this, UIVertex_t969  ___item, const MethodInfo* method);
#define List_1_Remove_m33847(__this, ___item, method) (( bool (*) (List_1_t971 *, UIVertex_t969 , const MethodInfo*))List_1_Remove_m33847_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m33848_gshared (List_1_t971 * __this, Predicate_1_t6421 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m33848(__this, ___match, method) (( int32_t (*) (List_1_t971 *, Predicate_1_t6421 *, const MethodInfo*))List_1_RemoveAll_m33848_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m33849_gshared (List_1_t971 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m33849(__this, ___index, method) (( void (*) (List_1_t971 *, int32_t, const MethodInfo*))List_1_RemoveAt_m33849_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m33850_gshared (List_1_t971 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m33850(__this, ___index, ___count, method) (( void (*) (List_1_t971 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m33850_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m33851_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_Reverse_m33851(__this, method) (( void (*) (List_1_t971 *, const MethodInfo*))List_1_Reverse_m33851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m33852_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_Sort_m33852(__this, method) (( void (*) (List_1_t971 *, const MethodInfo*))List_1_Sort_m33852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m33853_gshared (List_1_t971 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m33853(__this, ___comparer, method) (( void (*) (List_1_t971 *, Object_t*, const MethodInfo*))List_1_Sort_m33853_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m33854_gshared (List_1_t971 * __this, Comparison_1_t6423 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m33854(__this, ___comparison, method) (( void (*) (List_1_t971 *, Comparison_1_t6423 *, const MethodInfo*))List_1_Sort_m33854_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t968* List_1_ToArray_m6222_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_ToArray_m6222(__this, method) (( UIVertexU5BU5D_t968* (*) (List_1_t971 *, const MethodInfo*))List_1_ToArray_m6222_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m33855_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m33855(__this, method) (( void (*) (List_1_t971 *, const MethodInfo*))List_1_TrimExcess_m33855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m6100_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m6100(__this, method) (( int32_t (*) (List_1_t971 *, const MethodInfo*))List_1_get_Capacity_m6100_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m6101_gshared (List_1_t971 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m6101(__this, ___value, method) (( void (*) (List_1_t971 *, int32_t, const MethodInfo*))List_1_set_Capacity_m6101_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m33856_gshared (List_1_t971 * __this, const MethodInfo* method);
#define List_1_get_Count_m33856(__this, method) (( int32_t (*) (List_1_t971 *, const MethodInfo*))List_1_get_Count_m33856_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t969  List_1_get_Item_m33857_gshared (List_1_t971 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m33857(__this, ___index, method) (( UIVertex_t969  (*) (List_1_t971 *, int32_t, const MethodInfo*))List_1_get_Item_m33857_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m33858_gshared (List_1_t971 * __this, int32_t ___index, UIVertex_t969  ___value, const MethodInfo* method);
#define List_1_set_Item_m33858(__this, ___index, ___value, method) (( void (*) (List_1_t971 *, int32_t, UIVertex_t969 , const MethodInfo*))List_1_set_Item_m33858_gshared)(__this, ___index, ___value, method)

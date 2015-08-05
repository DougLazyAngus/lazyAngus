#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t2719;
// System.Object
struct Object_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t2720;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rigidbody2D>
struct IEnumerable_1_t9513;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t8348;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Rigidbody2D>
struct IEnumerator_1_t9514;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>
struct ICollection_1_t9515;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
struct ReadOnlyCollection_1_t8350;
// System.Predicate`1<UnityEngine.Rigidbody2D>
struct Predicate_1_t8351;
// System.Collections.Generic.IComparer`1<UnityEngine.Rigidbody2D>
struct IComparer_1_t9516;
// System.Comparison`1<UnityEngine.Rigidbody2D>
struct Comparison_1_t8353;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_96.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9865(__this, method) (( void (*) (List_1_t2719 *, const MethodInfo*))List_1__ctor_m3481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59950(__this, ___collection, method) (( void (*) (List_1_t2719 *, Object_t*, const MethodInfo*))List_1__ctor_m7218_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Int32)
#define List_1__ctor_m59951(__this, ___capacity, method) (( void (*) (List_1_t2719 *, int32_t, const MethodInfo*))List_1__ctor_m21318_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(T[],System.Int32)
#define List_1__ctor_m59952(__this, ___data, ___size, method) (( void (*) (List_1_t2719 *, Rigidbody2DU5BU5D_t8348*, int32_t, const MethodInfo*))List_1__ctor_m21320_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.cctor()
#define List_1__cctor_m59953(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21322_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59954(__this, method) (( Object_t* (*) (List_1_t2719 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59955(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2719 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10094_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59956(__this, method) (( Object_t * (*) (List_1_t2719 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10090_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59957(__this, ___item, method) (( int32_t (*) (List_1_t2719 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10099_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59958(__this, ___item, method) (( bool (*) (List_1_t2719 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10101_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59959(__this, ___item, method) (( int32_t (*) (List_1_t2719 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59960(__this, ___index, ___item, method) (( void (*) (List_1_t2719 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10103_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59961(__this, ___item, method) (( void (*) (List_1_t2719 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59962(__this, method) (( bool (*) (List_1_t2719 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59963(__this, method) (( bool (*) (List_1_t2719 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10092_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59964(__this, method) (( Object_t * (*) (List_1_t2719 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59965(__this, method) (( bool (*) (List_1_t2719 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59966(__this, method) (( bool (*) (List_1_t2719 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10096_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59967(__this, ___index, method) (( Object_t * (*) (List_1_t2719 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10097_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59968(__this, ___index, ___value, method) (( void (*) (List_1_t2719 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10098_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Add(T)
#define List_1_Add_m59969(__this, ___item, method) (( void (*) (List_1_t2719 *, Rigidbody2D_t2720 *, const MethodInfo*))List_1_Add_m10107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59970(__this, ___newCount, method) (( void (*) (List_1_t2719 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21340_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59971(__this, ___idx, ___count, method) (( void (*) (List_1_t2719 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21342_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59972(__this, ___collection, method) (( void (*) (List_1_t2719 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59973(__this, ___enumerable, method) (( void (*) (List_1_t2719 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21346_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m59974(__this, ___collection, method) (( void (*) (List_1_t2719 *, Object_t*, const MethodInfo*))List_1_AddRange_m21348_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AsReadOnly()
#define List_1_AsReadOnly_m59975(__this, method) (( ReadOnlyCollection_1_t8350 * (*) (List_1_t2719 *, const MethodInfo*))List_1_AsReadOnly_m21350_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Clear()
#define List_1_Clear_m59976(__this, method) (( void (*) (List_1_t2719 *, const MethodInfo*))List_1_Clear_m10100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Contains(T)
#define List_1_Contains_m59977(__this, ___item, method) (( bool (*) (List_1_t2719 *, Rigidbody2D_t2720 *, const MethodInfo*))List_1_Contains_m10108_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59978(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2719 *, Rigidbody2DU5BU5D_t8348*, int32_t, const MethodInfo*))List_1_CopyTo_m10109_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Find(System.Predicate`1<T>)
#define List_1_Find_m59979(__this, ___match, method) (( Rigidbody2D_t2720 * (*) (List_1_t2719 *, Predicate_1_t8351 *, const MethodInfo*))List_1_Find_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59980(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8351 *, const MethodInfo*))List_1_CheckMatch_m21357_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59981(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2719 *, int32_t, int32_t, Predicate_1_t8351 *, const MethodInfo*))List_1_GetIndex_m21359_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetEnumerator()
#define List_1_GetEnumerator_m59982(__this, method) (( Enumerator_t8352  (*) (List_1_t2719 *, const MethodInfo*))List_1_GetEnumerator_m3637_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59983(__this, ___index, ___count, method) (( List_1_t2719 * (*) (List_1_t2719 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21361_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::IndexOf(T)
#define List_1_IndexOf_m59984(__this, ___item, method) (( int32_t (*) (List_1_t2719 *, Rigidbody2D_t2720 *, const MethodInfo*))List_1_IndexOf_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59985(__this, ___start, ___delta, method) (( void (*) (List_1_t2719 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21364_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59986(__this, ___index, method) (( void (*) (List_1_t2719 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21366_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
#define List_1_Insert_m59987(__this, ___index, ___item, method) (( void (*) (List_1_t2719 *, int32_t, Rigidbody2D_t2720 *, const MethodInfo*))List_1_Insert_m10113_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59988(__this, ___collection, method) (( void (*) (List_1_t2719 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21369_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59989(__this, ___index, ___collection, method) (( void (*) (List_1_t2719 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21371_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59990(__this, ___index, ___collection, method) (( void (*) (List_1_t2719 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21373_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59991(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2719 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21375_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Remove(T)
#define List_1_Remove_m59992(__this, ___item, method) (( bool (*) (List_1_t2719 *, Rigidbody2D_t2720 *, const MethodInfo*))List_1_Remove_m10110_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59993(__this, ___match, method) (( int32_t (*) (List_1_t2719 *, Predicate_1_t8351 *, const MethodInfo*))List_1_RemoveAll_m21378_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59994(__this, ___index, method) (( void (*) (List_1_t2719 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59995(__this, ___index, ___count, method) (( void (*) (List_1_t2719 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21381_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Reverse()
#define List_1_Reverse_m59996(__this, method) (( void (*) (List_1_t2719 *, const MethodInfo*))List_1_Reverse_m21383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort()
#define List_1_Sort_m59997(__this, method) (( void (*) (List_1_t2719 *, const MethodInfo*))List_1_Sort_m21385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59998(__this, ___comparer, method) (( void (*) (List_1_t2719 *, Object_t*, const MethodInfo*))List_1_Sort_m21387_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59999(__this, ___comparison, method) (( void (*) (List_1_t2719 *, Comparison_1_t8353 *, const MethodInfo*))List_1_Sort_m21389_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::ToArray()
#define List_1_ToArray_m60000(__this, method) (( Rigidbody2DU5BU5D_t8348* (*) (List_1_t2719 *, const MethodInfo*))List_1_ToArray_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::TrimExcess()
#define List_1_TrimExcess_m60001(__this, method) (( void (*) (List_1_t2719 *, const MethodInfo*))List_1_TrimExcess_m21393_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Capacity()
#define List_1_get_Capacity_m60002(__this, method) (( int32_t (*) (List_1_t2719 *, const MethodInfo*))List_1_get_Capacity_m21395_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m60003(__this, ___value, method) (( void (*) (List_1_t2719 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21397_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Count()
#define List_1_get_Count_m60004(__this, method) (( int32_t (*) (List_1_t2719 *, const MethodInfo*))List_1_get_Count_m10091_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
#define List_1_get_Item_m60005(__this, ___index, method) (( Rigidbody2D_t2720 * (*) (List_1_t2719 *, int32_t, const MethodInfo*))List_1_get_Item_m10114_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
#define List_1_set_Item_m60006(__this, ___index, ___value, method) (( void (*) (List_1_t2719 *, int32_t, Rigidbody2D_t2720 *, const MethodInfo*))List_1_set_Item_m10115_gshared)(__this, ___index, ___value, method)

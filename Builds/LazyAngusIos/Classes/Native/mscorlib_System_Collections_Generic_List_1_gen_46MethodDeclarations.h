#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t1221;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1215;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t4583;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t4584;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t4585;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t4020;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t4018;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t1306;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>
struct IComparer_1_t4586;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t4022;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6703(__this, method) (( void (*) (List_1_t1221 *, const MethodInfo*))List_1__ctor_m2643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27105(__this, ___collection, method) (( void (*) (List_1_t1221 *, Object_t*, const MethodInfo*))List_1__ctor_m16852_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m27106(__this, ___capacity, method) (( void (*) (List_1_t1221 *, int32_t, const MethodInfo*))List_1__ctor_m16854_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m27107(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16856_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27108(__this, method) (( Object_t* (*) (List_1_t1221 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6876_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27109(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1221 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6859_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27110(__this, method) (( Object_t * (*) (List_1_t1221 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27111(__this, ___item, method) (( int32_t (*) (List_1_t1221 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6864_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27112(__this, ___item, method) (( bool (*) (List_1_t1221 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27113(__this, ___item, method) (( int32_t (*) (List_1_t1221 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6867_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27114(__this, ___index, ___item, method) (( void (*) (List_1_t1221 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27115(__this, ___item, method) (( void (*) (List_1_t1221 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6869_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27116(__this, method) (( bool (*) (List_1_t1221 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27117(__this, method) (( bool (*) (List_1_t1221 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6857_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27118(__this, method) (( Object_t * (*) (List_1_t1221 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27119(__this, method) (( bool (*) (List_1_t1221 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27120(__this, method) (( bool (*) (List_1_t1221 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6861_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27121(__this, ___index, method) (( Object_t * (*) (List_1_t1221 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6862_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27122(__this, ___index, ___value, method) (( void (*) (List_1_t1221 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6863_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m27123(__this, ___item, method) (( void (*) (List_1_t1221 *, BaseInvokableCall_t1215 *, const MethodInfo*))List_1_Add_m6872_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27124(__this, ___newCount, method) (( void (*) (List_1_t1221 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16874_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27125(__this, ___collection, method) (( void (*) (List_1_t1221 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27126(__this, ___enumerable, method) (( void (*) (List_1_t1221 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16878_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m6706(__this, ___collection, method) (( void (*) (List_1_t1221 *, Object_t*, const MethodInfo*))List_1_AddRange_m16880_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
#define List_1_AsReadOnly_m27127(__this, method) (( ReadOnlyCollection_1_t4020 * (*) (List_1_t1221 *, const MethodInfo*))List_1_AsReadOnly_m16882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m27128(__this, method) (( void (*) (List_1_t1221 *, const MethodInfo*))List_1_Clear_m6865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m27129(__this, ___item, method) (( bool (*) (List_1_t1221 *, BaseInvokableCall_t1215 *, const MethodInfo*))List_1_Contains_m6873_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27130(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1221 *, BaseInvokableCallU5BU5D_t4018*, int32_t, const MethodInfo*))List_1_CopyTo_m6874_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m27131(__this, ___match, method) (( BaseInvokableCall_t1215 * (*) (List_1_t1221 *, Predicate_1_t1306 *, const MethodInfo*))List_1_Find_m16887_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27132(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1306 *, const MethodInfo*))List_1_CheckMatch_m16889_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27133(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1221 *, int32_t, int32_t, Predicate_1_t1306 *, const MethodInfo*))List_1_GetIndex_m16891_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m27134(__this, method) (( Enumerator_t4021  (*) (List_1_t1221 *, const MethodInfo*))List_1_GetEnumerator_m2746_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m27135(__this, ___item, method) (( int32_t (*) (List_1_t1221 *, BaseInvokableCall_t1215 *, const MethodInfo*))List_1_IndexOf_m6877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27136(__this, ___start, ___delta, method) (( void (*) (List_1_t1221 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16894_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27137(__this, ___index, method) (( void (*) (List_1_t1221 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16896_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m27138(__this, ___index, ___item, method) (( void (*) (List_1_t1221 *, int32_t, BaseInvokableCall_t1215 *, const MethodInfo*))List_1_Insert_m6878_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27139(__this, ___collection, method) (( void (*) (List_1_t1221 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16899_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m27140(__this, ___item, method) (( bool (*) (List_1_t1221 *, BaseInvokableCall_t1215 *, const MethodInfo*))List_1_Remove_m6875_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m6705(__this, ___match, method) (( int32_t (*) (List_1_t1221 *, Predicate_1_t1306 *, const MethodInfo*))List_1_RemoveAll_m16902_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27141(__this, ___index, method) (( void (*) (List_1_t1221 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6870_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
#define List_1_Reverse_m27142(__this, method) (( void (*) (List_1_t1221 *, const MethodInfo*))List_1_Reverse_m16905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m27143(__this, method) (( void (*) (List_1_t1221 *, const MethodInfo*))List_1_Sort_m16907_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27144(__this, ___comparer, method) (( void (*) (List_1_t1221 *, Object_t*, const MethodInfo*))List_1_Sort_m16909_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27145(__this, ___comparison, method) (( void (*) (List_1_t1221 *, Comparison_1_t4022 *, const MethodInfo*))List_1_Sort_m16911_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m27146(__this, method) (( BaseInvokableCallU5BU5D_t4018* (*) (List_1_t1221 *, const MethodInfo*))List_1_ToArray_m16913_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
#define List_1_TrimExcess_m27147(__this, method) (( void (*) (List_1_t1221 *, const MethodInfo*))List_1_TrimExcess_m16915_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m27148(__this, method) (( int32_t (*) (List_1_t1221 *, const MethodInfo*))List_1_get_Capacity_m16917_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27149(__this, ___value, method) (( void (*) (List_1_t1221 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16919_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m27150(__this, method) (( int32_t (*) (List_1_t1221 *, const MethodInfo*))List_1_get_Count_m6856_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m27151(__this, ___index, method) (( BaseInvokableCall_t1215 * (*) (List_1_t1221 *, int32_t, const MethodInfo*))List_1_get_Item_m6879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m27152(__this, ___index, ___value, method) (( void (*) (List_1_t1221 *, int32_t, BaseInvokableCall_t1215 *, const MethodInfo*))List_1_set_Item_m6880_gshared)(__this, ___index, ___value, method)

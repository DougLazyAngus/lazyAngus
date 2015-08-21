#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t922;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t920;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
struct IEnumerable_1_t9023;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t5866;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t9024;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t1066;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
struct ReadOnlyCollection_1_t5867;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5868;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Graphic>
struct IComparer_1_t9025;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t923;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5921(__this, method) (( void (*) (List_1_t922 *, const MethodInfo*))List_1__ctor_m3698_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29428(__this, ___collection, method) (( void (*) (List_1_t922 *, Object_t*, const MethodInfo*))List_1__ctor_m7458_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Int32)
#define List_1__ctor_m29429(__this, ___capacity, method) (( void (*) (List_1_t922 *, int32_t, const MethodInfo*))List_1__ctor_m21556_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(T[],System.Int32)
#define List_1__ctor_m29430(__this, ___data, ___size, method) (( void (*) (List_1_t922 *, GraphicU5BU5D_t5866*, int32_t, const MethodInfo*))List_1__ctor_m21558_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.cctor()
#define List_1__cctor_m29431(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21560_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29432(__this, method) (( Object_t* (*) (List_1_t922 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29433(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t922 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10334_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29434(__this, method) (( Object_t * (*) (List_1_t922 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10330_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29435(__this, ___item, method) (( int32_t (*) (List_1_t922 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10339_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29436(__this, ___item, method) (( bool (*) (List_1_t922 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10341_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29437(__this, ___item, method) (( int32_t (*) (List_1_t922 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29438(__this, ___index, ___item, method) (( void (*) (List_1_t922 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29439(__this, ___item, method) (( void (*) (List_1_t922 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29440(__this, method) (( bool (*) (List_1_t922 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29441(__this, method) (( bool (*) (List_1_t922 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10332_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29442(__this, method) (( Object_t * (*) (List_1_t922 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10333_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29443(__this, method) (( bool (*) (List_1_t922 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29444(__this, method) (( bool (*) (List_1_t922 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10336_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29445(__this, ___index, method) (( Object_t * (*) (List_1_t922 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10337_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29446(__this, ___index, ___value, method) (( void (*) (List_1_t922 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10338_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Add(T)
#define List_1_Add_m29447(__this, ___item, method) (( void (*) (List_1_t922 *, Graphic_t920 *, const MethodInfo*))List_1_Add_m10347_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29448(__this, ___newCount, method) (( void (*) (List_1_t922 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21578_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29449(__this, ___idx, ___count, method) (( void (*) (List_1_t922 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21580_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29450(__this, ___collection, method) (( void (*) (List_1_t922 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21582_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29451(__this, ___enumerable, method) (( void (*) (List_1_t922 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21584_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29452(__this, ___collection, method) (( void (*) (List_1_t922 *, Object_t*, const MethodInfo*))List_1_AddRange_m21586_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AsReadOnly()
#define List_1_AsReadOnly_m29453(__this, method) (( ReadOnlyCollection_1_t5867 * (*) (List_1_t922 *, const MethodInfo*))List_1_AsReadOnly_m21588_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Clear()
#define List_1_Clear_m29454(__this, method) (( void (*) (List_1_t922 *, const MethodInfo*))List_1_Clear_m10340_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Contains(T)
#define List_1_Contains_m29455(__this, ___item, method) (( bool (*) (List_1_t922 *, Graphic_t920 *, const MethodInfo*))List_1_Contains_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29456(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t922 *, GraphicU5BU5D_t5866*, int32_t, const MethodInfo*))List_1_CopyTo_m10349_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Find(System.Predicate`1<T>)
#define List_1_Find_m29457(__this, ___match, method) (( Graphic_t920 * (*) (List_1_t922 *, Predicate_1_t5868 *, const MethodInfo*))List_1_Find_m21593_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29458(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5868 *, const MethodInfo*))List_1_CheckMatch_m21595_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29459(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t922 *, int32_t, int32_t, Predicate_1_t5868 *, const MethodInfo*))List_1_GetIndex_m21597_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define List_1_GetEnumerator_m29460(__this, method) (( Enumerator_t5869  (*) (List_1_t922 *, const MethodInfo*))List_1_GetEnumerator_m3854_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29461(__this, ___index, ___count, method) (( List_1_t922 * (*) (List_1_t922 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21599_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define List_1_IndexOf_m29462(__this, ___item, method) (( int32_t (*) (List_1_t922 *, Graphic_t920 *, const MethodInfo*))List_1_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29463(__this, ___start, ___delta, method) (( void (*) (List_1_t922 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21602_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29464(__this, ___index, method) (( void (*) (List_1_t922 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21604_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define List_1_Insert_m29465(__this, ___index, ___item, method) (( void (*) (List_1_t922 *, int32_t, Graphic_t920 *, const MethodInfo*))List_1_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29466(__this, ___collection, method) (( void (*) (List_1_t922 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21607_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29467(__this, ___index, ___collection, method) (( void (*) (List_1_t922 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21609_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29468(__this, ___index, ___collection, method) (( void (*) (List_1_t922 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21611_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29469(__this, ___index, ___enumerable, method) (( void (*) (List_1_t922 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21613_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Remove(T)
#define List_1_Remove_m29470(__this, ___item, method) (( bool (*) (List_1_t922 *, Graphic_t920 *, const MethodInfo*))List_1_Remove_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29471(__this, ___match, method) (( int32_t (*) (List_1_t922 *, Predicate_1_t5868 *, const MethodInfo*))List_1_RemoveAll_m21616_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29472(__this, ___index, method) (( void (*) (List_1_t922 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10345_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29473(__this, ___index, ___count, method) (( void (*) (List_1_t922 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21619_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Reverse()
#define List_1_Reverse_m29474(__this, method) (( void (*) (List_1_t922 *, const MethodInfo*))List_1_Reverse_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort()
#define List_1_Sort_m29475(__this, method) (( void (*) (List_1_t922 *, const MethodInfo*))List_1_Sort_m21623_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29476(__this, ___comparer, method) (( void (*) (List_1_t922 *, Object_t*, const MethodInfo*))List_1_Sort_m21625_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m5933(__this, ___comparison, method) (( void (*) (List_1_t922 *, Comparison_1_t923 *, const MethodInfo*))List_1_Sort_m21627_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::ToArray()
#define List_1_ToArray_m29477(__this, method) (( GraphicU5BU5D_t5866* (*) (List_1_t922 *, const MethodInfo*))List_1_ToArray_m21629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::TrimExcess()
#define List_1_TrimExcess_m29478(__this, method) (( void (*) (List_1_t922 *, const MethodInfo*))List_1_TrimExcess_m21631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Capacity()
#define List_1_get_Capacity_m29479(__this, method) (( int32_t (*) (List_1_t922 *, const MethodInfo*))List_1_get_Capacity_m21633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29480(__this, ___value, method) (( void (*) (List_1_t922 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21635_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Count()
#define List_1_get_Count_m29481(__this, method) (( int32_t (*) (List_1_t922 *, const MethodInfo*))List_1_get_Count_m10331_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define List_1_get_Item_m29482(__this, ___index, method) (( Graphic_t920 * (*) (List_1_t922 *, int32_t, const MethodInfo*))List_1_get_Item_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define List_1_set_Item_m29483(__this, ___index, ___value, method) (( void (*) (List_1_t922 *, int32_t, Graphic_t920 *, const MethodInfo*))List_1_set_Item_m10355_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t2768;
// System.Object
struct Object_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t2769;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rigidbody2D>
struct IEnumerable_1_t9603;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t8419;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Rigidbody2D>
struct IEnumerator_1_t9604;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>
struct ICollection_1_t9605;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
struct ReadOnlyCollection_1_t8421;
// System.Predicate`1<UnityEngine.Rigidbody2D>
struct Predicate_1_t8422;
// System.Collections.Generic.IComparer`1<UnityEngine.Rigidbody2D>
struct IComparer_1_t9606;
// System.Comparison`1<UnityEngine.Rigidbody2D>
struct Comparison_1_t8424;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_99.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m10118(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1__ctor_m3710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m60624(__this, ___collection, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1__ctor_m7469_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Int32)
#define List_1__ctor_m60625(__this, ___capacity, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1__ctor_m21567_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(T[],System.Int32)
#define List_1__ctor_m60626(__this, ___data, ___size, method) (( void (*) (List_1_t2768 *, Rigidbody2DU5BU5D_t8419*, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.cctor()
#define List_1__cctor_m60627(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21571_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60628(__this, method) (( Object_t* (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m60629(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2768 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60630(__this, method) (( Object_t * (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m60631(__this, ___item, method) (( int32_t (*) (List_1_t2768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10350_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m60632(__this, ___item, method) (( bool (*) (List_1_t2768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10352_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m60633(__this, ___item, method) (( int32_t (*) (List_1_t2768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m60634(__this, ___index, ___item, method) (( void (*) (List_1_t2768 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m60635(__this, ___item, method) (( void (*) (List_1_t2768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10355_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60636(__this, method) (( bool (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60637(__this, method) (( bool (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10343_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m60638(__this, method) (( Object_t * (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m60639(__this, method) (( bool (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m60640(__this, method) (( bool (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m60641(__this, ___index, method) (( Object_t * (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10348_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m60642(__this, ___index, ___value, method) (( void (*) (List_1_t2768 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10349_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Add(T)
#define List_1_Add_m60643(__this, ___item, method) (( void (*) (List_1_t2768 *, Rigidbody2D_t2769 *, const MethodInfo*))List_1_Add_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m60644(__this, ___newCount, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21589_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m60645(__this, ___idx, ___count, method) (( void (*) (List_1_t2768 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21591_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m60646(__this, ___collection, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m60647(__this, ___enumerable, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21595_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m60648(__this, ___collection, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_AddRange_m21597_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AsReadOnly()
#define List_1_AsReadOnly_m60649(__this, method) (( ReadOnlyCollection_1_t8421 * (*) (List_1_t2768 *, const MethodInfo*))List_1_AsReadOnly_m21599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Clear()
#define List_1_Clear_m60650(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1_Clear_m10351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Contains(T)
#define List_1_Contains_m60651(__this, ___item, method) (( bool (*) (List_1_t2768 *, Rigidbody2D_t2769 *, const MethodInfo*))List_1_Contains_m10359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m60652(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2768 *, Rigidbody2DU5BU5D_t8419*, int32_t, const MethodInfo*))List_1_CopyTo_m10360_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Find(System.Predicate`1<T>)
#define List_1_Find_m60653(__this, ___match, method) (( Rigidbody2D_t2769 * (*) (List_1_t2768 *, Predicate_1_t8422 *, const MethodInfo*))List_1_Find_m21604_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m60654(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8422 *, const MethodInfo*))List_1_CheckMatch_m21606_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m60655(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2768 *, int32_t, int32_t, Predicate_1_t8422 *, const MethodInfo*))List_1_GetIndex_m21608_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetEnumerator()
#define List_1_GetEnumerator_m60656(__this, method) (( Enumerator_t8423  (*) (List_1_t2768 *, const MethodInfo*))List_1_GetEnumerator_m3866_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m60657(__this, ___index, ___count, method) (( List_1_t2768 * (*) (List_1_t2768 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21610_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::IndexOf(T)
#define List_1_IndexOf_m60658(__this, ___item, method) (( int32_t (*) (List_1_t2768 *, Rigidbody2D_t2769 *, const MethodInfo*))List_1_IndexOf_m10363_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m60659(__this, ___start, ___delta, method) (( void (*) (List_1_t2768 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21613_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m60660(__this, ___index, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21615_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
#define List_1_Insert_m60661(__this, ___index, ___item, method) (( void (*) (List_1_t2768 *, int32_t, Rigidbody2D_t2769 *, const MethodInfo*))List_1_Insert_m10364_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m60662(__this, ___collection, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21618_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m60663(__this, ___index, ___collection, method) (( void (*) (List_1_t2768 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21620_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m60664(__this, ___index, ___collection, method) (( void (*) (List_1_t2768 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m60665(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2768 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21624_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Remove(T)
#define List_1_Remove_m60666(__this, ___item, method) (( bool (*) (List_1_t2768 *, Rigidbody2D_t2769 *, const MethodInfo*))List_1_Remove_m10361_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m60667(__this, ___match, method) (( int32_t (*) (List_1_t2768 *, Predicate_1_t8422 *, const MethodInfo*))List_1_RemoveAll_m21627_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m60668(__this, ___index, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m60669(__this, ___index, ___count, method) (( void (*) (List_1_t2768 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21630_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Reverse()
#define List_1_Reverse_m60670(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1_Reverse_m21632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort()
#define List_1_Sort_m60671(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1_Sort_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m60672(__this, ___comparer, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m60673(__this, ___comparison, method) (( void (*) (List_1_t2768 *, Comparison_1_t8424 *, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::ToArray()
#define List_1_ToArray_m60674(__this, method) (( Rigidbody2DU5BU5D_t8419* (*) (List_1_t2768 *, const MethodInfo*))List_1_ToArray_m21640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::TrimExcess()
#define List_1_TrimExcess_m60675(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1_TrimExcess_m21642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Capacity()
#define List_1_get_Capacity_m60676(__this, method) (( int32_t (*) (List_1_t2768 *, const MethodInfo*))List_1_get_Capacity_m21644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m60677(__this, ___value, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21646_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Count()
#define List_1_get_Count_m60678(__this, method) (( int32_t (*) (List_1_t2768 *, const MethodInfo*))List_1_get_Count_m10342_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
#define List_1_get_Item_m60679(__this, ___index, method) (( Rigidbody2D_t2769 * (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_get_Item_m10365_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
#define List_1_set_Item_m60680(__this, ___index, ___value, method) (( void (*) (List_1_t2768 *, int32_t, Rigidbody2D_t2769 *, const MethodInfo*))List_1_set_Item_m10366_gshared)(__this, ___index, ___value, method)

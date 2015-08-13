#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
struct List_1_t5825;
// System.Object
struct Object_t;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t1041;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ICanvasElement>
struct IEnumerable_1_t8985;
// UnityEngine.UI.ICanvasElement[]
struct ICanvasElementU5BU5D_t5827;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
struct IEnumerator_1_t8984;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>
struct ICollection_1_t8986;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
struct ReadOnlyCollection_1_t8987;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t912;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.ICanvasElement>
struct IComparer_1_t8988;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t911;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_109.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m28741(__this, method) (( void (*) (List_1_t5825 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28742(__this, ___collection, method) (( void (*) (List_1_t5825 *, Object_t*, const MethodInfo*))List_1__ctor_m7471_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Int32)
#define List_1__ctor_m28743(__this, ___capacity, method) (( void (*) (List_1_t5825 *, int32_t, const MethodInfo*))List_1__ctor_m21570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(T[],System.Int32)
#define List_1__ctor_m28744(__this, ___data, ___size, method) (( void (*) (List_1_t5825 *, ICanvasElementU5BU5D_t5827*, int32_t, const MethodInfo*))List_1__ctor_m21572_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.cctor()
#define List_1__cctor_m28745(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28746(__this, method) (( Object_t* (*) (List_1_t5825 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28747(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5825 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28748(__this, method) (( Object_t * (*) (List_1_t5825 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28749(__this, ___item, method) (( int32_t (*) (List_1_t5825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28750(__this, ___item, method) (( bool (*) (List_1_t5825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28751(__this, ___item, method) (( int32_t (*) (List_1_t5825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28752(__this, ___index, ___item, method) (( void (*) (List_1_t5825 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28753(__this, ___item, method) (( void (*) (List_1_t5825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28754(__this, method) (( bool (*) (List_1_t5825 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28755(__this, method) (( bool (*) (List_1_t5825 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28756(__this, method) (( Object_t * (*) (List_1_t5825 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28757(__this, method) (( bool (*) (List_1_t5825 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28758(__this, method) (( bool (*) (List_1_t5825 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28759(__this, ___index, method) (( Object_t * (*) (List_1_t5825 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28760(__this, ___index, ___value, method) (( void (*) (List_1_t5825 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Add(T)
#define List_1_Add_m28761(__this, ___item, method) (( void (*) (List_1_t5825 *, Object_t *, const MethodInfo*))List_1_Add_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28762(__this, ___newCount, method) (( void (*) (List_1_t5825 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28763(__this, ___idx, ___count, method) (( void (*) (List_1_t5825 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21594_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28764(__this, ___collection, method) (( void (*) (List_1_t5825 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28765(__this, ___enumerable, method) (( void (*) (List_1_t5825 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28766(__this, ___collection, method) (( void (*) (List_1_t5825 *, Object_t*, const MethodInfo*))List_1_AddRange_m21600_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AsReadOnly()
#define List_1_AsReadOnly_m28767(__this, method) (( ReadOnlyCollection_1_t8987 * (*) (List_1_t5825 *, const MethodInfo*))List_1_AsReadOnly_m21602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Clear()
#define List_1_Clear_m28768(__this, method) (( void (*) (List_1_t5825 *, const MethodInfo*))List_1_Clear_m10350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Contains(T)
#define List_1_Contains_m28769(__this, ___item, method) (( bool (*) (List_1_t5825 *, Object_t *, const MethodInfo*))List_1_Contains_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28770(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5825 *, ICanvasElementU5BU5D_t5827*, int32_t, const MethodInfo*))List_1_CopyTo_m10359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Find(System.Predicate`1<T>)
#define List_1_Find_m28771(__this, ___match, method) (( Object_t * (*) (List_1_t5825 *, Predicate_1_t912 *, const MethodInfo*))List_1_Find_m21607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28772(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t912 *, const MethodInfo*))List_1_CheckMatch_m21609_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28773(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5825 *, int32_t, int32_t, Predicate_1_t912 *, const MethodInfo*))List_1_GetIndex_m21611_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#define List_1_GetEnumerator_m28774(__this, method) (( Enumerator_t8989  (*) (List_1_t5825 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28775(__this, ___index, ___count, method) (( List_1_t5825 * (*) (List_1_t5825 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21613_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
#define List_1_IndexOf_m28776(__this, ___item, method) (( int32_t (*) (List_1_t5825 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28777(__this, ___start, ___delta, method) (( void (*) (List_1_t5825 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28778(__this, ___index, method) (( void (*) (List_1_t5825 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
#define List_1_Insert_m28779(__this, ___index, ___item, method) (( void (*) (List_1_t5825 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28780(__this, ___collection, method) (( void (*) (List_1_t5825 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28781(__this, ___index, ___collection, method) (( void (*) (List_1_t5825 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21623_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28782(__this, ___index, ___collection, method) (( void (*) (List_1_t5825 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21625_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28783(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5825 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21627_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#define List_1_Remove_m28784(__this, ___item, method) (( bool (*) (List_1_t5825 *, Object_t *, const MethodInfo*))List_1_Remove_m10360_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28785(__this, ___match, method) (( int32_t (*) (List_1_t5825 *, Predicate_1_t912 *, const MethodInfo*))List_1_RemoveAll_m21630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28786(__this, ___index, method) (( void (*) (List_1_t5825 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28787(__this, ___index, ___count, method) (( void (*) (List_1_t5825 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21633_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Reverse()
#define List_1_Reverse_m28788(__this, method) (( void (*) (List_1_t5825 *, const MethodInfo*))List_1_Reverse_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort()
#define List_1_Sort_m28789(__this, method) (( void (*) (List_1_t5825 *, const MethodInfo*))List_1_Sort_m21637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28790(__this, ___comparer, method) (( void (*) (List_1_t5825 *, Object_t*, const MethodInfo*))List_1_Sort_m21639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28791(__this, ___comparison, method) (( void (*) (List_1_t5825 *, Comparison_1_t911 *, const MethodInfo*))List_1_Sort_m21641_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::ToArray()
#define List_1_ToArray_m28792(__this, method) (( ICanvasElementU5BU5D_t5827* (*) (List_1_t5825 *, const MethodInfo*))List_1_ToArray_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::TrimExcess()
#define List_1_TrimExcess_m28793(__this, method) (( void (*) (List_1_t5825 *, const MethodInfo*))List_1_TrimExcess_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Capacity()
#define List_1_get_Capacity_m28794(__this, method) (( int32_t (*) (List_1_t5825 *, const MethodInfo*))List_1_get_Capacity_m21647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28795(__this, ___value, method) (( void (*) (List_1_t5825 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21649_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Count()
#define List_1_get_Count_m28796(__this, method) (( int32_t (*) (List_1_t5825 *, const MethodInfo*))List_1_get_Count_m10341_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
#define List_1_get_Item_m28797(__this, ___index, method) (( Object_t * (*) (List_1_t5825 *, int32_t, const MethodInfo*))List_1_get_Item_m10364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#define List_1_set_Item_m28798(__this, ___index, ___value, method) (( void (*) (List_1_t5825 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10365_gshared)(__this, ___index, ___value, method)

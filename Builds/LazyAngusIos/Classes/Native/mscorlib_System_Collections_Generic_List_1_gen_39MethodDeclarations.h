#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t985;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t984;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t1046;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t5911;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>
struct IEnumerator_1_t9044;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>
struct ICollection_1_t9045;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
struct ReadOnlyCollection_1_t5913;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t986;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Toggle>
struct IComparer_1_t9046;
// System.Comparison`1<UnityEngine.UI.Toggle>
struct Comparison_1_t5915;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6150(__this, method) (( void (*) (List_1_t985 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30078(__this, ___collection, method) (( void (*) (List_1_t985 *, Object_t*, const MethodInfo*))List_1__ctor_m7471_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Int32)
#define List_1__ctor_m30079(__this, ___capacity, method) (( void (*) (List_1_t985 *, int32_t, const MethodInfo*))List_1__ctor_m21570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(T[],System.Int32)
#define List_1__ctor_m30080(__this, ___data, ___size, method) (( void (*) (List_1_t985 *, ToggleU5BU5D_t5911*, int32_t, const MethodInfo*))List_1__ctor_m21572_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.cctor()
#define List_1__cctor_m30081(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30082(__this, method) (( Object_t* (*) (List_1_t985 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30083(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t985 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30084(__this, method) (( Object_t * (*) (List_1_t985 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30085(__this, ___item, method) (( int32_t (*) (List_1_t985 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30086(__this, ___item, method) (( bool (*) (List_1_t985 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30087(__this, ___item, method) (( int32_t (*) (List_1_t985 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30088(__this, ___index, ___item, method) (( void (*) (List_1_t985 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30089(__this, ___item, method) (( void (*) (List_1_t985 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30090(__this, method) (( bool (*) (List_1_t985 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30091(__this, method) (( bool (*) (List_1_t985 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30092(__this, method) (( Object_t * (*) (List_1_t985 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30093(__this, method) (( bool (*) (List_1_t985 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30094(__this, method) (( bool (*) (List_1_t985 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30095(__this, ___index, method) (( Object_t * (*) (List_1_t985 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30096(__this, ___index, ___value, method) (( void (*) (List_1_t985 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
#define List_1_Add_m30097(__this, ___item, method) (( void (*) (List_1_t985 *, Toggle_t984 *, const MethodInfo*))List_1_Add_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30098(__this, ___newCount, method) (( void (*) (List_1_t985 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30099(__this, ___idx, ___count, method) (( void (*) (List_1_t985 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21594_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30100(__this, ___collection, method) (( void (*) (List_1_t985 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30101(__this, ___enumerable, method) (( void (*) (List_1_t985 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30102(__this, ___collection, method) (( void (*) (List_1_t985 *, Object_t*, const MethodInfo*))List_1_AddRange_m21600_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AsReadOnly()
#define List_1_AsReadOnly_m30103(__this, method) (( ReadOnlyCollection_1_t5913 * (*) (List_1_t985 *, const MethodInfo*))List_1_AsReadOnly_m21602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Clear()
#define List_1_Clear_m30104(__this, method) (( void (*) (List_1_t985 *, const MethodInfo*))List_1_Clear_m10350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(T)
#define List_1_Contains_m30105(__this, ___item, method) (( bool (*) (List_1_t985 *, Toggle_t984 *, const MethodInfo*))List_1_Contains_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30106(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t985 *, ToggleU5BU5D_t5911*, int32_t, const MethodInfo*))List_1_CopyTo_m10359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<T>)
#define List_1_Find_m6152(__this, ___match, method) (( Toggle_t984 * (*) (List_1_t985 *, Predicate_1_t986 *, const MethodInfo*))List_1_Find_m21607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30107(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t986 *, const MethodInfo*))List_1_CheckMatch_m21609_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30108(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t985 *, int32_t, int32_t, Predicate_1_t986 *, const MethodInfo*))List_1_GetIndex_m21611_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
#define List_1_GetEnumerator_m30109(__this, method) (( Enumerator_t5914  (*) (List_1_t985 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30110(__this, ___index, ___count, method) (( List_1_t985 * (*) (List_1_t985 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21613_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::IndexOf(T)
#define List_1_IndexOf_m30111(__this, ___item, method) (( int32_t (*) (List_1_t985 *, Toggle_t984 *, const MethodInfo*))List_1_IndexOf_m10362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30112(__this, ___start, ___delta, method) (( void (*) (List_1_t985 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30113(__this, ___index, method) (( void (*) (List_1_t985 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
#define List_1_Insert_m30114(__this, ___index, ___item, method) (( void (*) (List_1_t985 *, int32_t, Toggle_t984 *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30115(__this, ___collection, method) (( void (*) (List_1_t985 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30116(__this, ___index, ___collection, method) (( void (*) (List_1_t985 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21623_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30117(__this, ___index, ___collection, method) (( void (*) (List_1_t985 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21625_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30118(__this, ___index, ___enumerable, method) (( void (*) (List_1_t985 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21627_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
#define List_1_Remove_m30119(__this, ___item, method) (( bool (*) (List_1_t985 *, Toggle_t984 *, const MethodInfo*))List_1_Remove_m10360_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30120(__this, ___match, method) (( int32_t (*) (List_1_t985 *, Predicate_1_t986 *, const MethodInfo*))List_1_RemoveAll_m21630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30121(__this, ___index, method) (( void (*) (List_1_t985 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30122(__this, ___index, ___count, method) (( void (*) (List_1_t985 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21633_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Reverse()
#define List_1_Reverse_m30123(__this, method) (( void (*) (List_1_t985 *, const MethodInfo*))List_1_Reverse_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort()
#define List_1_Sort_m30124(__this, method) (( void (*) (List_1_t985 *, const MethodInfo*))List_1_Sort_m21637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30125(__this, ___comparer, method) (( void (*) (List_1_t985 *, Object_t*, const MethodInfo*))List_1_Sort_m21639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30126(__this, ___comparison, method) (( void (*) (List_1_t985 *, Comparison_1_t5915 *, const MethodInfo*))List_1_Sort_m21641_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::ToArray()
#define List_1_ToArray_m30127(__this, method) (( ToggleU5BU5D_t5911* (*) (List_1_t985 *, const MethodInfo*))List_1_ToArray_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::TrimExcess()
#define List_1_TrimExcess_m30128(__this, method) (( void (*) (List_1_t985 *, const MethodInfo*))List_1_TrimExcess_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Capacity()
#define List_1_get_Capacity_m30129(__this, method) (( int32_t (*) (List_1_t985 *, const MethodInfo*))List_1_get_Capacity_m21647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30130(__this, ___value, method) (( void (*) (List_1_t985 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21649_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
#define List_1_get_Count_m30131(__this, method) (( int32_t (*) (List_1_t985 *, const MethodInfo*))List_1_get_Count_m10341_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
#define List_1_get_Item_m30132(__this, ___index, method) (( Toggle_t984 * (*) (List_1_t985 *, int32_t, const MethodInfo*))List_1_get_Item_m10364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#define List_1_set_Item_m30133(__this, ___index, ___value, method) (( void (*) (List_1_t985 *, int32_t, Toggle_t984 *, const MethodInfo*))List_1_set_Item_m10365_gshared)(__this, ___index, ___value, method)

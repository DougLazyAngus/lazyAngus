#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>
struct List_1_t485;
// System.Object
struct Object_t;
// GameAnalyticsSDK.Studio
struct Studio_t489;
// System.Collections.Generic.IEnumerable`1<GameAnalyticsSDK.Studio>
struct IEnumerable_1_t8908;
// GameAnalyticsSDK.Studio[]
struct StudioU5BU5D_t5676;
// System.Collections.Generic.IEnumerator`1<GameAnalyticsSDK.Studio>
struct IEnumerator_1_t8909;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GameAnalyticsSDK.Studio>
struct ICollection_1_t8910;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GameAnalyticsSDK.Studio>
struct ReadOnlyCollection_1_t5678;
// System.Predicate`1<GameAnalyticsSDK.Studio>
struct Predicate_1_t5679;
// System.Collections.Generic.IComparer`1<GameAnalyticsSDK.Studio>
struct IComparer_1_t8911;
// System.Comparison`1<GameAnalyticsSDK.Studio>
struct Comparison_1_t5681;
// System.Collections.Generic.List`1/Enumerator<GameAnalyticsSDK.Studio>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m26354(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26355(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1__ctor_m7471_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor(System.Int32)
#define List_1__ctor_m26356(__this, ___capacity, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1__ctor_m21570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor(T[],System.Int32)
#define List_1__ctor_m26357(__this, ___data, ___size, method) (( void (*) (List_1_t485 *, StudioU5BU5D_t5676*, int32_t, const MethodInfo*))List_1__ctor_m21572_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.cctor()
#define List_1__cctor_m26358(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26359(__this, method) (( Object_t* (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26360(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t485 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26361(__this, method) (( Object_t * (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26362(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26363(__this, ___item, method) (( bool (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26364(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26365(__this, ___index, ___item, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26366(__this, ___item, method) (( void (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26367(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26368(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26369(__this, method) (( Object_t * (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26370(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26371(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26372(__this, ___index, method) (( Object_t * (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26373(__this, ___index, ___value, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Add(T)
#define List_1_Add_m26374(__this, ___item, method) (( void (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_Add_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26375(__this, ___newCount, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26376(__this, ___idx, ___count, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21594_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26377(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26378(__this, ___enumerable, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26379(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddRange_m21600_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AsReadOnly()
#define List_1_AsReadOnly_m26380(__this, method) (( ReadOnlyCollection_1_t5678 * (*) (List_1_t485 *, const MethodInfo*))List_1_AsReadOnly_m21602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Clear()
#define List_1_Clear_m26381(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Clear_m10350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Contains(T)
#define List_1_Contains_m26382(__this, ___item, method) (( bool (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_Contains_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26383(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t485 *, StudioU5BU5D_t5676*, int32_t, const MethodInfo*))List_1_CopyTo_m10359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Find(System.Predicate`1<T>)
#define List_1_Find_m26384(__this, ___match, method) (( Studio_t489 * (*) (List_1_t485 *, Predicate_1_t5679 *, const MethodInfo*))List_1_Find_m21607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26385(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5679 *, const MethodInfo*))List_1_CheckMatch_m21609_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26386(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t485 *, int32_t, int32_t, Predicate_1_t5679 *, const MethodInfo*))List_1_GetIndex_m21611_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GetEnumerator()
#define List_1_GetEnumerator_m26387(__this, method) (( Enumerator_t5680  (*) (List_1_t485 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26388(__this, ___index, ___count, method) (( List_1_t485 * (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21613_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::IndexOf(T)
#define List_1_IndexOf_m26389(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_IndexOf_m10362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26390(__this, ___start, ___delta, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26391(__this, ___index, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Insert(System.Int32,T)
#define List_1_Insert_m26392(__this, ___index, ___item, method) (( void (*) (List_1_t485 *, int32_t, Studio_t489 *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26393(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26394(__this, ___index, ___collection, method) (( void (*) (List_1_t485 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21623_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26395(__this, ___index, ___collection, method) (( void (*) (List_1_t485 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21625_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26396(__this, ___index, ___enumerable, method) (( void (*) (List_1_t485 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21627_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Remove(T)
#define List_1_Remove_m26397(__this, ___item, method) (( bool (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_Remove_m10360_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26398(__this, ___match, method) (( int32_t (*) (List_1_t485 *, Predicate_1_t5679 *, const MethodInfo*))List_1_RemoveAll_m21630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26399(__this, ___index, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26400(__this, ___index, ___count, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21633_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Reverse()
#define List_1_Reverse_m26401(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Reverse_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Sort()
#define List_1_Sort_m26402(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Sort_m21637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26403(__this, ___comparer, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_Sort_m21639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26404(__this, ___comparison, method) (( void (*) (List_1_t485 *, Comparison_1_t5681 *, const MethodInfo*))List_1_Sort_m21641_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::ToArray()
#define List_1_ToArray_m26405(__this, method) (( StudioU5BU5D_t5676* (*) (List_1_t485 *, const MethodInfo*))List_1_ToArray_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::TrimExcess()
#define List_1_TrimExcess_m26406(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_TrimExcess_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Capacity()
#define List_1_get_Capacity_m26407(__this, method) (( int32_t (*) (List_1_t485 *, const MethodInfo*))List_1_get_Capacity_m21647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26408(__this, ___value, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21649_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Count()
#define List_1_get_Count_m26409(__this, method) (( int32_t (*) (List_1_t485 *, const MethodInfo*))List_1_get_Count_m10341_gshared)(__this, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Item(System.Int32)
#define List_1_get_Item_m26410(__this, ___index, method) (( Studio_t489 * (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_get_Item_m10364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::set_Item(System.Int32,T)
#define List_1_set_Item_m26411(__this, ___index, ___value, method) (( void (*) (List_1_t485 *, int32_t, Studio_t489 *, const MethodInfo*))List_1_set_Item_m10365_gshared)(__this, ___index, ___value, method)

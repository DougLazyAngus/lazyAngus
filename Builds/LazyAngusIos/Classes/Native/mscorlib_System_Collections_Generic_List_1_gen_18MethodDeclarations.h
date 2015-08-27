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
struct IEnumerable_1_t8915;
// GameAnalyticsSDK.Studio[]
struct StudioU5BU5D_t5677;
// System.Collections.Generic.IEnumerator`1<GameAnalyticsSDK.Studio>
struct IEnumerator_1_t8916;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GameAnalyticsSDK.Studio>
struct ICollection_1_t8917;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GameAnalyticsSDK.Studio>
struct ReadOnlyCollection_1_t5679;
// System.Predicate`1<GameAnalyticsSDK.Studio>
struct Predicate_1_t5680;
// System.Collections.Generic.IComparer`1<GameAnalyticsSDK.Studio>
struct IComparer_1_t8918;
// System.Comparison`1<GameAnalyticsSDK.Studio>
struct Comparison_1_t5682;
// System.Collections.Generic.List`1/Enumerator<GameAnalyticsSDK.Studio>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m26373(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26374(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor(System.Int32)
#define List_1__ctor_m26375(__this, ___capacity, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor(T[],System.Int32)
#define List_1__ctor_m26376(__this, ___data, ___size, method) (( void (*) (List_1_t485 *, StudioU5BU5D_t5677*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.cctor()
#define List_1__cctor_m26377(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26378(__this, method) (( Object_t* (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26379(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t485 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26380(__this, method) (( Object_t * (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26381(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26382(__this, ___item, method) (( bool (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26383(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26384(__this, ___index, ___item, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26385(__this, ___item, method) (( void (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26386(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26387(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26388(__this, method) (( Object_t * (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26389(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26390(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26391(__this, ___index, method) (( Object_t * (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26392(__this, ___index, ___value, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Add(T)
#define List_1_Add_m26393(__this, ___item, method) (( void (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26394(__this, ___newCount, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26395(__this, ___idx, ___count, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26396(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26397(__this, ___enumerable, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26398(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AsReadOnly()
#define List_1_AsReadOnly_m26399(__this, method) (( ReadOnlyCollection_1_t5679 * (*) (List_1_t485 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Clear()
#define List_1_Clear_m26400(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Contains(T)
#define List_1_Contains_m26401(__this, ___item, method) (( bool (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26402(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t485 *, StudioU5BU5D_t5677*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Find(System.Predicate`1<T>)
#define List_1_Find_m26403(__this, ___match, method) (( Studio_t489 * (*) (List_1_t485 *, Predicate_1_t5680 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26404(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5680 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26405(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t485 *, int32_t, int32_t, Predicate_1_t5680 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GetEnumerator()
#define List_1_GetEnumerator_m26406(__this, method) (( Enumerator_t5681  (*) (List_1_t485 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26407(__this, ___index, ___count, method) (( List_1_t485 * (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::IndexOf(T)
#define List_1_IndexOf_m26408(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26409(__this, ___start, ___delta, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26410(__this, ___index, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Insert(System.Int32,T)
#define List_1_Insert_m26411(__this, ___index, ___item, method) (( void (*) (List_1_t485 *, int32_t, Studio_t489 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26412(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26413(__this, ___index, ___collection, method) (( void (*) (List_1_t485 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26414(__this, ___index, ___collection, method) (( void (*) (List_1_t485 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26415(__this, ___index, ___enumerable, method) (( void (*) (List_1_t485 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Remove(T)
#define List_1_Remove_m26416(__this, ___item, method) (( bool (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26417(__this, ___match, method) (( int32_t (*) (List_1_t485 *, Predicate_1_t5680 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26418(__this, ___index, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26419(__this, ___index, ___count, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Reverse()
#define List_1_Reverse_m26420(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Sort()
#define List_1_Sort_m26421(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26422(__this, ___comparer, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26423(__this, ___comparison, method) (( void (*) (List_1_t485 *, Comparison_1_t5682 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::ToArray()
#define List_1_ToArray_m26424(__this, method) (( StudioU5BU5D_t5677* (*) (List_1_t485 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::TrimExcess()
#define List_1_TrimExcess_m26425(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Capacity()
#define List_1_get_Capacity_m26426(__this, method) (( int32_t (*) (List_1_t485 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26427(__this, ___value, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Count()
#define List_1_get_Count_m26428(__this, method) (( int32_t (*) (List_1_t485 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Item(System.Int32)
#define List_1_get_Item_m26429(__this, ___index, method) (( Studio_t489 * (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::set_Item(System.Int32,T)
#define List_1_set_Item_m26430(__this, ___index, ___value, method) (( void (*) (List_1_t485 *, int32_t, Studio_t489 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

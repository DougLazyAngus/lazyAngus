#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GameAnalyticsSDK.Game>
struct List_1_t488;
// System.Object
struct Object_t;
// GameAnalyticsSDK.Game
struct Game_t490;
// System.Collections.Generic.IEnumerable`1<GameAnalyticsSDK.Game>
struct IEnumerable_1_t8916;
// GameAnalyticsSDK.Game[]
struct GameU5BU5D_t5698;
// System.Collections.Generic.IEnumerator`1<GameAnalyticsSDK.Game>
struct IEnumerator_1_t8917;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GameAnalyticsSDK.Game>
struct ICollection_1_t8918;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GameAnalyticsSDK.Game>
struct ReadOnlyCollection_1_t5700;
// System.Predicate`1<GameAnalyticsSDK.Game>
struct Predicate_1_t5701;
// System.Collections.Generic.IComparer`1<GameAnalyticsSDK.Game>
struct IComparer_1_t8919;
// System.Comparison`1<GameAnalyticsSDK.Game>
struct Comparison_1_t5703;
// System.Collections.Generic.List`1/Enumerator<GameAnalyticsSDK.Game>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m26708(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1__ctor_m3710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26709(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1__ctor_m7469_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(System.Int32)
#define List_1__ctor_m26710(__this, ___capacity, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1__ctor_m21567_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(T[],System.Int32)
#define List_1__ctor_m26711(__this, ___data, ___size, method) (( void (*) (List_1_t488 *, GameU5BU5D_t5698*, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.cctor()
#define List_1__cctor_m26712(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21571_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26713(__this, method) (( Object_t* (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26714(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t488 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26715(__this, method) (( Object_t * (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26716(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10350_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26717(__this, ___item, method) (( bool (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10352_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26718(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26719(__this, ___index, ___item, method) (( void (*) (List_1_t488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26720(__this, ___item, method) (( void (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10355_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26721(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26722(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10343_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26723(__this, method) (( Object_t * (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26724(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26725(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26726(__this, ___index, method) (( Object_t * (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10348_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26727(__this, ___index, ___value, method) (( void (*) (List_1_t488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10349_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Add(T)
#define List_1_Add_m26728(__this, ___item, method) (( void (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Add_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26729(__this, ___newCount, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21589_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26730(__this, ___idx, ___count, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21591_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26731(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26732(__this, ___enumerable, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21595_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26733(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddRange_m21597_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AsReadOnly()
#define List_1_AsReadOnly_m26734(__this, method) (( ReadOnlyCollection_1_t5700 * (*) (List_1_t488 *, const MethodInfo*))List_1_AsReadOnly_m21599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Clear()
#define List_1_Clear_m26735(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Clear_m10351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Contains(T)
#define List_1_Contains_m26736(__this, ___item, method) (( bool (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Contains_m10359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26737(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t488 *, GameU5BU5D_t5698*, int32_t, const MethodInfo*))List_1_CopyTo_m10360_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Find(System.Predicate`1<T>)
#define List_1_Find_m26738(__this, ___match, method) (( Game_t490 * (*) (List_1_t488 *, Predicate_1_t5701 *, const MethodInfo*))List_1_Find_m21604_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26739(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5701 *, const MethodInfo*))List_1_CheckMatch_m21606_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26740(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t488 *, int32_t, int32_t, Predicate_1_t5701 *, const MethodInfo*))List_1_GetIndex_m21608_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetEnumerator()
#define List_1_GetEnumerator_m26741(__this, method) (( Enumerator_t5702  (*) (List_1_t488 *, const MethodInfo*))List_1_GetEnumerator_m3866_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26742(__this, ___index, ___count, method) (( List_1_t488 * (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21610_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::IndexOf(T)
#define List_1_IndexOf_m26743(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_IndexOf_m10363_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26744(__this, ___start, ___delta, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21613_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26745(__this, ___index, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21615_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Insert(System.Int32,T)
#define List_1_Insert_m26746(__this, ___index, ___item, method) (( void (*) (List_1_t488 *, int32_t, Game_t490 *, const MethodInfo*))List_1_Insert_m10364_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26747(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21618_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26748(__this, ___index, ___collection, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21620_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26749(__this, ___index, ___collection, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26750(__this, ___index, ___enumerable, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21624_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Remove(T)
#define List_1_Remove_m26751(__this, ___item, method) (( bool (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Remove_m10361_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26752(__this, ___match, method) (( int32_t (*) (List_1_t488 *, Predicate_1_t5701 *, const MethodInfo*))List_1_RemoveAll_m21627_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26753(__this, ___index, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26754(__this, ___index, ___count, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21630_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Reverse()
#define List_1_Reverse_m26755(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Reverse_m21632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort()
#define List_1_Sort_m26756(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Sort_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26757(__this, ___comparer, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26758(__this, ___comparison, method) (( void (*) (List_1_t488 *, Comparison_1_t5703 *, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::ToArray()
#define List_1_ToArray_m26759(__this, method) (( GameU5BU5D_t5698* (*) (List_1_t488 *, const MethodInfo*))List_1_ToArray_m21640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::TrimExcess()
#define List_1_TrimExcess_m26760(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_TrimExcess_m21642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Capacity()
#define List_1_get_Capacity_m26761(__this, method) (( int32_t (*) (List_1_t488 *, const MethodInfo*))List_1_get_Capacity_m21644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26762(__this, ___value, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21646_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Count()
#define List_1_get_Count_m26763(__this, method) (( int32_t (*) (List_1_t488 *, const MethodInfo*))List_1_get_Count_m10342_gshared)(__this, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Item(System.Int32)
#define List_1_get_Item_m26764(__this, ___index, method) (( Game_t490 * (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_get_Item_m10365_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::set_Item(System.Int32,T)
#define List_1_set_Item_m26765(__this, ___index, ___value, method) (( void (*) (List_1_t488 *, int32_t, Game_t490 *, const MethodInfo*))List_1_set_Item_m10366_gshared)(__this, ___index, ___value, method)

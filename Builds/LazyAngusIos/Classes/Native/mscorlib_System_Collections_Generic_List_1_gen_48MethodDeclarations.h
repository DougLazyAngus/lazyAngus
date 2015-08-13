#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t2697;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t2699;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IEnumerable_1_t9578;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t8382;
// System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IEnumerator_1_t9579;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct ICollection_1_t9580;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct ReadOnlyCollection_1_t8384;
// System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Predicate_1_t8385;
// System.Collections.Generic.IComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IComparer_1_t9581;
// System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Comparison_1_t8386;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m10080(__this, method) (( void (*) (List_1_t2697 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m60047(__this, ___collection, method) (( void (*) (List_1_t2697 *, Object_t*, const MethodInfo*))List_1__ctor_m7471_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Int32)
#define List_1__ctor_m60048(__this, ___capacity, method) (( void (*) (List_1_t2697 *, int32_t, const MethodInfo*))List_1__ctor_m21570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(T[],System.Int32)
#define List_1__ctor_m60049(__this, ___data, ___size, method) (( void (*) (List_1_t2697 *, GcLeaderboardU5BU5D_t8382*, int32_t, const MethodInfo*))List_1__ctor_m21572_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.cctor()
#define List_1__cctor_m60050(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60051(__this, method) (( Object_t* (*) (List_1_t2697 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m60052(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2697 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60053(__this, method) (( Object_t * (*) (List_1_t2697 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m60054(__this, ___item, method) (( int32_t (*) (List_1_t2697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m60055(__this, ___item, method) (( bool (*) (List_1_t2697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m60056(__this, ___item, method) (( int32_t (*) (List_1_t2697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m60057(__this, ___index, ___item, method) (( void (*) (List_1_t2697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m60058(__this, ___item, method) (( void (*) (List_1_t2697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60059(__this, method) (( bool (*) (List_1_t2697 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60060(__this, method) (( bool (*) (List_1_t2697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m60061(__this, method) (( Object_t * (*) (List_1_t2697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m60062(__this, method) (( bool (*) (List_1_t2697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m60063(__this, method) (( bool (*) (List_1_t2697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m60064(__this, ___index, method) (( Object_t * (*) (List_1_t2697 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m60065(__this, ___index, ___value, method) (( void (*) (List_1_t2697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(T)
#define List_1_Add_m60066(__this, ___item, method) (( void (*) (List_1_t2697 *, GcLeaderboard_t2699 *, const MethodInfo*))List_1_Add_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m60067(__this, ___newCount, method) (( void (*) (List_1_t2697 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m60068(__this, ___idx, ___count, method) (( void (*) (List_1_t2697 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21594_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m60069(__this, ___collection, method) (( void (*) (List_1_t2697 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m60070(__this, ___enumerable, method) (( void (*) (List_1_t2697 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m60071(__this, ___collection, method) (( void (*) (List_1_t2697 *, Object_t*, const MethodInfo*))List_1_AddRange_m21600_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AsReadOnly()
#define List_1_AsReadOnly_m60072(__this, method) (( ReadOnlyCollection_1_t8384 * (*) (List_1_t2697 *, const MethodInfo*))List_1_AsReadOnly_m21602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Clear()
#define List_1_Clear_m60073(__this, method) (( void (*) (List_1_t2697 *, const MethodInfo*))List_1_Clear_m10350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Contains(T)
#define List_1_Contains_m60074(__this, ___item, method) (( bool (*) (List_1_t2697 *, GcLeaderboard_t2699 *, const MethodInfo*))List_1_Contains_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m60075(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2697 *, GcLeaderboardU5BU5D_t8382*, int32_t, const MethodInfo*))List_1_CopyTo_m10359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Find(System.Predicate`1<T>)
#define List_1_Find_m60076(__this, ___match, method) (( GcLeaderboard_t2699 * (*) (List_1_t2697 *, Predicate_1_t8385 *, const MethodInfo*))List_1_Find_m21607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m60077(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8385 *, const MethodInfo*))List_1_CheckMatch_m21609_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m60078(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2697 *, int32_t, int32_t, Predicate_1_t8385 *, const MethodInfo*))List_1_GetIndex_m21611_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
#define List_1_GetEnumerator_m10081(__this, method) (( Enumerator_t2925  (*) (List_1_t2697 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m60079(__this, ___index, ___count, method) (( List_1_t2697 * (*) (List_1_t2697 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21613_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IndexOf(T)
#define List_1_IndexOf_m60080(__this, ___item, method) (( int32_t (*) (List_1_t2697 *, GcLeaderboard_t2699 *, const MethodInfo*))List_1_IndexOf_m10362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m60081(__this, ___start, ___delta, method) (( void (*) (List_1_t2697 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m60082(__this, ___index, method) (( void (*) (List_1_t2697 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Insert(System.Int32,T)
#define List_1_Insert_m60083(__this, ___index, ___item, method) (( void (*) (List_1_t2697 *, int32_t, GcLeaderboard_t2699 *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m60084(__this, ___collection, method) (( void (*) (List_1_t2697 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m60085(__this, ___index, ___collection, method) (( void (*) (List_1_t2697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21623_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m60086(__this, ___index, ___collection, method) (( void (*) (List_1_t2697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21625_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m60087(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21627_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Remove(T)
#define List_1_Remove_m60088(__this, ___item, method) (( bool (*) (List_1_t2697 *, GcLeaderboard_t2699 *, const MethodInfo*))List_1_Remove_m10360_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m60089(__this, ___match, method) (( int32_t (*) (List_1_t2697 *, Predicate_1_t8385 *, const MethodInfo*))List_1_RemoveAll_m21630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m60090(__this, ___index, method) (( void (*) (List_1_t2697 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m60091(__this, ___index, ___count, method) (( void (*) (List_1_t2697 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21633_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Reverse()
#define List_1_Reverse_m60092(__this, method) (( void (*) (List_1_t2697 *, const MethodInfo*))List_1_Reverse_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort()
#define List_1_Sort_m60093(__this, method) (( void (*) (List_1_t2697 *, const MethodInfo*))List_1_Sort_m21637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m60094(__this, ___comparer, method) (( void (*) (List_1_t2697 *, Object_t*, const MethodInfo*))List_1_Sort_m21639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m60095(__this, ___comparison, method) (( void (*) (List_1_t2697 *, Comparison_1_t8386 *, const MethodInfo*))List_1_Sort_m21641_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::ToArray()
#define List_1_ToArray_m60096(__this, method) (( GcLeaderboardU5BU5D_t8382* (*) (List_1_t2697 *, const MethodInfo*))List_1_ToArray_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::TrimExcess()
#define List_1_TrimExcess_m60097(__this, method) (( void (*) (List_1_t2697 *, const MethodInfo*))List_1_TrimExcess_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Capacity()
#define List_1_get_Capacity_m60098(__this, method) (( int32_t (*) (List_1_t2697 *, const MethodInfo*))List_1_get_Capacity_m21647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m60099(__this, ___value, method) (( void (*) (List_1_t2697 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21649_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Count()
#define List_1_get_Count_m60100(__this, method) (( int32_t (*) (List_1_t2697 *, const MethodInfo*))List_1_get_Count_m10341_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Item(System.Int32)
#define List_1_get_Item_m60101(__this, ___index, method) (( GcLeaderboard_t2699 * (*) (List_1_t2697 *, int32_t, const MethodInfo*))List_1_get_Item_m10364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Item(System.Int32,T)
#define List_1_set_Item_m60102(__this, ___index, ___value, method) (( void (*) (List_1_t2697 *, int32_t, GcLeaderboard_t2699 *, const MethodInfo*))List_1_set_Item_m10365_gshared)(__this, ___index, ___value, method)

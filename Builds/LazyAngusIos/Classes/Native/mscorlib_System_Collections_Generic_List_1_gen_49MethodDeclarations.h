#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t2695;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t2697;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IEnumerable_1_t9586;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t8386;
// System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IEnumerator_1_t9587;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct ICollection_1_t9588;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct ReadOnlyCollection_1_t8388;
// System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Predicate_1_t8389;
// System.Collections.Generic.IComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IComparer_1_t9589;
// System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Comparison_1_t8390;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m10071(__this, method) (( void (*) (List_1_t2695 *, const MethodInfo*))List_1__ctor_m3699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m60136(__this, ___collection, method) (( void (*) (List_1_t2695 *, Object_t*, const MethodInfo*))List_1__ctor_m7459_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Int32)
#define List_1__ctor_m60137(__this, ___capacity, method) (( void (*) (List_1_t2695 *, int32_t, const MethodInfo*))List_1__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(T[],System.Int32)
#define List_1__ctor_m60138(__this, ___data, ___size, method) (( void (*) (List_1_t2695 *, GcLeaderboardU5BU5D_t8386*, int32_t, const MethodInfo*))List_1__ctor_m21559_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.cctor()
#define List_1__cctor_m60139(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21561_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60140(__this, method) (( Object_t* (*) (List_1_t2695 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m60141(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2695 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10335_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60142(__this, method) (( Object_t * (*) (List_1_t2695 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m60143(__this, ___item, method) (( int32_t (*) (List_1_t2695 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10340_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m60144(__this, ___item, method) (( bool (*) (List_1_t2695 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10342_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m60145(__this, ___item, method) (( int32_t (*) (List_1_t2695 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10343_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m60146(__this, ___index, ___item, method) (( void (*) (List_1_t2695 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10344_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m60147(__this, ___item, method) (( void (*) (List_1_t2695 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10345_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60148(__this, method) (( bool (*) (List_1_t2695 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60149(__this, method) (( bool (*) (List_1_t2695 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10333_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m60150(__this, method) (( Object_t * (*) (List_1_t2695 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m60151(__this, method) (( bool (*) (List_1_t2695 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10336_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m60152(__this, method) (( bool (*) (List_1_t2695 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10337_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m60153(__this, ___index, method) (( Object_t * (*) (List_1_t2695 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10338_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m60154(__this, ___index, ___value, method) (( void (*) (List_1_t2695 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10339_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(T)
#define List_1_Add_m60155(__this, ___item, method) (( void (*) (List_1_t2695 *, GcLeaderboard_t2697 *, const MethodInfo*))List_1_Add_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m60156(__this, ___newCount, method) (( void (*) (List_1_t2695 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21579_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m60157(__this, ___idx, ___count, method) (( void (*) (List_1_t2695 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21581_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m60158(__this, ___collection, method) (( void (*) (List_1_t2695 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21583_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m60159(__this, ___enumerable, method) (( void (*) (List_1_t2695 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21585_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m60160(__this, ___collection, method) (( void (*) (List_1_t2695 *, Object_t*, const MethodInfo*))List_1_AddRange_m21587_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AsReadOnly()
#define List_1_AsReadOnly_m60161(__this, method) (( ReadOnlyCollection_1_t8388 * (*) (List_1_t2695 *, const MethodInfo*))List_1_AsReadOnly_m21589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Clear()
#define List_1_Clear_m60162(__this, method) (( void (*) (List_1_t2695 *, const MethodInfo*))List_1_Clear_m10341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Contains(T)
#define List_1_Contains_m60163(__this, ___item, method) (( bool (*) (List_1_t2695 *, GcLeaderboard_t2697 *, const MethodInfo*))List_1_Contains_m10349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m60164(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2695 *, GcLeaderboardU5BU5D_t8386*, int32_t, const MethodInfo*))List_1_CopyTo_m10350_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Find(System.Predicate`1<T>)
#define List_1_Find_m60165(__this, ___match, method) (( GcLeaderboard_t2697 * (*) (List_1_t2695 *, Predicate_1_t8389 *, const MethodInfo*))List_1_Find_m21594_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m60166(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8389 *, const MethodInfo*))List_1_CheckMatch_m21596_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m60167(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2695 *, int32_t, int32_t, Predicate_1_t8389 *, const MethodInfo*))List_1_GetIndex_m21598_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
#define List_1_GetEnumerator_m10072(__this, method) (( Enumerator_t2923  (*) (List_1_t2695 *, const MethodInfo*))List_1_GetEnumerator_m3855_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m60168(__this, ___index, ___count, method) (( List_1_t2695 * (*) (List_1_t2695 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21600_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IndexOf(T)
#define List_1_IndexOf_m60169(__this, ___item, method) (( int32_t (*) (List_1_t2695 *, GcLeaderboard_t2697 *, const MethodInfo*))List_1_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m60170(__this, ___start, ___delta, method) (( void (*) (List_1_t2695 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21603_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m60171(__this, ___index, method) (( void (*) (List_1_t2695 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21605_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Insert(System.Int32,T)
#define List_1_Insert_m60172(__this, ___index, ___item, method) (( void (*) (List_1_t2695 *, int32_t, GcLeaderboard_t2697 *, const MethodInfo*))List_1_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m60173(__this, ___collection, method) (( void (*) (List_1_t2695 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21608_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m60174(__this, ___index, ___collection, method) (( void (*) (List_1_t2695 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21610_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m60175(__this, ___index, ___collection, method) (( void (*) (List_1_t2695 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21612_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m60176(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2695 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21614_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Remove(T)
#define List_1_Remove_m60177(__this, ___item, method) (( bool (*) (List_1_t2695 *, GcLeaderboard_t2697 *, const MethodInfo*))List_1_Remove_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m60178(__this, ___match, method) (( int32_t (*) (List_1_t2695 *, Predicate_1_t8389 *, const MethodInfo*))List_1_RemoveAll_m21617_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m60179(__this, ___index, method) (( void (*) (List_1_t2695 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m60180(__this, ___index, ___count, method) (( void (*) (List_1_t2695 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21620_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Reverse()
#define List_1_Reverse_m60181(__this, method) (( void (*) (List_1_t2695 *, const MethodInfo*))List_1_Reverse_m21622_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort()
#define List_1_Sort_m60182(__this, method) (( void (*) (List_1_t2695 *, const MethodInfo*))List_1_Sort_m21624_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m60183(__this, ___comparer, method) (( void (*) (List_1_t2695 *, Object_t*, const MethodInfo*))List_1_Sort_m21626_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m60184(__this, ___comparison, method) (( void (*) (List_1_t2695 *, Comparison_1_t8390 *, const MethodInfo*))List_1_Sort_m21628_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::ToArray()
#define List_1_ToArray_m60185(__this, method) (( GcLeaderboardU5BU5D_t8386* (*) (List_1_t2695 *, const MethodInfo*))List_1_ToArray_m21630_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::TrimExcess()
#define List_1_TrimExcess_m60186(__this, method) (( void (*) (List_1_t2695 *, const MethodInfo*))List_1_TrimExcess_m21632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Capacity()
#define List_1_get_Capacity_m60187(__this, method) (( int32_t (*) (List_1_t2695 *, const MethodInfo*))List_1_get_Capacity_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m60188(__this, ___value, method) (( void (*) (List_1_t2695 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21636_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Count()
#define List_1_get_Count_m60189(__this, method) (( int32_t (*) (List_1_t2695 *, const MethodInfo*))List_1_get_Count_m10332_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Item(System.Int32)
#define List_1_get_Item_m60190(__this, ___index, method) (( GcLeaderboard_t2697 * (*) (List_1_t2695 *, int32_t, const MethodInfo*))List_1_get_Item_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Item(System.Int32,T)
#define List_1_set_Item_m60191(__this, ___index, ___value, method) (( void (*) (List_1_t2695 *, int32_t, GcLeaderboard_t2697 *, const MethodInfo*))List_1_set_Item_m10356_gshared)(__this, ___index, ___value, method)

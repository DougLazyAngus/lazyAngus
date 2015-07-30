#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t2645;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t2647;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IEnumerable_1_t9485;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t8308;
// System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IEnumerator_1_t9486;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct ICollection_1_t9487;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct ReadOnlyCollection_1_t8310;
// System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Predicate_1_t8311;
// System.Collections.Generic.IComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IComparer_1_t9488;
// System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Comparison_1_t8312;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9805(__this, method) (( void (*) (List_1_t2645 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59347(__this, ___collection, method) (( void (*) (List_1_t2645 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Int32)
#define List_1__ctor_m59348(__this, ___capacity, method) (( void (*) (List_1_t2645 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(T[],System.Int32)
#define List_1__ctor_m59349(__this, ___data, ___size, method) (( void (*) (List_1_t2645 *, GcLeaderboardU5BU5D_t8308*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.cctor()
#define List_1__cctor_m59350(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59351(__this, method) (( Object_t* (*) (List_1_t2645 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59352(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2645 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59353(__this, method) (( Object_t * (*) (List_1_t2645 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59354(__this, ___item, method) (( int32_t (*) (List_1_t2645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59355(__this, ___item, method) (( bool (*) (List_1_t2645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59356(__this, ___item, method) (( int32_t (*) (List_1_t2645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59357(__this, ___index, ___item, method) (( void (*) (List_1_t2645 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59358(__this, ___item, method) (( void (*) (List_1_t2645 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59359(__this, method) (( bool (*) (List_1_t2645 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59360(__this, method) (( bool (*) (List_1_t2645 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59361(__this, method) (( Object_t * (*) (List_1_t2645 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59362(__this, method) (( bool (*) (List_1_t2645 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59363(__this, method) (( bool (*) (List_1_t2645 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59364(__this, ___index, method) (( Object_t * (*) (List_1_t2645 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59365(__this, ___index, ___value, method) (( void (*) (List_1_t2645 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(T)
#define List_1_Add_m59366(__this, ___item, method) (( void (*) (List_1_t2645 *, GcLeaderboard_t2647 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59367(__this, ___newCount, method) (( void (*) (List_1_t2645 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59368(__this, ___idx, ___count, method) (( void (*) (List_1_t2645 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59369(__this, ___collection, method) (( void (*) (List_1_t2645 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59370(__this, ___enumerable, method) (( void (*) (List_1_t2645 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m59371(__this, ___collection, method) (( void (*) (List_1_t2645 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AsReadOnly()
#define List_1_AsReadOnly_m59372(__this, method) (( ReadOnlyCollection_1_t8310 * (*) (List_1_t2645 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Clear()
#define List_1_Clear_m59373(__this, method) (( void (*) (List_1_t2645 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Contains(T)
#define List_1_Contains_m59374(__this, ___item, method) (( bool (*) (List_1_t2645 *, GcLeaderboard_t2647 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59375(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2645 *, GcLeaderboardU5BU5D_t8308*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Find(System.Predicate`1<T>)
#define List_1_Find_m59376(__this, ___match, method) (( GcLeaderboard_t2647 * (*) (List_1_t2645 *, Predicate_1_t8311 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59377(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8311 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59378(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2645 *, int32_t, int32_t, Predicate_1_t8311 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
#define List_1_GetEnumerator_m9806(__this, method) (( Enumerator_t2873  (*) (List_1_t2645 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59379(__this, ___index, ___count, method) (( List_1_t2645 * (*) (List_1_t2645 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IndexOf(T)
#define List_1_IndexOf_m59380(__this, ___item, method) (( int32_t (*) (List_1_t2645 *, GcLeaderboard_t2647 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59381(__this, ___start, ___delta, method) (( void (*) (List_1_t2645 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59382(__this, ___index, method) (( void (*) (List_1_t2645 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Insert(System.Int32,T)
#define List_1_Insert_m59383(__this, ___index, ___item, method) (( void (*) (List_1_t2645 *, int32_t, GcLeaderboard_t2647 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59384(__this, ___collection, method) (( void (*) (List_1_t2645 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59385(__this, ___index, ___collection, method) (( void (*) (List_1_t2645 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59386(__this, ___index, ___collection, method) (( void (*) (List_1_t2645 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59387(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2645 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Remove(T)
#define List_1_Remove_m59388(__this, ___item, method) (( bool (*) (List_1_t2645 *, GcLeaderboard_t2647 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59389(__this, ___match, method) (( int32_t (*) (List_1_t2645 *, Predicate_1_t8311 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59390(__this, ___index, method) (( void (*) (List_1_t2645 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59391(__this, ___index, ___count, method) (( void (*) (List_1_t2645 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Reverse()
#define List_1_Reverse_m59392(__this, method) (( void (*) (List_1_t2645 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort()
#define List_1_Sort_m59393(__this, method) (( void (*) (List_1_t2645 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59394(__this, ___comparer, method) (( void (*) (List_1_t2645 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59395(__this, ___comparison, method) (( void (*) (List_1_t2645 *, Comparison_1_t8312 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::ToArray()
#define List_1_ToArray_m59396(__this, method) (( GcLeaderboardU5BU5D_t8308* (*) (List_1_t2645 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::TrimExcess()
#define List_1_TrimExcess_m59397(__this, method) (( void (*) (List_1_t2645 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Capacity()
#define List_1_get_Capacity_m59398(__this, method) (( int32_t (*) (List_1_t2645 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59399(__this, ___value, method) (( void (*) (List_1_t2645 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Count()
#define List_1_get_Count_m59400(__this, method) (( int32_t (*) (List_1_t2645 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Item(System.Int32)
#define List_1_get_Item_m59401(__this, ___index, method) (( GcLeaderboard_t2647 * (*) (List_1_t2645 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Item(System.Int32,T)
#define List_1_set_Item_m59402(__this, ___index, ___value, method) (( void (*) (List_1_t2645 *, int32_t, GcLeaderboard_t2647 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)

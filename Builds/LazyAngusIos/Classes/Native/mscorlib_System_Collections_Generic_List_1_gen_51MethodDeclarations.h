#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t2725;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t2727;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IEnumerable_1_t10226;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t8966;
// System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IEnumerator_1_t10227;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct ICollection_1_t10228;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct ReadOnlyCollection_1_t8968;
// System.Predicate`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Predicate_1_t8969;
// System.Collections.Generic.IComparer`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct IComparer_1_t10229;
// System.Comparison`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Comparison_1_t8970;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m10305(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m64845(__this, ___collection, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(System.Int32)
#define List_1__ctor_m64846(__this, ___capacity, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor(T[],System.Int32)
#define List_1__ctor_m64847(__this, ___data, ___size, method) (( void (*) (List_1_t2725 *, GcLeaderboardU5BU5D_t8966*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.cctor()
#define List_1__cctor_m64848(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m64849(__this, method) (( Object_t* (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m64850(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2725 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m64851(__this, method) (( Object_t * (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m64852(__this, ___item, method) (( int32_t (*) (List_1_t2725 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m64853(__this, ___item, method) (( bool (*) (List_1_t2725 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m64854(__this, ___item, method) (( int32_t (*) (List_1_t2725 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m64855(__this, ___index, ___item, method) (( void (*) (List_1_t2725 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m64856(__this, ___item, method) (( void (*) (List_1_t2725 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m64857(__this, method) (( bool (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m64858(__this, method) (( bool (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m64859(__this, method) (( Object_t * (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m64860(__this, method) (( bool (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m64861(__this, method) (( bool (*) (List_1_t2725 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m64862(__this, ___index, method) (( Object_t * (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m64863(__this, ___index, ___value, method) (( void (*) (List_1_t2725 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(T)
#define List_1_Add_m64864(__this, ___item, method) (( void (*) (List_1_t2725 *, GcLeaderboard_t2727 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m64865(__this, ___newCount, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m64866(__this, ___idx, ___count, method) (( void (*) (List_1_t2725 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m64867(__this, ___collection, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m64868(__this, ___enumerable, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m64869(__this, ___collection, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::AsReadOnly()
#define List_1_AsReadOnly_m64870(__this, method) (( ReadOnlyCollection_1_t8968 * (*) (List_1_t2725 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Clear()
#define List_1_Clear_m64871(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Contains(T)
#define List_1_Contains_m64872(__this, ___item, method) (( bool (*) (List_1_t2725 *, GcLeaderboard_t2727 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m64873(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2725 *, GcLeaderboardU5BU5D_t8966*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Find(System.Predicate`1<T>)
#define List_1_Find_m64874(__this, ___match, method) (( GcLeaderboard_t2727 * (*) (List_1_t2725 *, Predicate_1_t8969 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m64875(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8969 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m64876(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2725 *, int32_t, int32_t, Predicate_1_t8969 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
#define List_1_GetEnumerator_m10306(__this, method) (( Enumerator_t2953  (*) (List_1_t2725 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m64877(__this, ___index, ___count, method) (( List_1_t2725 * (*) (List_1_t2725 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::IndexOf(T)
#define List_1_IndexOf_m64878(__this, ___item, method) (( int32_t (*) (List_1_t2725 *, GcLeaderboard_t2727 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m64879(__this, ___start, ___delta, method) (( void (*) (List_1_t2725 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m64880(__this, ___index, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Insert(System.Int32,T)
#define List_1_Insert_m64881(__this, ___index, ___item, method) (( void (*) (List_1_t2725 *, int32_t, GcLeaderboard_t2727 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m64882(__this, ___collection, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m64883(__this, ___index, ___collection, method) (( void (*) (List_1_t2725 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m64884(__this, ___index, ___collection, method) (( void (*) (List_1_t2725 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m64885(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2725 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Remove(T)
#define List_1_Remove_m64886(__this, ___item, method) (( bool (*) (List_1_t2725 *, GcLeaderboard_t2727 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m64887(__this, ___match, method) (( int32_t (*) (List_1_t2725 *, Predicate_1_t8969 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m64888(__this, ___index, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m64889(__this, ___index, ___count, method) (( void (*) (List_1_t2725 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Reverse()
#define List_1_Reverse_m64890(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort()
#define List_1_Sort_m64891(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m64892(__this, ___comparer, method) (( void (*) (List_1_t2725 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m64893(__this, ___comparison, method) (( void (*) (List_1_t2725 *, Comparison_1_t8970 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::ToArray()
#define List_1_ToArray_m64894(__this, method) (( GcLeaderboardU5BU5D_t8966* (*) (List_1_t2725 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::TrimExcess()
#define List_1_TrimExcess_m64895(__this, method) (( void (*) (List_1_t2725 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Capacity()
#define List_1_get_Capacity_m64896(__this, method) (( int32_t (*) (List_1_t2725 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m64897(__this, ___value, method) (( void (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Count()
#define List_1_get_Count_m64898(__this, method) (( int32_t (*) (List_1_t2725 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Item(System.Int32)
#define List_1_get_Item_m64899(__this, ___index, method) (( GcLeaderboard_t2727 * (*) (List_1_t2725 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::set_Item(System.Int32,T)
#define List_1_set_Item_m64900(__this, ___index, ___value, method) (( void (*) (List_1_t2725 *, int32_t, GcLeaderboard_t2727 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)

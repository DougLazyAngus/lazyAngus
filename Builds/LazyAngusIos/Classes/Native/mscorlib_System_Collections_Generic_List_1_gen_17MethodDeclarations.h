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
struct IEnumerable_1_t9552;
// GameAnalyticsSDK.Game[]
struct GameU5BU5D_t6259;
// System.Collections.Generic.IEnumerator`1<GameAnalyticsSDK.Game>
struct IEnumerator_1_t9553;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GameAnalyticsSDK.Game>
struct ICollection_1_t9554;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GameAnalyticsSDK.Game>
struct ReadOnlyCollection_1_t6261;
// System.Predicate`1<GameAnalyticsSDK.Game>
struct Predicate_1_t6262;
// System.Collections.Generic.IComparer`1<GameAnalyticsSDK.Game>
struct IComparer_1_t9555;
// System.Comparison`1<GameAnalyticsSDK.Game>
struct Comparison_1_t6264;
// System.Collections.Generic.List`1/Enumerator<GameAnalyticsSDK.Game>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m31145(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31146(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(System.Int32)
#define List_1__ctor_m31147(__this, ___capacity, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(T[],System.Int32)
#define List_1__ctor_m31148(__this, ___data, ___size, method) (( void (*) (List_1_t488 *, GameU5BU5D_t6259*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.cctor()
#define List_1__cctor_m31149(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31150(__this, method) (( Object_t* (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31151(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t488 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31152(__this, method) (( Object_t * (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31153(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31154(__this, ___item, method) (( bool (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31155(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31156(__this, ___index, ___item, method) (( void (*) (List_1_t488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31157(__this, ___item, method) (( void (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31158(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31159(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31160(__this, method) (( Object_t * (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31161(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31162(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31163(__this, ___index, method) (( Object_t * (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31164(__this, ___index, ___value, method) (( void (*) (List_1_t488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Add(T)
#define List_1_Add_m31165(__this, ___item, method) (( void (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31166(__this, ___newCount, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31167(__this, ___idx, ___count, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31168(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31169(__this, ___enumerable, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31170(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AsReadOnly()
#define List_1_AsReadOnly_m31171(__this, method) (( ReadOnlyCollection_1_t6261 * (*) (List_1_t488 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Clear()
#define List_1_Clear_m31172(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Contains(T)
#define List_1_Contains_m31173(__this, ___item, method) (( bool (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31174(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t488 *, GameU5BU5D_t6259*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Find(System.Predicate`1<T>)
#define List_1_Find_m31175(__this, ___match, method) (( Game_t490 * (*) (List_1_t488 *, Predicate_1_t6262 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31176(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6262 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31177(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t488 *, int32_t, int32_t, Predicate_1_t6262 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetEnumerator()
#define List_1_GetEnumerator_m31178(__this, method) (( Enumerator_t6263  (*) (List_1_t488 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31179(__this, ___index, ___count, method) (( List_1_t488 * (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::IndexOf(T)
#define List_1_IndexOf_m31180(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31181(__this, ___start, ___delta, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31182(__this, ___index, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Insert(System.Int32,T)
#define List_1_Insert_m31183(__this, ___index, ___item, method) (( void (*) (List_1_t488 *, int32_t, Game_t490 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31184(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31185(__this, ___index, ___collection, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31186(__this, ___index, ___collection, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31187(__this, ___index, ___enumerable, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Remove(T)
#define List_1_Remove_m31188(__this, ___item, method) (( bool (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31189(__this, ___match, method) (( int32_t (*) (List_1_t488 *, Predicate_1_t6262 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31190(__this, ___index, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31191(__this, ___index, ___count, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Reverse()
#define List_1_Reverse_m31192(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort()
#define List_1_Sort_m31193(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31194(__this, ___comparer, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31195(__this, ___comparison, method) (( void (*) (List_1_t488 *, Comparison_1_t6264 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::ToArray()
#define List_1_ToArray_m31196(__this, method) (( GameU5BU5D_t6259* (*) (List_1_t488 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::TrimExcess()
#define List_1_TrimExcess_m31197(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Capacity()
#define List_1_get_Capacity_m31198(__this, method) (( int32_t (*) (List_1_t488 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31199(__this, ___value, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Count()
#define List_1_get_Count_m31200(__this, method) (( int32_t (*) (List_1_t488 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Item(System.Int32)
#define List_1_get_Item_m31201(__this, ___index, method) (( Game_t490 * (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::set_Item(System.Int32,T)
#define List_1_set_Item_m31202(__this, ___index, ___value, method) (( void (*) (List_1_t488 *, int32_t, Game_t490 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)

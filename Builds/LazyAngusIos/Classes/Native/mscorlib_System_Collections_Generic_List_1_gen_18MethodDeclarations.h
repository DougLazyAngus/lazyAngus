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
struct IEnumerable_1_t9531;
// GameAnalyticsSDK.Studio[]
struct StudioU5BU5D_t6226;
// System.Collections.Generic.IEnumerator`1<GameAnalyticsSDK.Studio>
struct IEnumerator_1_t9532;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GameAnalyticsSDK.Studio>
struct ICollection_1_t9533;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GameAnalyticsSDK.Studio>
struct ReadOnlyCollection_1_t6228;
// System.Predicate`1<GameAnalyticsSDK.Studio>
struct Predicate_1_t6229;
// System.Collections.Generic.IComparer`1<GameAnalyticsSDK.Studio>
struct IComparer_1_t9534;
// System.Comparison`1<GameAnalyticsSDK.Studio>
struct Comparison_1_t6231;
// System.Collections.Generic.List`1/Enumerator<GameAnalyticsSDK.Studio>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30718(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30719(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor(System.Int32)
#define List_1__ctor_m30720(__this, ___capacity, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.ctor(T[],System.Int32)
#define List_1__ctor_m30721(__this, ___data, ___size, method) (( void (*) (List_1_t485 *, StudioU5BU5D_t6226*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::.cctor()
#define List_1__cctor_m30722(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30723(__this, method) (( Object_t* (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30724(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t485 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30725(__this, method) (( Object_t * (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30726(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30727(__this, ___item, method) (( bool (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30728(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30729(__this, ___index, ___item, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30730(__this, ___item, method) (( void (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30731(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30732(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30733(__this, method) (( Object_t * (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30734(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30735(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30736(__this, ___index, method) (( Object_t * (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30737(__this, ___index, ___value, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Add(T)
#define List_1_Add_m30738(__this, ___item, method) (( void (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30739(__this, ___newCount, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30740(__this, ___idx, ___count, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30741(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30742(__this, ___enumerable, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30743(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::AsReadOnly()
#define List_1_AsReadOnly_m30744(__this, method) (( ReadOnlyCollection_1_t6228 * (*) (List_1_t485 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Clear()
#define List_1_Clear_m30745(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Contains(T)
#define List_1_Contains_m30746(__this, ___item, method) (( bool (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30747(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t485 *, StudioU5BU5D_t6226*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Find(System.Predicate`1<T>)
#define List_1_Find_m30748(__this, ___match, method) (( Studio_t489 * (*) (List_1_t485 *, Predicate_1_t6229 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30749(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6229 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30750(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t485 *, int32_t, int32_t, Predicate_1_t6229 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GetEnumerator()
#define List_1_GetEnumerator_m30751(__this, method) (( Enumerator_t6230  (*) (List_1_t485 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30752(__this, ___index, ___count, method) (( List_1_t485 * (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::IndexOf(T)
#define List_1_IndexOf_m30753(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30754(__this, ___start, ___delta, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30755(__this, ___index, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Insert(System.Int32,T)
#define List_1_Insert_m30756(__this, ___index, ___item, method) (( void (*) (List_1_t485 *, int32_t, Studio_t489 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30757(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30758(__this, ___index, ___collection, method) (( void (*) (List_1_t485 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30759(__this, ___index, ___collection, method) (( void (*) (List_1_t485 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30760(__this, ___index, ___enumerable, method) (( void (*) (List_1_t485 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Remove(T)
#define List_1_Remove_m30761(__this, ___item, method) (( bool (*) (List_1_t485 *, Studio_t489 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30762(__this, ___match, method) (( int32_t (*) (List_1_t485 *, Predicate_1_t6229 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30763(__this, ___index, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30764(__this, ___index, ___count, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Reverse()
#define List_1_Reverse_m30765(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Sort()
#define List_1_Sort_m30766(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30767(__this, ___comparer, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30768(__this, ___comparison, method) (( void (*) (List_1_t485 *, Comparison_1_t6231 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::ToArray()
#define List_1_ToArray_m30769(__this, method) (( StudioU5BU5D_t6226* (*) (List_1_t485 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::TrimExcess()
#define List_1_TrimExcess_m30770(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Capacity()
#define List_1_get_Capacity_m30771(__this, method) (( int32_t (*) (List_1_t485 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30772(__this, ___value, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Count()
#define List_1_get_Count_m30773(__this, method) (( int32_t (*) (List_1_t485 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Item(System.Int32)
#define List_1_get_Item_m30774(__this, ___index, method) (( Studio_t489 * (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::set_Item(System.Int32,T)
#define List_1_set_Item_m30775(__this, ___index, ___value, method) (( void (*) (List_1_t485 *, int32_t, Studio_t489 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

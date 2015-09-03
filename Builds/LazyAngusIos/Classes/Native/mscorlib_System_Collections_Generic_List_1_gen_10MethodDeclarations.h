#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBScore>
struct List_1_t702;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t293;
// System.Collections.Generic.IEnumerable`1<FBScore>
struct IEnumerable_1_t9464;
// FBScore[]
struct FBScoreU5BU5D_t6125;
// System.Collections.Generic.IEnumerator`1<FBScore>
struct IEnumerator_1_t9462;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t9457;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBScore>
struct ReadOnlyCollection_1_t6130;
// System.Predicate`1<FBScore>
struct Predicate_1_t6131;
// System.Collections.Generic.IComparer`1<FBScore>
struct IComparer_1_t9465;
// System.Comparison`1<FBScore>
struct Comparison_1_t6133;
// System.Collections.Generic.List`1/Enumerator<FBScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<FBScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4034(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29052(__this, ___collection, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Int32)
#define List_1__ctor_m29053(__this, ___capacity, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m29054(__this, ___data, ___size, method) (( void (*) (List_1_t702 *, FBScoreU5BU5D_t6125*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.cctor()
#define List_1__cctor_m29055(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29056(__this, method) (( Object_t* (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29057(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t702 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29058(__this, method) (( Object_t * (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29059(__this, ___item, method) (( int32_t (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29060(__this, ___item, method) (( bool (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29061(__this, ___item, method) (( int32_t (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29062(__this, ___index, ___item, method) (( void (*) (List_1_t702 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29063(__this, ___item, method) (( void (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29064(__this, method) (( bool (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29065(__this, method) (( bool (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29066(__this, method) (( Object_t * (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29067(__this, method) (( bool (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29068(__this, method) (( bool (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29069(__this, ___index, method) (( Object_t * (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29070(__this, ___index, ___value, method) (( void (*) (List_1_t702 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Add(T)
#define List_1_Add_m29071(__this, ___item, method) (( void (*) (List_1_t702 *, FBScore_t293 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29072(__this, ___newCount, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29073(__this, ___idx, ___count, method) (( void (*) (List_1_t702 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29074(__this, ___collection, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29075(__this, ___enumerable, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29076(__this, ___collection, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBScore>::AsReadOnly()
#define List_1_AsReadOnly_m29077(__this, method) (( ReadOnlyCollection_1_t6130 * (*) (List_1_t702 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Clear()
#define List_1_Clear_m29078(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Contains(T)
#define List_1_Contains_m29079(__this, ___item, method) (( bool (*) (List_1_t702 *, FBScore_t293 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29080(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t702 *, FBScoreU5BU5D_t6125*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m29081(__this, ___match, method) (( FBScore_t293 * (*) (List_1_t702 *, Predicate_1_t6131 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29082(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6131 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29083(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t702 *, int32_t, int32_t, Predicate_1_t6131 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBScore>::GetEnumerator()
#define List_1_GetEnumerator_m29084(__this, method) (( Enumerator_t6132  (*) (List_1_t702 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FBScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29085(__this, ___index, ___count, method) (( List_1_t702 * (*) (List_1_t702 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::IndexOf(T)
#define List_1_IndexOf_m29086(__this, ___item, method) (( int32_t (*) (List_1_t702 *, FBScore_t293 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29087(__this, ___start, ___delta, method) (( void (*) (List_1_t702 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29088(__this, ___index, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Insert(System.Int32,T)
#define List_1_Insert_m29089(__this, ___index, ___item, method) (( void (*) (List_1_t702 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29090(__this, ___collection, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29091(__this, ___index, ___collection, method) (( void (*) (List_1_t702 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29092(__this, ___index, ___collection, method) (( void (*) (List_1_t702 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29093(__this, ___index, ___enumerable, method) (( void (*) (List_1_t702 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Remove(T)
#define List_1_Remove_m29094(__this, ___item, method) (( bool (*) (List_1_t702 *, FBScore_t293 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29095(__this, ___match, method) (( int32_t (*) (List_1_t702 *, Predicate_1_t6131 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29096(__this, ___index, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29097(__this, ___index, ___count, method) (( void (*) (List_1_t702 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Reverse()
#define List_1_Reverse_m29098(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort()
#define List_1_Sort_m29099(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29100(__this, ___comparer, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29101(__this, ___comparison, method) (( void (*) (List_1_t702 *, Comparison_1_t6133 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBScore>::ToArray()
#define List_1_ToArray_m29102(__this, method) (( FBScoreU5BU5D_t6125* (*) (List_1_t702 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::TrimExcess()
#define List_1_TrimExcess_m29103(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Capacity()
#define List_1_get_Capacity_m29104(__this, method) (( int32_t (*) (List_1_t702 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29105(__this, ___value, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Count()
#define List_1_get_Count_m29106(__this, method) (( int32_t (*) (List_1_t702 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBScore>::get_Item(System.Int32)
#define List_1_get_Item_m29107(__this, ___index, method) (( FBScore_t293 * (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m29108(__this, ___index, ___value, method) (( void (*) (List_1_t702 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBScore>
struct List_1_t706;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t293;
// System.Collections.Generic.IEnumerable`1<FBScore>
struct IEnumerable_1_t9470;
// FBScore[]
struct FBScoreU5BU5D_t6129;
// System.Collections.Generic.IEnumerator`1<FBScore>
struct IEnumerator_1_t9468;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t9463;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBScore>
struct ReadOnlyCollection_1_t6134;
// System.Predicate`1<FBScore>
struct Predicate_1_t6135;
// System.Collections.Generic.IComparer`1<FBScore>
struct IComparer_1_t9471;
// System.Comparison`1<FBScore>
struct Comparison_1_t6137;
// System.Collections.Generic.List`1/Enumerator<FBScore>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<FBScore>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4046(__this, method) (( void (*) (List_1_t706 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29065(__this, ___collection, method) (( void (*) (List_1_t706 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(System.Int32)
#define List_1__ctor_m29066(__this, ___capacity, method) (( void (*) (List_1_t706 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.ctor(T[],System.Int32)
#define List_1__ctor_m29067(__this, ___data, ___size, method) (( void (*) (List_1_t706 *, FBScoreU5BU5D_t6129*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FBScore>::.cctor()
#define List_1__cctor_m29068(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29069(__this, method) (( Object_t* (*) (List_1_t706 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29070(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t706 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29071(__this, method) (( Object_t * (*) (List_1_t706 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29072(__this, ___item, method) (( int32_t (*) (List_1_t706 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29073(__this, ___item, method) (( bool (*) (List_1_t706 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29074(__this, ___item, method) (( int32_t (*) (List_1_t706 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29075(__this, ___index, ___item, method) (( void (*) (List_1_t706 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29076(__this, ___item, method) (( void (*) (List_1_t706 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29077(__this, method) (( bool (*) (List_1_t706 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29078(__this, method) (( bool (*) (List_1_t706 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29079(__this, method) (( Object_t * (*) (List_1_t706 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29080(__this, method) (( bool (*) (List_1_t706 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29081(__this, method) (( bool (*) (List_1_t706 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBScore>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29082(__this, ___index, method) (( Object_t * (*) (List_1_t706 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29083(__this, ___index, ___value, method) (( void (*) (List_1_t706 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Add(T)
#define List_1_Add_m29084(__this, ___item, method) (( void (*) (List_1_t706 *, FBScore_t293 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29085(__this, ___newCount, method) (( void (*) (List_1_t706 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29086(__this, ___idx, ___count, method) (( void (*) (List_1_t706 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29087(__this, ___collection, method) (( void (*) (List_1_t706 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29088(__this, ___enumerable, method) (( void (*) (List_1_t706 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBScore>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29089(__this, ___collection, method) (( void (*) (List_1_t706 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBScore>::AsReadOnly()
#define List_1_AsReadOnly_m29090(__this, method) (( ReadOnlyCollection_1_t6134 * (*) (List_1_t706 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Clear()
#define List_1_Clear_m29091(__this, method) (( void (*) (List_1_t706 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Contains(T)
#define List_1_Contains_m29092(__this, ___item, method) (( bool (*) (List_1_t706 *, FBScore_t293 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29093(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t706 *, FBScoreU5BU5D_t6129*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBScore>::Find(System.Predicate`1<T>)
#define List_1_Find_m29094(__this, ___match, method) (( FBScore_t293 * (*) (List_1_t706 *, Predicate_1_t6135 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29095(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6135 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29096(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t706 *, int32_t, int32_t, Predicate_1_t6135 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBScore>::GetEnumerator()
#define List_1_GetEnumerator_m29097(__this, method) (( Enumerator_t6136  (*) (List_1_t706 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FBScore>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29098(__this, ___index, ___count, method) (( List_1_t706 * (*) (List_1_t706 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::IndexOf(T)
#define List_1_IndexOf_m29099(__this, ___item, method) (( int32_t (*) (List_1_t706 *, FBScore_t293 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29100(__this, ___start, ___delta, method) (( void (*) (List_1_t706 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29101(__this, ___index, method) (( void (*) (List_1_t706 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Insert(System.Int32,T)
#define List_1_Insert_m29102(__this, ___index, ___item, method) (( void (*) (List_1_t706 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBScore>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29103(__this, ___collection, method) (( void (*) (List_1_t706 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29104(__this, ___index, ___collection, method) (( void (*) (List_1_t706 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29105(__this, ___index, ___collection, method) (( void (*) (List_1_t706 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBScore>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29106(__this, ___index, ___enumerable, method) (( void (*) (List_1_t706 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FBScore>::Remove(T)
#define List_1_Remove_m29107(__this, ___item, method) (( bool (*) (List_1_t706 *, FBScore_t293 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29108(__this, ___match, method) (( int32_t (*) (List_1_t706 *, Predicate_1_t6135 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29109(__this, ___index, method) (( void (*) (List_1_t706 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29110(__this, ___index, ___count, method) (( void (*) (List_1_t706 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Reverse()
#define List_1_Reverse_m29111(__this, method) (( void (*) (List_1_t706 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort()
#define List_1_Sort_m29112(__this, method) (( void (*) (List_1_t706 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29113(__this, ___comparer, method) (( void (*) (List_1_t706 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBScore>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29114(__this, ___comparison, method) (( void (*) (List_1_t706 *, Comparison_1_t6137 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBScore>::ToArray()
#define List_1_ToArray_m29115(__this, method) (( FBScoreU5BU5D_t6129* (*) (List_1_t706 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::TrimExcess()
#define List_1_TrimExcess_m29116(__this, method) (( void (*) (List_1_t706 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Capacity()
#define List_1_get_Capacity_m29117(__this, method) (( int32_t (*) (List_1_t706 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29118(__this, ___value, method) (( void (*) (List_1_t706 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBScore>::get_Count()
#define List_1_get_Count_m29119(__this, method) (( int32_t (*) (List_1_t706 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBScore>::get_Item(System.Int32)
#define List_1_get_Item_m29120(__this, ___index, method) (( FBScore_t293 * (*) (List_1_t706 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBScore>::set_Item(System.Int32,T)
#define List_1_set_Item_m29121(__this, ___index, ___value, method) (( void (*) (List_1_t706 *, int32_t, FBScore_t293 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)

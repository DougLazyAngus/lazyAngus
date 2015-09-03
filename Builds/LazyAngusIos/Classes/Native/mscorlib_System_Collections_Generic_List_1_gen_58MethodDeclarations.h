#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t2824;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t2823;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerable_1_t10256;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t9036;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerator_1_t10257;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ICollection_1_t10258;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ReadOnlyCollection_1_t9038;
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
struct Predicate_1_t9039;
// System.Collections.Generic.IComparer`1<UnityEngine.Networking.Match.MatchDesc>
struct IComparer_1_t10259;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
struct Comparison_1_t9041;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_107.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m66087(__this, method) (( void (*) (List_1_t2824 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m66088(__this, ___collection, method) (( void (*) (List_1_t2824 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
#define List_1__ctor_m66089(__this, ___capacity, method) (( void (*) (List_1_t2824 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(T[],System.Int32)
#define List_1__ctor_m66090(__this, ___data, ___size, method) (( void (*) (List_1_t2824 *, MatchDescU5BU5D_t9036*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
#define List_1__cctor_m66091(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m66092(__this, method) (( Object_t* (*) (List_1_t2824 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m66093(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2824 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m66094(__this, method) (( Object_t * (*) (List_1_t2824 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m66095(__this, ___item, method) (( int32_t (*) (List_1_t2824 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m66096(__this, ___item, method) (( bool (*) (List_1_t2824 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m66097(__this, ___item, method) (( int32_t (*) (List_1_t2824 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m66098(__this, ___index, ___item, method) (( void (*) (List_1_t2824 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m66099(__this, ___item, method) (( void (*) (List_1_t2824 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m66100(__this, method) (( bool (*) (List_1_t2824 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m66101(__this, method) (( bool (*) (List_1_t2824 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m66102(__this, method) (( Object_t * (*) (List_1_t2824 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m66103(__this, method) (( bool (*) (List_1_t2824 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m66104(__this, method) (( bool (*) (List_1_t2824 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m66105(__this, ___index, method) (( Object_t * (*) (List_1_t2824 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m66106(__this, ___index, ___value, method) (( void (*) (List_1_t2824 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
#define List_1_Add_m66107(__this, ___item, method) (( void (*) (List_1_t2824 *, MatchDesc_t2823 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m66108(__this, ___newCount, method) (( void (*) (List_1_t2824 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m66109(__this, ___idx, ___count, method) (( void (*) (List_1_t2824 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m66110(__this, ___collection, method) (( void (*) (List_1_t2824 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m66111(__this, ___enumerable, method) (( void (*) (List_1_t2824 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m66112(__this, ___collection, method) (( void (*) (List_1_t2824 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AsReadOnly()
#define List_1_AsReadOnly_m66113(__this, method) (( ReadOnlyCollection_1_t9038 * (*) (List_1_t2824 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
#define List_1_Clear_m66114(__this, method) (( void (*) (List_1_t2824 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
#define List_1_Contains_m66115(__this, ___item, method) (( bool (*) (List_1_t2824 *, MatchDesc_t2823 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m66116(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2824 *, MatchDescU5BU5D_t9036*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m66117(__this, ___match, method) (( MatchDesc_t2823 * (*) (List_1_t2824 *, Predicate_1_t9039 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m66118(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9039 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m66119(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2824 *, int32_t, int32_t, Predicate_1_t9039 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m66120(__this, method) (( Enumerator_t9040  (*) (List_1_t2824 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m66121(__this, ___index, ___count, method) (( List_1_t2824 * (*) (List_1_t2824 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
#define List_1_IndexOf_m66122(__this, ___item, method) (( int32_t (*) (List_1_t2824 *, MatchDesc_t2823 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m66123(__this, ___start, ___delta, method) (( void (*) (List_1_t2824 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m66124(__this, ___index, method) (( void (*) (List_1_t2824 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
#define List_1_Insert_m66125(__this, ___index, ___item, method) (( void (*) (List_1_t2824 *, int32_t, MatchDesc_t2823 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m66126(__this, ___collection, method) (( void (*) (List_1_t2824 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m66127(__this, ___index, ___collection, method) (( void (*) (List_1_t2824 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m66128(__this, ___index, ___collection, method) (( void (*) (List_1_t2824 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m66129(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2824 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#define List_1_Remove_m66130(__this, ___item, method) (( bool (*) (List_1_t2824 *, MatchDesc_t2823 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m66131(__this, ___match, method) (( int32_t (*) (List_1_t2824 *, Predicate_1_t9039 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m66132(__this, ___index, method) (( void (*) (List_1_t2824 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m66133(__this, ___index, ___count, method) (( void (*) (List_1_t2824 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Reverse()
#define List_1_Reverse_m66134(__this, method) (( void (*) (List_1_t2824 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort()
#define List_1_Sort_m66135(__this, method) (( void (*) (List_1_t2824 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m66136(__this, ___comparer, method) (( void (*) (List_1_t2824 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m66137(__this, ___comparison, method) (( void (*) (List_1_t2824 *, Comparison_1_t9041 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
#define List_1_ToArray_m66138(__this, method) (( MatchDescU5BU5D_t9036* (*) (List_1_t2824 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::TrimExcess()
#define List_1_TrimExcess_m66139(__this, method) (( void (*) (List_1_t2824 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
#define List_1_get_Capacity_m66140(__this, method) (( int32_t (*) (List_1_t2824 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m66141(__this, ___value, method) (( void (*) (List_1_t2824 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m66142(__this, method) (( int32_t (*) (List_1_t2824 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
#define List_1_get_Item_m66143(__this, ___index, method) (( MatchDesc_t2823 * (*) (List_1_t2824 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m66144(__this, ___index, ___value, method) (( void (*) (List_1_t2824 *, int32_t, MatchDesc_t2823 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

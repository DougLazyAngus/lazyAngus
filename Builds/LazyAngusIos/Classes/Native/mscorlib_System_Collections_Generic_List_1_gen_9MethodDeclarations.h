#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FacebookUserInfo>
struct List_1_t712;
// System.Object
struct Object_t;
// FacebookUserInfo
struct FacebookUserInfo_t271;
// System.Collections.Generic.IEnumerable`1<FacebookUserInfo>
struct IEnumerable_1_t9468;
// FacebookUserInfo[]
struct FacebookUserInfoU5BU5D_t6128;
// System.Collections.Generic.IEnumerator`1<FacebookUserInfo>
struct IEnumerator_1_t9466;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<FacebookUserInfo>
struct ICollection_1_t9461;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FacebookUserInfo>
struct ReadOnlyCollection_1_t6133;
// System.Predicate`1<FacebookUserInfo>
struct Predicate_1_t6134;
// System.Collections.Generic.IComparer`1<FacebookUserInfo>
struct IComparer_1_t9469;
// System.Comparison`1<FacebookUserInfo>
struct Comparison_1_t6135;
// System.Collections.Generic.List`1/Enumerator<FacebookUserInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4100(__this, method) (( void (*) (List_1_t712 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28924(__this, ___collection, method) (( void (*) (List_1_t712 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.ctor(System.Int32)
#define List_1__ctor_m28925(__this, ___capacity, method) (( void (*) (List_1_t712 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m28926(__this, ___data, ___size, method) (( void (*) (List_1_t712 *, FacebookUserInfoU5BU5D_t6128*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::.cctor()
#define List_1__cctor_m28927(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28928(__this, method) (( Object_t* (*) (List_1_t712 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28929(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t712 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28930(__this, method) (( Object_t * (*) (List_1_t712 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28931(__this, ___item, method) (( int32_t (*) (List_1_t712 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28932(__this, ___item, method) (( bool (*) (List_1_t712 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28933(__this, ___item, method) (( int32_t (*) (List_1_t712 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28934(__this, ___index, ___item, method) (( void (*) (List_1_t712 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28935(__this, ___item, method) (( void (*) (List_1_t712 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28936(__this, method) (( bool (*) (List_1_t712 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28937(__this, method) (( bool (*) (List_1_t712 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28938(__this, method) (( Object_t * (*) (List_1_t712 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28939(__this, method) (( bool (*) (List_1_t712 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28940(__this, method) (( bool (*) (List_1_t712 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28941(__this, ___index, method) (( Object_t * (*) (List_1_t712 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28942(__this, ___index, ___value, method) (( void (*) (List_1_t712 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Add(T)
#define List_1_Add_m28943(__this, ___item, method) (( void (*) (List_1_t712 *, FacebookUserInfo_t271 *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28944(__this, ___newCount, method) (( void (*) (List_1_t712 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28945(__this, ___idx, ___count, method) (( void (*) (List_1_t712 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28946(__this, ___collection, method) (( void (*) (List_1_t712 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28947(__this, ___enumerable, method) (( void (*) (List_1_t712 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28948(__this, ___collection, method) (( void (*) (List_1_t712 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FacebookUserInfo>::AsReadOnly()
#define List_1_AsReadOnly_m28949(__this, method) (( ReadOnlyCollection_1_t6133 * (*) (List_1_t712 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Clear()
#define List_1_Clear_m28950(__this, method) (( void (*) (List_1_t712 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::Contains(T)
#define List_1_Contains_m28951(__this, ___item, method) (( bool (*) (List_1_t712 *, FacebookUserInfo_t271 *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28952(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t712 *, FacebookUserInfoU5BU5D_t6128*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FacebookUserInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m28953(__this, ___match, method) (( FacebookUserInfo_t271 * (*) (List_1_t712 *, Predicate_1_t6134 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28954(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6134 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28955(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t712 *, int32_t, int32_t, Predicate_1_t6134 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FacebookUserInfo>::GetEnumerator()
#define List_1_GetEnumerator_m4173(__this, method) (( Enumerator_t783  (*) (List_1_t712 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FacebookUserInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28956(__this, ___index, ___count, method) (( List_1_t712 * (*) (List_1_t712 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::IndexOf(T)
#define List_1_IndexOf_m28957(__this, ___item, method) (( int32_t (*) (List_1_t712 *, FacebookUserInfo_t271 *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28958(__this, ___start, ___delta, method) (( void (*) (List_1_t712 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28959(__this, ___index, method) (( void (*) (List_1_t712 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Insert(System.Int32,T)
#define List_1_Insert_m28960(__this, ___index, ___item, method) (( void (*) (List_1_t712 *, int32_t, FacebookUserInfo_t271 *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28961(__this, ___collection, method) (( void (*) (List_1_t712 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28962(__this, ___index, ___collection, method) (( void (*) (List_1_t712 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28963(__this, ___index, ___collection, method) (( void (*) (List_1_t712 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28964(__this, ___index, ___enumerable, method) (( void (*) (List_1_t712 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FacebookUserInfo>::Remove(T)
#define List_1_Remove_m28965(__this, ___item, method) (( bool (*) (List_1_t712 *, FacebookUserInfo_t271 *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28966(__this, ___match, method) (( int32_t (*) (List_1_t712 *, Predicate_1_t6134 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28967(__this, ___index, method) (( void (*) (List_1_t712 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28968(__this, ___index, ___count, method) (( void (*) (List_1_t712 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Reverse()
#define List_1_Reverse_m28969(__this, method) (( void (*) (List_1_t712 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Sort()
#define List_1_Sort_m28970(__this, method) (( void (*) (List_1_t712 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28971(__this, ___comparer, method) (( void (*) (List_1_t712 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28972(__this, ___comparison, method) (( void (*) (List_1_t712 *, Comparison_1_t6135 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FacebookUserInfo>::ToArray()
#define List_1_ToArray_m28973(__this, method) (( FacebookUserInfoU5BU5D_t6128* (*) (List_1_t712 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::TrimExcess()
#define List_1_TrimExcess_m28974(__this, method) (( void (*) (List_1_t712 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::get_Capacity()
#define List_1_get_Capacity_m28975(__this, method) (( int32_t (*) (List_1_t712 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28976(__this, ___value, method) (( void (*) (List_1_t712 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FacebookUserInfo>::get_Count()
#define List_1_get_Count_m28977(__this, method) (( int32_t (*) (List_1_t712 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<FacebookUserInfo>::get_Item(System.Int32)
#define List_1_get_Item_m28978(__this, ___index, method) (( FacebookUserInfo_t271 * (*) (List_1_t712 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FacebookUserInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m28979(__this, ___index, ___value, method) (( void (*) (List_1_t712 *, int32_t, FacebookUserInfo_t271 *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)

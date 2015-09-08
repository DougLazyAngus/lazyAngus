#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<TwitterUserInfo>
struct List_1_t321;
// System.Object
struct Object_t;
// TwitterUserInfo
struct TwitterUserInfo_t308;
// System.Collections.Generic.IEnumerable`1<TwitterUserInfo>
struct IEnumerable_1_t9517;
// TwitterUserInfo[]
struct TwitterUserInfoU5BU5D_t6174;
// System.Collections.Generic.IEnumerator`1<TwitterUserInfo>
struct IEnumerator_1_t9513;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<TwitterUserInfo>
struct ICollection_1_t9508;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TwitterUserInfo>
struct ReadOnlyCollection_1_t6186;
// System.Predicate`1<TwitterUserInfo>
struct Predicate_1_t6187;
// System.Collections.Generic.IComparer`1<TwitterUserInfo>
struct IComparer_1_t9518;
// System.Comparison`1<TwitterUserInfo>
struct Comparison_1_t6189;
// System.Collections.Generic.List`1/Enumerator<TwitterUserInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_23.h"

// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4084(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30025(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor(System.Int32)
#define List_1__ctor_m30026(__this, ___capacity, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m30027(__this, ___data, ___size, method) (( void (*) (List_1_t321 *, TwitterUserInfoU5BU5D_t6174*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.cctor()
#define List_1__cctor_m30028(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30029(__this, method) (( Object_t* (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30030(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t321 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30031(__this, method) (( Object_t * (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30032(__this, ___item, method) (( int32_t (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30033(__this, ___item, method) (( bool (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30034(__this, ___item, method) (( int32_t (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30035(__this, ___index, ___item, method) (( void (*) (List_1_t321 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30036(__this, ___item, method) (( void (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30037(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30038(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30039(__this, method) (( Object_t * (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30040(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30041(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30042(__this, ___index, method) (( Object_t * (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30043(__this, ___index, ___value, method) (( void (*) (List_1_t321 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Add(T)
#define List_1_Add_m30044(__this, ___item, method) (( void (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30045(__this, ___newCount, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30046(__this, ___idx, ___count, method) (( void (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30047(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30048(__this, ___enumerable, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30049(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<TwitterUserInfo>::AsReadOnly()
#define List_1_AsReadOnly_m30050(__this, method) (( ReadOnlyCollection_1_t6186 * (*) (List_1_t321 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Clear()
#define List_1_Clear_m30051(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::Contains(T)
#define List_1_Contains_m30052(__this, ___item, method) (( bool (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30053(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t321 *, TwitterUserInfoU5BU5D_t6174*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<TwitterUserInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m30054(__this, ___match, method) (( TwitterUserInfo_t308 * (*) (List_1_t321 *, Predicate_1_t6187 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30055(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6187 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30056(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t321 *, int32_t, int32_t, Predicate_1_t6187 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TwitterUserInfo>::GetEnumerator()
#define List_1_GetEnumerator_m30057(__this, method) (( Enumerator_t6188  (*) (List_1_t321 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<TwitterUserInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30058(__this, ___index, ___count, method) (( List_1_t321 * (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::IndexOf(T)
#define List_1_IndexOf_m30059(__this, ___item, method) (( int32_t (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30060(__this, ___start, ___delta, method) (( void (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30061(__this, ___index, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Insert(System.Int32,T)
#define List_1_Insert_m30062(__this, ___index, ___item, method) (( void (*) (List_1_t321 *, int32_t, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30063(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30064(__this, ___index, ___collection, method) (( void (*) (List_1_t321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30065(__this, ___index, ___collection, method) (( void (*) (List_1_t321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30066(__this, ___index, ___enumerable, method) (( void (*) (List_1_t321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::Remove(T)
#define List_1_Remove_m30067(__this, ___item, method) (( bool (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30068(__this, ___match, method) (( int32_t (*) (List_1_t321 *, Predicate_1_t6187 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30069(__this, ___index, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30070(__this, ___index, ___count, method) (( void (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Reverse()
#define List_1_Reverse_m30071(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Sort()
#define List_1_Sort_m30072(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30073(__this, ___comparer, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30074(__this, ___comparison, method) (( void (*) (List_1_t321 *, Comparison_1_t6189 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<TwitterUserInfo>::ToArray()
#define List_1_ToArray_m30075(__this, method) (( TwitterUserInfoU5BU5D_t6174* (*) (List_1_t321 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::TrimExcess()
#define List_1_TrimExcess_m30076(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::get_Capacity()
#define List_1_get_Capacity_m30077(__this, method) (( int32_t (*) (List_1_t321 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30078(__this, ___value, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::get_Count()
#define List_1_get_Count_m30079(__this, method) (( int32_t (*) (List_1_t321 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<TwitterUserInfo>::get_Item(System.Int32)
#define List_1_get_Item_m30080(__this, ___index, method) (( TwitterUserInfo_t308 * (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m30081(__this, ___index, ___value, method) (( void (*) (List_1_t321 *, int32_t, TwitterUserInfo_t308 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<TweetTemplate>
struct List_1_t320;
// System.Object
struct Object_t;
// TweetTemplate
struct TweetTemplate_t323;
// System.Collections.Generic.IEnumerable`1<TweetTemplate>
struct IEnumerable_1_t9509;
// TweetTemplate[]
struct TweetTemplateU5BU5D_t6164;
// System.Collections.Generic.IEnumerator`1<TweetTemplate>
struct IEnumerator_1_t9500;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<TweetTemplate>
struct ICollection_1_t9495;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TweetTemplate>
struct ReadOnlyCollection_1_t6177;
// System.Predicate`1<TweetTemplate>
struct Predicate_1_t6178;
// System.Collections.Generic.IComparer`1<TweetTemplate>
struct IComparer_1_t9510;
// System.Comparison`1<TweetTemplate>
struct Comparison_1_t6180;
// System.Collections.Generic.List`1/Enumerator<TweetTemplate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22.h"

// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4071(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29910(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(System.Int32)
#define List_1__ctor_m29911(__this, ___capacity, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(T[],System.Int32)
#define List_1__ctor_m29912(__this, ___data, ___size, method) (( void (*) (List_1_t320 *, TweetTemplateU5BU5D_t6164*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.cctor()
#define List_1__cctor_m29913(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<TweetTemplate>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29914(__this, method) (( Object_t* (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29915(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29916(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29917(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29918(__this, ___item, method) (( bool (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29919(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29920(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29921(__this, ___item, method) (( void (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29922(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29923(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29924(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29925(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29926(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29927(__this, ___index, method) (( Object_t * (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29928(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Add(T)
#define List_1_Add_m29929(__this, ___item, method) (( void (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29930(__this, ___newCount, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29931(__this, ___idx, ___count, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29932(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29933(__this, ___enumerable, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29934(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<TweetTemplate>::AsReadOnly()
#define List_1_AsReadOnly_m29935(__this, method) (( ReadOnlyCollection_1_t6177 * (*) (List_1_t320 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Clear()
#define List_1_Clear_m29936(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::Contains(T)
#define List_1_Contains_m29937(__this, ___item, method) (( bool (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29938(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, TweetTemplateU5BU5D_t6164*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<TweetTemplate>::Find(System.Predicate`1<T>)
#define List_1_Find_m29939(__this, ___match, method) (( TweetTemplate_t323 * (*) (List_1_t320 *, Predicate_1_t6178 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29940(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6178 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29941(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t320 *, int32_t, int32_t, Predicate_1_t6178 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TweetTemplate>::GetEnumerator()
#define List_1_GetEnumerator_m29942(__this, method) (( Enumerator_t6179  (*) (List_1_t320 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<TweetTemplate>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29943(__this, ___index, ___count, method) (( List_1_t320 * (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::IndexOf(T)
#define List_1_IndexOf_m29944(__this, ___item, method) (( int32_t (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29945(__this, ___start, ___delta, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29946(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Insert(System.Int32,T)
#define List_1_Insert_m29947(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, TweetTemplate_t323 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29948(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29949(__this, ___index, ___collection, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29950(__this, ___index, ___collection, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29951(__this, ___index, ___enumerable, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::Remove(T)
#define List_1_Remove_m29952(__this, ___item, method) (( bool (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29953(__this, ___match, method) (( int32_t (*) (List_1_t320 *, Predicate_1_t6178 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29954(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29955(__this, ___index, ___count, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Reverse()
#define List_1_Reverse_m29956(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort()
#define List_1_Sort_m29957(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29958(__this, ___comparer, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29959(__this, ___comparison, method) (( void (*) (List_1_t320 *, Comparison_1_t6180 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<TweetTemplate>::ToArray()
#define List_1_ToArray_m29960(__this, method) (( TweetTemplateU5BU5D_t6164* (*) (List_1_t320 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::TrimExcess()
#define List_1_TrimExcess_m29961(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::get_Capacity()
#define List_1_get_Capacity_m29962(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29963(__this, ___value, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::get_Count()
#define List_1_get_Count_m29964(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<TweetTemplate>::get_Item(System.Int32)
#define List_1_get_Item_m29965(__this, ___index, method) (( TweetTemplate_t323 * (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::set_Item(System.Int32,T)
#define List_1_set_Item_m29966(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, TweetTemplate_t323 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

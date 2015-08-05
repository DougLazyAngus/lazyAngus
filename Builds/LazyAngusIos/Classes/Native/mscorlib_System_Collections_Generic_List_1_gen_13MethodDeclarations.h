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
struct IEnumerable_1_t8815;
// TweetTemplate[]
struct TweetTemplateU5BU5D_t5569;
// System.Collections.Generic.IEnumerator`1<TweetTemplate>
struct IEnumerator_1_t8806;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<TweetTemplate>
struct ICollection_1_t8801;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TweetTemplate>
struct ReadOnlyCollection_1_t5582;
// System.Predicate`1<TweetTemplate>
struct Predicate_1_t5583;
// System.Collections.Generic.IComparer`1<TweetTemplate>
struct IComparer_1_t8816;
// System.Comparison`1<TweetTemplate>
struct Comparison_1_t5585;
// System.Collections.Generic.List`1/Enumerator<TweetTemplate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3691(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1__ctor_m3481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25298(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1__ctor_m7218_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(System.Int32)
#define List_1__ctor_m25299(__this, ___capacity, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1__ctor_m21318_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(T[],System.Int32)
#define List_1__ctor_m25300(__this, ___data, ___size, method) (( void (*) (List_1_t320 *, TweetTemplateU5BU5D_t5569*, int32_t, const MethodInfo*))List_1__ctor_m21320_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.cctor()
#define List_1__cctor_m25301(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21322_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<TweetTemplate>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25302(__this, method) (( Object_t* (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25303(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10094_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25304(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10090_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25305(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10099_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25306(__this, ___item, method) (( bool (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10101_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25307(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25308(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10103_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25309(__this, ___item, method) (( void (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25310(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25311(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10092_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25312(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25313(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25314(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10096_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25315(__this, ___index, method) (( Object_t * (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10097_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25316(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10098_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Add(T)
#define List_1_Add_m25317(__this, ___item, method) (( void (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Add_m10107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25318(__this, ___newCount, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21340_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25319(__this, ___idx, ___count, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21342_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25320(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25321(__this, ___enumerable, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21346_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25322(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddRange_m21348_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<TweetTemplate>::AsReadOnly()
#define List_1_AsReadOnly_m25323(__this, method) (( ReadOnlyCollection_1_t5582 * (*) (List_1_t320 *, const MethodInfo*))List_1_AsReadOnly_m21350_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Clear()
#define List_1_Clear_m25324(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Clear_m10100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::Contains(T)
#define List_1_Contains_m25325(__this, ___item, method) (( bool (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Contains_m10108_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25326(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, TweetTemplateU5BU5D_t5569*, int32_t, const MethodInfo*))List_1_CopyTo_m10109_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<TweetTemplate>::Find(System.Predicate`1<T>)
#define List_1_Find_m25327(__this, ___match, method) (( TweetTemplate_t323 * (*) (List_1_t320 *, Predicate_1_t5583 *, const MethodInfo*))List_1_Find_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25328(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5583 *, const MethodInfo*))List_1_CheckMatch_m21357_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25329(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t320 *, int32_t, int32_t, Predicate_1_t5583 *, const MethodInfo*))List_1_GetIndex_m21359_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TweetTemplate>::GetEnumerator()
#define List_1_GetEnumerator_m25330(__this, method) (( Enumerator_t5584  (*) (List_1_t320 *, const MethodInfo*))List_1_GetEnumerator_m3637_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<TweetTemplate>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m25331(__this, ___index, ___count, method) (( List_1_t320 * (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21361_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::IndexOf(T)
#define List_1_IndexOf_m25332(__this, ___item, method) (( int32_t (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_IndexOf_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25333(__this, ___start, ___delta, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21364_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25334(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21366_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Insert(System.Int32,T)
#define List_1_Insert_m25335(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, TweetTemplate_t323 *, const MethodInfo*))List_1_Insert_m10113_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25336(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21369_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m25337(__this, ___index, ___collection, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21371_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25338(__this, ___index, ___collection, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21373_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25339(__this, ___index, ___enumerable, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21375_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::Remove(T)
#define List_1_Remove_m25340(__this, ___item, method) (( bool (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Remove_m10110_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25341(__this, ___match, method) (( int32_t (*) (List_1_t320 *, Predicate_1_t5583 *, const MethodInfo*))List_1_RemoveAll_m21378_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25342(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m25343(__this, ___index, ___count, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21381_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Reverse()
#define List_1_Reverse_m25344(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Reverse_m21383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort()
#define List_1_Sort_m25345(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Sort_m21385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25346(__this, ___comparer, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_Sort_m21387_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25347(__this, ___comparison, method) (( void (*) (List_1_t320 *, Comparison_1_t5585 *, const MethodInfo*))List_1_Sort_m21389_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<TweetTemplate>::ToArray()
#define List_1_ToArray_m25348(__this, method) (( TweetTemplateU5BU5D_t5569* (*) (List_1_t320 *, const MethodInfo*))List_1_ToArray_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::TrimExcess()
#define List_1_TrimExcess_m25349(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_TrimExcess_m21393_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::get_Capacity()
#define List_1_get_Capacity_m25350(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Capacity_m21395_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25351(__this, ___value, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21397_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::get_Count()
#define List_1_get_Count_m25352(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Count_m10091_gshared)(__this, method)
// T System.Collections.Generic.List`1<TweetTemplate>::get_Item(System.Int32)
#define List_1_get_Item_m25353(__this, ___index, method) (( TweetTemplate_t323 * (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_get_Item_m10114_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::set_Item(System.Int32,T)
#define List_1_set_Item_m25354(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, TweetTemplate_t323 *, const MethodInfo*))List_1_set_Item_m10115_gshared)(__this, ___index, ___value, method)

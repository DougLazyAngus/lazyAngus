#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t2755;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t2754;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerable_1_t9528;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t8391;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerator_1_t9529;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ICollection_1_t9530;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDesc>
struct ReadOnlyCollection_1_t8393;
// System.Predicate`1<UnityEngine.Networking.Match.MatchDesc>
struct Predicate_1_t8394;
// System.Collections.Generic.IComparer`1<UnityEngine.Networking.Match.MatchDesc>
struct IComparer_1_t9531;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDesc>
struct Comparison_1_t8396;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_100.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m60667(__this, method) (( void (*) (List_1_t2755 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m60668(__this, ___collection, method) (( void (*) (List_1_t2755 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
#define List_1__ctor_m60669(__this, ___capacity, method) (( void (*) (List_1_t2755 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(T[],System.Int32)
#define List_1__ctor_m60670(__this, ___data, ___size, method) (( void (*) (List_1_t2755 *, MatchDescU5BU5D_t8391*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
#define List_1__cctor_m60671(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60672(__this, method) (( Object_t* (*) (List_1_t2755 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m60673(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2755 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60674(__this, method) (( Object_t * (*) (List_1_t2755 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m60675(__this, ___item, method) (( int32_t (*) (List_1_t2755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m60676(__this, ___item, method) (( bool (*) (List_1_t2755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m60677(__this, ___item, method) (( int32_t (*) (List_1_t2755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m60678(__this, ___index, ___item, method) (( void (*) (List_1_t2755 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m60679(__this, ___item, method) (( void (*) (List_1_t2755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60680(__this, method) (( bool (*) (List_1_t2755 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60681(__this, method) (( bool (*) (List_1_t2755 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m60682(__this, method) (( Object_t * (*) (List_1_t2755 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m60683(__this, method) (( bool (*) (List_1_t2755 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m60684(__this, method) (( bool (*) (List_1_t2755 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m60685(__this, ___index, method) (( Object_t * (*) (List_1_t2755 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m60686(__this, ___index, ___value, method) (( void (*) (List_1_t2755 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
#define List_1_Add_m60687(__this, ___item, method) (( void (*) (List_1_t2755 *, MatchDesc_t2754 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m60688(__this, ___newCount, method) (( void (*) (List_1_t2755 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m60689(__this, ___idx, ___count, method) (( void (*) (List_1_t2755 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m60690(__this, ___collection, method) (( void (*) (List_1_t2755 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m60691(__this, ___enumerable, method) (( void (*) (List_1_t2755 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m60692(__this, ___collection, method) (( void (*) (List_1_t2755 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::AsReadOnly()
#define List_1_AsReadOnly_m60693(__this, method) (( ReadOnlyCollection_1_t8393 * (*) (List_1_t2755 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
#define List_1_Clear_m60694(__this, method) (( void (*) (List_1_t2755 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
#define List_1_Contains_m60695(__this, ___item, method) (( bool (*) (List_1_t2755 *, MatchDesc_t2754 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m60696(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2755 *, MatchDescU5BU5D_t8391*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m60697(__this, ___match, method) (( MatchDesc_t2754 * (*) (List_1_t2755 *, Predicate_1_t8394 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m60698(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8394 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m60699(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2755 *, int32_t, int32_t, Predicate_1_t8394 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m60700(__this, method) (( Enumerator_t8395  (*) (List_1_t2755 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m60701(__this, ___index, ___count, method) (( List_1_t2755 * (*) (List_1_t2755 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
#define List_1_IndexOf_m60702(__this, ___item, method) (( int32_t (*) (List_1_t2755 *, MatchDesc_t2754 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m60703(__this, ___start, ___delta, method) (( void (*) (List_1_t2755 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m60704(__this, ___index, method) (( void (*) (List_1_t2755 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
#define List_1_Insert_m60705(__this, ___index, ___item, method) (( void (*) (List_1_t2755 *, int32_t, MatchDesc_t2754 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m60706(__this, ___collection, method) (( void (*) (List_1_t2755 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m60707(__this, ___index, ___collection, method) (( void (*) (List_1_t2755 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m60708(__this, ___index, ___collection, method) (( void (*) (List_1_t2755 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m60709(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2755 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#define List_1_Remove_m60710(__this, ___item, method) (( bool (*) (List_1_t2755 *, MatchDesc_t2754 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m60711(__this, ___match, method) (( int32_t (*) (List_1_t2755 *, Predicate_1_t8394 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m60712(__this, ___index, method) (( void (*) (List_1_t2755 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m60713(__this, ___index, ___count, method) (( void (*) (List_1_t2755 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Reverse()
#define List_1_Reverse_m60714(__this, method) (( void (*) (List_1_t2755 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort()
#define List_1_Sort_m60715(__this, method) (( void (*) (List_1_t2755 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m60716(__this, ___comparer, method) (( void (*) (List_1_t2755 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m60717(__this, ___comparison, method) (( void (*) (List_1_t2755 *, Comparison_1_t8396 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
#define List_1_ToArray_m60718(__this, method) (( MatchDescU5BU5D_t8391* (*) (List_1_t2755 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::TrimExcess()
#define List_1_TrimExcess_m60719(__this, method) (( void (*) (List_1_t2755 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
#define List_1_get_Capacity_m60720(__this, method) (( int32_t (*) (List_1_t2755 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m60721(__this, ___value, method) (( void (*) (List_1_t2755 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m60722(__this, method) (( int32_t (*) (List_1_t2755 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
#define List_1_get_Item_m60723(__this, ___index, method) (( MatchDesc_t2754 * (*) (List_1_t2755 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m60724(__this, ___index, ___value, method) (( void (*) (List_1_t2755 *, int32_t, MatchDesc_t2754 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)

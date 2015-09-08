#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t998;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t997;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t9681;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t6476;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t9682;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t9683;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t6478;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t6479;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IComparer_1_t9684;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t6481;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6301(__this, method) (( void (*) (List_1_t998 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m34654(__this, ___collection, method) (( void (*) (List_1_t998 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m34655(__this, ___capacity, method) (( void (*) (List_1_t998 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m34656(__this, ___data, ___size, method) (( void (*) (List_1_t998 *, MatEntryU5BU5D_t6476*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m34657(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34658(__this, method) (( Object_t* (*) (List_1_t998 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m34659(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t998 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m34660(__this, method) (( Object_t * (*) (List_1_t998 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m34661(__this, ___item, method) (( int32_t (*) (List_1_t998 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m34662(__this, ___item, method) (( bool (*) (List_1_t998 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m34663(__this, ___item, method) (( int32_t (*) (List_1_t998 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m34664(__this, ___index, ___item, method) (( void (*) (List_1_t998 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m34665(__this, ___item, method) (( void (*) (List_1_t998 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34666(__this, method) (( bool (*) (List_1_t998 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m34667(__this, method) (( bool (*) (List_1_t998 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m34668(__this, method) (( Object_t * (*) (List_1_t998 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m34669(__this, method) (( bool (*) (List_1_t998 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m34670(__this, method) (( bool (*) (List_1_t998 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m34671(__this, ___index, method) (( Object_t * (*) (List_1_t998 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m34672(__this, ___index, ___value, method) (( void (*) (List_1_t998 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m34673(__this, ___item, method) (( void (*) (List_1_t998 *, MatEntry_t997 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m34674(__this, ___newCount, method) (( void (*) (List_1_t998 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m34675(__this, ___idx, ___count, method) (( void (*) (List_1_t998 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m34676(__this, ___collection, method) (( void (*) (List_1_t998 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m34677(__this, ___enumerable, method) (( void (*) (List_1_t998 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m34678(__this, ___collection, method) (( void (*) (List_1_t998 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m34679(__this, method) (( ReadOnlyCollection_1_t6478 * (*) (List_1_t998 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m34680(__this, method) (( void (*) (List_1_t998 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m34681(__this, ___item, method) (( bool (*) (List_1_t998 *, MatEntry_t997 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m34682(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t998 *, MatEntryU5BU5D_t6476*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m34683(__this, ___match, method) (( MatEntry_t997 * (*) (List_1_t998 *, Predicate_1_t6479 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m34684(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6479 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m34685(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t998 *, int32_t, int32_t, Predicate_1_t6479 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
#define List_1_GetEnumerator_m34686(__this, method) (( Enumerator_t6480  (*) (List_1_t998 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m34687(__this, ___index, ___count, method) (( List_1_t998 * (*) (List_1_t998 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m34688(__this, ___item, method) (( int32_t (*) (List_1_t998 *, MatEntry_t997 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m34689(__this, ___start, ___delta, method) (( void (*) (List_1_t998 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m34690(__this, ___index, method) (( void (*) (List_1_t998 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m34691(__this, ___index, ___item, method) (( void (*) (List_1_t998 *, int32_t, MatEntry_t997 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m34692(__this, ___collection, method) (( void (*) (List_1_t998 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m34693(__this, ___index, ___collection, method) (( void (*) (List_1_t998 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m34694(__this, ___index, ___collection, method) (( void (*) (List_1_t998 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m34695(__this, ___index, ___enumerable, method) (( void (*) (List_1_t998 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m34696(__this, ___item, method) (( bool (*) (List_1_t998 *, MatEntry_t997 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m34697(__this, ___match, method) (( int32_t (*) (List_1_t998 *, Predicate_1_t6479 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m34698(__this, ___index, method) (( void (*) (List_1_t998 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m34699(__this, ___index, ___count, method) (( void (*) (List_1_t998 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m34700(__this, method) (( void (*) (List_1_t998 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m34701(__this, method) (( void (*) (List_1_t998 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m34702(__this, ___comparer, method) (( void (*) (List_1_t998 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m34703(__this, ___comparison, method) (( void (*) (List_1_t998 *, Comparison_1_t6481 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m34704(__this, method) (( MatEntryU5BU5D_t6476* (*) (List_1_t998 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m34705(__this, method) (( void (*) (List_1_t998 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m34706(__this, method) (( int32_t (*) (List_1_t998 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m34707(__this, ___value, method) (( void (*) (List_1_t998 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m34708(__this, method) (( int32_t (*) (List_1_t998 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m34709(__this, ___index, method) (( MatEntry_t997 * (*) (List_1_t998 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m34710(__this, ___index, ___value, method) (( void (*) (List_1_t998 *, int32_t, MatEntry_t997 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)

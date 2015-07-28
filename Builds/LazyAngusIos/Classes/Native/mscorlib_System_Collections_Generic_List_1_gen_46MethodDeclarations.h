#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t2658;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2657;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t9489;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t8318;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t9490;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t9491;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t8320;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t8321;
// System.Collections.Generic.IComparer`1<UnityEngine.GUILayoutEntry>
struct IComparer_1_t9492;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t8322;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9773(__this, method) (( void (*) (List_1_t2658 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59542(__this, ___collection, method) (( void (*) (List_1_t2658 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m59543(__this, ___capacity, method) (( void (*) (List_1_t2658 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m59544(__this, ___data, ___size, method) (( void (*) (List_1_t2658 *, GUILayoutEntryU5BU5D_t8318*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m59545(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59546(__this, method) (( Object_t* (*) (List_1_t2658 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59547(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2658 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59548(__this, method) (( Object_t * (*) (List_1_t2658 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59549(__this, ___item, method) (( int32_t (*) (List_1_t2658 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59550(__this, ___item, method) (( bool (*) (List_1_t2658 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59551(__this, ___item, method) (( int32_t (*) (List_1_t2658 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59552(__this, ___index, ___item, method) (( void (*) (List_1_t2658 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59553(__this, ___item, method) (( void (*) (List_1_t2658 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59554(__this, method) (( bool (*) (List_1_t2658 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59555(__this, method) (( bool (*) (List_1_t2658 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59556(__this, method) (( Object_t * (*) (List_1_t2658 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59557(__this, method) (( bool (*) (List_1_t2658 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59558(__this, method) (( bool (*) (List_1_t2658 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59559(__this, ___index, method) (( Object_t * (*) (List_1_t2658 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59560(__this, ___index, ___value, method) (( void (*) (List_1_t2658 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m59561(__this, ___item, method) (( void (*) (List_1_t2658 *, GUILayoutEntry_t2657 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59562(__this, ___newCount, method) (( void (*) (List_1_t2658 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59563(__this, ___idx, ___count, method) (( void (*) (List_1_t2658 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59564(__this, ___collection, method) (( void (*) (List_1_t2658 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59565(__this, ___enumerable, method) (( void (*) (List_1_t2658 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m59566(__this, ___collection, method) (( void (*) (List_1_t2658 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m59567(__this, method) (( ReadOnlyCollection_1_t8320 * (*) (List_1_t2658 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m59568(__this, method) (( void (*) (List_1_t2658 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m59569(__this, ___item, method) (( bool (*) (List_1_t2658 *, GUILayoutEntry_t2657 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59570(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2658 *, GUILayoutEntryU5BU5D_t8318*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m59571(__this, ___match, method) (( GUILayoutEntry_t2657 * (*) (List_1_t2658 *, Predicate_1_t8321 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59572(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8321 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59573(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2658 *, int32_t, int32_t, Predicate_1_t8321 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m9770(__this, method) (( Enumerator_t2868  (*) (List_1_t2658 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59574(__this, ___index, ___count, method) (( List_1_t2658 * (*) (List_1_t2658 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m59575(__this, ___item, method) (( int32_t (*) (List_1_t2658 *, GUILayoutEntry_t2657 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59576(__this, ___start, ___delta, method) (( void (*) (List_1_t2658 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59577(__this, ___index, method) (( void (*) (List_1_t2658 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m59578(__this, ___index, ___item, method) (( void (*) (List_1_t2658 *, int32_t, GUILayoutEntry_t2657 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59579(__this, ___collection, method) (( void (*) (List_1_t2658 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59580(__this, ___index, ___collection, method) (( void (*) (List_1_t2658 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59581(__this, ___index, ___collection, method) (( void (*) (List_1_t2658 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59582(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2658 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m59583(__this, ___item, method) (( bool (*) (List_1_t2658 *, GUILayoutEntry_t2657 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59584(__this, ___match, method) (( int32_t (*) (List_1_t2658 *, Predicate_1_t8321 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59585(__this, ___index, method) (( void (*) (List_1_t2658 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59586(__this, ___index, ___count, method) (( void (*) (List_1_t2658 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m59587(__this, method) (( void (*) (List_1_t2658 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m59588(__this, method) (( void (*) (List_1_t2658 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59589(__this, ___comparer, method) (( void (*) (List_1_t2658 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59590(__this, ___comparison, method) (( void (*) (List_1_t2658 *, Comparison_1_t8322 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m59591(__this, method) (( GUILayoutEntryU5BU5D_t8318* (*) (List_1_t2658 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m59592(__this, method) (( void (*) (List_1_t2658 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m59593(__this, method) (( int32_t (*) (List_1_t2658 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59594(__this, ___value, method) (( void (*) (List_1_t2658 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m59595(__this, method) (( int32_t (*) (List_1_t2658 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m59596(__this, ___index, method) (( GUILayoutEntry_t2657 * (*) (List_1_t2658 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m59597(__this, ___index, ___value, method) (( void (*) (List_1_t2658 *, int32_t, GUILayoutEntry_t2657 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

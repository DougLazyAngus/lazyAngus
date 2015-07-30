#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t780;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t781;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerable_1_t8848;
// UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t5679;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerator_1_t8849;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ICollection_1_t8850;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ReadOnlyCollection_1_t5681;
// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
struct Predicate_1_t5682;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseInputModule>
struct IComparer_1_t8851;
// System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
struct Comparison_1_t5684;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5489(__this, method) (( void (*) (List_1_t780 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26791(__this, ___collection, method) (( void (*) (List_1_t780 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Int32)
#define List_1__ctor_m26792(__this, ___capacity, method) (( void (*) (List_1_t780 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(T[],System.Int32)
#define List_1__ctor_m26793(__this, ___data, ___size, method) (( void (*) (List_1_t780 *, BaseInputModuleU5BU5D_t5679*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.cctor()
#define List_1__cctor_m26794(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26795(__this, method) (( Object_t* (*) (List_1_t780 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26796(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t780 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26797(__this, method) (( Object_t * (*) (List_1_t780 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26798(__this, ___item, method) (( int32_t (*) (List_1_t780 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26799(__this, ___item, method) (( bool (*) (List_1_t780 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26800(__this, ___item, method) (( int32_t (*) (List_1_t780 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26801(__this, ___index, ___item, method) (( void (*) (List_1_t780 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26802(__this, ___item, method) (( void (*) (List_1_t780 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26803(__this, method) (( bool (*) (List_1_t780 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26804(__this, method) (( bool (*) (List_1_t780 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26805(__this, method) (( Object_t * (*) (List_1_t780 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26806(__this, method) (( bool (*) (List_1_t780 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26807(__this, method) (( bool (*) (List_1_t780 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26808(__this, ___index, method) (( Object_t * (*) (List_1_t780 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26809(__this, ___index, ___value, method) (( void (*) (List_1_t780 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Add(T)
#define List_1_Add_m26810(__this, ___item, method) (( void (*) (List_1_t780 *, BaseInputModule_t781 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26811(__this, ___newCount, method) (( void (*) (List_1_t780 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26812(__this, ___idx, ___count, method) (( void (*) (List_1_t780 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26813(__this, ___collection, method) (( void (*) (List_1_t780 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26814(__this, ___enumerable, method) (( void (*) (List_1_t780 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26815(__this, ___collection, method) (( void (*) (List_1_t780 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AsReadOnly()
#define List_1_AsReadOnly_m26816(__this, method) (( ReadOnlyCollection_1_t5681 * (*) (List_1_t780 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Clear()
#define List_1_Clear_m26817(__this, method) (( void (*) (List_1_t780 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
#define List_1_Contains_m26818(__this, ___item, method) (( bool (*) (List_1_t780 *, BaseInputModule_t781 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26819(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t780 *, BaseInputModuleU5BU5D_t5679*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Find(System.Predicate`1<T>)
#define List_1_Find_m26820(__this, ___match, method) (( BaseInputModule_t781 * (*) (List_1_t780 *, Predicate_1_t5682 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26821(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5682 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26822(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t780 *, int32_t, int32_t, Predicate_1_t5682 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
#define List_1_GetEnumerator_m26823(__this, method) (( Enumerator_t5683  (*) (List_1_t780 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26824(__this, ___index, ___count, method) (( List_1_t780 * (*) (List_1_t780 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
#define List_1_IndexOf_m26825(__this, ___item, method) (( int32_t (*) (List_1_t780 *, BaseInputModule_t781 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26826(__this, ___start, ___delta, method) (( void (*) (List_1_t780 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26827(__this, ___index, method) (( void (*) (List_1_t780 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Insert(System.Int32,T)
#define List_1_Insert_m26828(__this, ___index, ___item, method) (( void (*) (List_1_t780 *, int32_t, BaseInputModule_t781 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26829(__this, ___collection, method) (( void (*) (List_1_t780 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26830(__this, ___index, ___collection, method) (( void (*) (List_1_t780 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26831(__this, ___index, ___collection, method) (( void (*) (List_1_t780 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26832(__this, ___index, ___enumerable, method) (( void (*) (List_1_t780 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Remove(T)
#define List_1_Remove_m26833(__this, ___item, method) (( bool (*) (List_1_t780 *, BaseInputModule_t781 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26834(__this, ___match, method) (( int32_t (*) (List_1_t780 *, Predicate_1_t5682 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26835(__this, ___index, method) (( void (*) (List_1_t780 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26836(__this, ___index, ___count, method) (( void (*) (List_1_t780 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Reverse()
#define List_1_Reverse_m26837(__this, method) (( void (*) (List_1_t780 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort()
#define List_1_Sort_m26838(__this, method) (( void (*) (List_1_t780 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26839(__this, ___comparer, method) (( void (*) (List_1_t780 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26840(__this, ___comparison, method) (( void (*) (List_1_t780 *, Comparison_1_t5684 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::ToArray()
#define List_1_ToArray_m26841(__this, method) (( BaseInputModuleU5BU5D_t5679* (*) (List_1_t780 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::TrimExcess()
#define List_1_TrimExcess_m26842(__this, method) (( void (*) (List_1_t780 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Capacity()
#define List_1_get_Capacity_m26843(__this, method) (( int32_t (*) (List_1_t780 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26844(__this, ___value, method) (( void (*) (List_1_t780 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
#define List_1_get_Count_m26845(__this, method) (( int32_t (*) (List_1_t780 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
#define List_1_get_Item_m26846(__this, ___index, method) (( BaseInputModule_t781 * (*) (List_1_t780 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Item(System.Int32,T)
#define List_1_set_Item_m26847(__this, ___index, ___value, method) (( void (*) (List_1_t780 *, int32_t, BaseInputModule_t781 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)

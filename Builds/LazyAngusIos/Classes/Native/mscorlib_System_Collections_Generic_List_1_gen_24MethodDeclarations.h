#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t844;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t845;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerable_1_t8952;
// UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t5767;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerator_1_t8953;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ICollection_1_t8954;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ReadOnlyCollection_1_t5769;
// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
struct Predicate_1_t5770;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseInputModule>
struct IComparer_1_t8955;
// System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
struct Comparison_1_t5772;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5792(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27647(__this, ___collection, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Int32)
#define List_1__ctor_m27648(__this, ___capacity, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(T[],System.Int32)
#define List_1__ctor_m27649(__this, ___data, ___size, method) (( void (*) (List_1_t844 *, BaseInputModuleU5BU5D_t5767*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.cctor()
#define List_1__cctor_m27650(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27651(__this, method) (( Object_t* (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27652(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t844 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27653(__this, method) (( Object_t * (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27654(__this, ___item, method) (( int32_t (*) (List_1_t844 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27655(__this, ___item, method) (( bool (*) (List_1_t844 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27656(__this, ___item, method) (( int32_t (*) (List_1_t844 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27657(__this, ___index, ___item, method) (( void (*) (List_1_t844 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27658(__this, ___item, method) (( void (*) (List_1_t844 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27659(__this, method) (( bool (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27660(__this, method) (( bool (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27661(__this, method) (( Object_t * (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27662(__this, method) (( bool (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27663(__this, method) (( bool (*) (List_1_t844 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27664(__this, ___index, method) (( Object_t * (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27665(__this, ___index, ___value, method) (( void (*) (List_1_t844 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Add(T)
#define List_1_Add_m27666(__this, ___item, method) (( void (*) (List_1_t844 *, BaseInputModule_t845 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27667(__this, ___newCount, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27668(__this, ___idx, ___count, method) (( void (*) (List_1_t844 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27669(__this, ___collection, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27670(__this, ___enumerable, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27671(__this, ___collection, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AsReadOnly()
#define List_1_AsReadOnly_m27672(__this, method) (( ReadOnlyCollection_1_t5769 * (*) (List_1_t844 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Clear()
#define List_1_Clear_m27673(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
#define List_1_Contains_m27674(__this, ___item, method) (( bool (*) (List_1_t844 *, BaseInputModule_t845 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27675(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t844 *, BaseInputModuleU5BU5D_t5767*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Find(System.Predicate`1<T>)
#define List_1_Find_m27676(__this, ___match, method) (( BaseInputModule_t845 * (*) (List_1_t844 *, Predicate_1_t5770 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27677(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5770 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27678(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t844 *, int32_t, int32_t, Predicate_1_t5770 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
#define List_1_GetEnumerator_m27679(__this, method) (( Enumerator_t5771  (*) (List_1_t844 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27680(__this, ___index, ___count, method) (( List_1_t844 * (*) (List_1_t844 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
#define List_1_IndexOf_m27681(__this, ___item, method) (( int32_t (*) (List_1_t844 *, BaseInputModule_t845 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27682(__this, ___start, ___delta, method) (( void (*) (List_1_t844 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27683(__this, ___index, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Insert(System.Int32,T)
#define List_1_Insert_m27684(__this, ___index, ___item, method) (( void (*) (List_1_t844 *, int32_t, BaseInputModule_t845 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27685(__this, ___collection, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27686(__this, ___index, ___collection, method) (( void (*) (List_1_t844 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27687(__this, ___index, ___collection, method) (( void (*) (List_1_t844 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27688(__this, ___index, ___enumerable, method) (( void (*) (List_1_t844 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Remove(T)
#define List_1_Remove_m27689(__this, ___item, method) (( bool (*) (List_1_t844 *, BaseInputModule_t845 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27690(__this, ___match, method) (( int32_t (*) (List_1_t844 *, Predicate_1_t5770 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27691(__this, ___index, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27692(__this, ___index, ___count, method) (( void (*) (List_1_t844 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Reverse()
#define List_1_Reverse_m27693(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort()
#define List_1_Sort_m27694(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27695(__this, ___comparer, method) (( void (*) (List_1_t844 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27696(__this, ___comparison, method) (( void (*) (List_1_t844 *, Comparison_1_t5772 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::ToArray()
#define List_1_ToArray_m27697(__this, method) (( BaseInputModuleU5BU5D_t5767* (*) (List_1_t844 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::TrimExcess()
#define List_1_TrimExcess_m27698(__this, method) (( void (*) (List_1_t844 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Capacity()
#define List_1_get_Capacity_m27699(__this, method) (( int32_t (*) (List_1_t844 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27700(__this, ___value, method) (( void (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
#define List_1_get_Count_m27701(__this, method) (( int32_t (*) (List_1_t844 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
#define List_1_get_Item_m27702(__this, ___index, method) (( BaseInputModule_t845 * (*) (List_1_t844 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Item(System.Int32,T)
#define List_1_set_Item_m27703(__this, ___index, ___value, method) (( void (*) (List_1_t844 *, int32_t, BaseInputModule_t845 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

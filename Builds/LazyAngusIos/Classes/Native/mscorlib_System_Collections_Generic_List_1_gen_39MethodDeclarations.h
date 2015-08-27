#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t979;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t978;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t9051;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t5908;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t9052;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t9053;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t5910;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t5911;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IComparer_1_t9054;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t5913;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6152(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30075(__this, ___collection, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m30076(__this, ___capacity, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m30077(__this, ___data, ___size, method) (( void (*) (List_1_t979 *, MatEntryU5BU5D_t5908*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m30078(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30079(__this, method) (( Object_t* (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30080(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t979 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30081(__this, method) (( Object_t * (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30082(__this, ___item, method) (( int32_t (*) (List_1_t979 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30083(__this, ___item, method) (( bool (*) (List_1_t979 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30084(__this, ___item, method) (( int32_t (*) (List_1_t979 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30085(__this, ___index, ___item, method) (( void (*) (List_1_t979 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30086(__this, ___item, method) (( void (*) (List_1_t979 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30087(__this, method) (( bool (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30088(__this, method) (( bool (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30089(__this, method) (( Object_t * (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30090(__this, method) (( bool (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30091(__this, method) (( bool (*) (List_1_t979 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30092(__this, ___index, method) (( Object_t * (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30093(__this, ___index, ___value, method) (( void (*) (List_1_t979 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m30094(__this, ___item, method) (( void (*) (List_1_t979 *, MatEntry_t978 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30095(__this, ___newCount, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30096(__this, ___idx, ___count, method) (( void (*) (List_1_t979 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30097(__this, ___collection, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30098(__this, ___enumerable, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30099(__this, ___collection, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m30100(__this, method) (( ReadOnlyCollection_1_t5910 * (*) (List_1_t979 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m30101(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m30102(__this, ___item, method) (( bool (*) (List_1_t979 *, MatEntry_t978 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30103(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t979 *, MatEntryU5BU5D_t5908*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m30104(__this, ___match, method) (( MatEntry_t978 * (*) (List_1_t979 *, Predicate_1_t5911 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30105(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5911 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30106(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t979 *, int32_t, int32_t, Predicate_1_t5911 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
#define List_1_GetEnumerator_m30107(__this, method) (( Enumerator_t5912  (*) (List_1_t979 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30108(__this, ___index, ___count, method) (( List_1_t979 * (*) (List_1_t979 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m30109(__this, ___item, method) (( int32_t (*) (List_1_t979 *, MatEntry_t978 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30110(__this, ___start, ___delta, method) (( void (*) (List_1_t979 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30111(__this, ___index, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m30112(__this, ___index, ___item, method) (( void (*) (List_1_t979 *, int32_t, MatEntry_t978 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30113(__this, ___collection, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30114(__this, ___index, ___collection, method) (( void (*) (List_1_t979 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30115(__this, ___index, ___collection, method) (( void (*) (List_1_t979 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30116(__this, ___index, ___enumerable, method) (( void (*) (List_1_t979 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m30117(__this, ___item, method) (( bool (*) (List_1_t979 *, MatEntry_t978 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30118(__this, ___match, method) (( int32_t (*) (List_1_t979 *, Predicate_1_t5911 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30119(__this, ___index, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30120(__this, ___index, ___count, method) (( void (*) (List_1_t979 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m30121(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m30122(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30123(__this, ___comparer, method) (( void (*) (List_1_t979 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30124(__this, ___comparison, method) (( void (*) (List_1_t979 *, Comparison_1_t5913 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m30125(__this, method) (( MatEntryU5BU5D_t5908* (*) (List_1_t979 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m30126(__this, method) (( void (*) (List_1_t979 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m30127(__this, method) (( int32_t (*) (List_1_t979 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30128(__this, ___value, method) (( void (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m30129(__this, method) (( int32_t (*) (List_1_t979 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m30130(__this, ___index, method) (( MatEntry_t978 * (*) (List_1_t979 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m30131(__this, ___index, ___value, method) (( void (*) (List_1_t979 *, int32_t, MatEntry_t978 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

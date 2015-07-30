#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t917;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t916;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t8947;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t5825;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t8948;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t8949;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t5827;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t5828;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IComparer_1_t8950;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t5830;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_43.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5854(__this, method) (( void (*) (List_1_t917 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29247(__this, ___collection, method) (( void (*) (List_1_t917 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m29248(__this, ___capacity, method) (( void (*) (List_1_t917 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m29249(__this, ___data, ___size, method) (( void (*) (List_1_t917 *, MatEntryU5BU5D_t5825*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m29250(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29251(__this, method) (( Object_t* (*) (List_1_t917 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29252(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t917 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29253(__this, method) (( Object_t * (*) (List_1_t917 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29254(__this, ___item, method) (( int32_t (*) (List_1_t917 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29255(__this, ___item, method) (( bool (*) (List_1_t917 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29256(__this, ___item, method) (( int32_t (*) (List_1_t917 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29257(__this, ___index, ___item, method) (( void (*) (List_1_t917 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29258(__this, ___item, method) (( void (*) (List_1_t917 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29259(__this, method) (( bool (*) (List_1_t917 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29260(__this, method) (( bool (*) (List_1_t917 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29261(__this, method) (( Object_t * (*) (List_1_t917 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29262(__this, method) (( bool (*) (List_1_t917 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29263(__this, method) (( bool (*) (List_1_t917 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29264(__this, ___index, method) (( Object_t * (*) (List_1_t917 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29265(__this, ___index, ___value, method) (( void (*) (List_1_t917 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m29266(__this, ___item, method) (( void (*) (List_1_t917 *, MatEntry_t916 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29267(__this, ___newCount, method) (( void (*) (List_1_t917 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29268(__this, ___idx, ___count, method) (( void (*) (List_1_t917 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29269(__this, ___collection, method) (( void (*) (List_1_t917 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29270(__this, ___enumerable, method) (( void (*) (List_1_t917 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29271(__this, ___collection, method) (( void (*) (List_1_t917 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m29272(__this, method) (( ReadOnlyCollection_1_t5827 * (*) (List_1_t917 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m29273(__this, method) (( void (*) (List_1_t917 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m29274(__this, ___item, method) (( bool (*) (List_1_t917 *, MatEntry_t916 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29275(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t917 *, MatEntryU5BU5D_t5825*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m29276(__this, ___match, method) (( MatEntry_t916 * (*) (List_1_t917 *, Predicate_1_t5828 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29277(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5828 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29278(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t917 *, int32_t, int32_t, Predicate_1_t5828 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
#define List_1_GetEnumerator_m29279(__this, method) (( Enumerator_t5829  (*) (List_1_t917 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29280(__this, ___index, ___count, method) (( List_1_t917 * (*) (List_1_t917 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m29281(__this, ___item, method) (( int32_t (*) (List_1_t917 *, MatEntry_t916 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29282(__this, ___start, ___delta, method) (( void (*) (List_1_t917 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29283(__this, ___index, method) (( void (*) (List_1_t917 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m29284(__this, ___index, ___item, method) (( void (*) (List_1_t917 *, int32_t, MatEntry_t916 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29285(__this, ___collection, method) (( void (*) (List_1_t917 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29286(__this, ___index, ___collection, method) (( void (*) (List_1_t917 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29287(__this, ___index, ___collection, method) (( void (*) (List_1_t917 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29288(__this, ___index, ___enumerable, method) (( void (*) (List_1_t917 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m29289(__this, ___item, method) (( bool (*) (List_1_t917 *, MatEntry_t916 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29290(__this, ___match, method) (( int32_t (*) (List_1_t917 *, Predicate_1_t5828 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29291(__this, ___index, method) (( void (*) (List_1_t917 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29292(__this, ___index, ___count, method) (( void (*) (List_1_t917 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m29293(__this, method) (( void (*) (List_1_t917 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m29294(__this, method) (( void (*) (List_1_t917 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29295(__this, ___comparer, method) (( void (*) (List_1_t917 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29296(__this, ___comparison, method) (( void (*) (List_1_t917 *, Comparison_1_t5830 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m29297(__this, method) (( MatEntryU5BU5D_t5825* (*) (List_1_t917 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m29298(__this, method) (( void (*) (List_1_t917 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m29299(__this, method) (( int32_t (*) (List_1_t917 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29300(__this, ___value, method) (( void (*) (List_1_t917 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m29301(__this, method) (( int32_t (*) (List_1_t917 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m29302(__this, ___index, method) (( MatEntry_t916 * (*) (List_1_t917 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m29303(__this, ___index, ___value, method) (( void (*) (List_1_t917 *, int32_t, MatEntry_t916 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)

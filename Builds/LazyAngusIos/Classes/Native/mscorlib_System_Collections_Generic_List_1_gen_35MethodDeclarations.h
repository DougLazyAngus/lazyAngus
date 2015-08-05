#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t921;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t920;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t8951;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t5829;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t8952;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t8953;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t5831;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t5832;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IComparer_1_t8954;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t5834;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_43.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5882(__this, method) (( void (*) (List_1_t921 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29278(__this, ___collection, method) (( void (*) (List_1_t921 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m29279(__this, ___capacity, method) (( void (*) (List_1_t921 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m29280(__this, ___data, ___size, method) (( void (*) (List_1_t921 *, MatEntryU5BU5D_t5829*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m29281(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29282(__this, method) (( Object_t* (*) (List_1_t921 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29283(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t921 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29284(__this, method) (( Object_t * (*) (List_1_t921 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29285(__this, ___item, method) (( int32_t (*) (List_1_t921 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29286(__this, ___item, method) (( bool (*) (List_1_t921 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29287(__this, ___item, method) (( int32_t (*) (List_1_t921 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29288(__this, ___index, ___item, method) (( void (*) (List_1_t921 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29289(__this, ___item, method) (( void (*) (List_1_t921 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29290(__this, method) (( bool (*) (List_1_t921 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29291(__this, method) (( bool (*) (List_1_t921 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29292(__this, method) (( Object_t * (*) (List_1_t921 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29293(__this, method) (( bool (*) (List_1_t921 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29294(__this, method) (( bool (*) (List_1_t921 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29295(__this, ___index, method) (( Object_t * (*) (List_1_t921 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29296(__this, ___index, ___value, method) (( void (*) (List_1_t921 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m29297(__this, ___item, method) (( void (*) (List_1_t921 *, MatEntry_t920 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29298(__this, ___newCount, method) (( void (*) (List_1_t921 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29299(__this, ___idx, ___count, method) (( void (*) (List_1_t921 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29300(__this, ___collection, method) (( void (*) (List_1_t921 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29301(__this, ___enumerable, method) (( void (*) (List_1_t921 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29302(__this, ___collection, method) (( void (*) (List_1_t921 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m29303(__this, method) (( ReadOnlyCollection_1_t5831 * (*) (List_1_t921 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m29304(__this, method) (( void (*) (List_1_t921 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m29305(__this, ___item, method) (( bool (*) (List_1_t921 *, MatEntry_t920 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29306(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t921 *, MatEntryU5BU5D_t5829*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m29307(__this, ___match, method) (( MatEntry_t920 * (*) (List_1_t921 *, Predicate_1_t5832 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29308(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5832 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29309(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t921 *, int32_t, int32_t, Predicate_1_t5832 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
#define List_1_GetEnumerator_m29310(__this, method) (( Enumerator_t5833  (*) (List_1_t921 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29311(__this, ___index, ___count, method) (( List_1_t921 * (*) (List_1_t921 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m29312(__this, ___item, method) (( int32_t (*) (List_1_t921 *, MatEntry_t920 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29313(__this, ___start, ___delta, method) (( void (*) (List_1_t921 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29314(__this, ___index, method) (( void (*) (List_1_t921 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m29315(__this, ___index, ___item, method) (( void (*) (List_1_t921 *, int32_t, MatEntry_t920 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29316(__this, ___collection, method) (( void (*) (List_1_t921 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29317(__this, ___index, ___collection, method) (( void (*) (List_1_t921 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29318(__this, ___index, ___collection, method) (( void (*) (List_1_t921 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29319(__this, ___index, ___enumerable, method) (( void (*) (List_1_t921 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m29320(__this, ___item, method) (( bool (*) (List_1_t921 *, MatEntry_t920 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29321(__this, ___match, method) (( int32_t (*) (List_1_t921 *, Predicate_1_t5832 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29322(__this, ___index, method) (( void (*) (List_1_t921 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29323(__this, ___index, ___count, method) (( void (*) (List_1_t921 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m29324(__this, method) (( void (*) (List_1_t921 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m29325(__this, method) (( void (*) (List_1_t921 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29326(__this, ___comparer, method) (( void (*) (List_1_t921 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29327(__this, ___comparison, method) (( void (*) (List_1_t921 *, Comparison_1_t5834 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m29328(__this, method) (( MatEntryU5BU5D_t5829* (*) (List_1_t921 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m29329(__this, method) (( void (*) (List_1_t921 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m29330(__this, method) (( int32_t (*) (List_1_t921 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29331(__this, ___value, method) (( void (*) (List_1_t921 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m29332(__this, method) (( int32_t (*) (List_1_t921 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m29333(__this, ___index, method) (( MatEntry_t920 * (*) (List_1_t921 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m29334(__this, ___index, ___value, method) (( void (*) (List_1_t921 *, int32_t, MatEntry_t920 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

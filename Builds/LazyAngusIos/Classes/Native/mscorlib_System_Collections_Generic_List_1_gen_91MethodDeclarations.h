#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct List_1_t7368;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerable_1_t9275;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7367;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7139;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ICollection_1_t9276;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ReadOnlyCollection_1_t7370;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Predicate_1_t7371;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IComparer_1_t9277;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Comparison_1_t7373;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_74.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_90MethodDeclarations.h"
#define List_1__ctor_m48272(__this, method) (( void (*) (List_1_t7368 *, const MethodInfo*))List_1__ctor_m48119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m48273(__this, ___collection, method) (( void (*) (List_1_t7368 *, Object_t*, const MethodInfo*))List_1__ctor_m48120_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Int32)
#define List_1__ctor_m48274(__this, ___capacity, method) (( void (*) (List_1_t7368 *, int32_t, const MethodInfo*))List_1__ctor_m48121_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m48275(__this, ___data, ___size, method) (( void (*) (List_1_t7368 *, KeyValuePair_2U5BU5D_t7367*, int32_t, const MethodInfo*))List_1__ctor_m48122_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.cctor()
#define List_1__cctor_m48276(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48123_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48277(__this, method) (( Object_t* (*) (List_1_t7368 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48124_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m48278(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7368 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48125_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48279(__this, method) (( Object_t * (*) (List_1_t7368 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48126_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m48280(__this, ___item, method) (( int32_t (*) (List_1_t7368 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48127_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m48281(__this, ___item, method) (( bool (*) (List_1_t7368 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48128_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m48282(__this, ___item, method) (( int32_t (*) (List_1_t7368 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48129_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m48283(__this, ___index, ___item, method) (( void (*) (List_1_t7368 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48130_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m48284(__this, ___item, method) (( void (*) (List_1_t7368 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48131_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48285(__this, method) (( bool (*) (List_1_t7368 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48132_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48286(__this, method) (( bool (*) (List_1_t7368 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48133_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m48287(__this, method) (( Object_t * (*) (List_1_t7368 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48134_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m48288(__this, method) (( bool (*) (List_1_t7368 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48135_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m48289(__this, method) (( bool (*) (List_1_t7368 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48136_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m48290(__this, ___index, method) (( Object_t * (*) (List_1_t7368 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48137_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m48291(__this, ___index, ___value, method) (( void (*) (List_1_t7368 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48138_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Add(T)
#define List_1_Add_m48292(__this, ___item, method) (( void (*) (List_1_t7368 *, KeyValuePair_2_t7134 , const MethodInfo*))List_1_Add_m48139_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m48293(__this, ___newCount, method) (( void (*) (List_1_t7368 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48140_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m48294(__this, ___idx, ___count, method) (( void (*) (List_1_t7368 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48141_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m48295(__this, ___collection, method) (( void (*) (List_1_t7368 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48142_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m48296(__this, ___enumerable, method) (( void (*) (List_1_t7368 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48143_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m48297(__this, ___collection, method) (( void (*) (List_1_t7368 *, Object_t*, const MethodInfo*))List_1_AddRange_m48144_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AsReadOnly()
#define List_1_AsReadOnly_m48298(__this, method) (( ReadOnlyCollection_1_t7370 * (*) (List_1_t7368 *, const MethodInfo*))List_1_AsReadOnly_m48145_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Clear()
#define List_1_Clear_m48299(__this, method) (( void (*) (List_1_t7368 *, const MethodInfo*))List_1_Clear_m48146_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Contains(T)
#define List_1_Contains_m48300(__this, ___item, method) (( bool (*) (List_1_t7368 *, KeyValuePair_2_t7134 , const MethodInfo*))List_1_Contains_m48147_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m48301(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7368 *, KeyValuePair_2U5BU5D_t7367*, int32_t, const MethodInfo*))List_1_CopyTo_m48148_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m48302(__this, ___match, method) (( KeyValuePair_2_t7134  (*) (List_1_t7368 *, Predicate_1_t7371 *, const MethodInfo*))List_1_Find_m48149_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m48303(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7371 *, const MethodInfo*))List_1_CheckMatch_m48150_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m48304(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7368 *, int32_t, int32_t, Predicate_1_t7371 *, const MethodInfo*))List_1_GetIndex_m48151_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetEnumerator()
#define List_1_GetEnumerator_m48305(__this, method) (( Enumerator_t7372  (*) (List_1_t7368 *, const MethodInfo*))List_1_GetEnumerator_m48152_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m48306(__this, ___index, ___count, method) (( List_1_t7368 * (*) (List_1_t7368 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48153_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::IndexOf(T)
#define List_1_IndexOf_m48307(__this, ___item, method) (( int32_t (*) (List_1_t7368 *, KeyValuePair_2_t7134 , const MethodInfo*))List_1_IndexOf_m48154_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m48308(__this, ___start, ___delta, method) (( void (*) (List_1_t7368 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48155_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m48309(__this, ___index, method) (( void (*) (List_1_t7368 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48156_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Insert(System.Int32,T)
#define List_1_Insert_m48310(__this, ___index, ___item, method) (( void (*) (List_1_t7368 *, int32_t, KeyValuePair_2_t7134 , const MethodInfo*))List_1_Insert_m48157_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m48311(__this, ___collection, method) (( void (*) (List_1_t7368 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48158_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m48312(__this, ___index, ___collection, method) (( void (*) (List_1_t7368 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48159_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m48313(__this, ___index, ___collection, method) (( void (*) (List_1_t7368 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48160_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m48314(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7368 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48161_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Remove(T)
#define List_1_Remove_m48315(__this, ___item, method) (( bool (*) (List_1_t7368 *, KeyValuePair_2_t7134 , const MethodInfo*))List_1_Remove_m48162_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m48316(__this, ___match, method) (( int32_t (*) (List_1_t7368 *, Predicate_1_t7371 *, const MethodInfo*))List_1_RemoveAll_m48163_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m48317(__this, ___index, method) (( void (*) (List_1_t7368 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48164_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m48318(__this, ___index, ___count, method) (( void (*) (List_1_t7368 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48165_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Reverse()
#define List_1_Reverse_m48319(__this, method) (( void (*) (List_1_t7368 *, const MethodInfo*))List_1_Reverse_m48166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort()
#define List_1_Sort_m48320(__this, method) (( void (*) (List_1_t7368 *, const MethodInfo*))List_1_Sort_m48167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m48321(__this, ___comparer, method) (( void (*) (List_1_t7368 *, Object_t*, const MethodInfo*))List_1_Sort_m48168_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m48322(__this, ___comparison, method) (( void (*) (List_1_t7368 *, Comparison_1_t7373 *, const MethodInfo*))List_1_Sort_m48169_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::ToArray()
#define List_1_ToArray_m48323(__this, method) (( KeyValuePair_2U5BU5D_t7367* (*) (List_1_t7368 *, const MethodInfo*))List_1_ToArray_m48170_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::TrimExcess()
#define List_1_TrimExcess_m48324(__this, method) (( void (*) (List_1_t7368 *, const MethodInfo*))List_1_TrimExcess_m48171_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Capacity()
#define List_1_get_Capacity_m48325(__this, method) (( int32_t (*) (List_1_t7368 *, const MethodInfo*))List_1_get_Capacity_m48172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m48326(__this, ___value, method) (( void (*) (List_1_t7368 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48173_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Count()
#define List_1_get_Count_m48327(__this, method) (( int32_t (*) (List_1_t7368 *, const MethodInfo*))List_1_get_Count_m48174_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Item(System.Int32)
#define List_1_get_Item_m48328(__this, ___index, method) (( KeyValuePair_2_t7134  (*) (List_1_t7368 *, int32_t, const MethodInfo*))List_1_get_Item_m48175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m48329(__this, ___index, ___value, method) (( void (*) (List_1_t7368 *, int32_t, KeyValuePair_2_t7134 , const MethodInfo*))List_1_set_Item_m48176_gshared)(__this, ___index, ___value, method)

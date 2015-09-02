#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct List_1_t7800;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerable_1_t9438;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7799;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7297;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ICollection_1_t9439;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ReadOnlyCollection_1_t7802;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t7803;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IComparer_1_t9440;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t7805;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_90.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_106MethodDeclarations.h"
#define List_1__ctor_m53287(__this, method) (( void (*) (List_1_t7800 *, const MethodInfo*))List_1__ctor_m53134_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m53288(__this, ___collection, method) (( void (*) (List_1_t7800 *, Object_t*, const MethodInfo*))List_1__ctor_m53135_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Int32)
#define List_1__ctor_m53289(__this, ___capacity, method) (( void (*) (List_1_t7800 *, int32_t, const MethodInfo*))List_1__ctor_m53136_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m53290(__this, ___data, ___size, method) (( void (*) (List_1_t7800 *, KeyValuePair_2U5BU5D_t7799*, int32_t, const MethodInfo*))List_1__ctor_m53137_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.cctor()
#define List_1__cctor_m53291(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53138_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53292(__this, method) (( Object_t* (*) (List_1_t7800 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m53293(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7800 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53140_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53294(__this, method) (( Object_t * (*) (List_1_t7800 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53141_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m53295(__this, ___item, method) (( int32_t (*) (List_1_t7800 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53142_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m53296(__this, ___item, method) (( bool (*) (List_1_t7800 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53143_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m53297(__this, ___item, method) (( int32_t (*) (List_1_t7800 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53144_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m53298(__this, ___index, ___item, method) (( void (*) (List_1_t7800 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53145_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m53299(__this, ___item, method) (( void (*) (List_1_t7800 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53146_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53300(__this, method) (( bool (*) (List_1_t7800 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53147_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53301(__this, method) (( bool (*) (List_1_t7800 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53148_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m53302(__this, method) (( Object_t * (*) (List_1_t7800 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53149_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m53303(__this, method) (( bool (*) (List_1_t7800 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53150_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m53304(__this, method) (( bool (*) (List_1_t7800 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53151_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m53305(__this, ___index, method) (( Object_t * (*) (List_1_t7800 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53152_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m53306(__this, ___index, ___value, method) (( void (*) (List_1_t7800 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53153_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Add(T)
#define List_1_Add_m53307(__this, ___item, method) (( void (*) (List_1_t7800 *, KeyValuePair_2_t7292 , const MethodInfo*))List_1_Add_m53154_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m53308(__this, ___newCount, method) (( void (*) (List_1_t7800 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53155_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m53309(__this, ___idx, ___count, method) (( void (*) (List_1_t7800 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53156_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m53310(__this, ___collection, method) (( void (*) (List_1_t7800 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53157_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m53311(__this, ___enumerable, method) (( void (*) (List_1_t7800 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53158_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m53312(__this, ___collection, method) (( void (*) (List_1_t7800 *, Object_t*, const MethodInfo*))List_1_AddRange_m53159_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AsReadOnly()
#define List_1_AsReadOnly_m53313(__this, method) (( ReadOnlyCollection_1_t7802 * (*) (List_1_t7800 *, const MethodInfo*))List_1_AsReadOnly_m53160_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Clear()
#define List_1_Clear_m53314(__this, method) (( void (*) (List_1_t7800 *, const MethodInfo*))List_1_Clear_m53161_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Contains(T)
#define List_1_Contains_m53315(__this, ___item, method) (( bool (*) (List_1_t7800 *, KeyValuePair_2_t7292 , const MethodInfo*))List_1_Contains_m53162_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m53316(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7800 *, KeyValuePair_2U5BU5D_t7799*, int32_t, const MethodInfo*))List_1_CopyTo_m53163_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m53317(__this, ___match, method) (( KeyValuePair_2_t7292  (*) (List_1_t7800 *, Predicate_1_t7803 *, const MethodInfo*))List_1_Find_m53164_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m53318(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7803 *, const MethodInfo*))List_1_CheckMatch_m53165_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m53319(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7800 *, int32_t, int32_t, Predicate_1_t7803 *, const MethodInfo*))List_1_GetIndex_m53166_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetEnumerator()
#define List_1_GetEnumerator_m53320(__this, method) (( Enumerator_t7804  (*) (List_1_t7800 *, const MethodInfo*))List_1_GetEnumerator_m53167_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m53321(__this, ___index, ___count, method) (( List_1_t7800 * (*) (List_1_t7800 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53168_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::IndexOf(T)
#define List_1_IndexOf_m53322(__this, ___item, method) (( int32_t (*) (List_1_t7800 *, KeyValuePair_2_t7292 , const MethodInfo*))List_1_IndexOf_m53169_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m53323(__this, ___start, ___delta, method) (( void (*) (List_1_t7800 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53170_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m53324(__this, ___index, method) (( void (*) (List_1_t7800 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53171_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Insert(System.Int32,T)
#define List_1_Insert_m53325(__this, ___index, ___item, method) (( void (*) (List_1_t7800 *, int32_t, KeyValuePair_2_t7292 , const MethodInfo*))List_1_Insert_m53172_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m53326(__this, ___collection, method) (( void (*) (List_1_t7800 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53173_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m53327(__this, ___index, ___collection, method) (( void (*) (List_1_t7800 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53174_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m53328(__this, ___index, ___collection, method) (( void (*) (List_1_t7800 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53175_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m53329(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7800 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53176_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Remove(T)
#define List_1_Remove_m53330(__this, ___item, method) (( bool (*) (List_1_t7800 *, KeyValuePair_2_t7292 , const MethodInfo*))List_1_Remove_m53177_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m53331(__this, ___match, method) (( int32_t (*) (List_1_t7800 *, Predicate_1_t7803 *, const MethodInfo*))List_1_RemoveAll_m53178_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m53332(__this, ___index, method) (( void (*) (List_1_t7800 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53179_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m53333(__this, ___index, ___count, method) (( void (*) (List_1_t7800 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53180_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Reverse()
#define List_1_Reverse_m53334(__this, method) (( void (*) (List_1_t7800 *, const MethodInfo*))List_1_Reverse_m53181_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort()
#define List_1_Sort_m53335(__this, method) (( void (*) (List_1_t7800 *, const MethodInfo*))List_1_Sort_m53182_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m53336(__this, ___comparer, method) (( void (*) (List_1_t7800 *, Object_t*, const MethodInfo*))List_1_Sort_m53183_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m53337(__this, ___comparison, method) (( void (*) (List_1_t7800 *, Comparison_1_t7805 *, const MethodInfo*))List_1_Sort_m53184_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::ToArray()
#define List_1_ToArray_m53338(__this, method) (( KeyValuePair_2U5BU5D_t7799* (*) (List_1_t7800 *, const MethodInfo*))List_1_ToArray_m53185_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::TrimExcess()
#define List_1_TrimExcess_m53339(__this, method) (( void (*) (List_1_t7800 *, const MethodInfo*))List_1_TrimExcess_m53186_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Capacity()
#define List_1_get_Capacity_m53340(__this, method) (( int32_t (*) (List_1_t7800 *, const MethodInfo*))List_1_get_Capacity_m53187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m53341(__this, ___value, method) (( void (*) (List_1_t7800 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53188_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Count()
#define List_1_get_Count_m53342(__this, method) (( int32_t (*) (List_1_t7800 *, const MethodInfo*))List_1_get_Count_m53189_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Item(System.Int32)
#define List_1_get_Item_m53343(__this, ___index, method) (( KeyValuePair_2_t7292  (*) (List_1_t7800 *, int32_t, const MethodInfo*))List_1_get_Item_m53190_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m53344(__this, ___index, ___value, method) (( void (*) (List_1_t7800 *, int32_t, KeyValuePair_2_t7292 , const MethodInfo*))List_1_set_Item_m53191_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct List_1_t7634;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerable_1_t9380;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7633;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7239;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ICollection_1_t9381;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ReadOnlyCollection_1_t7636;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Predicate_1_t7637;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IComparer_1_t9382;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t7639;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_83.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_99MethodDeclarations.h"
#define List_1__ctor_m51277(__this, method) (( void (*) (List_1_t7634 *, const MethodInfo*))List_1__ctor_m51124_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m51278(__this, ___collection, method) (( void (*) (List_1_t7634 *, Object_t*, const MethodInfo*))List_1__ctor_m51125_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Int32)
#define List_1__ctor_m51279(__this, ___capacity, method) (( void (*) (List_1_t7634 *, int32_t, const MethodInfo*))List_1__ctor_m51126_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m51280(__this, ___data, ___size, method) (( void (*) (List_1_t7634 *, KeyValuePair_2U5BU5D_t7633*, int32_t, const MethodInfo*))List_1__ctor_m51127_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.cctor()
#define List_1__cctor_m51281(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51128_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51282(__this, method) (( Object_t* (*) (List_1_t7634 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51129_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m51283(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7634 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51130_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51284(__this, method) (( Object_t * (*) (List_1_t7634 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51131_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m51285(__this, ___item, method) (( int32_t (*) (List_1_t7634 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51132_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m51286(__this, ___item, method) (( bool (*) (List_1_t7634 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51133_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m51287(__this, ___item, method) (( int32_t (*) (List_1_t7634 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51134_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m51288(__this, ___index, ___item, method) (( void (*) (List_1_t7634 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51135_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m51289(__this, ___item, method) (( void (*) (List_1_t7634 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51136_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51290(__this, method) (( bool (*) (List_1_t7634 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51137_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51291(__this, method) (( bool (*) (List_1_t7634 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51138_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m51292(__this, method) (( Object_t * (*) (List_1_t7634 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51139_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m51293(__this, method) (( bool (*) (List_1_t7634 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51140_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m51294(__this, method) (( bool (*) (List_1_t7634 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51141_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m51295(__this, ___index, method) (( Object_t * (*) (List_1_t7634 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51142_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m51296(__this, ___index, ___value, method) (( void (*) (List_1_t7634 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51143_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Add(T)
#define List_1_Add_m51297(__this, ___item, method) (( void (*) (List_1_t7634 *, KeyValuePair_2_t7234 , const MethodInfo*))List_1_Add_m51144_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m51298(__this, ___newCount, method) (( void (*) (List_1_t7634 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51145_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m51299(__this, ___idx, ___count, method) (( void (*) (List_1_t7634 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51146_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m51300(__this, ___collection, method) (( void (*) (List_1_t7634 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51147_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m51301(__this, ___enumerable, method) (( void (*) (List_1_t7634 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51148_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m51302(__this, ___collection, method) (( void (*) (List_1_t7634 *, Object_t*, const MethodInfo*))List_1_AddRange_m51149_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AsReadOnly()
#define List_1_AsReadOnly_m51303(__this, method) (( ReadOnlyCollection_1_t7636 * (*) (List_1_t7634 *, const MethodInfo*))List_1_AsReadOnly_m51150_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Clear()
#define List_1_Clear_m51304(__this, method) (( void (*) (List_1_t7634 *, const MethodInfo*))List_1_Clear_m51151_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Contains(T)
#define List_1_Contains_m51305(__this, ___item, method) (( bool (*) (List_1_t7634 *, KeyValuePair_2_t7234 , const MethodInfo*))List_1_Contains_m51152_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m51306(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7634 *, KeyValuePair_2U5BU5D_t7633*, int32_t, const MethodInfo*))List_1_CopyTo_m51153_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m51307(__this, ___match, method) (( KeyValuePair_2_t7234  (*) (List_1_t7634 *, Predicate_1_t7637 *, const MethodInfo*))List_1_Find_m51154_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m51308(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7637 *, const MethodInfo*))List_1_CheckMatch_m51155_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m51309(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7634 *, int32_t, int32_t, Predicate_1_t7637 *, const MethodInfo*))List_1_GetIndex_m51156_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetEnumerator()
#define List_1_GetEnumerator_m51310(__this, method) (( Enumerator_t7638  (*) (List_1_t7634 *, const MethodInfo*))List_1_GetEnumerator_m51157_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m51311(__this, ___index, ___count, method) (( List_1_t7634 * (*) (List_1_t7634 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51158_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::IndexOf(T)
#define List_1_IndexOf_m51312(__this, ___item, method) (( int32_t (*) (List_1_t7634 *, KeyValuePair_2_t7234 , const MethodInfo*))List_1_IndexOf_m51159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m51313(__this, ___start, ___delta, method) (( void (*) (List_1_t7634 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51160_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m51314(__this, ___index, method) (( void (*) (List_1_t7634 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51161_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Insert(System.Int32,T)
#define List_1_Insert_m51315(__this, ___index, ___item, method) (( void (*) (List_1_t7634 *, int32_t, KeyValuePair_2_t7234 , const MethodInfo*))List_1_Insert_m51162_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m51316(__this, ___collection, method) (( void (*) (List_1_t7634 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51163_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m51317(__this, ___index, ___collection, method) (( void (*) (List_1_t7634 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51164_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m51318(__this, ___index, ___collection, method) (( void (*) (List_1_t7634 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51165_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m51319(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7634 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51166_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Remove(T)
#define List_1_Remove_m51320(__this, ___item, method) (( bool (*) (List_1_t7634 *, KeyValuePair_2_t7234 , const MethodInfo*))List_1_Remove_m51167_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m51321(__this, ___match, method) (( int32_t (*) (List_1_t7634 *, Predicate_1_t7637 *, const MethodInfo*))List_1_RemoveAll_m51168_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m51322(__this, ___index, method) (( void (*) (List_1_t7634 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51169_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m51323(__this, ___index, ___count, method) (( void (*) (List_1_t7634 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51170_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Reverse()
#define List_1_Reverse_m51324(__this, method) (( void (*) (List_1_t7634 *, const MethodInfo*))List_1_Reverse_m51171_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort()
#define List_1_Sort_m51325(__this, method) (( void (*) (List_1_t7634 *, const MethodInfo*))List_1_Sort_m51172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m51326(__this, ___comparer, method) (( void (*) (List_1_t7634 *, Object_t*, const MethodInfo*))List_1_Sort_m51173_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m51327(__this, ___comparison, method) (( void (*) (List_1_t7634 *, Comparison_1_t7639 *, const MethodInfo*))List_1_Sort_m51174_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::ToArray()
#define List_1_ToArray_m51328(__this, method) (( KeyValuePair_2U5BU5D_t7633* (*) (List_1_t7634 *, const MethodInfo*))List_1_ToArray_m51175_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::TrimExcess()
#define List_1_TrimExcess_m51329(__this, method) (( void (*) (List_1_t7634 *, const MethodInfo*))List_1_TrimExcess_m51176_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Capacity()
#define List_1_get_Capacity_m51330(__this, method) (( int32_t (*) (List_1_t7634 *, const MethodInfo*))List_1_get_Capacity_m51177_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m51331(__this, ___value, method) (( void (*) (List_1_t7634 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51178_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count()
#define List_1_get_Count_m51332(__this, method) (( int32_t (*) (List_1_t7634 *, const MethodInfo*))List_1_get_Count_m51179_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Item(System.Int32)
#define List_1_get_Item_m51333(__this, ___index, method) (( KeyValuePair_2_t7234  (*) (List_1_t7634 *, int32_t, const MethodInfo*))List_1_get_Item_m51180_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m51334(__this, ___index, ___value, method) (( void (*) (List_1_t7634 *, int32_t, KeyValuePair_2_t7234 , const MethodInfo*))List_1_set_Item_m51181_gshared)(__this, ___index, ___value, method)

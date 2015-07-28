#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct List_1_t7358;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerable_1_t9265;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7357;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7129;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ICollection_1_t9266;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ReadOnlyCollection_1_t7360;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Predicate_1_t7361;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IComparer_1_t9267;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Comparison_1_t7363;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_74.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_90MethodDeclarations.h"
#define List_1__ctor_m48202(__this, method) (( void (*) (List_1_t7358 *, const MethodInfo*))List_1__ctor_m48049_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m48203(__this, ___collection, method) (( void (*) (List_1_t7358 *, Object_t*, const MethodInfo*))List_1__ctor_m48050_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Int32)
#define List_1__ctor_m48204(__this, ___capacity, method) (( void (*) (List_1_t7358 *, int32_t, const MethodInfo*))List_1__ctor_m48051_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m48205(__this, ___data, ___size, method) (( void (*) (List_1_t7358 *, KeyValuePair_2U5BU5D_t7357*, int32_t, const MethodInfo*))List_1__ctor_m48052_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.cctor()
#define List_1__cctor_m48206(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48053_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48207(__this, method) (( Object_t* (*) (List_1_t7358 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m48208(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7358 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48055_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48209(__this, method) (( Object_t * (*) (List_1_t7358 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m48210(__this, ___item, method) (( int32_t (*) (List_1_t7358 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48057_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m48211(__this, ___item, method) (( bool (*) (List_1_t7358 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48058_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m48212(__this, ___item, method) (( int32_t (*) (List_1_t7358 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48059_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m48213(__this, ___index, ___item, method) (( void (*) (List_1_t7358 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48060_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m48214(__this, ___item, method) (( void (*) (List_1_t7358 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48061_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48215(__this, method) (( bool (*) (List_1_t7358 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48062_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48216(__this, method) (( bool (*) (List_1_t7358 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48063_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m48217(__this, method) (( Object_t * (*) (List_1_t7358 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48064_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m48218(__this, method) (( bool (*) (List_1_t7358 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m48219(__this, method) (( bool (*) (List_1_t7358 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48066_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m48220(__this, ___index, method) (( Object_t * (*) (List_1_t7358 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48067_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m48221(__this, ___index, ___value, method) (( void (*) (List_1_t7358 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48068_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Add(T)
#define List_1_Add_m48222(__this, ___item, method) (( void (*) (List_1_t7358 *, KeyValuePair_2_t7124 , const MethodInfo*))List_1_Add_m48069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m48223(__this, ___newCount, method) (( void (*) (List_1_t7358 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48070_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m48224(__this, ___idx, ___count, method) (( void (*) (List_1_t7358 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48071_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m48225(__this, ___collection, method) (( void (*) (List_1_t7358 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48072_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m48226(__this, ___enumerable, method) (( void (*) (List_1_t7358 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48073_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m48227(__this, ___collection, method) (( void (*) (List_1_t7358 *, Object_t*, const MethodInfo*))List_1_AddRange_m48074_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AsReadOnly()
#define List_1_AsReadOnly_m48228(__this, method) (( ReadOnlyCollection_1_t7360 * (*) (List_1_t7358 *, const MethodInfo*))List_1_AsReadOnly_m48075_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Clear()
#define List_1_Clear_m48229(__this, method) (( void (*) (List_1_t7358 *, const MethodInfo*))List_1_Clear_m48076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Contains(T)
#define List_1_Contains_m48230(__this, ___item, method) (( bool (*) (List_1_t7358 *, KeyValuePair_2_t7124 , const MethodInfo*))List_1_Contains_m48077_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m48231(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7358 *, KeyValuePair_2U5BU5D_t7357*, int32_t, const MethodInfo*))List_1_CopyTo_m48078_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m48232(__this, ___match, method) (( KeyValuePair_2_t7124  (*) (List_1_t7358 *, Predicate_1_t7361 *, const MethodInfo*))List_1_Find_m48079_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m48233(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7361 *, const MethodInfo*))List_1_CheckMatch_m48080_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m48234(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7358 *, int32_t, int32_t, Predicate_1_t7361 *, const MethodInfo*))List_1_GetIndex_m48081_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetEnumerator()
#define List_1_GetEnumerator_m48235(__this, method) (( Enumerator_t7362  (*) (List_1_t7358 *, const MethodInfo*))List_1_GetEnumerator_m48082_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m48236(__this, ___index, ___count, method) (( List_1_t7358 * (*) (List_1_t7358 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48083_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::IndexOf(T)
#define List_1_IndexOf_m48237(__this, ___item, method) (( int32_t (*) (List_1_t7358 *, KeyValuePair_2_t7124 , const MethodInfo*))List_1_IndexOf_m48084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m48238(__this, ___start, ___delta, method) (( void (*) (List_1_t7358 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48085_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m48239(__this, ___index, method) (( void (*) (List_1_t7358 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48086_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Insert(System.Int32,T)
#define List_1_Insert_m48240(__this, ___index, ___item, method) (( void (*) (List_1_t7358 *, int32_t, KeyValuePair_2_t7124 , const MethodInfo*))List_1_Insert_m48087_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m48241(__this, ___collection, method) (( void (*) (List_1_t7358 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48088_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m48242(__this, ___index, ___collection, method) (( void (*) (List_1_t7358 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48089_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m48243(__this, ___index, ___collection, method) (( void (*) (List_1_t7358 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48090_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m48244(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7358 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48091_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Remove(T)
#define List_1_Remove_m48245(__this, ___item, method) (( bool (*) (List_1_t7358 *, KeyValuePair_2_t7124 , const MethodInfo*))List_1_Remove_m48092_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m48246(__this, ___match, method) (( int32_t (*) (List_1_t7358 *, Predicate_1_t7361 *, const MethodInfo*))List_1_RemoveAll_m48093_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m48247(__this, ___index, method) (( void (*) (List_1_t7358 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48094_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m48248(__this, ___index, ___count, method) (( void (*) (List_1_t7358 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48095_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Reverse()
#define List_1_Reverse_m48249(__this, method) (( void (*) (List_1_t7358 *, const MethodInfo*))List_1_Reverse_m48096_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort()
#define List_1_Sort_m48250(__this, method) (( void (*) (List_1_t7358 *, const MethodInfo*))List_1_Sort_m48097_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m48251(__this, ___comparer, method) (( void (*) (List_1_t7358 *, Object_t*, const MethodInfo*))List_1_Sort_m48098_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m48252(__this, ___comparison, method) (( void (*) (List_1_t7358 *, Comparison_1_t7363 *, const MethodInfo*))List_1_Sort_m48099_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::ToArray()
#define List_1_ToArray_m48253(__this, method) (( KeyValuePair_2U5BU5D_t7357* (*) (List_1_t7358 *, const MethodInfo*))List_1_ToArray_m48100_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::TrimExcess()
#define List_1_TrimExcess_m48254(__this, method) (( void (*) (List_1_t7358 *, const MethodInfo*))List_1_TrimExcess_m48101_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Capacity()
#define List_1_get_Capacity_m48255(__this, method) (( int32_t (*) (List_1_t7358 *, const MethodInfo*))List_1_get_Capacity_m48102_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m48256(__this, ___value, method) (( void (*) (List_1_t7358 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48103_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Count()
#define List_1_get_Count_m48257(__this, method) (( int32_t (*) (List_1_t7358 *, const MethodInfo*))List_1_get_Count_m48104_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Item(System.Int32)
#define List_1_get_Item_m48258(__this, ___index, method) (( KeyValuePair_2_t7124  (*) (List_1_t7358 *, int32_t, const MethodInfo*))List_1_get_Item_m48105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m48259(__this, ___index, ___value, method) (( void (*) (List_1_t7358 *, int32_t, KeyValuePair_2_t7124 , const MethodInfo*))List_1_set_Item_m48106_gshared)(__this, ___index, ___value, method)

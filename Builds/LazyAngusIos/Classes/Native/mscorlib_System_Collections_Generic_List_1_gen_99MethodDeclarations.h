#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct List_1_t7540;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerable_1_t9418;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7539;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7257;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ICollection_1_t9419;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ReadOnlyCollection_1_t7542;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Predicate_1_t7543;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IComparer_1_t9420;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Comparison_1_t7545;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_82.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_98MethodDeclarations.h"
#define List_1__ctor_m50179(__this, method) (( void (*) (List_1_t7540 *, const MethodInfo*))List_1__ctor_m50026_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m50180(__this, ___collection, method) (( void (*) (List_1_t7540 *, Object_t*, const MethodInfo*))List_1__ctor_m50027_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Int32)
#define List_1__ctor_m50181(__this, ___capacity, method) (( void (*) (List_1_t7540 *, int32_t, const MethodInfo*))List_1__ctor_m50028_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m50182(__this, ___data, ___size, method) (( void (*) (List_1_t7540 *, KeyValuePair_2U5BU5D_t7539*, int32_t, const MethodInfo*))List_1__ctor_m50029_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.cctor()
#define List_1__cctor_m50183(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50030_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50184(__this, method) (( Object_t* (*) (List_1_t7540 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50031_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m50185(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7540 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50032_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50186(__this, method) (( Object_t * (*) (List_1_t7540 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50033_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m50187(__this, ___item, method) (( int32_t (*) (List_1_t7540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m50188(__this, ___item, method) (( bool (*) (List_1_t7540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50035_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m50189(__this, ___item, method) (( int32_t (*) (List_1_t7540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50036_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m50190(__this, ___index, ___item, method) (( void (*) (List_1_t7540 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50037_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m50191(__this, ___item, method) (( void (*) (List_1_t7540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50038_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50192(__this, method) (( bool (*) (List_1_t7540 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50039_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50193(__this, method) (( bool (*) (List_1_t7540 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50040_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m50194(__this, method) (( Object_t * (*) (List_1_t7540 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50041_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m50195(__this, method) (( bool (*) (List_1_t7540 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50042_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m50196(__this, method) (( bool (*) (List_1_t7540 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50043_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m50197(__this, ___index, method) (( Object_t * (*) (List_1_t7540 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m50198(__this, ___index, ___value, method) (( void (*) (List_1_t7540 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50045_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Add(T)
#define List_1_Add_m50199(__this, ___item, method) (( void (*) (List_1_t7540 *, KeyValuePair_2_t7252 , const MethodInfo*))List_1_Add_m50046_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m50200(__this, ___newCount, method) (( void (*) (List_1_t7540 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50047_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m50201(__this, ___idx, ___count, method) (( void (*) (List_1_t7540 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50048_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m50202(__this, ___collection, method) (( void (*) (List_1_t7540 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50049_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m50203(__this, ___enumerable, method) (( void (*) (List_1_t7540 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50050_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m50204(__this, ___collection, method) (( void (*) (List_1_t7540 *, Object_t*, const MethodInfo*))List_1_AddRange_m50051_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AsReadOnly()
#define List_1_AsReadOnly_m50205(__this, method) (( ReadOnlyCollection_1_t7542 * (*) (List_1_t7540 *, const MethodInfo*))List_1_AsReadOnly_m50052_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Clear()
#define List_1_Clear_m50206(__this, method) (( void (*) (List_1_t7540 *, const MethodInfo*))List_1_Clear_m50053_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Contains(T)
#define List_1_Contains_m50207(__this, ___item, method) (( bool (*) (List_1_t7540 *, KeyValuePair_2_t7252 , const MethodInfo*))List_1_Contains_m50054_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m50208(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7540 *, KeyValuePair_2U5BU5D_t7539*, int32_t, const MethodInfo*))List_1_CopyTo_m50055_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m50209(__this, ___match, method) (( KeyValuePair_2_t7252  (*) (List_1_t7540 *, Predicate_1_t7543 *, const MethodInfo*))List_1_Find_m50056_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m50210(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7543 *, const MethodInfo*))List_1_CheckMatch_m50057_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m50211(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7540 *, int32_t, int32_t, Predicate_1_t7543 *, const MethodInfo*))List_1_GetIndex_m50058_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetEnumerator()
#define List_1_GetEnumerator_m50212(__this, method) (( Enumerator_t7544  (*) (List_1_t7540 *, const MethodInfo*))List_1_GetEnumerator_m50059_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m50213(__this, ___index, ___count, method) (( List_1_t7540 * (*) (List_1_t7540 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50060_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::IndexOf(T)
#define List_1_IndexOf_m50214(__this, ___item, method) (( int32_t (*) (List_1_t7540 *, KeyValuePair_2_t7252 , const MethodInfo*))List_1_IndexOf_m50061_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m50215(__this, ___start, ___delta, method) (( void (*) (List_1_t7540 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50062_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m50216(__this, ___index, method) (( void (*) (List_1_t7540 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50063_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Insert(System.Int32,T)
#define List_1_Insert_m50217(__this, ___index, ___item, method) (( void (*) (List_1_t7540 *, int32_t, KeyValuePair_2_t7252 , const MethodInfo*))List_1_Insert_m50064_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m50218(__this, ___collection, method) (( void (*) (List_1_t7540 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50065_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m50219(__this, ___index, ___collection, method) (( void (*) (List_1_t7540 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50066_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m50220(__this, ___index, ___collection, method) (( void (*) (List_1_t7540 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50067_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m50221(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7540 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50068_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Remove(T)
#define List_1_Remove_m50222(__this, ___item, method) (( bool (*) (List_1_t7540 *, KeyValuePair_2_t7252 , const MethodInfo*))List_1_Remove_m50069_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m50223(__this, ___match, method) (( int32_t (*) (List_1_t7540 *, Predicate_1_t7543 *, const MethodInfo*))List_1_RemoveAll_m50070_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m50224(__this, ___index, method) (( void (*) (List_1_t7540 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50071_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m50225(__this, ___index, ___count, method) (( void (*) (List_1_t7540 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50072_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Reverse()
#define List_1_Reverse_m50226(__this, method) (( void (*) (List_1_t7540 *, const MethodInfo*))List_1_Reverse_m50073_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort()
#define List_1_Sort_m50227(__this, method) (( void (*) (List_1_t7540 *, const MethodInfo*))List_1_Sort_m50074_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m50228(__this, ___comparer, method) (( void (*) (List_1_t7540 *, Object_t*, const MethodInfo*))List_1_Sort_m50075_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m50229(__this, ___comparison, method) (( void (*) (List_1_t7540 *, Comparison_1_t7545 *, const MethodInfo*))List_1_Sort_m50076_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::ToArray()
#define List_1_ToArray_m50230(__this, method) (( KeyValuePair_2U5BU5D_t7539* (*) (List_1_t7540 *, const MethodInfo*))List_1_ToArray_m50077_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::TrimExcess()
#define List_1_TrimExcess_m50231(__this, method) (( void (*) (List_1_t7540 *, const MethodInfo*))List_1_TrimExcess_m50078_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Capacity()
#define List_1_get_Capacity_m50232(__this, method) (( int32_t (*) (List_1_t7540 *, const MethodInfo*))List_1_get_Capacity_m50079_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m50233(__this, ___value, method) (( void (*) (List_1_t7540 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50080_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Count()
#define List_1_get_Count_m50234(__this, method) (( int32_t (*) (List_1_t7540 *, const MethodInfo*))List_1_get_Count_m50081_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Item(System.Int32)
#define List_1_get_Item_m50235(__this, ___index, method) (( KeyValuePair_2_t7252  (*) (List_1_t7540 *, int32_t, const MethodInfo*))List_1_get_Item_m50082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m50236(__this, ___index, ___value, method) (( void (*) (List_1_t7540 *, int32_t, KeyValuePair_2_t7252 , const MethodInfo*))List_1_set_Item_m50083_gshared)(__this, ___index, ___value, method)

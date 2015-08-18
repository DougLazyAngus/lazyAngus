#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct List_1_t7374;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerable_1_t9360;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7373;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7199;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ICollection_1_t9361;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ReadOnlyCollection_1_t7376;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Predicate_1_t7377;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IComparer_1_t9362;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t7379;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_75.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_91MethodDeclarations.h"
#define List_1__ctor_m48169(__this, method) (( void (*) (List_1_t7374 *, const MethodInfo*))List_1__ctor_m48016_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m48170(__this, ___collection, method) (( void (*) (List_1_t7374 *, Object_t*, const MethodInfo*))List_1__ctor_m48017_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Int32)
#define List_1__ctor_m48171(__this, ___capacity, method) (( void (*) (List_1_t7374 *, int32_t, const MethodInfo*))List_1__ctor_m48018_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m48172(__this, ___data, ___size, method) (( void (*) (List_1_t7374 *, KeyValuePair_2U5BU5D_t7373*, int32_t, const MethodInfo*))List_1__ctor_m48019_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.cctor()
#define List_1__cctor_m48173(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48020_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48174(__this, method) (( Object_t* (*) (List_1_t7374 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m48175(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7374 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48022_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48176(__this, method) (( Object_t * (*) (List_1_t7374 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48023_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m48177(__this, ___item, method) (( int32_t (*) (List_1_t7374 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48024_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m48178(__this, ___item, method) (( bool (*) (List_1_t7374 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48025_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m48179(__this, ___item, method) (( int32_t (*) (List_1_t7374 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48026_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m48180(__this, ___index, ___item, method) (( void (*) (List_1_t7374 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48027_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m48181(__this, ___item, method) (( void (*) (List_1_t7374 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48028_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48182(__this, method) (( bool (*) (List_1_t7374 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48029_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48183(__this, method) (( bool (*) (List_1_t7374 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48030_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m48184(__this, method) (( Object_t * (*) (List_1_t7374 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48031_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m48185(__this, method) (( bool (*) (List_1_t7374 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48032_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m48186(__this, method) (( bool (*) (List_1_t7374 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48033_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m48187(__this, ___index, method) (( Object_t * (*) (List_1_t7374 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48034_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m48188(__this, ___index, ___value, method) (( void (*) (List_1_t7374 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48035_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Add(T)
#define List_1_Add_m48189(__this, ___item, method) (( void (*) (List_1_t7374 *, KeyValuePair_2_t7194 , const MethodInfo*))List_1_Add_m48036_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m48190(__this, ___newCount, method) (( void (*) (List_1_t7374 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48037_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m48191(__this, ___idx, ___count, method) (( void (*) (List_1_t7374 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48038_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m48192(__this, ___collection, method) (( void (*) (List_1_t7374 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48039_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m48193(__this, ___enumerable, method) (( void (*) (List_1_t7374 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48040_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m48194(__this, ___collection, method) (( void (*) (List_1_t7374 *, Object_t*, const MethodInfo*))List_1_AddRange_m48041_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AsReadOnly()
#define List_1_AsReadOnly_m48195(__this, method) (( ReadOnlyCollection_1_t7376 * (*) (List_1_t7374 *, const MethodInfo*))List_1_AsReadOnly_m48042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Clear()
#define List_1_Clear_m48196(__this, method) (( void (*) (List_1_t7374 *, const MethodInfo*))List_1_Clear_m48043_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Contains(T)
#define List_1_Contains_m48197(__this, ___item, method) (( bool (*) (List_1_t7374 *, KeyValuePair_2_t7194 , const MethodInfo*))List_1_Contains_m48044_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m48198(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7374 *, KeyValuePair_2U5BU5D_t7373*, int32_t, const MethodInfo*))List_1_CopyTo_m48045_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m48199(__this, ___match, method) (( KeyValuePair_2_t7194  (*) (List_1_t7374 *, Predicate_1_t7377 *, const MethodInfo*))List_1_Find_m48046_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m48200(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7377 *, const MethodInfo*))List_1_CheckMatch_m48047_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m48201(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7374 *, int32_t, int32_t, Predicate_1_t7377 *, const MethodInfo*))List_1_GetIndex_m48048_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetEnumerator()
#define List_1_GetEnumerator_m48202(__this, method) (( Enumerator_t7378  (*) (List_1_t7374 *, const MethodInfo*))List_1_GetEnumerator_m48049_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m48203(__this, ___index, ___count, method) (( List_1_t7374 * (*) (List_1_t7374 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48050_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::IndexOf(T)
#define List_1_IndexOf_m48204(__this, ___item, method) (( int32_t (*) (List_1_t7374 *, KeyValuePair_2_t7194 , const MethodInfo*))List_1_IndexOf_m48051_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m48205(__this, ___start, ___delta, method) (( void (*) (List_1_t7374 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48052_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m48206(__this, ___index, method) (( void (*) (List_1_t7374 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48053_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Insert(System.Int32,T)
#define List_1_Insert_m48207(__this, ___index, ___item, method) (( void (*) (List_1_t7374 *, int32_t, KeyValuePair_2_t7194 , const MethodInfo*))List_1_Insert_m48054_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m48208(__this, ___collection, method) (( void (*) (List_1_t7374 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48055_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m48209(__this, ___index, ___collection, method) (( void (*) (List_1_t7374 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48056_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m48210(__this, ___index, ___collection, method) (( void (*) (List_1_t7374 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48057_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m48211(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7374 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48058_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Remove(T)
#define List_1_Remove_m48212(__this, ___item, method) (( bool (*) (List_1_t7374 *, KeyValuePair_2_t7194 , const MethodInfo*))List_1_Remove_m48059_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m48213(__this, ___match, method) (( int32_t (*) (List_1_t7374 *, Predicate_1_t7377 *, const MethodInfo*))List_1_RemoveAll_m48060_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m48214(__this, ___index, method) (( void (*) (List_1_t7374 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48061_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m48215(__this, ___index, ___count, method) (( void (*) (List_1_t7374 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48062_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Reverse()
#define List_1_Reverse_m48216(__this, method) (( void (*) (List_1_t7374 *, const MethodInfo*))List_1_Reverse_m48063_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort()
#define List_1_Sort_m48217(__this, method) (( void (*) (List_1_t7374 *, const MethodInfo*))List_1_Sort_m48064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m48218(__this, ___comparer, method) (( void (*) (List_1_t7374 *, Object_t*, const MethodInfo*))List_1_Sort_m48065_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m48219(__this, ___comparison, method) (( void (*) (List_1_t7374 *, Comparison_1_t7379 *, const MethodInfo*))List_1_Sort_m48066_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::ToArray()
#define List_1_ToArray_m48220(__this, method) (( KeyValuePair_2U5BU5D_t7373* (*) (List_1_t7374 *, const MethodInfo*))List_1_ToArray_m48067_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::TrimExcess()
#define List_1_TrimExcess_m48221(__this, method) (( void (*) (List_1_t7374 *, const MethodInfo*))List_1_TrimExcess_m48068_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Capacity()
#define List_1_get_Capacity_m48222(__this, method) (( int32_t (*) (List_1_t7374 *, const MethodInfo*))List_1_get_Capacity_m48069_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m48223(__this, ___value, method) (( void (*) (List_1_t7374 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48070_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Count()
#define List_1_get_Count_m48224(__this, method) (( int32_t (*) (List_1_t7374 *, const MethodInfo*))List_1_get_Count_m48071_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Item(System.Int32)
#define List_1_get_Item_m48225(__this, ___index, method) (( KeyValuePair_2_t7194  (*) (List_1_t7374 *, int32_t, const MethodInfo*))List_1_get_Item_m48072_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m48226(__this, ___index, ___value, method) (( void (*) (List_1_t7374 *, int32_t, KeyValuePair_2_t7194 , const MethodInfo*))List_1_set_Item_m48073_gshared)(__this, ___index, ___value, method)

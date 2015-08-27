#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct List_1_t7706;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerable_1_t9396;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7705;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7257;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ICollection_1_t9397;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ReadOnlyCollection_1_t7708;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t7709;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IComparer_1_t9398;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Comparison_1_t7711;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_86.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_102MethodDeclarations.h"
#define List_1__ctor_m52178(__this, method) (( void (*) (List_1_t7706 *, const MethodInfo*))List_1__ctor_m52025_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52179(__this, ___collection, method) (( void (*) (List_1_t7706 *, Object_t*, const MethodInfo*))List_1__ctor_m52026_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Int32)
#define List_1__ctor_m52180(__this, ___capacity, method) (( void (*) (List_1_t7706 *, int32_t, const MethodInfo*))List_1__ctor_m52027_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52181(__this, ___data, ___size, method) (( void (*) (List_1_t7706 *, KeyValuePair_2U5BU5D_t7705*, int32_t, const MethodInfo*))List_1__ctor_m52028_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.cctor()
#define List_1__cctor_m52182(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52029_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52183(__this, method) (( Object_t* (*) (List_1_t7706 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52030_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52184(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7706 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52031_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52185(__this, method) (( Object_t * (*) (List_1_t7706 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52032_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52186(__this, ___item, method) (( int32_t (*) (List_1_t7706 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52033_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52187(__this, ___item, method) (( bool (*) (List_1_t7706 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52034_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52188(__this, ___item, method) (( int32_t (*) (List_1_t7706 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52035_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52189(__this, ___index, ___item, method) (( void (*) (List_1_t7706 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52036_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52190(__this, ___item, method) (( void (*) (List_1_t7706 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52037_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52191(__this, method) (( bool (*) (List_1_t7706 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52038_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52192(__this, method) (( bool (*) (List_1_t7706 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52039_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52193(__this, method) (( Object_t * (*) (List_1_t7706 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52040_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52194(__this, method) (( bool (*) (List_1_t7706 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52041_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52195(__this, method) (( bool (*) (List_1_t7706 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52042_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52196(__this, ___index, method) (( Object_t * (*) (List_1_t7706 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52043_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52197(__this, ___index, ___value, method) (( void (*) (List_1_t7706 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52044_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
#define List_1_Add_m52198(__this, ___item, method) (( void (*) (List_1_t7706 *, KeyValuePair_2_t7252 , const MethodInfo*))List_1_Add_m52045_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52199(__this, ___newCount, method) (( void (*) (List_1_t7706 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52046_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52200(__this, ___idx, ___count, method) (( void (*) (List_1_t7706 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52047_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52201(__this, ___collection, method) (( void (*) (List_1_t7706 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52048_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52202(__this, ___enumerable, method) (( void (*) (List_1_t7706 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52049_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52203(__this, ___collection, method) (( void (*) (List_1_t7706 *, Object_t*, const MethodInfo*))List_1_AddRange_m52050_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AsReadOnly()
#define List_1_AsReadOnly_m52204(__this, method) (( ReadOnlyCollection_1_t7708 * (*) (List_1_t7706 *, const MethodInfo*))List_1_AsReadOnly_m52051_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
#define List_1_Clear_m52205(__this, method) (( void (*) (List_1_t7706 *, const MethodInfo*))List_1_Clear_m52052_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
#define List_1_Contains_m52206(__this, ___item, method) (( bool (*) (List_1_t7706 *, KeyValuePair_2_t7252 , const MethodInfo*))List_1_Contains_m52053_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52207(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7706 *, KeyValuePair_2U5BU5D_t7705*, int32_t, const MethodInfo*))List_1_CopyTo_m52054_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52208(__this, ___match, method) (( KeyValuePair_2_t7252  (*) (List_1_t7706 *, Predicate_1_t7709 *, const MethodInfo*))List_1_Find_m52055_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52209(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7709 *, const MethodInfo*))List_1_CheckMatch_m52056_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52210(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7706 *, int32_t, int32_t, Predicate_1_t7709 *, const MethodInfo*))List_1_GetIndex_m52057_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#define List_1_GetEnumerator_m52211(__this, method) (( Enumerator_t7710  (*) (List_1_t7706 *, const MethodInfo*))List_1_GetEnumerator_m52058_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52212(__this, ___index, ___count, method) (( List_1_t7706 * (*) (List_1_t7706 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52059_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
#define List_1_IndexOf_m52213(__this, ___item, method) (( int32_t (*) (List_1_t7706 *, KeyValuePair_2_t7252 , const MethodInfo*))List_1_IndexOf_m52060_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52214(__this, ___start, ___delta, method) (( void (*) (List_1_t7706 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52061_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52215(__this, ___index, method) (( void (*) (List_1_t7706 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52062_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
#define List_1_Insert_m52216(__this, ___index, ___item, method) (( void (*) (List_1_t7706 *, int32_t, KeyValuePair_2_t7252 , const MethodInfo*))List_1_Insert_m52063_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52217(__this, ___collection, method) (( void (*) (List_1_t7706 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52064_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52218(__this, ___index, ___collection, method) (( void (*) (List_1_t7706 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52065_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52219(__this, ___index, ___collection, method) (( void (*) (List_1_t7706 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52066_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52220(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7706 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52067_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#define List_1_Remove_m52221(__this, ___item, method) (( bool (*) (List_1_t7706 *, KeyValuePair_2_t7252 , const MethodInfo*))List_1_Remove_m52068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52222(__this, ___match, method) (( int32_t (*) (List_1_t7706 *, Predicate_1_t7709 *, const MethodInfo*))List_1_RemoveAll_m52069_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52223(__this, ___index, method) (( void (*) (List_1_t7706 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52070_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52224(__this, ___index, ___count, method) (( void (*) (List_1_t7706 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52071_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Reverse()
#define List_1_Reverse_m52225(__this, method) (( void (*) (List_1_t7706 *, const MethodInfo*))List_1_Reverse_m52072_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort()
#define List_1_Sort_m52226(__this, method) (( void (*) (List_1_t7706 *, const MethodInfo*))List_1_Sort_m52073_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52227(__this, ___comparer, method) (( void (*) (List_1_t7706 *, Object_t*, const MethodInfo*))List_1_Sort_m52074_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52228(__this, ___comparison, method) (( void (*) (List_1_t7706 *, Comparison_1_t7711 *, const MethodInfo*))List_1_Sort_m52075_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::ToArray()
#define List_1_ToArray_m52229(__this, method) (( KeyValuePair_2U5BU5D_t7705* (*) (List_1_t7706 *, const MethodInfo*))List_1_ToArray_m52076_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::TrimExcess()
#define List_1_TrimExcess_m52230(__this, method) (( void (*) (List_1_t7706 *, const MethodInfo*))List_1_TrimExcess_m52077_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Capacity()
#define List_1_get_Capacity_m52231(__this, method) (( int32_t (*) (List_1_t7706 *, const MethodInfo*))List_1_get_Capacity_m52078_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52232(__this, ___value, method) (( void (*) (List_1_t7706 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52079_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
#define List_1_get_Count_m52233(__this, method) (( int32_t (*) (List_1_t7706 *, const MethodInfo*))List_1_get_Count_m52080_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
#define List_1_get_Item_m52234(__this, ___index, method) (( KeyValuePair_2_t7252  (*) (List_1_t7706 *, int32_t, const MethodInfo*))List_1_get_Item_m52081_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52235(__this, ___index, ___value, method) (( void (*) (List_1_t7706 *, int32_t, KeyValuePair_2_t7252 , const MethodInfo*))List_1_set_Item_m52082_gshared)(__this, ___index, ___value, method)

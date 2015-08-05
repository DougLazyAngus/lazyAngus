#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct List_1_t7693;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerable_1_t9300;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7692;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7190;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ICollection_1_t9301;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ReadOnlyCollection_1_t7695;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t7696;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IComparer_1_t9302;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t7698;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_84.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_100MethodDeclarations.h"
#define List_1__ctor_m52157(__this, method) (( void (*) (List_1_t7693 *, const MethodInfo*))List_1__ctor_m52004_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52158(__this, ___collection, method) (( void (*) (List_1_t7693 *, Object_t*, const MethodInfo*))List_1__ctor_m52005_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Int32)
#define List_1__ctor_m52159(__this, ___capacity, method) (( void (*) (List_1_t7693 *, int32_t, const MethodInfo*))List_1__ctor_m52006_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52160(__this, ___data, ___size, method) (( void (*) (List_1_t7693 *, KeyValuePair_2U5BU5D_t7692*, int32_t, const MethodInfo*))List_1__ctor_m52007_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.cctor()
#define List_1__cctor_m52161(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52008_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52162(__this, method) (( Object_t* (*) (List_1_t7693 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52163(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7693 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52010_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52164(__this, method) (( Object_t * (*) (List_1_t7693 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52011_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52165(__this, ___item, method) (( int32_t (*) (List_1_t7693 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52012_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52166(__this, ___item, method) (( bool (*) (List_1_t7693 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52013_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52167(__this, ___item, method) (( int32_t (*) (List_1_t7693 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52014_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52168(__this, ___index, ___item, method) (( void (*) (List_1_t7693 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52015_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52169(__this, ___item, method) (( void (*) (List_1_t7693 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52016_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52170(__this, method) (( bool (*) (List_1_t7693 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52017_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52171(__this, method) (( bool (*) (List_1_t7693 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52018_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52172(__this, method) (( Object_t * (*) (List_1_t7693 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52019_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52173(__this, method) (( bool (*) (List_1_t7693 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52020_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52174(__this, method) (( bool (*) (List_1_t7693 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52021_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52175(__this, ___index, method) (( Object_t * (*) (List_1_t7693 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52022_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52176(__this, ___index, ___value, method) (( void (*) (List_1_t7693 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52023_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Add(T)
#define List_1_Add_m52177(__this, ___item, method) (( void (*) (List_1_t7693 *, KeyValuePair_2_t7185 , const MethodInfo*))List_1_Add_m52024_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52178(__this, ___newCount, method) (( void (*) (List_1_t7693 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52025_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52179(__this, ___idx, ___count, method) (( void (*) (List_1_t7693 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52026_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52180(__this, ___collection, method) (( void (*) (List_1_t7693 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52027_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52181(__this, ___enumerable, method) (( void (*) (List_1_t7693 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52028_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52182(__this, ___collection, method) (( void (*) (List_1_t7693 *, Object_t*, const MethodInfo*))List_1_AddRange_m52029_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AsReadOnly()
#define List_1_AsReadOnly_m52183(__this, method) (( ReadOnlyCollection_1_t7695 * (*) (List_1_t7693 *, const MethodInfo*))List_1_AsReadOnly_m52030_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Clear()
#define List_1_Clear_m52184(__this, method) (( void (*) (List_1_t7693 *, const MethodInfo*))List_1_Clear_m52031_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Contains(T)
#define List_1_Contains_m52185(__this, ___item, method) (( bool (*) (List_1_t7693 *, KeyValuePair_2_t7185 , const MethodInfo*))List_1_Contains_m52032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52186(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7693 *, KeyValuePair_2U5BU5D_t7692*, int32_t, const MethodInfo*))List_1_CopyTo_m52033_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52187(__this, ___match, method) (( KeyValuePair_2_t7185  (*) (List_1_t7693 *, Predicate_1_t7696 *, const MethodInfo*))List_1_Find_m52034_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52188(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7696 *, const MethodInfo*))List_1_CheckMatch_m52035_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52189(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7693 *, int32_t, int32_t, Predicate_1_t7696 *, const MethodInfo*))List_1_GetIndex_m52036_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetEnumerator()
#define List_1_GetEnumerator_m52190(__this, method) (( Enumerator_t7697  (*) (List_1_t7693 *, const MethodInfo*))List_1_GetEnumerator_m52037_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52191(__this, ___index, ___count, method) (( List_1_t7693 * (*) (List_1_t7693 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52038_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::IndexOf(T)
#define List_1_IndexOf_m52192(__this, ___item, method) (( int32_t (*) (List_1_t7693 *, KeyValuePair_2_t7185 , const MethodInfo*))List_1_IndexOf_m52039_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52193(__this, ___start, ___delta, method) (( void (*) (List_1_t7693 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52040_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52194(__this, ___index, method) (( void (*) (List_1_t7693 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52041_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Insert(System.Int32,T)
#define List_1_Insert_m52195(__this, ___index, ___item, method) (( void (*) (List_1_t7693 *, int32_t, KeyValuePair_2_t7185 , const MethodInfo*))List_1_Insert_m52042_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52196(__this, ___collection, method) (( void (*) (List_1_t7693 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52043_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52197(__this, ___index, ___collection, method) (( void (*) (List_1_t7693 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52044_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52198(__this, ___index, ___collection, method) (( void (*) (List_1_t7693 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52045_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52199(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7693 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52046_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Remove(T)
#define List_1_Remove_m52200(__this, ___item, method) (( bool (*) (List_1_t7693 *, KeyValuePair_2_t7185 , const MethodInfo*))List_1_Remove_m52047_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52201(__this, ___match, method) (( int32_t (*) (List_1_t7693 *, Predicate_1_t7696 *, const MethodInfo*))List_1_RemoveAll_m52048_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52202(__this, ___index, method) (( void (*) (List_1_t7693 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52049_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52203(__this, ___index, ___count, method) (( void (*) (List_1_t7693 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52050_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Reverse()
#define List_1_Reverse_m52204(__this, method) (( void (*) (List_1_t7693 *, const MethodInfo*))List_1_Reverse_m52051_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort()
#define List_1_Sort_m52205(__this, method) (( void (*) (List_1_t7693 *, const MethodInfo*))List_1_Sort_m52052_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52206(__this, ___comparer, method) (( void (*) (List_1_t7693 *, Object_t*, const MethodInfo*))List_1_Sort_m52053_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52207(__this, ___comparison, method) (( void (*) (List_1_t7693 *, Comparison_1_t7698 *, const MethodInfo*))List_1_Sort_m52054_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::ToArray()
#define List_1_ToArray_m52208(__this, method) (( KeyValuePair_2U5BU5D_t7692* (*) (List_1_t7693 *, const MethodInfo*))List_1_ToArray_m52055_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::TrimExcess()
#define List_1_TrimExcess_m52209(__this, method) (( void (*) (List_1_t7693 *, const MethodInfo*))List_1_TrimExcess_m52056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Capacity()
#define List_1_get_Capacity_m52210(__this, method) (( int32_t (*) (List_1_t7693 *, const MethodInfo*))List_1_get_Capacity_m52057_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52211(__this, ___value, method) (( void (*) (List_1_t7693 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52058_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Count()
#define List_1_get_Count_m52212(__this, method) (( int32_t (*) (List_1_t7693 *, const MethodInfo*))List_1_get_Count_m52059_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Item(System.Int32)
#define List_1_get_Item_m52213(__this, ___index, method) (( KeyValuePair_2_t7185  (*) (List_1_t7693 *, int32_t, const MethodInfo*))List_1_get_Item_m52060_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52214(__this, ___index, ___value, method) (( void (*) (List_1_t7693 *, int32_t, KeyValuePair_2_t7185 , const MethodInfo*))List_1_set_Item_m52061_gshared)(__this, ___index, ___value, method)

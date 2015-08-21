#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct List_1_t7703;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerable_1_t9393;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7702;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7254;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ICollection_1_t9394;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ReadOnlyCollection_1_t7705;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t7706;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IComparer_1_t9395;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Comparison_1_t7708;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_86.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_102MethodDeclarations.h"
#define List_1__ctor_m52146(__this, method) (( void (*) (List_1_t7703 *, const MethodInfo*))List_1__ctor_m51993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52147(__this, ___collection, method) (( void (*) (List_1_t7703 *, Object_t*, const MethodInfo*))List_1__ctor_m51994_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Int32)
#define List_1__ctor_m52148(__this, ___capacity, method) (( void (*) (List_1_t7703 *, int32_t, const MethodInfo*))List_1__ctor_m51995_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52149(__this, ___data, ___size, method) (( void (*) (List_1_t7703 *, KeyValuePair_2U5BU5D_t7702*, int32_t, const MethodInfo*))List_1__ctor_m51996_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.cctor()
#define List_1__cctor_m52150(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51997_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52151(__this, method) (( Object_t* (*) (List_1_t7703 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51998_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52152(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7703 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51999_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52153(__this, method) (( Object_t * (*) (List_1_t7703 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52000_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52154(__this, ___item, method) (( int32_t (*) (List_1_t7703 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52001_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52155(__this, ___item, method) (( bool (*) (List_1_t7703 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52002_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52156(__this, ___item, method) (( int32_t (*) (List_1_t7703 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52003_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52157(__this, ___index, ___item, method) (( void (*) (List_1_t7703 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52004_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52158(__this, ___item, method) (( void (*) (List_1_t7703 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52005_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52159(__this, method) (( bool (*) (List_1_t7703 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52006_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52160(__this, method) (( bool (*) (List_1_t7703 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52007_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52161(__this, method) (( Object_t * (*) (List_1_t7703 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52008_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52162(__this, method) (( bool (*) (List_1_t7703 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52009_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52163(__this, method) (( bool (*) (List_1_t7703 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52010_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52164(__this, ___index, method) (( Object_t * (*) (List_1_t7703 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52011_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52165(__this, ___index, ___value, method) (( void (*) (List_1_t7703 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52012_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
#define List_1_Add_m52166(__this, ___item, method) (( void (*) (List_1_t7703 *, KeyValuePair_2_t7249 , const MethodInfo*))List_1_Add_m52013_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52167(__this, ___newCount, method) (( void (*) (List_1_t7703 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52014_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52168(__this, ___idx, ___count, method) (( void (*) (List_1_t7703 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52015_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52169(__this, ___collection, method) (( void (*) (List_1_t7703 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52016_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52170(__this, ___enumerable, method) (( void (*) (List_1_t7703 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52017_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52171(__this, ___collection, method) (( void (*) (List_1_t7703 *, Object_t*, const MethodInfo*))List_1_AddRange_m52018_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AsReadOnly()
#define List_1_AsReadOnly_m52172(__this, method) (( ReadOnlyCollection_1_t7705 * (*) (List_1_t7703 *, const MethodInfo*))List_1_AsReadOnly_m52019_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
#define List_1_Clear_m52173(__this, method) (( void (*) (List_1_t7703 *, const MethodInfo*))List_1_Clear_m52020_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
#define List_1_Contains_m52174(__this, ___item, method) (( bool (*) (List_1_t7703 *, KeyValuePair_2_t7249 , const MethodInfo*))List_1_Contains_m52021_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52175(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7703 *, KeyValuePair_2U5BU5D_t7702*, int32_t, const MethodInfo*))List_1_CopyTo_m52022_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52176(__this, ___match, method) (( KeyValuePair_2_t7249  (*) (List_1_t7703 *, Predicate_1_t7706 *, const MethodInfo*))List_1_Find_m52023_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52177(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7706 *, const MethodInfo*))List_1_CheckMatch_m52024_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52178(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7703 *, int32_t, int32_t, Predicate_1_t7706 *, const MethodInfo*))List_1_GetIndex_m52025_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#define List_1_GetEnumerator_m52179(__this, method) (( Enumerator_t7707  (*) (List_1_t7703 *, const MethodInfo*))List_1_GetEnumerator_m52026_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52180(__this, ___index, ___count, method) (( List_1_t7703 * (*) (List_1_t7703 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52027_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
#define List_1_IndexOf_m52181(__this, ___item, method) (( int32_t (*) (List_1_t7703 *, KeyValuePair_2_t7249 , const MethodInfo*))List_1_IndexOf_m52028_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52182(__this, ___start, ___delta, method) (( void (*) (List_1_t7703 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52029_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52183(__this, ___index, method) (( void (*) (List_1_t7703 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52030_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
#define List_1_Insert_m52184(__this, ___index, ___item, method) (( void (*) (List_1_t7703 *, int32_t, KeyValuePair_2_t7249 , const MethodInfo*))List_1_Insert_m52031_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52185(__this, ___collection, method) (( void (*) (List_1_t7703 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52032_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52186(__this, ___index, ___collection, method) (( void (*) (List_1_t7703 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52033_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52187(__this, ___index, ___collection, method) (( void (*) (List_1_t7703 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52034_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52188(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7703 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52035_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#define List_1_Remove_m52189(__this, ___item, method) (( bool (*) (List_1_t7703 *, KeyValuePair_2_t7249 , const MethodInfo*))List_1_Remove_m52036_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52190(__this, ___match, method) (( int32_t (*) (List_1_t7703 *, Predicate_1_t7706 *, const MethodInfo*))List_1_RemoveAll_m52037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52191(__this, ___index, method) (( void (*) (List_1_t7703 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52038_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52192(__this, ___index, ___count, method) (( void (*) (List_1_t7703 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52039_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Reverse()
#define List_1_Reverse_m52193(__this, method) (( void (*) (List_1_t7703 *, const MethodInfo*))List_1_Reverse_m52040_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort()
#define List_1_Sort_m52194(__this, method) (( void (*) (List_1_t7703 *, const MethodInfo*))List_1_Sort_m52041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52195(__this, ___comparer, method) (( void (*) (List_1_t7703 *, Object_t*, const MethodInfo*))List_1_Sort_m52042_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52196(__this, ___comparison, method) (( void (*) (List_1_t7703 *, Comparison_1_t7708 *, const MethodInfo*))List_1_Sort_m52043_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::ToArray()
#define List_1_ToArray_m52197(__this, method) (( KeyValuePair_2U5BU5D_t7702* (*) (List_1_t7703 *, const MethodInfo*))List_1_ToArray_m52044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::TrimExcess()
#define List_1_TrimExcess_m52198(__this, method) (( void (*) (List_1_t7703 *, const MethodInfo*))List_1_TrimExcess_m52045_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Capacity()
#define List_1_get_Capacity_m52199(__this, method) (( int32_t (*) (List_1_t7703 *, const MethodInfo*))List_1_get_Capacity_m52046_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52200(__this, ___value, method) (( void (*) (List_1_t7703 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52047_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
#define List_1_get_Count_m52201(__this, method) (( int32_t (*) (List_1_t7703 *, const MethodInfo*))List_1_get_Count_m52048_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
#define List_1_get_Item_m52202(__this, ___index, method) (( KeyValuePair_2_t7249  (*) (List_1_t7703 *, int32_t, const MethodInfo*))List_1_get_Item_m52049_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52203(__this, ___index, ___value, method) (( void (*) (List_1_t7703 *, int32_t, KeyValuePair_2_t7249 , const MethodInfo*))List_1_set_Item_m52050_gshared)(__this, ___index, ___value, method)

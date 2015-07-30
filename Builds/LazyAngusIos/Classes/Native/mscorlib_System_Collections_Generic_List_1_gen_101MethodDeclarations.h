#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct List_1_t7690;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerable_1_t9297;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7689;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7187;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ICollection_1_t9298;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ReadOnlyCollection_1_t7692;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t7693;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IComparer_1_t9299;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t7695;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_84.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_100MethodDeclarations.h"
#define List_1__ctor_m52134(__this, method) (( void (*) (List_1_t7690 *, const MethodInfo*))List_1__ctor_m51981_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52135(__this, ___collection, method) (( void (*) (List_1_t7690 *, Object_t*, const MethodInfo*))List_1__ctor_m51982_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Int32)
#define List_1__ctor_m52136(__this, ___capacity, method) (( void (*) (List_1_t7690 *, int32_t, const MethodInfo*))List_1__ctor_m51983_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52137(__this, ___data, ___size, method) (( void (*) (List_1_t7690 *, KeyValuePair_2U5BU5D_t7689*, int32_t, const MethodInfo*))List_1__ctor_m51984_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.cctor()
#define List_1__cctor_m52138(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51985_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52139(__this, method) (( Object_t* (*) (List_1_t7690 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51986_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52140(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7690 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51987_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52141(__this, method) (( Object_t * (*) (List_1_t7690 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51988_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52142(__this, ___item, method) (( int32_t (*) (List_1_t7690 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51989_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52143(__this, ___item, method) (( bool (*) (List_1_t7690 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51990_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52144(__this, ___item, method) (( int32_t (*) (List_1_t7690 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51991_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52145(__this, ___index, ___item, method) (( void (*) (List_1_t7690 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51992_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52146(__this, ___item, method) (( void (*) (List_1_t7690 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51993_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52147(__this, method) (( bool (*) (List_1_t7690 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51994_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52148(__this, method) (( bool (*) (List_1_t7690 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51995_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52149(__this, method) (( Object_t * (*) (List_1_t7690 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51996_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52150(__this, method) (( bool (*) (List_1_t7690 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51997_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52151(__this, method) (( bool (*) (List_1_t7690 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51998_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52152(__this, ___index, method) (( Object_t * (*) (List_1_t7690 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51999_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52153(__this, ___index, ___value, method) (( void (*) (List_1_t7690 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52000_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Add(T)
#define List_1_Add_m52154(__this, ___item, method) (( void (*) (List_1_t7690 *, KeyValuePair_2_t7182 , const MethodInfo*))List_1_Add_m52001_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52155(__this, ___newCount, method) (( void (*) (List_1_t7690 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52002_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52156(__this, ___idx, ___count, method) (( void (*) (List_1_t7690 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52003_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52157(__this, ___collection, method) (( void (*) (List_1_t7690 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52004_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52158(__this, ___enumerable, method) (( void (*) (List_1_t7690 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52159(__this, ___collection, method) (( void (*) (List_1_t7690 *, Object_t*, const MethodInfo*))List_1_AddRange_m52006_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AsReadOnly()
#define List_1_AsReadOnly_m52160(__this, method) (( ReadOnlyCollection_1_t7692 * (*) (List_1_t7690 *, const MethodInfo*))List_1_AsReadOnly_m52007_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Clear()
#define List_1_Clear_m52161(__this, method) (( void (*) (List_1_t7690 *, const MethodInfo*))List_1_Clear_m52008_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Contains(T)
#define List_1_Contains_m52162(__this, ___item, method) (( bool (*) (List_1_t7690 *, KeyValuePair_2_t7182 , const MethodInfo*))List_1_Contains_m52009_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52163(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7690 *, KeyValuePair_2U5BU5D_t7689*, int32_t, const MethodInfo*))List_1_CopyTo_m52010_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52164(__this, ___match, method) (( KeyValuePair_2_t7182  (*) (List_1_t7690 *, Predicate_1_t7693 *, const MethodInfo*))List_1_Find_m52011_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52165(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7693 *, const MethodInfo*))List_1_CheckMatch_m52012_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52166(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7690 *, int32_t, int32_t, Predicate_1_t7693 *, const MethodInfo*))List_1_GetIndex_m52013_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetEnumerator()
#define List_1_GetEnumerator_m52167(__this, method) (( Enumerator_t7694  (*) (List_1_t7690 *, const MethodInfo*))List_1_GetEnumerator_m52014_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52168(__this, ___index, ___count, method) (( List_1_t7690 * (*) (List_1_t7690 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52015_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::IndexOf(T)
#define List_1_IndexOf_m52169(__this, ___item, method) (( int32_t (*) (List_1_t7690 *, KeyValuePair_2_t7182 , const MethodInfo*))List_1_IndexOf_m52016_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52170(__this, ___start, ___delta, method) (( void (*) (List_1_t7690 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52017_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52171(__this, ___index, method) (( void (*) (List_1_t7690 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52018_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Insert(System.Int32,T)
#define List_1_Insert_m52172(__this, ___index, ___item, method) (( void (*) (List_1_t7690 *, int32_t, KeyValuePair_2_t7182 , const MethodInfo*))List_1_Insert_m52019_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52173(__this, ___collection, method) (( void (*) (List_1_t7690 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52020_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52174(__this, ___index, ___collection, method) (( void (*) (List_1_t7690 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52021_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52175(__this, ___index, ___collection, method) (( void (*) (List_1_t7690 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52022_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52176(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7690 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52023_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Remove(T)
#define List_1_Remove_m52177(__this, ___item, method) (( bool (*) (List_1_t7690 *, KeyValuePair_2_t7182 , const MethodInfo*))List_1_Remove_m52024_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52178(__this, ___match, method) (( int32_t (*) (List_1_t7690 *, Predicate_1_t7693 *, const MethodInfo*))List_1_RemoveAll_m52025_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52179(__this, ___index, method) (( void (*) (List_1_t7690 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52026_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52180(__this, ___index, ___count, method) (( void (*) (List_1_t7690 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52027_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Reverse()
#define List_1_Reverse_m52181(__this, method) (( void (*) (List_1_t7690 *, const MethodInfo*))List_1_Reverse_m52028_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort()
#define List_1_Sort_m52182(__this, method) (( void (*) (List_1_t7690 *, const MethodInfo*))List_1_Sort_m52029_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52183(__this, ___comparer, method) (( void (*) (List_1_t7690 *, Object_t*, const MethodInfo*))List_1_Sort_m52030_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52184(__this, ___comparison, method) (( void (*) (List_1_t7690 *, Comparison_1_t7695 *, const MethodInfo*))List_1_Sort_m52031_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::ToArray()
#define List_1_ToArray_m52185(__this, method) (( KeyValuePair_2U5BU5D_t7689* (*) (List_1_t7690 *, const MethodInfo*))List_1_ToArray_m52032_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::TrimExcess()
#define List_1_TrimExcess_m52186(__this, method) (( void (*) (List_1_t7690 *, const MethodInfo*))List_1_TrimExcess_m52033_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Capacity()
#define List_1_get_Capacity_m52187(__this, method) (( int32_t (*) (List_1_t7690 *, const MethodInfo*))List_1_get_Capacity_m52034_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52188(__this, ___value, method) (( void (*) (List_1_t7690 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52035_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Count()
#define List_1_get_Count_m52189(__this, method) (( int32_t (*) (List_1_t7690 *, const MethodInfo*))List_1_get_Count_m52036_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Item(System.Int32)
#define List_1_get_Item_m52190(__this, ___index, method) (( KeyValuePair_2_t7182  (*) (List_1_t7690 *, int32_t, const MethodInfo*))List_1_get_Item_m52037_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52191(__this, ___index, ___value, method) (( void (*) (List_1_t7690 *, int32_t, KeyValuePair_2_t7182 , const MethodInfo*))List_1_set_Item_m52038_gshared)(__this, ___index, ___value, method)

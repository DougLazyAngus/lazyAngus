#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct List_1_t7682;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerable_1_t9289;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7681;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7179;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ICollection_1_t9290;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ReadOnlyCollection_1_t7684;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t7685;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IComparer_1_t9291;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t7687;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_84.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_100MethodDeclarations.h"
#define List_1__ctor_m52087(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1__ctor_m51934_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52088(__this, ___collection, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1__ctor_m51935_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Int32)
#define List_1__ctor_m52089(__this, ___capacity, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1__ctor_m51936_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52090(__this, ___data, ___size, method) (( void (*) (List_1_t7682 *, KeyValuePair_2U5BU5D_t7681*, int32_t, const MethodInfo*))List_1__ctor_m51937_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.cctor()
#define List_1__cctor_m52091(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51938_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52092(__this, method) (( Object_t* (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52093(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7682 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51940_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52094(__this, method) (( Object_t * (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51941_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52095(__this, ___item, method) (( int32_t (*) (List_1_t7682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51942_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52096(__this, ___item, method) (( bool (*) (List_1_t7682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51943_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52097(__this, ___item, method) (( int32_t (*) (List_1_t7682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52098(__this, ___index, ___item, method) (( void (*) (List_1_t7682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51945_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52099(__this, ___item, method) (( void (*) (List_1_t7682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51946_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52100(__this, method) (( bool (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51947_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52101(__this, method) (( bool (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51948_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52102(__this, method) (( Object_t * (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51949_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52103(__this, method) (( bool (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51950_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52104(__this, method) (( bool (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51951_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52105(__this, ___index, method) (( Object_t * (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51952_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52106(__this, ___index, ___value, method) (( void (*) (List_1_t7682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51953_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Add(T)
#define List_1_Add_m52107(__this, ___item, method) (( void (*) (List_1_t7682 *, KeyValuePair_2_t7174 , const MethodInfo*))List_1_Add_m51954_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52108(__this, ___newCount, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51955_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52109(__this, ___idx, ___count, method) (( void (*) (List_1_t7682 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51956_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52110(__this, ___collection, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51957_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52111(__this, ___enumerable, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51958_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52112(__this, ___collection, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_AddRange_m51959_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AsReadOnly()
#define List_1_AsReadOnly_m52113(__this, method) (( ReadOnlyCollection_1_t7684 * (*) (List_1_t7682 *, const MethodInfo*))List_1_AsReadOnly_m51960_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Clear()
#define List_1_Clear_m52114(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1_Clear_m51961_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Contains(T)
#define List_1_Contains_m52115(__this, ___item, method) (( bool (*) (List_1_t7682 *, KeyValuePair_2_t7174 , const MethodInfo*))List_1_Contains_m51962_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52116(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7682 *, KeyValuePair_2U5BU5D_t7681*, int32_t, const MethodInfo*))List_1_CopyTo_m51963_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52117(__this, ___match, method) (( KeyValuePair_2_t7174  (*) (List_1_t7682 *, Predicate_1_t7685 *, const MethodInfo*))List_1_Find_m51964_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52118(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7685 *, const MethodInfo*))List_1_CheckMatch_m51965_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52119(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7682 *, int32_t, int32_t, Predicate_1_t7685 *, const MethodInfo*))List_1_GetIndex_m51966_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetEnumerator()
#define List_1_GetEnumerator_m52120(__this, method) (( Enumerator_t7686  (*) (List_1_t7682 *, const MethodInfo*))List_1_GetEnumerator_m51967_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52121(__this, ___index, ___count, method) (( List_1_t7682 * (*) (List_1_t7682 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51968_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::IndexOf(T)
#define List_1_IndexOf_m52122(__this, ___item, method) (( int32_t (*) (List_1_t7682 *, KeyValuePair_2_t7174 , const MethodInfo*))List_1_IndexOf_m51969_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52123(__this, ___start, ___delta, method) (( void (*) (List_1_t7682 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51970_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52124(__this, ___index, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51971_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Insert(System.Int32,T)
#define List_1_Insert_m52125(__this, ___index, ___item, method) (( void (*) (List_1_t7682 *, int32_t, KeyValuePair_2_t7174 , const MethodInfo*))List_1_Insert_m51972_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52126(__this, ___collection, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51973_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52127(__this, ___index, ___collection, method) (( void (*) (List_1_t7682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51974_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52128(__this, ___index, ___collection, method) (( void (*) (List_1_t7682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52129(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51976_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Remove(T)
#define List_1_Remove_m52130(__this, ___item, method) (( bool (*) (List_1_t7682 *, KeyValuePair_2_t7174 , const MethodInfo*))List_1_Remove_m51977_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52131(__this, ___match, method) (( int32_t (*) (List_1_t7682 *, Predicate_1_t7685 *, const MethodInfo*))List_1_RemoveAll_m51978_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52132(__this, ___index, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51979_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52133(__this, ___index, ___count, method) (( void (*) (List_1_t7682 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51980_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Reverse()
#define List_1_Reverse_m52134(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1_Reverse_m51981_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort()
#define List_1_Sort_m52135(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1_Sort_m51982_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52136(__this, ___comparer, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_Sort_m51983_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52137(__this, ___comparison, method) (( void (*) (List_1_t7682 *, Comparison_1_t7687 *, const MethodInfo*))List_1_Sort_m51984_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::ToArray()
#define List_1_ToArray_m52138(__this, method) (( KeyValuePair_2U5BU5D_t7681* (*) (List_1_t7682 *, const MethodInfo*))List_1_ToArray_m51985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::TrimExcess()
#define List_1_TrimExcess_m52139(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1_TrimExcess_m51986_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Capacity()
#define List_1_get_Capacity_m52140(__this, method) (( int32_t (*) (List_1_t7682 *, const MethodInfo*))List_1_get_Capacity_m51987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52141(__this, ___value, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51988_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Count()
#define List_1_get_Count_m52142(__this, method) (( int32_t (*) (List_1_t7682 *, const MethodInfo*))List_1_get_Count_m51989_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Item(System.Int32)
#define List_1_get_Item_m52143(__this, ___index, method) (( KeyValuePair_2_t7174  (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_get_Item_m51990_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52144(__this, ___index, ___value, method) (( void (*) (List_1_t7682 *, int32_t, KeyValuePair_2_t7174 , const MethodInfo*))List_1_set_Item_m51991_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct List_1_t7699;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerable_1_t9385;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7698;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7250;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ICollection_1_t9386;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ReadOnlyCollection_1_t7701;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t7702;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IComparer_1_t9387;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Comparison_1_t7704;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_85.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_101MethodDeclarations.h"
#define List_1__ctor_m52054(__this, method) (( void (*) (List_1_t7699 *, const MethodInfo*))List_1__ctor_m51901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52055(__this, ___collection, method) (( void (*) (List_1_t7699 *, Object_t*, const MethodInfo*))List_1__ctor_m51902_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Int32)
#define List_1__ctor_m52056(__this, ___capacity, method) (( void (*) (List_1_t7699 *, int32_t, const MethodInfo*))List_1__ctor_m51903_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52057(__this, ___data, ___size, method) (( void (*) (List_1_t7699 *, KeyValuePair_2U5BU5D_t7698*, int32_t, const MethodInfo*))List_1__ctor_m51904_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.cctor()
#define List_1__cctor_m52058(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51905_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52059(__this, method) (( Object_t* (*) (List_1_t7699 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51906_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52060(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7699 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51907_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52061(__this, method) (( Object_t * (*) (List_1_t7699 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51908_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52062(__this, ___item, method) (( int32_t (*) (List_1_t7699 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51909_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52063(__this, ___item, method) (( bool (*) (List_1_t7699 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51910_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52064(__this, ___item, method) (( int32_t (*) (List_1_t7699 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51911_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52065(__this, ___index, ___item, method) (( void (*) (List_1_t7699 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51912_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52066(__this, ___item, method) (( void (*) (List_1_t7699 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51913_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52067(__this, method) (( bool (*) (List_1_t7699 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51914_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52068(__this, method) (( bool (*) (List_1_t7699 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51915_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52069(__this, method) (( Object_t * (*) (List_1_t7699 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51916_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52070(__this, method) (( bool (*) (List_1_t7699 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51917_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52071(__this, method) (( bool (*) (List_1_t7699 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51918_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52072(__this, ___index, method) (( Object_t * (*) (List_1_t7699 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51919_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52073(__this, ___index, ___value, method) (( void (*) (List_1_t7699 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51920_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
#define List_1_Add_m52074(__this, ___item, method) (( void (*) (List_1_t7699 *, KeyValuePair_2_t7245 , const MethodInfo*))List_1_Add_m51921_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52075(__this, ___newCount, method) (( void (*) (List_1_t7699 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51922_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52076(__this, ___idx, ___count, method) (( void (*) (List_1_t7699 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51923_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52077(__this, ___collection, method) (( void (*) (List_1_t7699 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51924_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52078(__this, ___enumerable, method) (( void (*) (List_1_t7699 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51925_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52079(__this, ___collection, method) (( void (*) (List_1_t7699 *, Object_t*, const MethodInfo*))List_1_AddRange_m51926_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AsReadOnly()
#define List_1_AsReadOnly_m52080(__this, method) (( ReadOnlyCollection_1_t7701 * (*) (List_1_t7699 *, const MethodInfo*))List_1_AsReadOnly_m51927_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
#define List_1_Clear_m52081(__this, method) (( void (*) (List_1_t7699 *, const MethodInfo*))List_1_Clear_m51928_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
#define List_1_Contains_m52082(__this, ___item, method) (( bool (*) (List_1_t7699 *, KeyValuePair_2_t7245 , const MethodInfo*))List_1_Contains_m51929_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52083(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7699 *, KeyValuePair_2U5BU5D_t7698*, int32_t, const MethodInfo*))List_1_CopyTo_m51930_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52084(__this, ___match, method) (( KeyValuePair_2_t7245  (*) (List_1_t7699 *, Predicate_1_t7702 *, const MethodInfo*))List_1_Find_m51931_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52085(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7702 *, const MethodInfo*))List_1_CheckMatch_m51932_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52086(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7699 *, int32_t, int32_t, Predicate_1_t7702 *, const MethodInfo*))List_1_GetIndex_m51933_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#define List_1_GetEnumerator_m52087(__this, method) (( Enumerator_t7703  (*) (List_1_t7699 *, const MethodInfo*))List_1_GetEnumerator_m51934_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52088(__this, ___index, ___count, method) (( List_1_t7699 * (*) (List_1_t7699 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51935_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
#define List_1_IndexOf_m52089(__this, ___item, method) (( int32_t (*) (List_1_t7699 *, KeyValuePair_2_t7245 , const MethodInfo*))List_1_IndexOf_m51936_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52090(__this, ___start, ___delta, method) (( void (*) (List_1_t7699 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51937_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52091(__this, ___index, method) (( void (*) (List_1_t7699 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51938_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
#define List_1_Insert_m52092(__this, ___index, ___item, method) (( void (*) (List_1_t7699 *, int32_t, KeyValuePair_2_t7245 , const MethodInfo*))List_1_Insert_m51939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52093(__this, ___collection, method) (( void (*) (List_1_t7699 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51940_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52094(__this, ___index, ___collection, method) (( void (*) (List_1_t7699 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51941_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52095(__this, ___index, ___collection, method) (( void (*) (List_1_t7699 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51942_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52096(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7699 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51943_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#define List_1_Remove_m52097(__this, ___item, method) (( bool (*) (List_1_t7699 *, KeyValuePair_2_t7245 , const MethodInfo*))List_1_Remove_m51944_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52098(__this, ___match, method) (( int32_t (*) (List_1_t7699 *, Predicate_1_t7702 *, const MethodInfo*))List_1_RemoveAll_m51945_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52099(__this, ___index, method) (( void (*) (List_1_t7699 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51946_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52100(__this, ___index, ___count, method) (( void (*) (List_1_t7699 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51947_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Reverse()
#define List_1_Reverse_m52101(__this, method) (( void (*) (List_1_t7699 *, const MethodInfo*))List_1_Reverse_m51948_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort()
#define List_1_Sort_m52102(__this, method) (( void (*) (List_1_t7699 *, const MethodInfo*))List_1_Sort_m51949_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52103(__this, ___comparer, method) (( void (*) (List_1_t7699 *, Object_t*, const MethodInfo*))List_1_Sort_m51950_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52104(__this, ___comparison, method) (( void (*) (List_1_t7699 *, Comparison_1_t7704 *, const MethodInfo*))List_1_Sort_m51951_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::ToArray()
#define List_1_ToArray_m52105(__this, method) (( KeyValuePair_2U5BU5D_t7698* (*) (List_1_t7699 *, const MethodInfo*))List_1_ToArray_m51952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::TrimExcess()
#define List_1_TrimExcess_m52106(__this, method) (( void (*) (List_1_t7699 *, const MethodInfo*))List_1_TrimExcess_m51953_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Capacity()
#define List_1_get_Capacity_m52107(__this, method) (( int32_t (*) (List_1_t7699 *, const MethodInfo*))List_1_get_Capacity_m51954_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52108(__this, ___value, method) (( void (*) (List_1_t7699 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51955_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
#define List_1_get_Count_m52109(__this, method) (( int32_t (*) (List_1_t7699 *, const MethodInfo*))List_1_get_Count_m51956_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
#define List_1_get_Item_m52110(__this, ___index, method) (( KeyValuePair_2_t7245  (*) (List_1_t7699 *, int32_t, const MethodInfo*))List_1_get_Item_m51957_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52111(__this, ___index, ___value, method) (( void (*) (List_1_t7699 *, int32_t, KeyValuePair_2_t7245 , const MethodInfo*))List_1_set_Item_m51958_gshared)(__this, ___index, ___value, method)

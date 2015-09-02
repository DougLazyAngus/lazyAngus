#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct List_1_t7735;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerable_1_t9433;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7734;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7286;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ICollection_1_t9434;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ReadOnlyCollection_1_t7737;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t7738;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IComparer_1_t9435;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Comparison_1_t7740;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_88.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_104MethodDeclarations.h"
#define List_1__ctor_m52510(__this, method) (( void (*) (List_1_t7735 *, const MethodInfo*))List_1__ctor_m52357_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52511(__this, ___collection, method) (( void (*) (List_1_t7735 *, Object_t*, const MethodInfo*))List_1__ctor_m52358_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Int32)
#define List_1__ctor_m52512(__this, ___capacity, method) (( void (*) (List_1_t7735 *, int32_t, const MethodInfo*))List_1__ctor_m52359_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52513(__this, ___data, ___size, method) (( void (*) (List_1_t7735 *, KeyValuePair_2U5BU5D_t7734*, int32_t, const MethodInfo*))List_1__ctor_m52360_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.cctor()
#define List_1__cctor_m52514(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52361_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52515(__this, method) (( Object_t* (*) (List_1_t7735 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52516(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7735 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52363_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52517(__this, method) (( Object_t * (*) (List_1_t7735 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52364_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52518(__this, ___item, method) (( int32_t (*) (List_1_t7735 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52365_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52519(__this, ___item, method) (( bool (*) (List_1_t7735 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52366_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52520(__this, ___item, method) (( int32_t (*) (List_1_t7735 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52367_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52521(__this, ___index, ___item, method) (( void (*) (List_1_t7735 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52368_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52522(__this, ___item, method) (( void (*) (List_1_t7735 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52369_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52523(__this, method) (( bool (*) (List_1_t7735 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52524(__this, method) (( bool (*) (List_1_t7735 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52371_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52525(__this, method) (( Object_t * (*) (List_1_t7735 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52372_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52526(__this, method) (( bool (*) (List_1_t7735 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52527(__this, method) (( bool (*) (List_1_t7735 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52374_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52528(__this, ___index, method) (( Object_t * (*) (List_1_t7735 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52375_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52529(__this, ___index, ___value, method) (( void (*) (List_1_t7735 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52376_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
#define List_1_Add_m52530(__this, ___item, method) (( void (*) (List_1_t7735 *, KeyValuePair_2_t7281 , const MethodInfo*))List_1_Add_m52377_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52531(__this, ___newCount, method) (( void (*) (List_1_t7735 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52378_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52532(__this, ___idx, ___count, method) (( void (*) (List_1_t7735 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52379_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52533(__this, ___collection, method) (( void (*) (List_1_t7735 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52380_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52534(__this, ___enumerable, method) (( void (*) (List_1_t7735 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52381_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52535(__this, ___collection, method) (( void (*) (List_1_t7735 *, Object_t*, const MethodInfo*))List_1_AddRange_m52382_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AsReadOnly()
#define List_1_AsReadOnly_m52536(__this, method) (( ReadOnlyCollection_1_t7737 * (*) (List_1_t7735 *, const MethodInfo*))List_1_AsReadOnly_m52383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
#define List_1_Clear_m52537(__this, method) (( void (*) (List_1_t7735 *, const MethodInfo*))List_1_Clear_m52384_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
#define List_1_Contains_m52538(__this, ___item, method) (( bool (*) (List_1_t7735 *, KeyValuePair_2_t7281 , const MethodInfo*))List_1_Contains_m52385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52539(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7735 *, KeyValuePair_2U5BU5D_t7734*, int32_t, const MethodInfo*))List_1_CopyTo_m52386_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52540(__this, ___match, method) (( KeyValuePair_2_t7281  (*) (List_1_t7735 *, Predicate_1_t7738 *, const MethodInfo*))List_1_Find_m52387_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52541(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7738 *, const MethodInfo*))List_1_CheckMatch_m52388_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52542(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7735 *, int32_t, int32_t, Predicate_1_t7738 *, const MethodInfo*))List_1_GetIndex_m52389_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#define List_1_GetEnumerator_m52543(__this, method) (( Enumerator_t7739  (*) (List_1_t7735 *, const MethodInfo*))List_1_GetEnumerator_m52390_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52544(__this, ___index, ___count, method) (( List_1_t7735 * (*) (List_1_t7735 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52391_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
#define List_1_IndexOf_m52545(__this, ___item, method) (( int32_t (*) (List_1_t7735 *, KeyValuePair_2_t7281 , const MethodInfo*))List_1_IndexOf_m52392_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52546(__this, ___start, ___delta, method) (( void (*) (List_1_t7735 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52393_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52547(__this, ___index, method) (( void (*) (List_1_t7735 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52394_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
#define List_1_Insert_m52548(__this, ___index, ___item, method) (( void (*) (List_1_t7735 *, int32_t, KeyValuePair_2_t7281 , const MethodInfo*))List_1_Insert_m52395_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52549(__this, ___collection, method) (( void (*) (List_1_t7735 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52396_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52550(__this, ___index, ___collection, method) (( void (*) (List_1_t7735 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52397_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52551(__this, ___index, ___collection, method) (( void (*) (List_1_t7735 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52398_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52552(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7735 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52399_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#define List_1_Remove_m52553(__this, ___item, method) (( bool (*) (List_1_t7735 *, KeyValuePair_2_t7281 , const MethodInfo*))List_1_Remove_m52400_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52554(__this, ___match, method) (( int32_t (*) (List_1_t7735 *, Predicate_1_t7738 *, const MethodInfo*))List_1_RemoveAll_m52401_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52555(__this, ___index, method) (( void (*) (List_1_t7735 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52402_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52556(__this, ___index, ___count, method) (( void (*) (List_1_t7735 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52403_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Reverse()
#define List_1_Reverse_m52557(__this, method) (( void (*) (List_1_t7735 *, const MethodInfo*))List_1_Reverse_m52404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort()
#define List_1_Sort_m52558(__this, method) (( void (*) (List_1_t7735 *, const MethodInfo*))List_1_Sort_m52405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52559(__this, ___comparer, method) (( void (*) (List_1_t7735 *, Object_t*, const MethodInfo*))List_1_Sort_m52406_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52560(__this, ___comparison, method) (( void (*) (List_1_t7735 *, Comparison_1_t7740 *, const MethodInfo*))List_1_Sort_m52407_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::ToArray()
#define List_1_ToArray_m52561(__this, method) (( KeyValuePair_2U5BU5D_t7734* (*) (List_1_t7735 *, const MethodInfo*))List_1_ToArray_m52408_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::TrimExcess()
#define List_1_TrimExcess_m52562(__this, method) (( void (*) (List_1_t7735 *, const MethodInfo*))List_1_TrimExcess_m52409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Capacity()
#define List_1_get_Capacity_m52563(__this, method) (( int32_t (*) (List_1_t7735 *, const MethodInfo*))List_1_get_Capacity_m52410_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52564(__this, ___value, method) (( void (*) (List_1_t7735 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52411_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
#define List_1_get_Count_m52565(__this, method) (( int32_t (*) (List_1_t7735 *, const MethodInfo*))List_1_get_Count_m52412_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
#define List_1_get_Item_m52566(__this, ___index, method) (( KeyValuePair_2_t7281  (*) (List_1_t7735 *, int32_t, const MethodInfo*))List_1_get_Item_m52413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52567(__this, ___index, ___value, method) (( void (*) (List_1_t7735 *, int32_t, KeyValuePair_2_t7281 , const MethodInfo*))List_1_set_Item_m52414_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct List_1_t8211;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerable_1_t10021;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8210;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7816;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ICollection_1_t10022;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ReadOnlyCollection_1_t8213;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Predicate_1_t8214;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IComparer_1_t10023;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t8216;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_103MethodDeclarations.h"
#define List_1__ctor_m56020(__this, method) (( void (*) (List_1_t8211 *, const MethodInfo*))List_1__ctor_m55867_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m56021(__this, ___collection, method) (( void (*) (List_1_t8211 *, Object_t*, const MethodInfo*))List_1__ctor_m55868_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Int32)
#define List_1__ctor_m56022(__this, ___capacity, method) (( void (*) (List_1_t8211 *, int32_t, const MethodInfo*))List_1__ctor_m55869_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m56023(__this, ___data, ___size, method) (( void (*) (List_1_t8211 *, KeyValuePair_2U5BU5D_t8210*, int32_t, const MethodInfo*))List_1__ctor_m55870_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.cctor()
#define List_1__cctor_m56024(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55871_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56025(__this, method) (( Object_t* (*) (List_1_t8211 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55872_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m56026(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8211 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55873_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m56027(__this, method) (( Object_t * (*) (List_1_t8211 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55874_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m56028(__this, ___item, method) (( int32_t (*) (List_1_t8211 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55875_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m56029(__this, ___item, method) (( bool (*) (List_1_t8211 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55876_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m56030(__this, ___item, method) (( int32_t (*) (List_1_t8211 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m56031(__this, ___index, ___item, method) (( void (*) (List_1_t8211 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55878_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m56032(__this, ___item, method) (( void (*) (List_1_t8211 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55879_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56033(__this, method) (( bool (*) (List_1_t8211 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55880_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m56034(__this, method) (( bool (*) (List_1_t8211 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55881_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m56035(__this, method) (( Object_t * (*) (List_1_t8211 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m56036(__this, method) (( bool (*) (List_1_t8211 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m56037(__this, method) (( bool (*) (List_1_t8211 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55884_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m56038(__this, ___index, method) (( Object_t * (*) (List_1_t8211 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55885_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m56039(__this, ___index, ___value, method) (( void (*) (List_1_t8211 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55886_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Add(T)
#define List_1_Add_m56040(__this, ___item, method) (( void (*) (List_1_t8211 *, KeyValuePair_2_t7811 , const MethodInfo*))List_1_Add_m55887_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m56041(__this, ___newCount, method) (( void (*) (List_1_t8211 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55888_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m56042(__this, ___idx, ___count, method) (( void (*) (List_1_t8211 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55889_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m56043(__this, ___collection, method) (( void (*) (List_1_t8211 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55890_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m56044(__this, ___enumerable, method) (( void (*) (List_1_t8211 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55891_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m56045(__this, ___collection, method) (( void (*) (List_1_t8211 *, Object_t*, const MethodInfo*))List_1_AddRange_m55892_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AsReadOnly()
#define List_1_AsReadOnly_m56046(__this, method) (( ReadOnlyCollection_1_t8213 * (*) (List_1_t8211 *, const MethodInfo*))List_1_AsReadOnly_m55893_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Clear()
#define List_1_Clear_m56047(__this, method) (( void (*) (List_1_t8211 *, const MethodInfo*))List_1_Clear_m55894_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Contains(T)
#define List_1_Contains_m56048(__this, ___item, method) (( bool (*) (List_1_t8211 *, KeyValuePair_2_t7811 , const MethodInfo*))List_1_Contains_m55895_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m56049(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8211 *, KeyValuePair_2U5BU5D_t8210*, int32_t, const MethodInfo*))List_1_CopyTo_m55896_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m56050(__this, ___match, method) (( KeyValuePair_2_t7811  (*) (List_1_t8211 *, Predicate_1_t8214 *, const MethodInfo*))List_1_Find_m55897_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m56051(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8214 *, const MethodInfo*))List_1_CheckMatch_m55898_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m56052(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8211 *, int32_t, int32_t, Predicate_1_t8214 *, const MethodInfo*))List_1_GetIndex_m55899_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetEnumerator()
#define List_1_GetEnumerator_m56053(__this, method) (( Enumerator_t8215  (*) (List_1_t8211 *, const MethodInfo*))List_1_GetEnumerator_m55900_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m56054(__this, ___index, ___count, method) (( List_1_t8211 * (*) (List_1_t8211 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55901_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::IndexOf(T)
#define List_1_IndexOf_m56055(__this, ___item, method) (( int32_t (*) (List_1_t8211 *, KeyValuePair_2_t7811 , const MethodInfo*))List_1_IndexOf_m55902_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m56056(__this, ___start, ___delta, method) (( void (*) (List_1_t8211 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55903_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m56057(__this, ___index, method) (( void (*) (List_1_t8211 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55904_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Insert(System.Int32,T)
#define List_1_Insert_m56058(__this, ___index, ___item, method) (( void (*) (List_1_t8211 *, int32_t, KeyValuePair_2_t7811 , const MethodInfo*))List_1_Insert_m55905_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m56059(__this, ___collection, method) (( void (*) (List_1_t8211 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55906_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m56060(__this, ___index, ___collection, method) (( void (*) (List_1_t8211 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55907_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m56061(__this, ___index, ___collection, method) (( void (*) (List_1_t8211 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55908_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m56062(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8211 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55909_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Remove(T)
#define List_1_Remove_m56063(__this, ___item, method) (( bool (*) (List_1_t8211 *, KeyValuePair_2_t7811 , const MethodInfo*))List_1_Remove_m55910_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m56064(__this, ___match, method) (( int32_t (*) (List_1_t8211 *, Predicate_1_t8214 *, const MethodInfo*))List_1_RemoveAll_m55911_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m56065(__this, ___index, method) (( void (*) (List_1_t8211 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55912_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m56066(__this, ___index, ___count, method) (( void (*) (List_1_t8211 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55913_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Reverse()
#define List_1_Reverse_m56067(__this, method) (( void (*) (List_1_t8211 *, const MethodInfo*))List_1_Reverse_m55914_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort()
#define List_1_Sort_m56068(__this, method) (( void (*) (List_1_t8211 *, const MethodInfo*))List_1_Sort_m55915_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m56069(__this, ___comparer, method) (( void (*) (List_1_t8211 *, Object_t*, const MethodInfo*))List_1_Sort_m55916_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m56070(__this, ___comparison, method) (( void (*) (List_1_t8211 *, Comparison_1_t8216 *, const MethodInfo*))List_1_Sort_m55917_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::ToArray()
#define List_1_ToArray_m56071(__this, method) (( KeyValuePair_2U5BU5D_t8210* (*) (List_1_t8211 *, const MethodInfo*))List_1_ToArray_m55918_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::TrimExcess()
#define List_1_TrimExcess_m56072(__this, method) (( void (*) (List_1_t8211 *, const MethodInfo*))List_1_TrimExcess_m55919_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Capacity()
#define List_1_get_Capacity_m56073(__this, method) (( int32_t (*) (List_1_t8211 *, const MethodInfo*))List_1_get_Capacity_m55920_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m56074(__this, ___value, method) (( void (*) (List_1_t8211 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55921_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count()
#define List_1_get_Count_m56075(__this, method) (( int32_t (*) (List_1_t8211 *, const MethodInfo*))List_1_get_Count_m55922_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Item(System.Int32)
#define List_1_get_Item_m56076(__this, ___index, method) (( KeyValuePair_2_t7811  (*) (List_1_t8211 *, int32_t, const MethodInfo*))List_1_get_Item_m55923_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m56077(__this, ___index, ___value, method) (( void (*) (List_1_t8211 *, int32_t, KeyValuePair_2_t7811 , const MethodInfo*))List_1_set_Item_m55924_gshared)(__this, ___index, ___value, method)

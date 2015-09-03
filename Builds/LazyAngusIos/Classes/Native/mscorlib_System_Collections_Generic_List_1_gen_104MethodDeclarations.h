#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct List_1_t8205;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerable_1_t10015;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8204;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7810;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ICollection_1_t10016;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ReadOnlyCollection_1_t8207;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Predicate_1_t8208;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IComparer_1_t10017;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t8210;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_103MethodDeclarations.h"
#define List_1__ctor_m55995(__this, method) (( void (*) (List_1_t8205 *, const MethodInfo*))List_1__ctor_m55842_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m55996(__this, ___collection, method) (( void (*) (List_1_t8205 *, Object_t*, const MethodInfo*))List_1__ctor_m55843_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Int32)
#define List_1__ctor_m55997(__this, ___capacity, method) (( void (*) (List_1_t8205 *, int32_t, const MethodInfo*))List_1__ctor_m55844_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m55998(__this, ___data, ___size, method) (( void (*) (List_1_t8205 *, KeyValuePair_2U5BU5D_t8204*, int32_t, const MethodInfo*))List_1__ctor_m55845_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.cctor()
#define List_1__cctor_m55999(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55846_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56000(__this, method) (( Object_t* (*) (List_1_t8205 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55847_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m56001(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8205 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55848_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m56002(__this, method) (( Object_t * (*) (List_1_t8205 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55849_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m56003(__this, ___item, method) (( int32_t (*) (List_1_t8205 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55850_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m56004(__this, ___item, method) (( bool (*) (List_1_t8205 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55851_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m56005(__this, ___item, method) (( int32_t (*) (List_1_t8205 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55852_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m56006(__this, ___index, ___item, method) (( void (*) (List_1_t8205 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55853_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m56007(__this, ___item, method) (( void (*) (List_1_t8205 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55854_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56008(__this, method) (( bool (*) (List_1_t8205 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55855_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m56009(__this, method) (( bool (*) (List_1_t8205 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55856_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m56010(__this, method) (( Object_t * (*) (List_1_t8205 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55857_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m56011(__this, method) (( bool (*) (List_1_t8205 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m56012(__this, method) (( bool (*) (List_1_t8205 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55859_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m56013(__this, ___index, method) (( Object_t * (*) (List_1_t8205 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m56014(__this, ___index, ___value, method) (( void (*) (List_1_t8205 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55861_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Add(T)
#define List_1_Add_m56015(__this, ___item, method) (( void (*) (List_1_t8205 *, KeyValuePair_2_t7805 , const MethodInfo*))List_1_Add_m55862_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m56016(__this, ___newCount, method) (( void (*) (List_1_t8205 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55863_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m56017(__this, ___idx, ___count, method) (( void (*) (List_1_t8205 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55864_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m56018(__this, ___collection, method) (( void (*) (List_1_t8205 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55865_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m56019(__this, ___enumerable, method) (( void (*) (List_1_t8205 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55866_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m56020(__this, ___collection, method) (( void (*) (List_1_t8205 *, Object_t*, const MethodInfo*))List_1_AddRange_m55867_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::AsReadOnly()
#define List_1_AsReadOnly_m56021(__this, method) (( ReadOnlyCollection_1_t8207 * (*) (List_1_t8205 *, const MethodInfo*))List_1_AsReadOnly_m55868_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Clear()
#define List_1_Clear_m56022(__this, method) (( void (*) (List_1_t8205 *, const MethodInfo*))List_1_Clear_m55869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Contains(T)
#define List_1_Contains_m56023(__this, ___item, method) (( bool (*) (List_1_t8205 *, KeyValuePair_2_t7805 , const MethodInfo*))List_1_Contains_m55870_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m56024(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8205 *, KeyValuePair_2U5BU5D_t8204*, int32_t, const MethodInfo*))List_1_CopyTo_m55871_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m56025(__this, ___match, method) (( KeyValuePair_2_t7805  (*) (List_1_t8205 *, Predicate_1_t8208 *, const MethodInfo*))List_1_Find_m55872_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m56026(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8208 *, const MethodInfo*))List_1_CheckMatch_m55873_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m56027(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8205 *, int32_t, int32_t, Predicate_1_t8208 *, const MethodInfo*))List_1_GetIndex_m55874_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetEnumerator()
#define List_1_GetEnumerator_m56028(__this, method) (( Enumerator_t8209  (*) (List_1_t8205 *, const MethodInfo*))List_1_GetEnumerator_m55875_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m56029(__this, ___index, ___count, method) (( List_1_t8205 * (*) (List_1_t8205 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55876_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::IndexOf(T)
#define List_1_IndexOf_m56030(__this, ___item, method) (( int32_t (*) (List_1_t8205 *, KeyValuePair_2_t7805 , const MethodInfo*))List_1_IndexOf_m55877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m56031(__this, ___start, ___delta, method) (( void (*) (List_1_t8205 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55878_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m56032(__this, ___index, method) (( void (*) (List_1_t8205 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Insert(System.Int32,T)
#define List_1_Insert_m56033(__this, ___index, ___item, method) (( void (*) (List_1_t8205 *, int32_t, KeyValuePair_2_t7805 , const MethodInfo*))List_1_Insert_m55880_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m56034(__this, ___collection, method) (( void (*) (List_1_t8205 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55881_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m56035(__this, ___index, ___collection, method) (( void (*) (List_1_t8205 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55882_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m56036(__this, ___index, ___collection, method) (( void (*) (List_1_t8205 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55883_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m56037(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8205 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55884_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Remove(T)
#define List_1_Remove_m56038(__this, ___item, method) (( bool (*) (List_1_t8205 *, KeyValuePair_2_t7805 , const MethodInfo*))List_1_Remove_m55885_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m56039(__this, ___match, method) (( int32_t (*) (List_1_t8205 *, Predicate_1_t8208 *, const MethodInfo*))List_1_RemoveAll_m55886_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m56040(__this, ___index, method) (( void (*) (List_1_t8205 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55887_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m56041(__this, ___index, ___count, method) (( void (*) (List_1_t8205 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55888_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Reverse()
#define List_1_Reverse_m56042(__this, method) (( void (*) (List_1_t8205 *, const MethodInfo*))List_1_Reverse_m55889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort()
#define List_1_Sort_m56043(__this, method) (( void (*) (List_1_t8205 *, const MethodInfo*))List_1_Sort_m55890_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m56044(__this, ___comparer, method) (( void (*) (List_1_t8205 *, Object_t*, const MethodInfo*))List_1_Sort_m55891_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m56045(__this, ___comparison, method) (( void (*) (List_1_t8205 *, Comparison_1_t8210 *, const MethodInfo*))List_1_Sort_m55892_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::ToArray()
#define List_1_ToArray_m56046(__this, method) (( KeyValuePair_2U5BU5D_t8204* (*) (List_1_t8205 *, const MethodInfo*))List_1_ToArray_m55893_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::TrimExcess()
#define List_1_TrimExcess_m56047(__this, method) (( void (*) (List_1_t8205 *, const MethodInfo*))List_1_TrimExcess_m55894_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Capacity()
#define List_1_get_Capacity_m56048(__this, method) (( int32_t (*) (List_1_t8205 *, const MethodInfo*))List_1_get_Capacity_m55895_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m56049(__this, ___value, method) (( void (*) (List_1_t8205 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55896_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count()
#define List_1_get_Count_m56050(__this, method) (( int32_t (*) (List_1_t8205 *, const MethodInfo*))List_1_get_Count_m55897_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Item(System.Int32)
#define List_1_get_Item_m56051(__this, ___index, method) (( KeyValuePair_2_t7805  (*) (List_1_t8205 *, int32_t, const MethodInfo*))List_1_get_Item_m55898_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m56052(__this, ___index, ___value, method) (( void (*) (List_1_t8205 *, int32_t, KeyValuePair_2_t7805 , const MethodInfo*))List_1_set_Item_m55899_gshared)(__this, ___index, ___value, method)

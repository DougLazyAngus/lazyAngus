#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct List_1_t7381;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerable_1_t9371;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7380;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7206;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ICollection_1_t9372;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ReadOnlyCollection_1_t7383;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Predicate_1_t7384;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IComparer_1_t9373;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t7386;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_92MethodDeclarations.h"
#define List_1__ctor_m48293(__this, method) (( void (*) (List_1_t7381 *, const MethodInfo*))List_1__ctor_m48140_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m48294(__this, ___collection, method) (( void (*) (List_1_t7381 *, Object_t*, const MethodInfo*))List_1__ctor_m48141_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Int32)
#define List_1__ctor_m48295(__this, ___capacity, method) (( void (*) (List_1_t7381 *, int32_t, const MethodInfo*))List_1__ctor_m48142_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m48296(__this, ___data, ___size, method) (( void (*) (List_1_t7381 *, KeyValuePair_2U5BU5D_t7380*, int32_t, const MethodInfo*))List_1__ctor_m48143_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.cctor()
#define List_1__cctor_m48297(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48144_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48298(__this, method) (( Object_t* (*) (List_1_t7381 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48145_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m48299(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7381 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48146_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48300(__this, method) (( Object_t * (*) (List_1_t7381 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48147_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m48301(__this, ___item, method) (( int32_t (*) (List_1_t7381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48148_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m48302(__this, ___item, method) (( bool (*) (List_1_t7381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48149_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m48303(__this, ___item, method) (( int32_t (*) (List_1_t7381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48150_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m48304(__this, ___index, ___item, method) (( void (*) (List_1_t7381 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48151_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m48305(__this, ___item, method) (( void (*) (List_1_t7381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48152_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48306(__this, method) (( bool (*) (List_1_t7381 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48307(__this, method) (( bool (*) (List_1_t7381 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48154_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m48308(__this, method) (( Object_t * (*) (List_1_t7381 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48155_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m48309(__this, method) (( bool (*) (List_1_t7381 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48156_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m48310(__this, method) (( bool (*) (List_1_t7381 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48157_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m48311(__this, ___index, method) (( Object_t * (*) (List_1_t7381 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m48312(__this, ___index, ___value, method) (( void (*) (List_1_t7381 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48159_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Add(T)
#define List_1_Add_m48313(__this, ___item, method) (( void (*) (List_1_t7381 *, KeyValuePair_2_t7201 , const MethodInfo*))List_1_Add_m48160_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m48314(__this, ___newCount, method) (( void (*) (List_1_t7381 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48161_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m48315(__this, ___idx, ___count, method) (( void (*) (List_1_t7381 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48162_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m48316(__this, ___collection, method) (( void (*) (List_1_t7381 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48163_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m48317(__this, ___enumerable, method) (( void (*) (List_1_t7381 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48164_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m48318(__this, ___collection, method) (( void (*) (List_1_t7381 *, Object_t*, const MethodInfo*))List_1_AddRange_m48165_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AsReadOnly()
#define List_1_AsReadOnly_m48319(__this, method) (( ReadOnlyCollection_1_t7383 * (*) (List_1_t7381 *, const MethodInfo*))List_1_AsReadOnly_m48166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Clear()
#define List_1_Clear_m48320(__this, method) (( void (*) (List_1_t7381 *, const MethodInfo*))List_1_Clear_m48167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Contains(T)
#define List_1_Contains_m48321(__this, ___item, method) (( bool (*) (List_1_t7381 *, KeyValuePair_2_t7201 , const MethodInfo*))List_1_Contains_m48168_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m48322(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7381 *, KeyValuePair_2U5BU5D_t7380*, int32_t, const MethodInfo*))List_1_CopyTo_m48169_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m48323(__this, ___match, method) (( KeyValuePair_2_t7201  (*) (List_1_t7381 *, Predicate_1_t7384 *, const MethodInfo*))List_1_Find_m48170_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m48324(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7384 *, const MethodInfo*))List_1_CheckMatch_m48171_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m48325(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7381 *, int32_t, int32_t, Predicate_1_t7384 *, const MethodInfo*))List_1_GetIndex_m48172_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetEnumerator()
#define List_1_GetEnumerator_m48326(__this, method) (( Enumerator_t7385  (*) (List_1_t7381 *, const MethodInfo*))List_1_GetEnumerator_m48173_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m48327(__this, ___index, ___count, method) (( List_1_t7381 * (*) (List_1_t7381 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48174_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::IndexOf(T)
#define List_1_IndexOf_m48328(__this, ___item, method) (( int32_t (*) (List_1_t7381 *, KeyValuePair_2_t7201 , const MethodInfo*))List_1_IndexOf_m48175_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m48329(__this, ___start, ___delta, method) (( void (*) (List_1_t7381 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48176_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m48330(__this, ___index, method) (( void (*) (List_1_t7381 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48177_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Insert(System.Int32,T)
#define List_1_Insert_m48331(__this, ___index, ___item, method) (( void (*) (List_1_t7381 *, int32_t, KeyValuePair_2_t7201 , const MethodInfo*))List_1_Insert_m48178_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m48332(__this, ___collection, method) (( void (*) (List_1_t7381 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48179_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m48333(__this, ___index, ___collection, method) (( void (*) (List_1_t7381 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48180_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m48334(__this, ___index, ___collection, method) (( void (*) (List_1_t7381 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48181_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m48335(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7381 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48182_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Remove(T)
#define List_1_Remove_m48336(__this, ___item, method) (( bool (*) (List_1_t7381 *, KeyValuePair_2_t7201 , const MethodInfo*))List_1_Remove_m48183_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m48337(__this, ___match, method) (( int32_t (*) (List_1_t7381 *, Predicate_1_t7384 *, const MethodInfo*))List_1_RemoveAll_m48184_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m48338(__this, ___index, method) (( void (*) (List_1_t7381 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48185_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m48339(__this, ___index, ___count, method) (( void (*) (List_1_t7381 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48186_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Reverse()
#define List_1_Reverse_m48340(__this, method) (( void (*) (List_1_t7381 *, const MethodInfo*))List_1_Reverse_m48187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort()
#define List_1_Sort_m48341(__this, method) (( void (*) (List_1_t7381 *, const MethodInfo*))List_1_Sort_m48188_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m48342(__this, ___comparer, method) (( void (*) (List_1_t7381 *, Object_t*, const MethodInfo*))List_1_Sort_m48189_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m48343(__this, ___comparison, method) (( void (*) (List_1_t7381 *, Comparison_1_t7386 *, const MethodInfo*))List_1_Sort_m48190_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::ToArray()
#define List_1_ToArray_m48344(__this, method) (( KeyValuePair_2U5BU5D_t7380* (*) (List_1_t7381 *, const MethodInfo*))List_1_ToArray_m48191_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::TrimExcess()
#define List_1_TrimExcess_m48345(__this, method) (( void (*) (List_1_t7381 *, const MethodInfo*))List_1_TrimExcess_m48192_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Capacity()
#define List_1_get_Capacity_m48346(__this, method) (( int32_t (*) (List_1_t7381 *, const MethodInfo*))List_1_get_Capacity_m48193_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m48347(__this, ___value, method) (( void (*) (List_1_t7381 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48194_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Count()
#define List_1_get_Count_m48348(__this, method) (( int32_t (*) (List_1_t7381 *, const MethodInfo*))List_1_get_Count_m48195_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Item(System.Int32)
#define List_1_get_Item_m48349(__this, ___index, method) (( KeyValuePair_2_t7201  (*) (List_1_t7381 *, int32_t, const MethodInfo*))List_1_get_Item_m48196_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m48350(__this, ___index, ___value, method) (( void (*) (List_1_t7381 *, int32_t, KeyValuePair_2_t7201 , const MethodInfo*))List_1_set_Item_m48197_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct List_1_t8153;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerable_1_t10023;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8152;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7812;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ICollection_1_t10024;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ReadOnlyCollection_1_t8155;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t8156;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IComparer_1_t10025;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t8158;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_85.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_101MethodDeclarations.h"
#define List_1__ctor_m55300(__this, method) (( void (*) (List_1_t8153 *, const MethodInfo*))List_1__ctor_m55147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m55301(__this, ___collection, method) (( void (*) (List_1_t8153 *, Object_t*, const MethodInfo*))List_1__ctor_m55148_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Int32)
#define List_1__ctor_m55302(__this, ___capacity, method) (( void (*) (List_1_t8153 *, int32_t, const MethodInfo*))List_1__ctor_m55149_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m55303(__this, ___data, ___size, method) (( void (*) (List_1_t8153 *, KeyValuePair_2U5BU5D_t8152*, int32_t, const MethodInfo*))List_1__ctor_m55150_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.cctor()
#define List_1__cctor_m55304(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55151_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55305(__this, method) (( Object_t* (*) (List_1_t8153 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55152_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m55306(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8153 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55153_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55307(__this, method) (( Object_t * (*) (List_1_t8153 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55154_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m55308(__this, ___item, method) (( int32_t (*) (List_1_t8153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m55309(__this, ___item, method) (( bool (*) (List_1_t8153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55156_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m55310(__this, ___item, method) (( int32_t (*) (List_1_t8153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m55311(__this, ___index, ___item, method) (( void (*) (List_1_t8153 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55158_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m55312(__this, ___item, method) (( void (*) (List_1_t8153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55159_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55313(__this, method) (( bool (*) (List_1_t8153 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55160_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55314(__this, method) (( bool (*) (List_1_t8153 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55161_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m55315(__this, method) (( Object_t * (*) (List_1_t8153 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m55316(__this, method) (( bool (*) (List_1_t8153 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m55317(__this, method) (( bool (*) (List_1_t8153 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55164_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m55318(__this, ___index, method) (( Object_t * (*) (List_1_t8153 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55165_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m55319(__this, ___index, ___value, method) (( void (*) (List_1_t8153 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55166_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
#define List_1_Add_m55320(__this, ___item, method) (( void (*) (List_1_t8153 *, KeyValuePair_2_t6104 , const MethodInfo*))List_1_Add_m55167_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m55321(__this, ___newCount, method) (( void (*) (List_1_t8153 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55168_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m55322(__this, ___idx, ___count, method) (( void (*) (List_1_t8153 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55169_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m55323(__this, ___collection, method) (( void (*) (List_1_t8153 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55170_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m55324(__this, ___enumerable, method) (( void (*) (List_1_t8153 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55171_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m55325(__this, ___collection, method) (( void (*) (List_1_t8153 *, Object_t*, const MethodInfo*))List_1_AddRange_m55172_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AsReadOnly()
#define List_1_AsReadOnly_m55326(__this, method) (( ReadOnlyCollection_1_t8155 * (*) (List_1_t8153 *, const MethodInfo*))List_1_AsReadOnly_m55173_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
#define List_1_Clear_m55327(__this, method) (( void (*) (List_1_t8153 *, const MethodInfo*))List_1_Clear_m55174_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
#define List_1_Contains_m55328(__this, ___item, method) (( bool (*) (List_1_t8153 *, KeyValuePair_2_t6104 , const MethodInfo*))List_1_Contains_m55175_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m55329(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8153 *, KeyValuePair_2U5BU5D_t8152*, int32_t, const MethodInfo*))List_1_CopyTo_m55176_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m55330(__this, ___match, method) (( KeyValuePair_2_t6104  (*) (List_1_t8153 *, Predicate_1_t8156 *, const MethodInfo*))List_1_Find_m55177_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m55331(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8156 *, const MethodInfo*))List_1_CheckMatch_m55178_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m55332(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8153 *, int32_t, int32_t, Predicate_1_t8156 *, const MethodInfo*))List_1_GetIndex_m55179_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m55333(__this, method) (( Enumerator_t8157  (*) (List_1_t8153 *, const MethodInfo*))List_1_GetEnumerator_m55180_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m55334(__this, ___index, ___count, method) (( List_1_t8153 * (*) (List_1_t8153 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55181_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
#define List_1_IndexOf_m55335(__this, ___item, method) (( int32_t (*) (List_1_t8153 *, KeyValuePair_2_t6104 , const MethodInfo*))List_1_IndexOf_m55182_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m55336(__this, ___start, ___delta, method) (( void (*) (List_1_t8153 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55183_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m55337(__this, ___index, method) (( void (*) (List_1_t8153 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55184_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
#define List_1_Insert_m55338(__this, ___index, ___item, method) (( void (*) (List_1_t8153 *, int32_t, KeyValuePair_2_t6104 , const MethodInfo*))List_1_Insert_m55185_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m55339(__this, ___collection, method) (( void (*) (List_1_t8153 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55186_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m55340(__this, ___index, ___collection, method) (( void (*) (List_1_t8153 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55187_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m55341(__this, ___index, ___collection, method) (( void (*) (List_1_t8153 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55188_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m55342(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8153 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55189_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#define List_1_Remove_m55343(__this, ___item, method) (( bool (*) (List_1_t8153 *, KeyValuePair_2_t6104 , const MethodInfo*))List_1_Remove_m55190_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m55344(__this, ___match, method) (( int32_t (*) (List_1_t8153 *, Predicate_1_t8156 *, const MethodInfo*))List_1_RemoveAll_m55191_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m55345(__this, ___index, method) (( void (*) (List_1_t8153 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55192_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m55346(__this, ___index, ___count, method) (( void (*) (List_1_t8153 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55193_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Reverse()
#define List_1_Reverse_m55347(__this, method) (( void (*) (List_1_t8153 *, const MethodInfo*))List_1_Reverse_m55194_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort()
#define List_1_Sort_m55348(__this, method) (( void (*) (List_1_t8153 *, const MethodInfo*))List_1_Sort_m55195_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m55349(__this, ___comparer, method) (( void (*) (List_1_t8153 *, Object_t*, const MethodInfo*))List_1_Sort_m55196_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m55350(__this, ___comparison, method) (( void (*) (List_1_t8153 *, Comparison_1_t8158 *, const MethodInfo*))List_1_Sort_m55197_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::ToArray()
#define List_1_ToArray_m55351(__this, method) (( KeyValuePair_2U5BU5D_t8152* (*) (List_1_t8153 *, const MethodInfo*))List_1_ToArray_m55198_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::TrimExcess()
#define List_1_TrimExcess_m55352(__this, method) (( void (*) (List_1_t8153 *, const MethodInfo*))List_1_TrimExcess_m55199_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Capacity()
#define List_1_get_Capacity_m55353(__this, method) (( int32_t (*) (List_1_t8153 *, const MethodInfo*))List_1_get_Capacity_m55200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m55354(__this, ___value, method) (( void (*) (List_1_t8153 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55201_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
#define List_1_get_Count_m55355(__this, method) (( int32_t (*) (List_1_t8153 *, const MethodInfo*))List_1_get_Count_m55202_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
#define List_1_get_Item_m55356(__this, ___index, method) (( KeyValuePair_2_t6104  (*) (List_1_t8153 *, int32_t, const MethodInfo*))List_1_get_Item_m55203_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m55357(__this, ___index, ___value, method) (( void (*) (List_1_t8153 *, int32_t, KeyValuePair_2_t6104 , const MethodInfo*))List_1_set_Item_m55204_gshared)(__this, ___index, ___value, method)

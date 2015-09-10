#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct List_1_t8141;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerable_1_t7809;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8140;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7810;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ICollection_1_t10021;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ReadOnlyCollection_1_t8144;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Predicate_1_t8148;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IComparer_1_t10022;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t8151;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_84.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void List_1__ctor_m55147_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1__ctor_m55147(__this, method) (( void (*) (List_1_t8141 *, const MethodInfo*))List_1__ctor_m55147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55148_gshared (List_1_t8141 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55148(__this, ___collection, method) (( void (*) (List_1_t8141 *, Object_t*, const MethodInfo*))List_1__ctor_m55148_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55149_gshared (List_1_t8141 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55149(__this, ___capacity, method) (( void (*) (List_1_t8141 *, int32_t, const MethodInfo*))List_1__ctor_m55149_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55150_gshared (List_1_t8141 * __this, KeyValuePair_2U5BU5D_t8140* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55150(__this, ___data, ___size, method) (( void (*) (List_1_t8141 *, KeyValuePair_2U5BU5D_t8140*, int32_t, const MethodInfo*))List_1__ctor_m55150_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.cctor()
extern "C" void List_1__cctor_m55151_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55151(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55151_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55152_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55152(__this, method) (( Object_t* (*) (List_1_t8141 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55152_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55153_gshared (List_1_t8141 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55153(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8141 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55153_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55154_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55154(__this, method) (( Object_t * (*) (List_1_t8141 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55154_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55155_gshared (List_1_t8141 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55155(__this, ___item, method) (( int32_t (*) (List_1_t8141 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55156_gshared (List_1_t8141 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55156(__this, ___item, method) (( bool (*) (List_1_t8141 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55156_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55157_gshared (List_1_t8141 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55157(__this, ___item, method) (( int32_t (*) (List_1_t8141 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55157_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55158_gshared (List_1_t8141 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55158(__this, ___index, ___item, method) (( void (*) (List_1_t8141 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55158_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55159_gshared (List_1_t8141 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55159(__this, ___item, method) (( void (*) (List_1_t8141 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55159_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55160_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55160(__this, method) (( bool (*) (List_1_t8141 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55160_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55161_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55161(__this, method) (( bool (*) (List_1_t8141 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55161_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55162_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55162(__this, method) (( Object_t * (*) (List_1_t8141 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55163_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55163(__this, method) (( bool (*) (List_1_t8141 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55164_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55164(__this, method) (( bool (*) (List_1_t8141 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55164_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55165_gshared (List_1_t8141 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55165(__this, ___index, method) (( Object_t * (*) (List_1_t8141 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55165_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55166_gshared (List_1_t8141 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55166(__this, ___index, ___value, method) (( void (*) (List_1_t8141 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55166_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
extern "C" void List_1_Add_m55167_gshared (List_1_t8141 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define List_1_Add_m55167(__this, ___item, method) (( void (*) (List_1_t8141 *, KeyValuePair_2_t6093 , const MethodInfo*))List_1_Add_m55167_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55168_gshared (List_1_t8141 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55168(__this, ___newCount, method) (( void (*) (List_1_t8141 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55168_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55169_gshared (List_1_t8141 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55169(__this, ___idx, ___count, method) (( void (*) (List_1_t8141 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55169_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55170_gshared (List_1_t8141 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55170(__this, ___collection, method) (( void (*) (List_1_t8141 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55170_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55171_gshared (List_1_t8141 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55171(__this, ___enumerable, method) (( void (*) (List_1_t8141 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55171_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55172_gshared (List_1_t8141 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55172(__this, ___collection, method) (( void (*) (List_1_t8141 *, Object_t*, const MethodInfo*))List_1_AddRange_m55172_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8144 * List_1_AsReadOnly_m55173_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55173(__this, method) (( ReadOnlyCollection_1_t8144 * (*) (List_1_t8141 *, const MethodInfo*))List_1_AsReadOnly_m55173_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
extern "C" void List_1_Clear_m55174_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_Clear_m55174(__this, method) (( void (*) (List_1_t8141 *, const MethodInfo*))List_1_Clear_m55174_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
extern "C" bool List_1_Contains_m55175_gshared (List_1_t8141 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define List_1_Contains_m55175(__this, ___item, method) (( bool (*) (List_1_t8141 *, KeyValuePair_2_t6093 , const MethodInfo*))List_1_Contains_m55175_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55176_gshared (List_1_t8141 * __this, KeyValuePair_2U5BU5D_t8140* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55176(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8141 *, KeyValuePair_2U5BU5D_t8140*, int32_t, const MethodInfo*))List_1_CopyTo_m55176_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6093  List_1_Find_m55177_gshared (List_1_t8141 * __this, Predicate_1_t8148 * ___match, const MethodInfo* method);
#define List_1_Find_m55177(__this, ___match, method) (( KeyValuePair_2_t6093  (*) (List_1_t8141 *, Predicate_1_t8148 *, const MethodInfo*))List_1_Find_m55177_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55178_gshared (Object_t * __this /* static, unused */, Predicate_1_t8148 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55178(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8148 *, const MethodInfo*))List_1_CheckMatch_m55178_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55179_gshared (List_1_t8141 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8148 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55179(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8141 *, int32_t, int32_t, Predicate_1_t8148 *, const MethodInfo*))List_1_GetIndex_m55179_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
extern "C" Enumerator_t8142  List_1_GetEnumerator_m55180_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55180(__this, method) (( Enumerator_t8142  (*) (List_1_t8141 *, const MethodInfo*))List_1_GetEnumerator_m55180_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8141 * List_1_GetRange_m55181_gshared (List_1_t8141 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55181(__this, ___index, ___count, method) (( List_1_t8141 * (*) (List_1_t8141 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55181_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55182_gshared (List_1_t8141 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55182(__this, ___item, method) (( int32_t (*) (List_1_t8141 *, KeyValuePair_2_t6093 , const MethodInfo*))List_1_IndexOf_m55182_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55183_gshared (List_1_t8141 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55183(__this, ___start, ___delta, method) (( void (*) (List_1_t8141 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55183_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55184_gshared (List_1_t8141 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55184(__this, ___index, method) (( void (*) (List_1_t8141 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55184_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55185_gshared (List_1_t8141 * __this, int32_t ___index, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define List_1_Insert_m55185(__this, ___index, ___item, method) (( void (*) (List_1_t8141 *, int32_t, KeyValuePair_2_t6093 , const MethodInfo*))List_1_Insert_m55185_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55186_gshared (List_1_t8141 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55186(__this, ___collection, method) (( void (*) (List_1_t8141 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55186_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55187_gshared (List_1_t8141 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55187(__this, ___index, ___collection, method) (( void (*) (List_1_t8141 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55187_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55188_gshared (List_1_t8141 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55188(__this, ___index, ___collection, method) (( void (*) (List_1_t8141 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55188_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55189_gshared (List_1_t8141 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55189(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8141 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55189_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
extern "C" bool List_1_Remove_m55190_gshared (List_1_t8141 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define List_1_Remove_m55190(__this, ___item, method) (( bool (*) (List_1_t8141 *, KeyValuePair_2_t6093 , const MethodInfo*))List_1_Remove_m55190_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55191_gshared (List_1_t8141 * __this, Predicate_1_t8148 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55191(__this, ___match, method) (( int32_t (*) (List_1_t8141 *, Predicate_1_t8148 *, const MethodInfo*))List_1_RemoveAll_m55191_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55192_gshared (List_1_t8141 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55192(__this, ___index, method) (( void (*) (List_1_t8141 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55192_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55193_gshared (List_1_t8141 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55193(__this, ___index, ___count, method) (( void (*) (List_1_t8141 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55193_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Reverse()
extern "C" void List_1_Reverse_m55194_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_Reverse_m55194(__this, method) (( void (*) (List_1_t8141 *, const MethodInfo*))List_1_Reverse_m55194_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort()
extern "C" void List_1_Sort_m55195_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_Sort_m55195(__this, method) (( void (*) (List_1_t8141 *, const MethodInfo*))List_1_Sort_m55195_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55196_gshared (List_1_t8141 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55196(__this, ___comparer, method) (( void (*) (List_1_t8141 *, Object_t*, const MethodInfo*))List_1_Sort_m55196_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55197_gshared (List_1_t8141 * __this, Comparison_1_t8151 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55197(__this, ___comparison, method) (( void (*) (List_1_t8141 *, Comparison_1_t8151 *, const MethodInfo*))List_1_Sort_m55197_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8140* List_1_ToArray_m55198_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_ToArray_m55198(__this, method) (( KeyValuePair_2U5BU5D_t8140* (*) (List_1_t8141 *, const MethodInfo*))List_1_ToArray_m55198_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55199_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55199(__this, method) (( void (*) (List_1_t8141 *, const MethodInfo*))List_1_TrimExcess_m55199_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55200_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55200(__this, method) (( int32_t (*) (List_1_t8141 *, const MethodInfo*))List_1_get_Capacity_m55200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55201_gshared (List_1_t8141 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55201(__this, ___value, method) (( void (*) (List_1_t8141 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55201_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
extern "C" int32_t List_1_get_Count_m55202_gshared (List_1_t8141 * __this, const MethodInfo* method);
#define List_1_get_Count_m55202(__this, method) (( int32_t (*) (List_1_t8141 *, const MethodInfo*))List_1_get_Count_m55202_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6093  List_1_get_Item_m55203_gshared (List_1_t8141 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55203(__this, ___index, method) (( KeyValuePair_2_t6093  (*) (List_1_t8141 *, int32_t, const MethodInfo*))List_1_get_Item_m55203_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55204_gshared (List_1_t8141 * __this, int32_t ___index, KeyValuePair_2_t6093  ___value, const MethodInfo* method);
#define List_1_set_Item_m55204(__this, ___index, ___value, method) (( void (*) (List_1_t8141 *, int32_t, KeyValuePair_2_t6093 , const MethodInfo*))List_1_set_Item_m55204_gshared)(__this, ___index, ___value, method)

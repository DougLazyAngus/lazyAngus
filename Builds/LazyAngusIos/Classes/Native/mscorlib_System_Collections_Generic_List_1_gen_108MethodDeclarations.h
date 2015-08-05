#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct List_1_t7931;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerable_1_t7922;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t7930;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7923;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ICollection_1_t9322;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ReadOnlyCollection_1_t7934;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Predicate_1_t7938;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IComparer_1_t9323;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Comparison_1_t7941;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_91.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void List_1__ctor_m55136_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1__ctor_m55136(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1__ctor_m55136_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55137_gshared (List_1_t7931 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55137(__this, ___collection, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1__ctor_m55137_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55138_gshared (List_1_t7931 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55138(__this, ___capacity, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1__ctor_m55138_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55139_gshared (List_1_t7931 * __this, KeyValuePair_2U5BU5D_t7930* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55139(__this, ___data, ___size, method) (( void (*) (List_1_t7931 *, KeyValuePair_2U5BU5D_t7930*, int32_t, const MethodInfo*))List_1__ctor_m55139_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.cctor()
extern "C" void List_1__cctor_m55140_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55140(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55140_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55141_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55141(__this, method) (( Object_t* (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55141_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55142_gshared (List_1_t7931 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55142(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7931 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55142_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55143_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55143(__this, method) (( Object_t * (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55143_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55144_gshared (List_1_t7931 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55144(__this, ___item, method) (( int32_t (*) (List_1_t7931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55144_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55145_gshared (List_1_t7931 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55145(__this, ___item, method) (( bool (*) (List_1_t7931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55145_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55146_gshared (List_1_t7931 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55146(__this, ___item, method) (( int32_t (*) (List_1_t7931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55146_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55147_gshared (List_1_t7931 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55147(__this, ___index, ___item, method) (( void (*) (List_1_t7931 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55147_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55148_gshared (List_1_t7931 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55148(__this, ___item, method) (( void (*) (List_1_t7931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55148_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55149_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55149(__this, method) (( bool (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55149_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55150_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55150(__this, method) (( bool (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55150_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55151_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55151(__this, method) (( Object_t * (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55151_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55152_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55152(__this, method) (( bool (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55152_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55153_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55153(__this, method) (( bool (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55153_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55154_gshared (List_1_t7931 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55154(__this, ___index, method) (( Object_t * (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55154_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55155_gshared (List_1_t7931 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55155(__this, ___index, ___value, method) (( void (*) (List_1_t7931 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55155_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Add(T)
extern "C" void List_1_Add_m55156_gshared (List_1_t7931 * __this, KeyValuePair_2_t6956  ___item, const MethodInfo* method);
#define List_1_Add_m55156(__this, ___item, method) (( void (*) (List_1_t7931 *, KeyValuePair_2_t6956 , const MethodInfo*))List_1_Add_m55156_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55157_gshared (List_1_t7931 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55157(__this, ___newCount, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55157_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55158_gshared (List_1_t7931 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55158(__this, ___idx, ___count, method) (( void (*) (List_1_t7931 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55158_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55159_gshared (List_1_t7931 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55159(__this, ___collection, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55159_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55160_gshared (List_1_t7931 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55160(__this, ___enumerable, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55160_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55161_gshared (List_1_t7931 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55161(__this, ___collection, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_AddRange_m55161_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7934 * List_1_AsReadOnly_m55162_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55162(__this, method) (( ReadOnlyCollection_1_t7934 * (*) (List_1_t7931 *, const MethodInfo*))List_1_AsReadOnly_m55162_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Clear()
extern "C" void List_1_Clear_m55163_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_Clear_m55163(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1_Clear_m55163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Contains(T)
extern "C" bool List_1_Contains_m55164_gshared (List_1_t7931 * __this, KeyValuePair_2_t6956  ___item, const MethodInfo* method);
#define List_1_Contains_m55164(__this, ___item, method) (( bool (*) (List_1_t7931 *, KeyValuePair_2_t6956 , const MethodInfo*))List_1_Contains_m55164_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55165_gshared (List_1_t7931 * __this, KeyValuePair_2U5BU5D_t7930* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55165(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7931 *, KeyValuePair_2U5BU5D_t7930*, int32_t, const MethodInfo*))List_1_CopyTo_m55165_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6956  List_1_Find_m55166_gshared (List_1_t7931 * __this, Predicate_1_t7938 * ___match, const MethodInfo* method);
#define List_1_Find_m55166(__this, ___match, method) (( KeyValuePair_2_t6956  (*) (List_1_t7931 *, Predicate_1_t7938 *, const MethodInfo*))List_1_Find_m55166_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55167_gshared (Object_t * __this /* static, unused */, Predicate_1_t7938 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55167(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7938 *, const MethodInfo*))List_1_CheckMatch_m55167_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55168_gshared (List_1_t7931 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7938 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55168(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7931 *, int32_t, int32_t, Predicate_1_t7938 *, const MethodInfo*))List_1_GetIndex_m55168_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetEnumerator()
extern "C" Enumerator_t7932  List_1_GetEnumerator_m55169_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55169(__this, method) (( Enumerator_t7932  (*) (List_1_t7931 *, const MethodInfo*))List_1_GetEnumerator_m55169_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7931 * List_1_GetRange_m55170_gshared (List_1_t7931 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55170(__this, ___index, ___count, method) (( List_1_t7931 * (*) (List_1_t7931 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55170_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55171_gshared (List_1_t7931 * __this, KeyValuePair_2_t6956  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55171(__this, ___item, method) (( int32_t (*) (List_1_t7931 *, KeyValuePair_2_t6956 , const MethodInfo*))List_1_IndexOf_m55171_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55172_gshared (List_1_t7931 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55172(__this, ___start, ___delta, method) (( void (*) (List_1_t7931 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55172_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55173_gshared (List_1_t7931 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55173(__this, ___index, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55174_gshared (List_1_t7931 * __this, int32_t ___index, KeyValuePair_2_t6956  ___item, const MethodInfo* method);
#define List_1_Insert_m55174(__this, ___index, ___item, method) (( void (*) (List_1_t7931 *, int32_t, KeyValuePair_2_t6956 , const MethodInfo*))List_1_Insert_m55174_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55175_gshared (List_1_t7931 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55175(__this, ___collection, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55175_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55176_gshared (List_1_t7931 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55176(__this, ___index, ___collection, method) (( void (*) (List_1_t7931 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55176_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55177_gshared (List_1_t7931 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55177(__this, ___index, ___collection, method) (( void (*) (List_1_t7931 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55177_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55178_gshared (List_1_t7931 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55178(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7931 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55178_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Remove(T)
extern "C" bool List_1_Remove_m55179_gshared (List_1_t7931 * __this, KeyValuePair_2_t6956  ___item, const MethodInfo* method);
#define List_1_Remove_m55179(__this, ___item, method) (( bool (*) (List_1_t7931 *, KeyValuePair_2_t6956 , const MethodInfo*))List_1_Remove_m55179_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55180_gshared (List_1_t7931 * __this, Predicate_1_t7938 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55180(__this, ___match, method) (( int32_t (*) (List_1_t7931 *, Predicate_1_t7938 *, const MethodInfo*))List_1_RemoveAll_m55180_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55181_gshared (List_1_t7931 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55181(__this, ___index, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55181_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55182_gshared (List_1_t7931 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55182(__this, ___index, ___count, method) (( void (*) (List_1_t7931 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55182_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Reverse()
extern "C" void List_1_Reverse_m55183_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_Reverse_m55183(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1_Reverse_m55183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort()
extern "C" void List_1_Sort_m55184_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_Sort_m55184(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1_Sort_m55184_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55185_gshared (List_1_t7931 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55185(__this, ___comparer, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_Sort_m55185_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55186_gshared (List_1_t7931 * __this, Comparison_1_t7941 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55186(__this, ___comparison, method) (( void (*) (List_1_t7931 *, Comparison_1_t7941 *, const MethodInfo*))List_1_Sort_m55186_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7930* List_1_ToArray_m55187_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_ToArray_m55187(__this, method) (( KeyValuePair_2U5BU5D_t7930* (*) (List_1_t7931 *, const MethodInfo*))List_1_ToArray_m55187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55188_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55188(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1_TrimExcess_m55188_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55189_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55189(__this, method) (( int32_t (*) (List_1_t7931 *, const MethodInfo*))List_1_get_Capacity_m55189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55190_gshared (List_1_t7931 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55190(__this, ___value, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55190_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Count()
extern "C" int32_t List_1_get_Count_m55191_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_get_Count_m55191(__this, method) (( int32_t (*) (List_1_t7931 *, const MethodInfo*))List_1_get_Count_m55191_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6956  List_1_get_Item_m55192_gshared (List_1_t7931 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55192(__this, ___index, method) (( KeyValuePair_2_t6956  (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_get_Item_m55192_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55193_gshared (List_1_t7931 * __this, int32_t ___index, KeyValuePair_2_t6956  ___value, const MethodInfo* method);
#define List_1_set_Item_m55193(__this, ___index, ___value, method) (( void (*) (List_1_t7931 *, int32_t, KeyValuePair_2_t6956 , const MethodInfo*))List_1_set_Item_m55193_gshared)(__this, ___index, ___value, method)

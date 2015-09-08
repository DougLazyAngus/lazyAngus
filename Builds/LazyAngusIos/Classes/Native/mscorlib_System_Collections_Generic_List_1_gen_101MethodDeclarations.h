#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct List_1_t8129;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerable_1_t7797;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8128;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7798;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ICollection_1_t10009;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ReadOnlyCollection_1_t8132;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Predicate_1_t8136;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IComparer_1_t10010;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t8139;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_84.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void List_1__ctor_m55078_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1__ctor_m55078(__this, method) (( void (*) (List_1_t8129 *, const MethodInfo*))List_1__ctor_m55078_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55079_gshared (List_1_t8129 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55079(__this, ___collection, method) (( void (*) (List_1_t8129 *, Object_t*, const MethodInfo*))List_1__ctor_m55079_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55080_gshared (List_1_t8129 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55080(__this, ___capacity, method) (( void (*) (List_1_t8129 *, int32_t, const MethodInfo*))List_1__ctor_m55080_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55081_gshared (List_1_t8129 * __this, KeyValuePair_2U5BU5D_t8128* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55081(__this, ___data, ___size, method) (( void (*) (List_1_t8129 *, KeyValuePair_2U5BU5D_t8128*, int32_t, const MethodInfo*))List_1__ctor_m55081_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.cctor()
extern "C" void List_1__cctor_m55082_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55082(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55082_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55083_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55083(__this, method) (( Object_t* (*) (List_1_t8129 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55083_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55084_gshared (List_1_t8129 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55084(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8129 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55084_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55085_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55085(__this, method) (( Object_t * (*) (List_1_t8129 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55085_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55086_gshared (List_1_t8129 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55086(__this, ___item, method) (( int32_t (*) (List_1_t8129 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55086_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55087_gshared (List_1_t8129 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55087(__this, ___item, method) (( bool (*) (List_1_t8129 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55088_gshared (List_1_t8129 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55088(__this, ___item, method) (( int32_t (*) (List_1_t8129 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55088_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55089_gshared (List_1_t8129 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55089(__this, ___index, ___item, method) (( void (*) (List_1_t8129 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55089_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55090_gshared (List_1_t8129 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55090(__this, ___item, method) (( void (*) (List_1_t8129 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55090_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55091_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55091(__this, method) (( bool (*) (List_1_t8129 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55091_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55092_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55092(__this, method) (( bool (*) (List_1_t8129 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55092_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55093_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55093(__this, method) (( Object_t * (*) (List_1_t8129 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55094_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55094(__this, method) (( bool (*) (List_1_t8129 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55094_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55095_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55095(__this, method) (( bool (*) (List_1_t8129 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55095_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55096_gshared (List_1_t8129 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55096(__this, ___index, method) (( Object_t * (*) (List_1_t8129 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55096_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55097_gshared (List_1_t8129 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55097(__this, ___index, ___value, method) (( void (*) (List_1_t8129 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55097_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
extern "C" void List_1_Add_m55098_gshared (List_1_t8129 * __this, KeyValuePair_2_t6083  ___item, const MethodInfo* method);
#define List_1_Add_m55098(__this, ___item, method) (( void (*) (List_1_t8129 *, KeyValuePair_2_t6083 , const MethodInfo*))List_1_Add_m55098_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55099_gshared (List_1_t8129 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55099(__this, ___newCount, method) (( void (*) (List_1_t8129 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55099_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55100_gshared (List_1_t8129 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55100(__this, ___idx, ___count, method) (( void (*) (List_1_t8129 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55100_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55101_gshared (List_1_t8129 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55101(__this, ___collection, method) (( void (*) (List_1_t8129 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55101_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55102_gshared (List_1_t8129 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55102(__this, ___enumerable, method) (( void (*) (List_1_t8129 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55102_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55103_gshared (List_1_t8129 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55103(__this, ___collection, method) (( void (*) (List_1_t8129 *, Object_t*, const MethodInfo*))List_1_AddRange_m55103_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8132 * List_1_AsReadOnly_m55104_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55104(__this, method) (( ReadOnlyCollection_1_t8132 * (*) (List_1_t8129 *, const MethodInfo*))List_1_AsReadOnly_m55104_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
extern "C" void List_1_Clear_m55105_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_Clear_m55105(__this, method) (( void (*) (List_1_t8129 *, const MethodInfo*))List_1_Clear_m55105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
extern "C" bool List_1_Contains_m55106_gshared (List_1_t8129 * __this, KeyValuePair_2_t6083  ___item, const MethodInfo* method);
#define List_1_Contains_m55106(__this, ___item, method) (( bool (*) (List_1_t8129 *, KeyValuePair_2_t6083 , const MethodInfo*))List_1_Contains_m55106_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55107_gshared (List_1_t8129 * __this, KeyValuePair_2U5BU5D_t8128* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55107(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8129 *, KeyValuePair_2U5BU5D_t8128*, int32_t, const MethodInfo*))List_1_CopyTo_m55107_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6083  List_1_Find_m55108_gshared (List_1_t8129 * __this, Predicate_1_t8136 * ___match, const MethodInfo* method);
#define List_1_Find_m55108(__this, ___match, method) (( KeyValuePair_2_t6083  (*) (List_1_t8129 *, Predicate_1_t8136 *, const MethodInfo*))List_1_Find_m55108_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55109_gshared (Object_t * __this /* static, unused */, Predicate_1_t8136 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55109(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8136 *, const MethodInfo*))List_1_CheckMatch_m55109_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55110_gshared (List_1_t8129 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8136 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55110(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8129 *, int32_t, int32_t, Predicate_1_t8136 *, const MethodInfo*))List_1_GetIndex_m55110_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
extern "C" Enumerator_t8130  List_1_GetEnumerator_m55111_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55111(__this, method) (( Enumerator_t8130  (*) (List_1_t8129 *, const MethodInfo*))List_1_GetEnumerator_m55111_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8129 * List_1_GetRange_m55112_gshared (List_1_t8129 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55112(__this, ___index, ___count, method) (( List_1_t8129 * (*) (List_1_t8129 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55112_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55113_gshared (List_1_t8129 * __this, KeyValuePair_2_t6083  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55113(__this, ___item, method) (( int32_t (*) (List_1_t8129 *, KeyValuePair_2_t6083 , const MethodInfo*))List_1_IndexOf_m55113_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55114_gshared (List_1_t8129 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55114(__this, ___start, ___delta, method) (( void (*) (List_1_t8129 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55114_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55115_gshared (List_1_t8129 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55115(__this, ___index, method) (( void (*) (List_1_t8129 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55115_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55116_gshared (List_1_t8129 * __this, int32_t ___index, KeyValuePair_2_t6083  ___item, const MethodInfo* method);
#define List_1_Insert_m55116(__this, ___index, ___item, method) (( void (*) (List_1_t8129 *, int32_t, KeyValuePair_2_t6083 , const MethodInfo*))List_1_Insert_m55116_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55117_gshared (List_1_t8129 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55117(__this, ___collection, method) (( void (*) (List_1_t8129 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55117_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55118_gshared (List_1_t8129 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55118(__this, ___index, ___collection, method) (( void (*) (List_1_t8129 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55118_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55119_gshared (List_1_t8129 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55119(__this, ___index, ___collection, method) (( void (*) (List_1_t8129 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55119_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55120_gshared (List_1_t8129 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55120(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8129 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55120_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
extern "C" bool List_1_Remove_m55121_gshared (List_1_t8129 * __this, KeyValuePair_2_t6083  ___item, const MethodInfo* method);
#define List_1_Remove_m55121(__this, ___item, method) (( bool (*) (List_1_t8129 *, KeyValuePair_2_t6083 , const MethodInfo*))List_1_Remove_m55121_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55122_gshared (List_1_t8129 * __this, Predicate_1_t8136 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55122(__this, ___match, method) (( int32_t (*) (List_1_t8129 *, Predicate_1_t8136 *, const MethodInfo*))List_1_RemoveAll_m55122_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55123_gshared (List_1_t8129 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55123(__this, ___index, method) (( void (*) (List_1_t8129 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55123_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55124_gshared (List_1_t8129 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55124(__this, ___index, ___count, method) (( void (*) (List_1_t8129 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55124_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Reverse()
extern "C" void List_1_Reverse_m55125_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_Reverse_m55125(__this, method) (( void (*) (List_1_t8129 *, const MethodInfo*))List_1_Reverse_m55125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort()
extern "C" void List_1_Sort_m55126_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_Sort_m55126(__this, method) (( void (*) (List_1_t8129 *, const MethodInfo*))List_1_Sort_m55126_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55127_gshared (List_1_t8129 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55127(__this, ___comparer, method) (( void (*) (List_1_t8129 *, Object_t*, const MethodInfo*))List_1_Sort_m55127_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55128_gshared (List_1_t8129 * __this, Comparison_1_t8139 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55128(__this, ___comparison, method) (( void (*) (List_1_t8129 *, Comparison_1_t8139 *, const MethodInfo*))List_1_Sort_m55128_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8128* List_1_ToArray_m55129_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_ToArray_m55129(__this, method) (( KeyValuePair_2U5BU5D_t8128* (*) (List_1_t8129 *, const MethodInfo*))List_1_ToArray_m55129_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55130_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55130(__this, method) (( void (*) (List_1_t8129 *, const MethodInfo*))List_1_TrimExcess_m55130_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55131_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55131(__this, method) (( int32_t (*) (List_1_t8129 *, const MethodInfo*))List_1_get_Capacity_m55131_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55132_gshared (List_1_t8129 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55132(__this, ___value, method) (( void (*) (List_1_t8129 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55132_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
extern "C" int32_t List_1_get_Count_m55133_gshared (List_1_t8129 * __this, const MethodInfo* method);
#define List_1_get_Count_m55133(__this, method) (( int32_t (*) (List_1_t8129 *, const MethodInfo*))List_1_get_Count_m55133_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6083  List_1_get_Item_m55134_gshared (List_1_t8129 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55134(__this, ___index, method) (( KeyValuePair_2_t6083  (*) (List_1_t8129 *, int32_t, const MethodInfo*))List_1_get_Item_m55134_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55135_gshared (List_1_t8129 * __this, int32_t ___index, KeyValuePair_2_t6083  ___value, const MethodInfo* method);
#define List_1_set_Item_m55135(__this, ___index, ___value, method) (( void (*) (List_1_t8129 *, int32_t, KeyValuePair_2_t6083 , const MethodInfo*))List_1_set_Item_m55135_gshared)(__this, ___index, ___value, method)

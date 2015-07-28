#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct List_1_t7476;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerable_1_t7144;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7475;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7145;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ICollection_1_t9273;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ReadOnlyCollection_1_t7479;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Predicate_1_t7483;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IComparer_1_t9274;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t7486;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_77.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void List_1__ctor_m49603_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1__ctor_m49603(__this, method) (( void (*) (List_1_t7476 *, const MethodInfo*))List_1__ctor_m49603_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m49604_gshared (List_1_t7476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m49604(__this, ___collection, method) (( void (*) (List_1_t7476 *, Object_t*, const MethodInfo*))List_1__ctor_m49604_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m49605_gshared (List_1_t7476 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m49605(__this, ___capacity, method) (( void (*) (List_1_t7476 *, int32_t, const MethodInfo*))List_1__ctor_m49605_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m49606_gshared (List_1_t7476 * __this, KeyValuePair_2U5BU5D_t7475* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m49606(__this, ___data, ___size, method) (( void (*) (List_1_t7476 *, KeyValuePair_2U5BU5D_t7475*, int32_t, const MethodInfo*))List_1__ctor_m49606_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.cctor()
extern "C" void List_1__cctor_m49607_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m49607(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49607_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49608_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49608(__this, method) (( Object_t* (*) (List_1_t7476 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49608_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m49609_gshared (List_1_t7476 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m49609(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7476 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49609_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m49610_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49610(__this, method) (( Object_t * (*) (List_1_t7476 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49610_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m49611_gshared (List_1_t7476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m49611(__this, ___item, method) (( int32_t (*) (List_1_t7476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49611_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m49612_gshared (List_1_t7476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m49612(__this, ___item, method) (( bool (*) (List_1_t7476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49612_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m49613_gshared (List_1_t7476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m49613(__this, ___item, method) (( int32_t (*) (List_1_t7476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49613_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m49614_gshared (List_1_t7476 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m49614(__this, ___index, ___item, method) (( void (*) (List_1_t7476 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49614_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m49615_gshared (List_1_t7476 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m49615(__this, ___item, method) (( void (*) (List_1_t7476 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49615_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49616_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49616(__this, method) (( bool (*) (List_1_t7476 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m49617_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49617(__this, method) (( bool (*) (List_1_t7476 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49617_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m49618_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m49618(__this, method) (( Object_t * (*) (List_1_t7476 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49618_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m49619_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m49619(__this, method) (( bool (*) (List_1_t7476 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m49620_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m49620(__this, method) (( bool (*) (List_1_t7476 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49620_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m49621_gshared (List_1_t7476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m49621(__this, ___index, method) (( Object_t * (*) (List_1_t7476 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49621_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m49622_gshared (List_1_t7476 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m49622(__this, ___index, ___value, method) (( void (*) (List_1_t7476 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49622_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
extern "C" void List_1_Add_m49623_gshared (List_1_t7476 * __this, KeyValuePair_2_t5477  ___item, const MethodInfo* method);
#define List_1_Add_m49623(__this, ___item, method) (( void (*) (List_1_t7476 *, KeyValuePair_2_t5477 , const MethodInfo*))List_1_Add_m49623_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m49624_gshared (List_1_t7476 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m49624(__this, ___newCount, method) (( void (*) (List_1_t7476 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49624_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m49625_gshared (List_1_t7476 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m49625(__this, ___idx, ___count, method) (( void (*) (List_1_t7476 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49625_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m49626_gshared (List_1_t7476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m49626(__this, ___collection, method) (( void (*) (List_1_t7476 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49626_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m49627_gshared (List_1_t7476 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m49627(__this, ___enumerable, method) (( void (*) (List_1_t7476 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49627_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m49628_gshared (List_1_t7476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m49628(__this, ___collection, method) (( void (*) (List_1_t7476 *, Object_t*, const MethodInfo*))List_1_AddRange_m49628_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7479 * List_1_AsReadOnly_m49629_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m49629(__this, method) (( ReadOnlyCollection_1_t7479 * (*) (List_1_t7476 *, const MethodInfo*))List_1_AsReadOnly_m49629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
extern "C" void List_1_Clear_m49630_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_Clear_m49630(__this, method) (( void (*) (List_1_t7476 *, const MethodInfo*))List_1_Clear_m49630_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
extern "C" bool List_1_Contains_m49631_gshared (List_1_t7476 * __this, KeyValuePair_2_t5477  ___item, const MethodInfo* method);
#define List_1_Contains_m49631(__this, ___item, method) (( bool (*) (List_1_t7476 *, KeyValuePair_2_t5477 , const MethodInfo*))List_1_Contains_m49631_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m49632_gshared (List_1_t7476 * __this, KeyValuePair_2U5BU5D_t7475* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m49632(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7476 *, KeyValuePair_2U5BU5D_t7475*, int32_t, const MethodInfo*))List_1_CopyTo_m49632_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t5477  List_1_Find_m49633_gshared (List_1_t7476 * __this, Predicate_1_t7483 * ___match, const MethodInfo* method);
#define List_1_Find_m49633(__this, ___match, method) (( KeyValuePair_2_t5477  (*) (List_1_t7476 *, Predicate_1_t7483 *, const MethodInfo*))List_1_Find_m49633_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m49634_gshared (Object_t * __this /* static, unused */, Predicate_1_t7483 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m49634(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7483 *, const MethodInfo*))List_1_CheckMatch_m49634_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m49635_gshared (List_1_t7476 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7483 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m49635(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7476 *, int32_t, int32_t, Predicate_1_t7483 *, const MethodInfo*))List_1_GetIndex_m49635_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
extern "C" Enumerator_t7477  List_1_GetEnumerator_m49636_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m49636(__this, method) (( Enumerator_t7477  (*) (List_1_t7476 *, const MethodInfo*))List_1_GetEnumerator_m49636_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7476 * List_1_GetRange_m49637_gshared (List_1_t7476 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m49637(__this, ___index, ___count, method) (( List_1_t7476 * (*) (List_1_t7476 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49637_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m49638_gshared (List_1_t7476 * __this, KeyValuePair_2_t5477  ___item, const MethodInfo* method);
#define List_1_IndexOf_m49638(__this, ___item, method) (( int32_t (*) (List_1_t7476 *, KeyValuePair_2_t5477 , const MethodInfo*))List_1_IndexOf_m49638_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m49639_gshared (List_1_t7476 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m49639(__this, ___start, ___delta, method) (( void (*) (List_1_t7476 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49639_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m49640_gshared (List_1_t7476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m49640(__this, ___index, method) (( void (*) (List_1_t7476 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49640_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m49641_gshared (List_1_t7476 * __this, int32_t ___index, KeyValuePair_2_t5477  ___item, const MethodInfo* method);
#define List_1_Insert_m49641(__this, ___index, ___item, method) (( void (*) (List_1_t7476 *, int32_t, KeyValuePair_2_t5477 , const MethodInfo*))List_1_Insert_m49641_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m49642_gshared (List_1_t7476 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m49642(__this, ___collection, method) (( void (*) (List_1_t7476 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49642_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m49643_gshared (List_1_t7476 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m49643(__this, ___index, ___collection, method) (( void (*) (List_1_t7476 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49643_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m49644_gshared (List_1_t7476 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m49644(__this, ___index, ___collection, method) (( void (*) (List_1_t7476 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m49645_gshared (List_1_t7476 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m49645(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7476 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49645_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
extern "C" bool List_1_Remove_m49646_gshared (List_1_t7476 * __this, KeyValuePair_2_t5477  ___item, const MethodInfo* method);
#define List_1_Remove_m49646(__this, ___item, method) (( bool (*) (List_1_t7476 *, KeyValuePair_2_t5477 , const MethodInfo*))List_1_Remove_m49646_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m49647_gshared (List_1_t7476 * __this, Predicate_1_t7483 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m49647(__this, ___match, method) (( int32_t (*) (List_1_t7476 *, Predicate_1_t7483 *, const MethodInfo*))List_1_RemoveAll_m49647_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m49648_gshared (List_1_t7476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m49648(__this, ___index, method) (( void (*) (List_1_t7476 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49648_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m49649_gshared (List_1_t7476 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m49649(__this, ___index, ___count, method) (( void (*) (List_1_t7476 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49649_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Reverse()
extern "C" void List_1_Reverse_m49650_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_Reverse_m49650(__this, method) (( void (*) (List_1_t7476 *, const MethodInfo*))List_1_Reverse_m49650_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort()
extern "C" void List_1_Sort_m49651_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_Sort_m49651(__this, method) (( void (*) (List_1_t7476 *, const MethodInfo*))List_1_Sort_m49651_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m49652_gshared (List_1_t7476 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m49652(__this, ___comparer, method) (( void (*) (List_1_t7476 *, Object_t*, const MethodInfo*))List_1_Sort_m49652_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m49653_gshared (List_1_t7476 * __this, Comparison_1_t7486 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m49653(__this, ___comparison, method) (( void (*) (List_1_t7476 *, Comparison_1_t7486 *, const MethodInfo*))List_1_Sort_m49653_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7475* List_1_ToArray_m49654_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_ToArray_m49654(__this, method) (( KeyValuePair_2U5BU5D_t7475* (*) (List_1_t7476 *, const MethodInfo*))List_1_ToArray_m49654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m49655_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m49655(__this, method) (( void (*) (List_1_t7476 *, const MethodInfo*))List_1_TrimExcess_m49655_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m49656_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m49656(__this, method) (( int32_t (*) (List_1_t7476 *, const MethodInfo*))List_1_get_Capacity_m49656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m49657_gshared (List_1_t7476 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m49657(__this, ___value, method) (( void (*) (List_1_t7476 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49657_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
extern "C" int32_t List_1_get_Count_m49658_gshared (List_1_t7476 * __this, const MethodInfo* method);
#define List_1_get_Count_m49658(__this, method) (( int32_t (*) (List_1_t7476 *, const MethodInfo*))List_1_get_Count_m49658_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t5477  List_1_get_Item_m49659_gshared (List_1_t7476 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m49659(__this, ___index, method) (( KeyValuePair_2_t5477  (*) (List_1_t7476 *, int32_t, const MethodInfo*))List_1_get_Item_m49659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m49660_gshared (List_1_t7476 * __this, int32_t ___index, KeyValuePair_2_t5477  ___value, const MethodInfo* method);
#define List_1_set_Item_m49660(__this, ___index, ___value, method) (( void (*) (List_1_t7476 *, int32_t, KeyValuePair_2_t5477 , const MethodInfo*))List_1_set_Item_m49660_gshared)(__this, ___index, ___value, method)

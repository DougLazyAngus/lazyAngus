#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t5956;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t71;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t5955;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5396;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t8979;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t5959;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t5963;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t8980;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t5966;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_48.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m30680_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1__ctor_m30680(__this, method) (( void (*) (List_1_t5956 *, const MethodInfo*))List_1__ctor_m30680_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m30681_gshared (List_1_t5956 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m30681(__this, ___collection, method) (( void (*) (List_1_t5956 *, Object_t*, const MethodInfo*))List_1__ctor_m30681_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m30682_gshared (List_1_t5956 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m30682(__this, ___capacity, method) (( void (*) (List_1_t5956 *, int32_t, const MethodInfo*))List_1__ctor_m30682_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m30683_gshared (List_1_t5956 * __this, KeyValuePair_2U5BU5D_t5955* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m30683(__this, ___data, ___size, method) (( void (*) (List_1_t5956 *, KeyValuePair_2U5BU5D_t5955*, int32_t, const MethodInfo*))List_1__ctor_m30683_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m30684_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m30684(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m30684_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30685_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30685(__this, method) (( Object_t* (*) (List_1_t5956 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30685_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m30686_gshared (List_1_t5956 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m30686(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5956 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m30686_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m30687_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30687(__this, method) (( Object_t * (*) (List_1_t5956 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m30687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m30688_gshared (List_1_t5956 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m30688(__this, ___item, method) (( int32_t (*) (List_1_t5956 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m30688_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m30689_gshared (List_1_t5956 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m30689(__this, ___item, method) (( bool (*) (List_1_t5956 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m30689_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m30690_gshared (List_1_t5956 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m30690(__this, ___item, method) (( int32_t (*) (List_1_t5956 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m30690_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m30691_gshared (List_1_t5956 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m30691(__this, ___index, ___item, method) (( void (*) (List_1_t5956 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m30691_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m30692_gshared (List_1_t5956 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m30692(__this, ___item, method) (( void (*) (List_1_t5956 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m30692_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30693_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30693(__this, method) (( bool (*) (List_1_t5956 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30693_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m30694_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30694(__this, method) (( bool (*) (List_1_t5956 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m30694_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m30695_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m30695(__this, method) (( Object_t * (*) (List_1_t5956 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m30695_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m30696_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m30696(__this, method) (( bool (*) (List_1_t5956 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m30696_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m30697_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m30697(__this, method) (( bool (*) (List_1_t5956 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m30697_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m30698_gshared (List_1_t5956 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m30698(__this, ___index, method) (( Object_t * (*) (List_1_t5956 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m30698_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m30699_gshared (List_1_t5956 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m30699(__this, ___index, ___value, method) (( void (*) (List_1_t5956 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m30699_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m30700_gshared (List_1_t5956 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Add_m30700(__this, ___item, method) (( void (*) (List_1_t5956 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Add_m30700_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m30701_gshared (List_1_t5956 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m30701(__this, ___newCount, method) (( void (*) (List_1_t5956 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m30701_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m30702_gshared (List_1_t5956 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m30702(__this, ___idx, ___count, method) (( void (*) (List_1_t5956 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m30702_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m30703_gshared (List_1_t5956 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m30703(__this, ___collection, method) (( void (*) (List_1_t5956 *, Object_t*, const MethodInfo*))List_1_AddCollection_m30703_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m30704_gshared (List_1_t5956 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m30704(__this, ___enumerable, method) (( void (*) (List_1_t5956 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m30704_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m30705_gshared (List_1_t5956 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m30705(__this, ___collection, method) (( void (*) (List_1_t5956 *, Object_t*, const MethodInfo*))List_1_AddRange_m30705_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5959 * List_1_AsReadOnly_m30706_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m30706(__this, method) (( ReadOnlyCollection_1_t5959 * (*) (List_1_t5956 *, const MethodInfo*))List_1_AsReadOnly_m30706_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m30707_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_Clear_m30707(__this, method) (( void (*) (List_1_t5956 *, const MethodInfo*))List_1_Clear_m30707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m30708_gshared (List_1_t5956 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Contains_m30708(__this, ___item, method) (( bool (*) (List_1_t5956 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Contains_m30708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m30709_gshared (List_1_t5956 * __this, KeyValuePair_2U5BU5D_t5955* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m30709(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5956 *, KeyValuePair_2U5BU5D_t5955*, int32_t, const MethodInfo*))List_1_CopyTo_m30709_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t70  List_1_Find_m30710_gshared (List_1_t5956 * __this, Predicate_1_t5963 * ___match, const MethodInfo* method);
#define List_1_Find_m30710(__this, ___match, method) (( KeyValuePair_2_t70  (*) (List_1_t5956 *, Predicate_1_t5963 *, const MethodInfo*))List_1_Find_m30710_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m30711_gshared (Object_t * __this /* static, unused */, Predicate_1_t5963 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m30711(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5963 *, const MethodInfo*))List_1_CheckMatch_m30711_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m30712_gshared (List_1_t5956 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5963 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m30712(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5956 *, int32_t, int32_t, Predicate_1_t5963 *, const MethodInfo*))List_1_GetIndex_m30712_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t5957  List_1_GetEnumerator_m30713_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m30713(__this, method) (( Enumerator_t5957  (*) (List_1_t5956 *, const MethodInfo*))List_1_GetEnumerator_m30713_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t5956 * List_1_GetRange_m30714_gshared (List_1_t5956 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m30714(__this, ___index, ___count, method) (( List_1_t5956 * (*) (List_1_t5956 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m30714_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m30715_gshared (List_1_t5956 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_IndexOf_m30715(__this, ___item, method) (( int32_t (*) (List_1_t5956 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_IndexOf_m30715_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m30716_gshared (List_1_t5956 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m30716(__this, ___start, ___delta, method) (( void (*) (List_1_t5956 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m30716_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m30717_gshared (List_1_t5956 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m30717(__this, ___index, method) (( void (*) (List_1_t5956 *, int32_t, const MethodInfo*))List_1_CheckIndex_m30717_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m30718_gshared (List_1_t5956 * __this, int32_t ___index, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Insert_m30718(__this, ___index, ___item, method) (( void (*) (List_1_t5956 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_Insert_m30718_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m30719_gshared (List_1_t5956 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m30719(__this, ___collection, method) (( void (*) (List_1_t5956 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m30719_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m30720_gshared (List_1_t5956 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m30720(__this, ___index, ___collection, method) (( void (*) (List_1_t5956 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m30720_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m30721_gshared (List_1_t5956 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m30721(__this, ___index, ___collection, method) (( void (*) (List_1_t5956 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m30721_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m30722_gshared (List_1_t5956 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m30722(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5956 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m30722_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m30723_gshared (List_1_t5956 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Remove_m30723(__this, ___item, method) (( bool (*) (List_1_t5956 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Remove_m30723_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m30724_gshared (List_1_t5956 * __this, Predicate_1_t5963 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m30724(__this, ___match, method) (( int32_t (*) (List_1_t5956 *, Predicate_1_t5963 *, const MethodInfo*))List_1_RemoveAll_m30724_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m30725_gshared (List_1_t5956 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m30725(__this, ___index, method) (( void (*) (List_1_t5956 *, int32_t, const MethodInfo*))List_1_RemoveAt_m30725_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m30726_gshared (List_1_t5956 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m30726(__this, ___index, ___count, method) (( void (*) (List_1_t5956 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m30726_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m30727_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_Reverse_m30727(__this, method) (( void (*) (List_1_t5956 *, const MethodInfo*))List_1_Reverse_m30727_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m30728_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_Sort_m30728(__this, method) (( void (*) (List_1_t5956 *, const MethodInfo*))List_1_Sort_m30728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m30729_gshared (List_1_t5956 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m30729(__this, ___comparer, method) (( void (*) (List_1_t5956 *, Object_t*, const MethodInfo*))List_1_Sort_m30729_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m30730_gshared (List_1_t5956 * __this, Comparison_1_t5966 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m30730(__this, ___comparison, method) (( void (*) (List_1_t5956 *, Comparison_1_t5966 *, const MethodInfo*))List_1_Sort_m30730_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t5955* List_1_ToArray_m30731_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_ToArray_m30731(__this, method) (( KeyValuePair_2U5BU5D_t5955* (*) (List_1_t5956 *, const MethodInfo*))List_1_ToArray_m30731_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m30732_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m30732(__this, method) (( void (*) (List_1_t5956 *, const MethodInfo*))List_1_TrimExcess_m30732_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m30733_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m30733(__this, method) (( int32_t (*) (List_1_t5956 *, const MethodInfo*))List_1_get_Capacity_m30733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m30734_gshared (List_1_t5956 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m30734(__this, ___value, method) (( void (*) (List_1_t5956 *, int32_t, const MethodInfo*))List_1_set_Capacity_m30734_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m30735_gshared (List_1_t5956 * __this, const MethodInfo* method);
#define List_1_get_Count_m30735(__this, method) (( int32_t (*) (List_1_t5956 *, const MethodInfo*))List_1_get_Count_m30735_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t70  List_1_get_Item_m30736_gshared (List_1_t5956 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m30736(__this, ___index, method) (( KeyValuePair_2_t70  (*) (List_1_t5956 *, int32_t, const MethodInfo*))List_1_get_Item_m30736_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m30737_gshared (List_1_t5956 * __this, int32_t ___index, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define List_1_set_Item_m30737(__this, ___index, ___value, method) (( void (*) (List_1_t5956 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_set_Item_m30737_gshared)(__this, ___index, ___value, method)

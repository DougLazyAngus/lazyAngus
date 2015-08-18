#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t6038;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t71;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6037;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5451;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t9079;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t6041;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t6045;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t9080;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t6048;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m31431_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1__ctor_m31431(__this, method) (( void (*) (List_1_t6038 *, const MethodInfo*))List_1__ctor_m31431_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m31432_gshared (List_1_t6038 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m31432(__this, ___collection, method) (( void (*) (List_1_t6038 *, Object_t*, const MethodInfo*))List_1__ctor_m31432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m31433_gshared (List_1_t6038 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m31433(__this, ___capacity, method) (( void (*) (List_1_t6038 *, int32_t, const MethodInfo*))List_1__ctor_m31433_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m31434_gshared (List_1_t6038 * __this, KeyValuePair_2U5BU5D_t6037* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m31434(__this, ___data, ___size, method) (( void (*) (List_1_t6038 *, KeyValuePair_2U5BU5D_t6037*, int32_t, const MethodInfo*))List_1__ctor_m31434_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m31435_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m31435(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m31435_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31436_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31436(__this, method) (( Object_t* (*) (List_1_t6038 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31436_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m31437_gshared (List_1_t6038 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m31437(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6038 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m31437_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m31438_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31438(__this, method) (( Object_t * (*) (List_1_t6038 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m31438_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m31439_gshared (List_1_t6038 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m31439(__this, ___item, method) (( int32_t (*) (List_1_t6038 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m31439_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m31440_gshared (List_1_t6038 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m31440(__this, ___item, method) (( bool (*) (List_1_t6038 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m31440_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m31441_gshared (List_1_t6038 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m31441(__this, ___item, method) (( int32_t (*) (List_1_t6038 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m31441_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m31442_gshared (List_1_t6038 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m31442(__this, ___index, ___item, method) (( void (*) (List_1_t6038 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m31442_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m31443_gshared (List_1_t6038 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m31443(__this, ___item, method) (( void (*) (List_1_t6038 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m31443_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31444_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31444(__this, method) (( bool (*) (List_1_t6038 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m31445_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31445(__this, method) (( bool (*) (List_1_t6038 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m31445_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m31446_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m31446(__this, method) (( Object_t * (*) (List_1_t6038 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m31446_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m31447_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m31447(__this, method) (( bool (*) (List_1_t6038 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m31447_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m31448_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m31448(__this, method) (( bool (*) (List_1_t6038 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m31448_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m31449_gshared (List_1_t6038 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m31449(__this, ___index, method) (( Object_t * (*) (List_1_t6038 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m31449_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m31450_gshared (List_1_t6038 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m31450(__this, ___index, ___value, method) (( void (*) (List_1_t6038 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m31450_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m31451_gshared (List_1_t6038 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Add_m31451(__this, ___item, method) (( void (*) (List_1_t6038 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Add_m31451_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m31452_gshared (List_1_t6038 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m31452(__this, ___newCount, method) (( void (*) (List_1_t6038 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m31452_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m31453_gshared (List_1_t6038 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m31453(__this, ___idx, ___count, method) (( void (*) (List_1_t6038 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m31453_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m31454_gshared (List_1_t6038 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m31454(__this, ___collection, method) (( void (*) (List_1_t6038 *, Object_t*, const MethodInfo*))List_1_AddCollection_m31454_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m31455_gshared (List_1_t6038 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m31455(__this, ___enumerable, method) (( void (*) (List_1_t6038 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m31455_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m31456_gshared (List_1_t6038 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m31456(__this, ___collection, method) (( void (*) (List_1_t6038 *, Object_t*, const MethodInfo*))List_1_AddRange_m31456_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6041 * List_1_AsReadOnly_m31457_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m31457(__this, method) (( ReadOnlyCollection_1_t6041 * (*) (List_1_t6038 *, const MethodInfo*))List_1_AsReadOnly_m31457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m31458_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_Clear_m31458(__this, method) (( void (*) (List_1_t6038 *, const MethodInfo*))List_1_Clear_m31458_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m31459_gshared (List_1_t6038 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Contains_m31459(__this, ___item, method) (( bool (*) (List_1_t6038 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Contains_m31459_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m31460_gshared (List_1_t6038 * __this, KeyValuePair_2U5BU5D_t6037* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m31460(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6038 *, KeyValuePair_2U5BU5D_t6037*, int32_t, const MethodInfo*))List_1_CopyTo_m31460_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t70  List_1_Find_m31461_gshared (List_1_t6038 * __this, Predicate_1_t6045 * ___match, const MethodInfo* method);
#define List_1_Find_m31461(__this, ___match, method) (( KeyValuePair_2_t70  (*) (List_1_t6038 *, Predicate_1_t6045 *, const MethodInfo*))List_1_Find_m31461_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m31462_gshared (Object_t * __this /* static, unused */, Predicate_1_t6045 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m31462(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6045 *, const MethodInfo*))List_1_CheckMatch_m31462_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m31463_gshared (List_1_t6038 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6045 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m31463(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6038 *, int32_t, int32_t, Predicate_1_t6045 *, const MethodInfo*))List_1_GetIndex_m31463_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t6039  List_1_GetEnumerator_m31464_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m31464(__this, method) (( Enumerator_t6039  (*) (List_1_t6038 *, const MethodInfo*))List_1_GetEnumerator_m31464_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6038 * List_1_GetRange_m31465_gshared (List_1_t6038 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m31465(__this, ___index, ___count, method) (( List_1_t6038 * (*) (List_1_t6038 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m31465_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m31466_gshared (List_1_t6038 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_IndexOf_m31466(__this, ___item, method) (( int32_t (*) (List_1_t6038 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_IndexOf_m31466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m31467_gshared (List_1_t6038 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m31467(__this, ___start, ___delta, method) (( void (*) (List_1_t6038 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m31467_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m31468_gshared (List_1_t6038 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m31468(__this, ___index, method) (( void (*) (List_1_t6038 *, int32_t, const MethodInfo*))List_1_CheckIndex_m31468_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m31469_gshared (List_1_t6038 * __this, int32_t ___index, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Insert_m31469(__this, ___index, ___item, method) (( void (*) (List_1_t6038 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_Insert_m31469_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m31470_gshared (List_1_t6038 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m31470(__this, ___collection, method) (( void (*) (List_1_t6038 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m31470_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m31471_gshared (List_1_t6038 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m31471(__this, ___index, ___collection, method) (( void (*) (List_1_t6038 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m31471_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m31472_gshared (List_1_t6038 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m31472(__this, ___index, ___collection, method) (( void (*) (List_1_t6038 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m31472_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m31473_gshared (List_1_t6038 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m31473(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6038 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m31473_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m31474_gshared (List_1_t6038 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Remove_m31474(__this, ___item, method) (( bool (*) (List_1_t6038 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Remove_m31474_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m31475_gshared (List_1_t6038 * __this, Predicate_1_t6045 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m31475(__this, ___match, method) (( int32_t (*) (List_1_t6038 *, Predicate_1_t6045 *, const MethodInfo*))List_1_RemoveAll_m31475_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m31476_gshared (List_1_t6038 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m31476(__this, ___index, method) (( void (*) (List_1_t6038 *, int32_t, const MethodInfo*))List_1_RemoveAt_m31476_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m31477_gshared (List_1_t6038 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m31477(__this, ___index, ___count, method) (( void (*) (List_1_t6038 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m31477_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m31478_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_Reverse_m31478(__this, method) (( void (*) (List_1_t6038 *, const MethodInfo*))List_1_Reverse_m31478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m31479_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_Sort_m31479(__this, method) (( void (*) (List_1_t6038 *, const MethodInfo*))List_1_Sort_m31479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m31480_gshared (List_1_t6038 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m31480(__this, ___comparer, method) (( void (*) (List_1_t6038 *, Object_t*, const MethodInfo*))List_1_Sort_m31480_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m31481_gshared (List_1_t6038 * __this, Comparison_1_t6048 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m31481(__this, ___comparison, method) (( void (*) (List_1_t6038 *, Comparison_1_t6048 *, const MethodInfo*))List_1_Sort_m31481_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t6037* List_1_ToArray_m31482_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_ToArray_m31482(__this, method) (( KeyValuePair_2U5BU5D_t6037* (*) (List_1_t6038 *, const MethodInfo*))List_1_ToArray_m31482_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m31483_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m31483(__this, method) (( void (*) (List_1_t6038 *, const MethodInfo*))List_1_TrimExcess_m31483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m31484_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m31484(__this, method) (( int32_t (*) (List_1_t6038 *, const MethodInfo*))List_1_get_Capacity_m31484_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m31485_gshared (List_1_t6038 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m31485(__this, ___value, method) (( void (*) (List_1_t6038 *, int32_t, const MethodInfo*))List_1_set_Capacity_m31485_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m31486_gshared (List_1_t6038 * __this, const MethodInfo* method);
#define List_1_get_Count_m31486(__this, method) (( int32_t (*) (List_1_t6038 *, const MethodInfo*))List_1_get_Count_m31486_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t70  List_1_get_Item_m31487_gshared (List_1_t6038 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m31487(__this, ___index, method) (( KeyValuePair_2_t70  (*) (List_1_t6038 *, int32_t, const MethodInfo*))List_1_get_Item_m31487_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m31488_gshared (List_1_t6038 * __this, int32_t ___index, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define List_1_set_Item_m31488(__this, ___index, ___value, method) (( void (*) (List_1_t6038 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_set_Item_m31488_gshared)(__this, ___index, ___value, method)

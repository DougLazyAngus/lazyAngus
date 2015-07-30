#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct List_1_t7548;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerable_1_t7162;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7547;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerator_1_t7163;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ICollection_1_t9285;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ReadOnlyCollection_1_t7551;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Predicate_1_t7555;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IComparer_1_t9286;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t7558;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_79.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C" void List_1__ctor_m50427_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1__ctor_m50427(__this, method) (( void (*) (List_1_t7548 *, const MethodInfo*))List_1__ctor_m50427_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m50428_gshared (List_1_t7548 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m50428(__this, ___collection, method) (( void (*) (List_1_t7548 *, Object_t*, const MethodInfo*))List_1__ctor_m50428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m50429_gshared (List_1_t7548 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m50429(__this, ___capacity, method) (( void (*) (List_1_t7548 *, int32_t, const MethodInfo*))List_1__ctor_m50429_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m50430_gshared (List_1_t7548 * __this, KeyValuePair_2U5BU5D_t7547* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m50430(__this, ___data, ___size, method) (( void (*) (List_1_t7548 *, KeyValuePair_2U5BU5D_t7547*, int32_t, const MethodInfo*))List_1__ctor_m50430_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.cctor()
extern "C" void List_1__cctor_m50431_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m50431(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50431_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50432_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50432(__this, method) (( Object_t* (*) (List_1_t7548 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50432_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m50433_gshared (List_1_t7548 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m50433(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7548 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50433_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m50434_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50434(__this, method) (( Object_t * (*) (List_1_t7548 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50434_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m50435_gshared (List_1_t7548 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m50435(__this, ___item, method) (( int32_t (*) (List_1_t7548 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50435_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m50436_gshared (List_1_t7548 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m50436(__this, ___item, method) (( bool (*) (List_1_t7548 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50436_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m50437_gshared (List_1_t7548 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m50437(__this, ___item, method) (( int32_t (*) (List_1_t7548 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m50438_gshared (List_1_t7548 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m50438(__this, ___index, ___item, method) (( void (*) (List_1_t7548 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50438_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m50439_gshared (List_1_t7548 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m50439(__this, ___item, method) (( void (*) (List_1_t7548 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50439_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50440_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50440(__this, method) (( bool (*) (List_1_t7548 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50440_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m50441_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50441(__this, method) (( bool (*) (List_1_t7548 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50441_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m50442_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m50442(__this, method) (( Object_t * (*) (List_1_t7548 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50442_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m50443_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m50443(__this, method) (( bool (*) (List_1_t7548 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50443_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m50444_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m50444(__this, method) (( bool (*) (List_1_t7548 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50444_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m50445_gshared (List_1_t7548 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m50445(__this, ___index, method) (( Object_t * (*) (List_1_t7548 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50445_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m50446_gshared (List_1_t7548 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m50446(__this, ___index, ___value, method) (( void (*) (List_1_t7548 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50446_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Add(T)
extern "C" void List_1_Add_m50447_gshared (List_1_t7548 * __this, KeyValuePair_2_t7158  ___item, const MethodInfo* method);
#define List_1_Add_m50447(__this, ___item, method) (( void (*) (List_1_t7548 *, KeyValuePair_2_t7158 , const MethodInfo*))List_1_Add_m50447_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m50448_gshared (List_1_t7548 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m50448(__this, ___newCount, method) (( void (*) (List_1_t7548 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50448_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m50449_gshared (List_1_t7548 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m50449(__this, ___idx, ___count, method) (( void (*) (List_1_t7548 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50449_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m50450_gshared (List_1_t7548 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m50450(__this, ___collection, method) (( void (*) (List_1_t7548 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50450_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m50451_gshared (List_1_t7548 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m50451(__this, ___enumerable, method) (( void (*) (List_1_t7548 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50451_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m50452_gshared (List_1_t7548 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m50452(__this, ___collection, method) (( void (*) (List_1_t7548 *, Object_t*, const MethodInfo*))List_1_AddRange_m50452_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7551 * List_1_AsReadOnly_m50453_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m50453(__this, method) (( ReadOnlyCollection_1_t7551 * (*) (List_1_t7548 *, const MethodInfo*))List_1_AsReadOnly_m50453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Clear()
extern "C" void List_1_Clear_m50454_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_Clear_m50454(__this, method) (( void (*) (List_1_t7548 *, const MethodInfo*))List_1_Clear_m50454_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Contains(T)
extern "C" bool List_1_Contains_m50455_gshared (List_1_t7548 * __this, KeyValuePair_2_t7158  ___item, const MethodInfo* method);
#define List_1_Contains_m50455(__this, ___item, method) (( bool (*) (List_1_t7548 *, KeyValuePair_2_t7158 , const MethodInfo*))List_1_Contains_m50455_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m50456_gshared (List_1_t7548 * __this, KeyValuePair_2U5BU5D_t7547* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m50456(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7548 *, KeyValuePair_2U5BU5D_t7547*, int32_t, const MethodInfo*))List_1_CopyTo_m50456_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7158  List_1_Find_m50457_gshared (List_1_t7548 * __this, Predicate_1_t7555 * ___match, const MethodInfo* method);
#define List_1_Find_m50457(__this, ___match, method) (( KeyValuePair_2_t7158  (*) (List_1_t7548 *, Predicate_1_t7555 *, const MethodInfo*))List_1_Find_m50457_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m50458_gshared (Object_t * __this /* static, unused */, Predicate_1_t7555 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m50458(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7555 *, const MethodInfo*))List_1_CheckMatch_m50458_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m50459_gshared (List_1_t7548 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7555 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m50459(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7548 *, int32_t, int32_t, Predicate_1_t7555 *, const MethodInfo*))List_1_GetIndex_m50459_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetEnumerator()
extern "C" Enumerator_t7549  List_1_GetEnumerator_m50460_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m50460(__this, method) (( Enumerator_t7549  (*) (List_1_t7548 *, const MethodInfo*))List_1_GetEnumerator_m50460_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7548 * List_1_GetRange_m50461_gshared (List_1_t7548 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m50461(__this, ___index, ___count, method) (( List_1_t7548 * (*) (List_1_t7548 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50461_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m50462_gshared (List_1_t7548 * __this, KeyValuePair_2_t7158  ___item, const MethodInfo* method);
#define List_1_IndexOf_m50462(__this, ___item, method) (( int32_t (*) (List_1_t7548 *, KeyValuePair_2_t7158 , const MethodInfo*))List_1_IndexOf_m50462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m50463_gshared (List_1_t7548 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m50463(__this, ___start, ___delta, method) (( void (*) (List_1_t7548 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50463_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m50464_gshared (List_1_t7548 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m50464(__this, ___index, method) (( void (*) (List_1_t7548 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m50465_gshared (List_1_t7548 * __this, int32_t ___index, KeyValuePair_2_t7158  ___item, const MethodInfo* method);
#define List_1_Insert_m50465(__this, ___index, ___item, method) (( void (*) (List_1_t7548 *, int32_t, KeyValuePair_2_t7158 , const MethodInfo*))List_1_Insert_m50465_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m50466_gshared (List_1_t7548 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m50466(__this, ___collection, method) (( void (*) (List_1_t7548 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50466_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m50467_gshared (List_1_t7548 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m50467(__this, ___index, ___collection, method) (( void (*) (List_1_t7548 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50467_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m50468_gshared (List_1_t7548 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m50468(__this, ___index, ___collection, method) (( void (*) (List_1_t7548 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50468_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m50469_gshared (List_1_t7548 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m50469(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7548 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50469_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Remove(T)
extern "C" bool List_1_Remove_m50470_gshared (List_1_t7548 * __this, KeyValuePair_2_t7158  ___item, const MethodInfo* method);
#define List_1_Remove_m50470(__this, ___item, method) (( bool (*) (List_1_t7548 *, KeyValuePair_2_t7158 , const MethodInfo*))List_1_Remove_m50470_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m50471_gshared (List_1_t7548 * __this, Predicate_1_t7555 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m50471(__this, ___match, method) (( int32_t (*) (List_1_t7548 *, Predicate_1_t7555 *, const MethodInfo*))List_1_RemoveAll_m50471_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m50472_gshared (List_1_t7548 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m50472(__this, ___index, method) (( void (*) (List_1_t7548 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50472_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m50473_gshared (List_1_t7548 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m50473(__this, ___index, ___count, method) (( void (*) (List_1_t7548 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50473_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Reverse()
extern "C" void List_1_Reverse_m50474_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_Reverse_m50474(__this, method) (( void (*) (List_1_t7548 *, const MethodInfo*))List_1_Reverse_m50474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort()
extern "C" void List_1_Sort_m50475_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_Sort_m50475(__this, method) (( void (*) (List_1_t7548 *, const MethodInfo*))List_1_Sort_m50475_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m50476_gshared (List_1_t7548 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m50476(__this, ___comparer, method) (( void (*) (List_1_t7548 *, Object_t*, const MethodInfo*))List_1_Sort_m50476_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m50477_gshared (List_1_t7548 * __this, Comparison_1_t7558 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m50477(__this, ___comparison, method) (( void (*) (List_1_t7548 *, Comparison_1_t7558 *, const MethodInfo*))List_1_Sort_m50477_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7547* List_1_ToArray_m50478_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_ToArray_m50478(__this, method) (( KeyValuePair_2U5BU5D_t7547* (*) (List_1_t7548 *, const MethodInfo*))List_1_ToArray_m50478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m50479_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m50479(__this, method) (( void (*) (List_1_t7548 *, const MethodInfo*))List_1_TrimExcess_m50479_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m50480_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m50480(__this, method) (( int32_t (*) (List_1_t7548 *, const MethodInfo*))List_1_get_Capacity_m50480_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m50481_gshared (List_1_t7548 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m50481(__this, ___value, method) (( void (*) (List_1_t7548 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50481_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Count()
extern "C" int32_t List_1_get_Count_m50482_gshared (List_1_t7548 * __this, const MethodInfo* method);
#define List_1_get_Count_m50482(__this, method) (( int32_t (*) (List_1_t7548 *, const MethodInfo*))List_1_get_Count_m50482_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7158  List_1_get_Item_m50483_gshared (List_1_t7548 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m50483(__this, ___index, method) (( KeyValuePair_2_t7158  (*) (List_1_t7548 *, int32_t, const MethodInfo*))List_1_get_Item_m50483_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m50484_gshared (List_1_t7548 * __this, int32_t ___index, KeyValuePair_2_t7158  ___value, const MethodInfo* method);
#define List_1_set_Item_m50484(__this, ___index, ___value, method) (( void (*) (List_1_t7548 *, int32_t, KeyValuePair_2_t7158 , const MethodInfo*))List_1_set_Item_m50484_gshared)(__this, ___index, ___value, method)

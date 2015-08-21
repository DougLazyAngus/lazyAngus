#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3363;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t9712;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8615;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9713;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t9714;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t8619;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t8623;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t9715;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t8626;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_107.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m63445_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1__ctor_m63445(__this, method) (( void (*) (List_1_t3363 *, const MethodInfo*))List_1__ctor_m63445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m63446_gshared (List_1_t3363 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m63446(__this, ___collection, method) (( void (*) (List_1_t3363 *, Object_t*, const MethodInfo*))List_1__ctor_m63446_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11852_gshared (List_1_t3363 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11852(__this, ___capacity, method) (( void (*) (List_1_t3363 *, int32_t, const MethodInfo*))List_1__ctor_m11852_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m63447_gshared (List_1_t3363 * __this, KeyValuePair_2U5BU5D_t8615* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m63447(__this, ___data, ___size, method) (( void (*) (List_1_t3363 *, KeyValuePair_2U5BU5D_t8615*, int32_t, const MethodInfo*))List_1__ctor_m63447_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m63448_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m63448(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m63448_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63449_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63449(__this, method) (( Object_t* (*) (List_1_t3363 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m63450_gshared (List_1_t3363 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m63450(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3363 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m63450_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m63451_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m63451(__this, method) (( Object_t * (*) (List_1_t3363 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m63451_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m63452_gshared (List_1_t3363 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m63452(__this, ___item, method) (( int32_t (*) (List_1_t3363 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m63452_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m63453_gshared (List_1_t3363 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m63453(__this, ___item, method) (( bool (*) (List_1_t3363 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m63453_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m63454_gshared (List_1_t3363 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m63454(__this, ___item, method) (( int32_t (*) (List_1_t3363 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m63454_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m63455_gshared (List_1_t3363 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m63455(__this, ___index, ___item, method) (( void (*) (List_1_t3363 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m63455_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m63456_gshared (List_1_t3363 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m63456(__this, ___item, method) (( void (*) (List_1_t3363 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m63456_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63457_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63457(__this, method) (( bool (*) (List_1_t3363 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63457_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m63458_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m63458(__this, method) (( bool (*) (List_1_t3363 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m63458_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m63459_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m63459(__this, method) (( Object_t * (*) (List_1_t3363 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m63459_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m63460_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m63460(__this, method) (( bool (*) (List_1_t3363 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m63460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m63461_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m63461(__this, method) (( bool (*) (List_1_t3363 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m63461_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m63462_gshared (List_1_t3363 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m63462(__this, ___index, method) (( Object_t * (*) (List_1_t3363 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m63462_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m63463_gshared (List_1_t3363 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m63463(__this, ___index, ___value, method) (( void (*) (List_1_t3363 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m63463_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m63464_gshared (List_1_t3363 * __this, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define List_1_Add_m63464(__this, ___item, method) (( void (*) (List_1_t3363 *, KeyValuePair_2_t3377 , const MethodInfo*))List_1_Add_m63464_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m63465_gshared (List_1_t3363 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m63465(__this, ___newCount, method) (( void (*) (List_1_t3363 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m63465_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m63466_gshared (List_1_t3363 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m63466(__this, ___idx, ___count, method) (( void (*) (List_1_t3363 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m63466_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m63467_gshared (List_1_t3363 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m63467(__this, ___collection, method) (( void (*) (List_1_t3363 *, Object_t*, const MethodInfo*))List_1_AddCollection_m63467_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m63468_gshared (List_1_t3363 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m63468(__this, ___enumerable, method) (( void (*) (List_1_t3363 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m63468_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m63469_gshared (List_1_t3363 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m63469(__this, ___collection, method) (( void (*) (List_1_t3363 *, Object_t*, const MethodInfo*))List_1_AddRange_m63469_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8619 * List_1_AsReadOnly_m63470_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m63470(__this, method) (( ReadOnlyCollection_1_t8619 * (*) (List_1_t3363 *, const MethodInfo*))List_1_AsReadOnly_m63470_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m63471_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_Clear_m63471(__this, method) (( void (*) (List_1_t3363 *, const MethodInfo*))List_1_Clear_m63471_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m63472_gshared (List_1_t3363 * __this, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define List_1_Contains_m63472(__this, ___item, method) (( bool (*) (List_1_t3363 *, KeyValuePair_2_t3377 , const MethodInfo*))List_1_Contains_m63472_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m63473_gshared (List_1_t3363 * __this, KeyValuePair_2U5BU5D_t8615* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m63473(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3363 *, KeyValuePair_2U5BU5D_t8615*, int32_t, const MethodInfo*))List_1_CopyTo_m63473_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3377  List_1_Find_m63474_gshared (List_1_t3363 * __this, Predicate_1_t8623 * ___match, const MethodInfo* method);
#define List_1_Find_m63474(__this, ___match, method) (( KeyValuePair_2_t3377  (*) (List_1_t3363 *, Predicate_1_t8623 *, const MethodInfo*))List_1_Find_m63474_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m63475_gshared (Object_t * __this /* static, unused */, Predicate_1_t8623 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m63475(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8623 *, const MethodInfo*))List_1_CheckMatch_m63475_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m63476_gshared (List_1_t3363 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8623 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m63476(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3363 *, int32_t, int32_t, Predicate_1_t8623 *, const MethodInfo*))List_1_GetIndex_m63476_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t8617  List_1_GetEnumerator_m63477_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m63477(__this, method) (( Enumerator_t8617  (*) (List_1_t3363 *, const MethodInfo*))List_1_GetEnumerator_m63477_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3363 * List_1_GetRange_m63478_gshared (List_1_t3363 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m63478(__this, ___index, ___count, method) (( List_1_t3363 * (*) (List_1_t3363 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m63478_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m63479_gshared (List_1_t3363 * __this, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define List_1_IndexOf_m63479(__this, ___item, method) (( int32_t (*) (List_1_t3363 *, KeyValuePair_2_t3377 , const MethodInfo*))List_1_IndexOf_m63479_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m63480_gshared (List_1_t3363 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m63480(__this, ___start, ___delta, method) (( void (*) (List_1_t3363 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m63480_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m63481_gshared (List_1_t3363 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m63481(__this, ___index, method) (( void (*) (List_1_t3363 *, int32_t, const MethodInfo*))List_1_CheckIndex_m63481_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m63482_gshared (List_1_t3363 * __this, int32_t ___index, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define List_1_Insert_m63482(__this, ___index, ___item, method) (( void (*) (List_1_t3363 *, int32_t, KeyValuePair_2_t3377 , const MethodInfo*))List_1_Insert_m63482_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m63483_gshared (List_1_t3363 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m63483(__this, ___collection, method) (( void (*) (List_1_t3363 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m63483_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m63484_gshared (List_1_t3363 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m63484(__this, ___index, ___collection, method) (( void (*) (List_1_t3363 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m63484_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m63485_gshared (List_1_t3363 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m63485(__this, ___index, ___collection, method) (( void (*) (List_1_t3363 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m63485_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m63486_gshared (List_1_t3363 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m63486(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3363 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m63486_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m63487_gshared (List_1_t3363 * __this, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define List_1_Remove_m63487(__this, ___item, method) (( bool (*) (List_1_t3363 *, KeyValuePair_2_t3377 , const MethodInfo*))List_1_Remove_m63487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m63488_gshared (List_1_t3363 * __this, Predicate_1_t8623 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m63488(__this, ___match, method) (( int32_t (*) (List_1_t3363 *, Predicate_1_t8623 *, const MethodInfo*))List_1_RemoveAll_m63488_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m63489_gshared (List_1_t3363 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m63489(__this, ___index, method) (( void (*) (List_1_t3363 *, int32_t, const MethodInfo*))List_1_RemoveAt_m63489_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m63490_gshared (List_1_t3363 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m63490(__this, ___index, ___count, method) (( void (*) (List_1_t3363 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m63490_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m63491_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_Reverse_m63491(__this, method) (( void (*) (List_1_t3363 *, const MethodInfo*))List_1_Reverse_m63491_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m63492_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_Sort_m63492(__this, method) (( void (*) (List_1_t3363 *, const MethodInfo*))List_1_Sort_m63492_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m63493_gshared (List_1_t3363 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m63493(__this, ___comparer, method) (( void (*) (List_1_t3363 *, Object_t*, const MethodInfo*))List_1_Sort_m63493_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m63494_gshared (List_1_t3363 * __this, Comparison_1_t8626 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m63494(__this, ___comparison, method) (( void (*) (List_1_t3363 *, Comparison_1_t8626 *, const MethodInfo*))List_1_Sort_m63494_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8615* List_1_ToArray_m63495_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_ToArray_m63495(__this, method) (( KeyValuePair_2U5BU5D_t8615* (*) (List_1_t3363 *, const MethodInfo*))List_1_ToArray_m63495_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m63496_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m63496(__this, method) (( void (*) (List_1_t3363 *, const MethodInfo*))List_1_TrimExcess_m63496_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m63497_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m63497(__this, method) (( int32_t (*) (List_1_t3363 *, const MethodInfo*))List_1_get_Capacity_m63497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m63498_gshared (List_1_t3363 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m63498(__this, ___value, method) (( void (*) (List_1_t3363 *, int32_t, const MethodInfo*))List_1_set_Capacity_m63498_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m63499_gshared (List_1_t3363 * __this, const MethodInfo* method);
#define List_1_get_Count_m63499(__this, method) (( int32_t (*) (List_1_t3363 *, const MethodInfo*))List_1_get_Count_m63499_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3377  List_1_get_Item_m63500_gshared (List_1_t3363 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m63500(__this, ___index, method) (( KeyValuePair_2_t3377  (*) (List_1_t3363 *, int32_t, const MethodInfo*))List_1_get_Item_m63500_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m63501_gshared (List_1_t3363 * __this, int32_t ___index, KeyValuePair_2_t3377  ___value, const MethodInfo* method);
#define List_1_set_Item_m63501(__this, ___index, ___value, method) (( void (*) (List_1_t3363 *, int32_t, KeyValuePair_2_t3377 , const MethodInfo*))List_1_set_Item_m63501_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3307;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t9603;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8529;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9604;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t9605;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t8533;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t8537;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t9606;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t8540;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_103.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m62609_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1__ctor_m62609(__this, method) (( void (*) (List_1_t3307 *, const MethodInfo*))List_1__ctor_m62609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m62610_gshared (List_1_t3307 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m62610(__this, ___collection, method) (( void (*) (List_1_t3307 *, Object_t*, const MethodInfo*))List_1__ctor_m62610_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11541_gshared (List_1_t3307 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11541(__this, ___capacity, method) (( void (*) (List_1_t3307 *, int32_t, const MethodInfo*))List_1__ctor_m11541_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m62611_gshared (List_1_t3307 * __this, KeyValuePair_2U5BU5D_t8529* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m62611(__this, ___data, ___size, method) (( void (*) (List_1_t3307 *, KeyValuePair_2U5BU5D_t8529*, int32_t, const MethodInfo*))List_1__ctor_m62611_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m62612_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m62612(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m62612_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62613_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62613(__this, method) (( Object_t* (*) (List_1_t3307 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62613_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m62614_gshared (List_1_t3307 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m62614(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3307 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m62614_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m62615_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m62615(__this, method) (( Object_t * (*) (List_1_t3307 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m62615_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m62616_gshared (List_1_t3307 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m62616(__this, ___item, method) (( int32_t (*) (List_1_t3307 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m62616_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m62617_gshared (List_1_t3307 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m62617(__this, ___item, method) (( bool (*) (List_1_t3307 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m62617_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m62618_gshared (List_1_t3307 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m62618(__this, ___item, method) (( int32_t (*) (List_1_t3307 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m62618_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m62619_gshared (List_1_t3307 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m62619(__this, ___index, ___item, method) (( void (*) (List_1_t3307 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m62619_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m62620_gshared (List_1_t3307 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m62620(__this, ___item, method) (( void (*) (List_1_t3307 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m62620_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62621_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62621(__this, method) (( bool (*) (List_1_t3307 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62621_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m62622_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m62622(__this, method) (( bool (*) (List_1_t3307 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m62622_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m62623_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m62623(__this, method) (( Object_t * (*) (List_1_t3307 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m62623_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m62624_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m62624(__this, method) (( bool (*) (List_1_t3307 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m62624_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m62625_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m62625(__this, method) (( bool (*) (List_1_t3307 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m62625_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m62626_gshared (List_1_t3307 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m62626(__this, ___index, method) (( Object_t * (*) (List_1_t3307 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m62626_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m62627_gshared (List_1_t3307 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m62627(__this, ___index, ___value, method) (( void (*) (List_1_t3307 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m62627_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m62628_gshared (List_1_t3307 * __this, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define List_1_Add_m62628(__this, ___item, method) (( void (*) (List_1_t3307 *, KeyValuePair_2_t3321 , const MethodInfo*))List_1_Add_m62628_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m62629_gshared (List_1_t3307 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m62629(__this, ___newCount, method) (( void (*) (List_1_t3307 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m62629_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m62630_gshared (List_1_t3307 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m62630(__this, ___idx, ___count, method) (( void (*) (List_1_t3307 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m62630_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m62631_gshared (List_1_t3307 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m62631(__this, ___collection, method) (( void (*) (List_1_t3307 *, Object_t*, const MethodInfo*))List_1_AddCollection_m62631_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m62632_gshared (List_1_t3307 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m62632(__this, ___enumerable, method) (( void (*) (List_1_t3307 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m62632_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m62633_gshared (List_1_t3307 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m62633(__this, ___collection, method) (( void (*) (List_1_t3307 *, Object_t*, const MethodInfo*))List_1_AddRange_m62633_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8533 * List_1_AsReadOnly_m62634_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m62634(__this, method) (( ReadOnlyCollection_1_t8533 * (*) (List_1_t3307 *, const MethodInfo*))List_1_AsReadOnly_m62634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m62635_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_Clear_m62635(__this, method) (( void (*) (List_1_t3307 *, const MethodInfo*))List_1_Clear_m62635_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m62636_gshared (List_1_t3307 * __this, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define List_1_Contains_m62636(__this, ___item, method) (( bool (*) (List_1_t3307 *, KeyValuePair_2_t3321 , const MethodInfo*))List_1_Contains_m62636_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m62637_gshared (List_1_t3307 * __this, KeyValuePair_2U5BU5D_t8529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m62637(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3307 *, KeyValuePair_2U5BU5D_t8529*, int32_t, const MethodInfo*))List_1_CopyTo_m62637_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3321  List_1_Find_m62638_gshared (List_1_t3307 * __this, Predicate_1_t8537 * ___match, const MethodInfo* method);
#define List_1_Find_m62638(__this, ___match, method) (( KeyValuePair_2_t3321  (*) (List_1_t3307 *, Predicate_1_t8537 *, const MethodInfo*))List_1_Find_m62638_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m62639_gshared (Object_t * __this /* static, unused */, Predicate_1_t8537 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m62639(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8537 *, const MethodInfo*))List_1_CheckMatch_m62639_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m62640_gshared (List_1_t3307 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8537 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m62640(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3307 *, int32_t, int32_t, Predicate_1_t8537 *, const MethodInfo*))List_1_GetIndex_m62640_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t8531  List_1_GetEnumerator_m62641_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m62641(__this, method) (( Enumerator_t8531  (*) (List_1_t3307 *, const MethodInfo*))List_1_GetEnumerator_m62641_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3307 * List_1_GetRange_m62642_gshared (List_1_t3307 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m62642(__this, ___index, ___count, method) (( List_1_t3307 * (*) (List_1_t3307 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m62642_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m62643_gshared (List_1_t3307 * __this, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define List_1_IndexOf_m62643(__this, ___item, method) (( int32_t (*) (List_1_t3307 *, KeyValuePair_2_t3321 , const MethodInfo*))List_1_IndexOf_m62643_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m62644_gshared (List_1_t3307 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m62644(__this, ___start, ___delta, method) (( void (*) (List_1_t3307 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m62644_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m62645_gshared (List_1_t3307 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m62645(__this, ___index, method) (( void (*) (List_1_t3307 *, int32_t, const MethodInfo*))List_1_CheckIndex_m62645_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m62646_gshared (List_1_t3307 * __this, int32_t ___index, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define List_1_Insert_m62646(__this, ___index, ___item, method) (( void (*) (List_1_t3307 *, int32_t, KeyValuePair_2_t3321 , const MethodInfo*))List_1_Insert_m62646_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m62647_gshared (List_1_t3307 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m62647(__this, ___collection, method) (( void (*) (List_1_t3307 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m62647_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m62648_gshared (List_1_t3307 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m62648(__this, ___index, ___collection, method) (( void (*) (List_1_t3307 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m62648_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m62649_gshared (List_1_t3307 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m62649(__this, ___index, ___collection, method) (( void (*) (List_1_t3307 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m62649_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m62650_gshared (List_1_t3307 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m62650(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3307 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m62650_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m62651_gshared (List_1_t3307 * __this, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define List_1_Remove_m62651(__this, ___item, method) (( bool (*) (List_1_t3307 *, KeyValuePair_2_t3321 , const MethodInfo*))List_1_Remove_m62651_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m62652_gshared (List_1_t3307 * __this, Predicate_1_t8537 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m62652(__this, ___match, method) (( int32_t (*) (List_1_t3307 *, Predicate_1_t8537 *, const MethodInfo*))List_1_RemoveAll_m62652_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m62653_gshared (List_1_t3307 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m62653(__this, ___index, method) (( void (*) (List_1_t3307 *, int32_t, const MethodInfo*))List_1_RemoveAt_m62653_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m62654_gshared (List_1_t3307 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m62654(__this, ___index, ___count, method) (( void (*) (List_1_t3307 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m62654_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m62655_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_Reverse_m62655(__this, method) (( void (*) (List_1_t3307 *, const MethodInfo*))List_1_Reverse_m62655_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m62656_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_Sort_m62656(__this, method) (( void (*) (List_1_t3307 *, const MethodInfo*))List_1_Sort_m62656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m62657_gshared (List_1_t3307 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m62657(__this, ___comparer, method) (( void (*) (List_1_t3307 *, Object_t*, const MethodInfo*))List_1_Sort_m62657_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m62658_gshared (List_1_t3307 * __this, Comparison_1_t8540 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m62658(__this, ___comparison, method) (( void (*) (List_1_t3307 *, Comparison_1_t8540 *, const MethodInfo*))List_1_Sort_m62658_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8529* List_1_ToArray_m62659_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_ToArray_m62659(__this, method) (( KeyValuePair_2U5BU5D_t8529* (*) (List_1_t3307 *, const MethodInfo*))List_1_ToArray_m62659_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m62660_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m62660(__this, method) (( void (*) (List_1_t3307 *, const MethodInfo*))List_1_TrimExcess_m62660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m62661_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m62661(__this, method) (( int32_t (*) (List_1_t3307 *, const MethodInfo*))List_1_get_Capacity_m62661_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m62662_gshared (List_1_t3307 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m62662(__this, ___value, method) (( void (*) (List_1_t3307 *, int32_t, const MethodInfo*))List_1_set_Capacity_m62662_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m62663_gshared (List_1_t3307 * __this, const MethodInfo* method);
#define List_1_get_Count_m62663(__this, method) (( int32_t (*) (List_1_t3307 *, const MethodInfo*))List_1_get_Count_m62663_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3321  List_1_get_Item_m62664_gshared (List_1_t3307 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m62664(__this, ___index, method) (( KeyValuePair_2_t3321  (*) (List_1_t3307 *, int32_t, const MethodInfo*))List_1_get_Item_m62664_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m62665_gshared (List_1_t3307 * __this, int32_t ___index, KeyValuePair_2_t3321  ___value, const MethodInfo* method);
#define List_1_set_Item_m62665(__this, ___index, ___value, method) (( void (*) (List_1_t3307 *, int32_t, KeyValuePair_2_t3321 , const MethodInfo*))List_1_set_Item_m62665_gshared)(__this, ___index, ___value, method)

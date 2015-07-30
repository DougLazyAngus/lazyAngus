#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3315;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t9611;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8537;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9612;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t9613;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t8541;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t8545;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t9614;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t8548;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_103.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m62656_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1__ctor_m62656(__this, method) (( void (*) (List_1_t3315 *, const MethodInfo*))List_1__ctor_m62656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m62657_gshared (List_1_t3315 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m62657(__this, ___collection, method) (( void (*) (List_1_t3315 *, Object_t*, const MethodInfo*))List_1__ctor_m62657_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11588_gshared (List_1_t3315 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11588(__this, ___capacity, method) (( void (*) (List_1_t3315 *, int32_t, const MethodInfo*))List_1__ctor_m11588_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m62658_gshared (List_1_t3315 * __this, KeyValuePair_2U5BU5D_t8537* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m62658(__this, ___data, ___size, method) (( void (*) (List_1_t3315 *, KeyValuePair_2U5BU5D_t8537*, int32_t, const MethodInfo*))List_1__ctor_m62658_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m62659_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m62659(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m62659_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62660_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62660(__this, method) (( Object_t* (*) (List_1_t3315 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62660_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m62661_gshared (List_1_t3315 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m62661(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3315 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m62661_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m62662_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m62662(__this, method) (( Object_t * (*) (List_1_t3315 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m62662_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m62663_gshared (List_1_t3315 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m62663(__this, ___item, method) (( int32_t (*) (List_1_t3315 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m62663_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m62664_gshared (List_1_t3315 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m62664(__this, ___item, method) (( bool (*) (List_1_t3315 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m62664_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m62665_gshared (List_1_t3315 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m62665(__this, ___item, method) (( int32_t (*) (List_1_t3315 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m62665_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m62666_gshared (List_1_t3315 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m62666(__this, ___index, ___item, method) (( void (*) (List_1_t3315 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m62666_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m62667_gshared (List_1_t3315 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m62667(__this, ___item, method) (( void (*) (List_1_t3315 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m62667_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62668_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62668(__this, method) (( bool (*) (List_1_t3315 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m62669_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m62669(__this, method) (( bool (*) (List_1_t3315 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m62669_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m62670_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m62670(__this, method) (( Object_t * (*) (List_1_t3315 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m62670_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m62671_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m62671(__this, method) (( bool (*) (List_1_t3315 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m62671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m62672_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m62672(__this, method) (( bool (*) (List_1_t3315 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m62672_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m62673_gshared (List_1_t3315 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m62673(__this, ___index, method) (( Object_t * (*) (List_1_t3315 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m62673_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m62674_gshared (List_1_t3315 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m62674(__this, ___index, ___value, method) (( void (*) (List_1_t3315 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m62674_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m62675_gshared (List_1_t3315 * __this, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define List_1_Add_m62675(__this, ___item, method) (( void (*) (List_1_t3315 *, KeyValuePair_2_t3329 , const MethodInfo*))List_1_Add_m62675_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m62676_gshared (List_1_t3315 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m62676(__this, ___newCount, method) (( void (*) (List_1_t3315 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m62676_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m62677_gshared (List_1_t3315 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m62677(__this, ___idx, ___count, method) (( void (*) (List_1_t3315 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m62677_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m62678_gshared (List_1_t3315 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m62678(__this, ___collection, method) (( void (*) (List_1_t3315 *, Object_t*, const MethodInfo*))List_1_AddCollection_m62678_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m62679_gshared (List_1_t3315 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m62679(__this, ___enumerable, method) (( void (*) (List_1_t3315 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m62679_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m62680_gshared (List_1_t3315 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m62680(__this, ___collection, method) (( void (*) (List_1_t3315 *, Object_t*, const MethodInfo*))List_1_AddRange_m62680_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8541 * List_1_AsReadOnly_m62681_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m62681(__this, method) (( ReadOnlyCollection_1_t8541 * (*) (List_1_t3315 *, const MethodInfo*))List_1_AsReadOnly_m62681_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m62682_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_Clear_m62682(__this, method) (( void (*) (List_1_t3315 *, const MethodInfo*))List_1_Clear_m62682_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m62683_gshared (List_1_t3315 * __this, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define List_1_Contains_m62683(__this, ___item, method) (( bool (*) (List_1_t3315 *, KeyValuePair_2_t3329 , const MethodInfo*))List_1_Contains_m62683_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m62684_gshared (List_1_t3315 * __this, KeyValuePair_2U5BU5D_t8537* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m62684(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3315 *, KeyValuePair_2U5BU5D_t8537*, int32_t, const MethodInfo*))List_1_CopyTo_m62684_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3329  List_1_Find_m62685_gshared (List_1_t3315 * __this, Predicate_1_t8545 * ___match, const MethodInfo* method);
#define List_1_Find_m62685(__this, ___match, method) (( KeyValuePair_2_t3329  (*) (List_1_t3315 *, Predicate_1_t8545 *, const MethodInfo*))List_1_Find_m62685_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m62686_gshared (Object_t * __this /* static, unused */, Predicate_1_t8545 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m62686(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8545 *, const MethodInfo*))List_1_CheckMatch_m62686_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m62687_gshared (List_1_t3315 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8545 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m62687(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3315 *, int32_t, int32_t, Predicate_1_t8545 *, const MethodInfo*))List_1_GetIndex_m62687_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t8539  List_1_GetEnumerator_m62688_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m62688(__this, method) (( Enumerator_t8539  (*) (List_1_t3315 *, const MethodInfo*))List_1_GetEnumerator_m62688_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3315 * List_1_GetRange_m62689_gshared (List_1_t3315 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m62689(__this, ___index, ___count, method) (( List_1_t3315 * (*) (List_1_t3315 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m62689_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m62690_gshared (List_1_t3315 * __this, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define List_1_IndexOf_m62690(__this, ___item, method) (( int32_t (*) (List_1_t3315 *, KeyValuePair_2_t3329 , const MethodInfo*))List_1_IndexOf_m62690_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m62691_gshared (List_1_t3315 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m62691(__this, ___start, ___delta, method) (( void (*) (List_1_t3315 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m62691_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m62692_gshared (List_1_t3315 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m62692(__this, ___index, method) (( void (*) (List_1_t3315 *, int32_t, const MethodInfo*))List_1_CheckIndex_m62692_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m62693_gshared (List_1_t3315 * __this, int32_t ___index, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define List_1_Insert_m62693(__this, ___index, ___item, method) (( void (*) (List_1_t3315 *, int32_t, KeyValuePair_2_t3329 , const MethodInfo*))List_1_Insert_m62693_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m62694_gshared (List_1_t3315 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m62694(__this, ___collection, method) (( void (*) (List_1_t3315 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m62694_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m62695_gshared (List_1_t3315 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m62695(__this, ___index, ___collection, method) (( void (*) (List_1_t3315 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m62695_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m62696_gshared (List_1_t3315 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m62696(__this, ___index, ___collection, method) (( void (*) (List_1_t3315 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m62696_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m62697_gshared (List_1_t3315 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m62697(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3315 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m62697_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m62698_gshared (List_1_t3315 * __this, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define List_1_Remove_m62698(__this, ___item, method) (( bool (*) (List_1_t3315 *, KeyValuePair_2_t3329 , const MethodInfo*))List_1_Remove_m62698_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m62699_gshared (List_1_t3315 * __this, Predicate_1_t8545 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m62699(__this, ___match, method) (( int32_t (*) (List_1_t3315 *, Predicate_1_t8545 *, const MethodInfo*))List_1_RemoveAll_m62699_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m62700_gshared (List_1_t3315 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m62700(__this, ___index, method) (( void (*) (List_1_t3315 *, int32_t, const MethodInfo*))List_1_RemoveAt_m62700_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m62701_gshared (List_1_t3315 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m62701(__this, ___index, ___count, method) (( void (*) (List_1_t3315 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m62701_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m62702_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_Reverse_m62702(__this, method) (( void (*) (List_1_t3315 *, const MethodInfo*))List_1_Reverse_m62702_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m62703_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_Sort_m62703(__this, method) (( void (*) (List_1_t3315 *, const MethodInfo*))List_1_Sort_m62703_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m62704_gshared (List_1_t3315 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m62704(__this, ___comparer, method) (( void (*) (List_1_t3315 *, Object_t*, const MethodInfo*))List_1_Sort_m62704_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m62705_gshared (List_1_t3315 * __this, Comparison_1_t8548 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m62705(__this, ___comparison, method) (( void (*) (List_1_t3315 *, Comparison_1_t8548 *, const MethodInfo*))List_1_Sort_m62705_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8537* List_1_ToArray_m62706_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_ToArray_m62706(__this, method) (( KeyValuePair_2U5BU5D_t8537* (*) (List_1_t3315 *, const MethodInfo*))List_1_ToArray_m62706_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m62707_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m62707(__this, method) (( void (*) (List_1_t3315 *, const MethodInfo*))List_1_TrimExcess_m62707_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m62708_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m62708(__this, method) (( int32_t (*) (List_1_t3315 *, const MethodInfo*))List_1_get_Capacity_m62708_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m62709_gshared (List_1_t3315 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m62709(__this, ___value, method) (( void (*) (List_1_t3315 *, int32_t, const MethodInfo*))List_1_set_Capacity_m62709_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m62710_gshared (List_1_t3315 * __this, const MethodInfo* method);
#define List_1_get_Count_m62710(__this, method) (( int32_t (*) (List_1_t3315 *, const MethodInfo*))List_1_get_Count_m62710_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3329  List_1_get_Item_m62711_gshared (List_1_t3315 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m62711(__this, ___index, method) (( KeyValuePair_2_t3329  (*) (List_1_t3315 *, int32_t, const MethodInfo*))List_1_get_Item_m62711_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m62712_gshared (List_1_t3315 * __this, int32_t ___index, KeyValuePair_2_t3329  ___value, const MethodInfo* method);
#define List_1_set_Item_m62712(__this, ___index, ___value, method) (( void (*) (List_1_t3315 *, int32_t, KeyValuePair_2_t3329 , const MethodInfo*))List_1_set_Item_m62712_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3791;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t10338;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t9196;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t10339;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t10340;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t9200;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t9204;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t10341;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t9207;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_110.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m68147_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1__ctor_m68147(__this, method) (( void (*) (List_1_t3791 *, const MethodInfo*))List_1__ctor_m68147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m68148_gshared (List_1_t3791 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m68148(__this, ___collection, method) (( void (*) (List_1_t3791 *, Object_t*, const MethodInfo*))List_1__ctor_m68148_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15167_gshared (List_1_t3791 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15167(__this, ___capacity, method) (( void (*) (List_1_t3791 *, int32_t, const MethodInfo*))List_1__ctor_m15167_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m68149_gshared (List_1_t3791 * __this, KeyValuePair_2U5BU5D_t9196* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m68149(__this, ___data, ___size, method) (( void (*) (List_1_t3791 *, KeyValuePair_2U5BU5D_t9196*, int32_t, const MethodInfo*))List_1__ctor_m68149_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m68150_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m68150(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m68150_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68151_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68151(__this, method) (( Object_t* (*) (List_1_t3791 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68151_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m68152_gshared (List_1_t3791 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m68152(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3791 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m68152_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m68153_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m68153(__this, method) (( Object_t * (*) (List_1_t3791 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m68153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m68154_gshared (List_1_t3791 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m68154(__this, ___item, method) (( int32_t (*) (List_1_t3791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m68154_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m68155_gshared (List_1_t3791 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m68155(__this, ___item, method) (( bool (*) (List_1_t3791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m68155_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m68156_gshared (List_1_t3791 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m68156(__this, ___item, method) (( int32_t (*) (List_1_t3791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m68156_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m68157_gshared (List_1_t3791 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m68157(__this, ___index, ___item, method) (( void (*) (List_1_t3791 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m68157_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m68158_gshared (List_1_t3791 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m68158(__this, ___item, method) (( void (*) (List_1_t3791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m68158_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68159_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68159(__this, method) (( bool (*) (List_1_t3791 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68159_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m68160_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m68160(__this, method) (( bool (*) (List_1_t3791 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m68160_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m68161_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m68161(__this, method) (( Object_t * (*) (List_1_t3791 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m68161_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m68162_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m68162(__this, method) (( bool (*) (List_1_t3791 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m68162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m68163_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m68163(__this, method) (( bool (*) (List_1_t3791 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m68163_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m68164_gshared (List_1_t3791 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m68164(__this, ___index, method) (( Object_t * (*) (List_1_t3791 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m68164_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m68165_gshared (List_1_t3791 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m68165(__this, ___index, ___value, method) (( void (*) (List_1_t3791 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m68165_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m68166_gshared (List_1_t3791 * __this, KeyValuePair_2_t3795  ___item, const MethodInfo* method);
#define List_1_Add_m68166(__this, ___item, method) (( void (*) (List_1_t3791 *, KeyValuePair_2_t3795 , const MethodInfo*))List_1_Add_m68166_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m68167_gshared (List_1_t3791 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m68167(__this, ___newCount, method) (( void (*) (List_1_t3791 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m68167_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m68168_gshared (List_1_t3791 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m68168(__this, ___idx, ___count, method) (( void (*) (List_1_t3791 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m68168_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m68169_gshared (List_1_t3791 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m68169(__this, ___collection, method) (( void (*) (List_1_t3791 *, Object_t*, const MethodInfo*))List_1_AddCollection_m68169_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m68170_gshared (List_1_t3791 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m68170(__this, ___enumerable, method) (( void (*) (List_1_t3791 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m68170_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m68171_gshared (List_1_t3791 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m68171(__this, ___collection, method) (( void (*) (List_1_t3791 *, Object_t*, const MethodInfo*))List_1_AddRange_m68171_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9200 * List_1_AsReadOnly_m68172_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m68172(__this, method) (( ReadOnlyCollection_1_t9200 * (*) (List_1_t3791 *, const MethodInfo*))List_1_AsReadOnly_m68172_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m68173_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_Clear_m68173(__this, method) (( void (*) (List_1_t3791 *, const MethodInfo*))List_1_Clear_m68173_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m68174_gshared (List_1_t3791 * __this, KeyValuePair_2_t3795  ___item, const MethodInfo* method);
#define List_1_Contains_m68174(__this, ___item, method) (( bool (*) (List_1_t3791 *, KeyValuePair_2_t3795 , const MethodInfo*))List_1_Contains_m68174_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m68175_gshared (List_1_t3791 * __this, KeyValuePair_2U5BU5D_t9196* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m68175(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3791 *, KeyValuePair_2U5BU5D_t9196*, int32_t, const MethodInfo*))List_1_CopyTo_m68175_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3795  List_1_Find_m68176_gshared (List_1_t3791 * __this, Predicate_1_t9204 * ___match, const MethodInfo* method);
#define List_1_Find_m68176(__this, ___match, method) (( KeyValuePair_2_t3795  (*) (List_1_t3791 *, Predicate_1_t9204 *, const MethodInfo*))List_1_Find_m68176_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m68177_gshared (Object_t * __this /* static, unused */, Predicate_1_t9204 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m68177(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9204 *, const MethodInfo*))List_1_CheckMatch_m68177_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m68178_gshared (List_1_t3791 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9204 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m68178(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3791 *, int32_t, int32_t, Predicate_1_t9204 *, const MethodInfo*))List_1_GetIndex_m68178_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t9198  List_1_GetEnumerator_m68179_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m68179(__this, method) (( Enumerator_t9198  (*) (List_1_t3791 *, const MethodInfo*))List_1_GetEnumerator_m68179_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3791 * List_1_GetRange_m68180_gshared (List_1_t3791 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m68180(__this, ___index, ___count, method) (( List_1_t3791 * (*) (List_1_t3791 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m68180_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m68181_gshared (List_1_t3791 * __this, KeyValuePair_2_t3795  ___item, const MethodInfo* method);
#define List_1_IndexOf_m68181(__this, ___item, method) (( int32_t (*) (List_1_t3791 *, KeyValuePair_2_t3795 , const MethodInfo*))List_1_IndexOf_m68181_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m68182_gshared (List_1_t3791 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m68182(__this, ___start, ___delta, method) (( void (*) (List_1_t3791 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m68182_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m68183_gshared (List_1_t3791 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m68183(__this, ___index, method) (( void (*) (List_1_t3791 *, int32_t, const MethodInfo*))List_1_CheckIndex_m68183_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m68184_gshared (List_1_t3791 * __this, int32_t ___index, KeyValuePair_2_t3795  ___item, const MethodInfo* method);
#define List_1_Insert_m68184(__this, ___index, ___item, method) (( void (*) (List_1_t3791 *, int32_t, KeyValuePair_2_t3795 , const MethodInfo*))List_1_Insert_m68184_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m68185_gshared (List_1_t3791 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m68185(__this, ___collection, method) (( void (*) (List_1_t3791 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m68185_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m68186_gshared (List_1_t3791 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m68186(__this, ___index, ___collection, method) (( void (*) (List_1_t3791 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m68186_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m68187_gshared (List_1_t3791 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m68187(__this, ___index, ___collection, method) (( void (*) (List_1_t3791 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m68187_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m68188_gshared (List_1_t3791 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m68188(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3791 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m68188_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m68189_gshared (List_1_t3791 * __this, KeyValuePair_2_t3795  ___item, const MethodInfo* method);
#define List_1_Remove_m68189(__this, ___item, method) (( bool (*) (List_1_t3791 *, KeyValuePair_2_t3795 , const MethodInfo*))List_1_Remove_m68189_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m68190_gshared (List_1_t3791 * __this, Predicate_1_t9204 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m68190(__this, ___match, method) (( int32_t (*) (List_1_t3791 *, Predicate_1_t9204 *, const MethodInfo*))List_1_RemoveAll_m68190_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m68191_gshared (List_1_t3791 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m68191(__this, ___index, method) (( void (*) (List_1_t3791 *, int32_t, const MethodInfo*))List_1_RemoveAt_m68191_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m68192_gshared (List_1_t3791 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m68192(__this, ___index, ___count, method) (( void (*) (List_1_t3791 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m68192_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m68193_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_Reverse_m68193(__this, method) (( void (*) (List_1_t3791 *, const MethodInfo*))List_1_Reverse_m68193_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m68194_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_Sort_m68194(__this, method) (( void (*) (List_1_t3791 *, const MethodInfo*))List_1_Sort_m68194_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m68195_gshared (List_1_t3791 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m68195(__this, ___comparer, method) (( void (*) (List_1_t3791 *, Object_t*, const MethodInfo*))List_1_Sort_m68195_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m68196_gshared (List_1_t3791 * __this, Comparison_1_t9207 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m68196(__this, ___comparison, method) (( void (*) (List_1_t3791 *, Comparison_1_t9207 *, const MethodInfo*))List_1_Sort_m68196_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t9196* List_1_ToArray_m68197_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_ToArray_m68197(__this, method) (( KeyValuePair_2U5BU5D_t9196* (*) (List_1_t3791 *, const MethodInfo*))List_1_ToArray_m68197_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m68198_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m68198(__this, method) (( void (*) (List_1_t3791 *, const MethodInfo*))List_1_TrimExcess_m68198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m68199_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m68199(__this, method) (( int32_t (*) (List_1_t3791 *, const MethodInfo*))List_1_get_Capacity_m68199_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m68200_gshared (List_1_t3791 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m68200(__this, ___value, method) (( void (*) (List_1_t3791 *, int32_t, const MethodInfo*))List_1_set_Capacity_m68200_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m68201_gshared (List_1_t3791 * __this, const MethodInfo* method);
#define List_1_get_Count_m68201(__this, method) (( int32_t (*) (List_1_t3791 *, const MethodInfo*))List_1_get_Count_m68201_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3795  List_1_get_Item_m68202_gshared (List_1_t3791 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m68202(__this, ___index, method) (( KeyValuePair_2_t3795  (*) (List_1_t3791 *, int32_t, const MethodInfo*))List_1_get_Item_m68202_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m68203_gshared (List_1_t3791 * __this, int32_t ___index, KeyValuePair_2_t3795  ___value, const MethodInfo* method);
#define List_1_set_Item_m68203(__this, ___index, ___value, method) (( void (*) (List_1_t3791 *, int32_t, KeyValuePair_2_t3795 , const MethodInfo*))List_1_set_Item_m68203_gshared)(__this, ___index, ___value, method)

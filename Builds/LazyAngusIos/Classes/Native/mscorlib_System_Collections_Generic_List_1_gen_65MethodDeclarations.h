#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3802;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t10351;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t9209;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t10352;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t10353;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t9213;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t9217;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t10354;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t9220;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_110.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m68229_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1__ctor_m68229(__this, method) (( void (*) (List_1_t3802 *, const MethodInfo*))List_1__ctor_m68229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m68230_gshared (List_1_t3802 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m68230(__this, ___collection, method) (( void (*) (List_1_t3802 *, Object_t*, const MethodInfo*))List_1__ctor_m68230_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15237_gshared (List_1_t3802 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15237(__this, ___capacity, method) (( void (*) (List_1_t3802 *, int32_t, const MethodInfo*))List_1__ctor_m15237_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m68231_gshared (List_1_t3802 * __this, KeyValuePair_2U5BU5D_t9209* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m68231(__this, ___data, ___size, method) (( void (*) (List_1_t3802 *, KeyValuePair_2U5BU5D_t9209*, int32_t, const MethodInfo*))List_1__ctor_m68231_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m68232_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m68232(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m68232_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68233_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68233(__this, method) (( Object_t* (*) (List_1_t3802 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m68234_gshared (List_1_t3802 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m68234(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3802 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m68234_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m68235_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m68235(__this, method) (( Object_t * (*) (List_1_t3802 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m68235_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m68236_gshared (List_1_t3802 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m68236(__this, ___item, method) (( int32_t (*) (List_1_t3802 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m68236_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m68237_gshared (List_1_t3802 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m68237(__this, ___item, method) (( bool (*) (List_1_t3802 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m68237_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m68238_gshared (List_1_t3802 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m68238(__this, ___item, method) (( int32_t (*) (List_1_t3802 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m68238_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m68239_gshared (List_1_t3802 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m68239(__this, ___index, ___item, method) (( void (*) (List_1_t3802 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m68239_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m68240_gshared (List_1_t3802 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m68240(__this, ___item, method) (( void (*) (List_1_t3802 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m68240_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68241_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68241(__this, method) (( bool (*) (List_1_t3802 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68241_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m68242_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m68242(__this, method) (( bool (*) (List_1_t3802 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m68242_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m68243_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m68243(__this, method) (( Object_t * (*) (List_1_t3802 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m68243_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m68244_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m68244(__this, method) (( bool (*) (List_1_t3802 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m68244_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m68245_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m68245(__this, method) (( bool (*) (List_1_t3802 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m68245_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m68246_gshared (List_1_t3802 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m68246(__this, ___index, method) (( Object_t * (*) (List_1_t3802 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m68246_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m68247_gshared (List_1_t3802 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m68247(__this, ___index, ___value, method) (( void (*) (List_1_t3802 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m68247_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m68248_gshared (List_1_t3802 * __this, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define List_1_Add_m68248(__this, ___item, method) (( void (*) (List_1_t3802 *, KeyValuePair_2_t3806 , const MethodInfo*))List_1_Add_m68248_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m68249_gshared (List_1_t3802 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m68249(__this, ___newCount, method) (( void (*) (List_1_t3802 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m68249_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m68250_gshared (List_1_t3802 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m68250(__this, ___idx, ___count, method) (( void (*) (List_1_t3802 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m68250_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m68251_gshared (List_1_t3802 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m68251(__this, ___collection, method) (( void (*) (List_1_t3802 *, Object_t*, const MethodInfo*))List_1_AddCollection_m68251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m68252_gshared (List_1_t3802 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m68252(__this, ___enumerable, method) (( void (*) (List_1_t3802 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m68252_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m68253_gshared (List_1_t3802 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m68253(__this, ___collection, method) (( void (*) (List_1_t3802 *, Object_t*, const MethodInfo*))List_1_AddRange_m68253_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9213 * List_1_AsReadOnly_m68254_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m68254(__this, method) (( ReadOnlyCollection_1_t9213 * (*) (List_1_t3802 *, const MethodInfo*))List_1_AsReadOnly_m68254_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m68255_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_Clear_m68255(__this, method) (( void (*) (List_1_t3802 *, const MethodInfo*))List_1_Clear_m68255_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m68256_gshared (List_1_t3802 * __this, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define List_1_Contains_m68256(__this, ___item, method) (( bool (*) (List_1_t3802 *, KeyValuePair_2_t3806 , const MethodInfo*))List_1_Contains_m68256_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m68257_gshared (List_1_t3802 * __this, KeyValuePair_2U5BU5D_t9209* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m68257(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3802 *, KeyValuePair_2U5BU5D_t9209*, int32_t, const MethodInfo*))List_1_CopyTo_m68257_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3806  List_1_Find_m68258_gshared (List_1_t3802 * __this, Predicate_1_t9217 * ___match, const MethodInfo* method);
#define List_1_Find_m68258(__this, ___match, method) (( KeyValuePair_2_t3806  (*) (List_1_t3802 *, Predicate_1_t9217 *, const MethodInfo*))List_1_Find_m68258_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m68259_gshared (Object_t * __this /* static, unused */, Predicate_1_t9217 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m68259(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9217 *, const MethodInfo*))List_1_CheckMatch_m68259_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m68260_gshared (List_1_t3802 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9217 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m68260(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3802 *, int32_t, int32_t, Predicate_1_t9217 *, const MethodInfo*))List_1_GetIndex_m68260_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t9211  List_1_GetEnumerator_m68261_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m68261(__this, method) (( Enumerator_t9211  (*) (List_1_t3802 *, const MethodInfo*))List_1_GetEnumerator_m68261_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3802 * List_1_GetRange_m68262_gshared (List_1_t3802 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m68262(__this, ___index, ___count, method) (( List_1_t3802 * (*) (List_1_t3802 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m68262_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m68263_gshared (List_1_t3802 * __this, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define List_1_IndexOf_m68263(__this, ___item, method) (( int32_t (*) (List_1_t3802 *, KeyValuePair_2_t3806 , const MethodInfo*))List_1_IndexOf_m68263_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m68264_gshared (List_1_t3802 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m68264(__this, ___start, ___delta, method) (( void (*) (List_1_t3802 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m68264_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m68265_gshared (List_1_t3802 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m68265(__this, ___index, method) (( void (*) (List_1_t3802 *, int32_t, const MethodInfo*))List_1_CheckIndex_m68265_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m68266_gshared (List_1_t3802 * __this, int32_t ___index, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define List_1_Insert_m68266(__this, ___index, ___item, method) (( void (*) (List_1_t3802 *, int32_t, KeyValuePair_2_t3806 , const MethodInfo*))List_1_Insert_m68266_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m68267_gshared (List_1_t3802 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m68267(__this, ___collection, method) (( void (*) (List_1_t3802 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m68267_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m68268_gshared (List_1_t3802 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m68268(__this, ___index, ___collection, method) (( void (*) (List_1_t3802 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m68268_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m68269_gshared (List_1_t3802 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m68269(__this, ___index, ___collection, method) (( void (*) (List_1_t3802 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m68269_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m68270_gshared (List_1_t3802 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m68270(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3802 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m68270_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m68271_gshared (List_1_t3802 * __this, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define List_1_Remove_m68271(__this, ___item, method) (( bool (*) (List_1_t3802 *, KeyValuePair_2_t3806 , const MethodInfo*))List_1_Remove_m68271_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m68272_gshared (List_1_t3802 * __this, Predicate_1_t9217 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m68272(__this, ___match, method) (( int32_t (*) (List_1_t3802 *, Predicate_1_t9217 *, const MethodInfo*))List_1_RemoveAll_m68272_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m68273_gshared (List_1_t3802 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m68273(__this, ___index, method) (( void (*) (List_1_t3802 *, int32_t, const MethodInfo*))List_1_RemoveAt_m68273_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m68274_gshared (List_1_t3802 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m68274(__this, ___index, ___count, method) (( void (*) (List_1_t3802 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m68274_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m68275_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_Reverse_m68275(__this, method) (( void (*) (List_1_t3802 *, const MethodInfo*))List_1_Reverse_m68275_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m68276_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_Sort_m68276(__this, method) (( void (*) (List_1_t3802 *, const MethodInfo*))List_1_Sort_m68276_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m68277_gshared (List_1_t3802 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m68277(__this, ___comparer, method) (( void (*) (List_1_t3802 *, Object_t*, const MethodInfo*))List_1_Sort_m68277_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m68278_gshared (List_1_t3802 * __this, Comparison_1_t9220 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m68278(__this, ___comparison, method) (( void (*) (List_1_t3802 *, Comparison_1_t9220 *, const MethodInfo*))List_1_Sort_m68278_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t9209* List_1_ToArray_m68279_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_ToArray_m68279(__this, method) (( KeyValuePair_2U5BU5D_t9209* (*) (List_1_t3802 *, const MethodInfo*))List_1_ToArray_m68279_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m68280_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m68280(__this, method) (( void (*) (List_1_t3802 *, const MethodInfo*))List_1_TrimExcess_m68280_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m68281_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m68281(__this, method) (( int32_t (*) (List_1_t3802 *, const MethodInfo*))List_1_get_Capacity_m68281_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m68282_gshared (List_1_t3802 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m68282(__this, ___value, method) (( void (*) (List_1_t3802 *, int32_t, const MethodInfo*))List_1_set_Capacity_m68282_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m68283_gshared (List_1_t3802 * __this, const MethodInfo* method);
#define List_1_get_Count_m68283(__this, method) (( int32_t (*) (List_1_t3802 *, const MethodInfo*))List_1_get_Count_m68283_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3806  List_1_get_Item_m68284_gshared (List_1_t3802 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m68284(__this, ___index, method) (( KeyValuePair_2_t3806  (*) (List_1_t3802 *, int32_t, const MethodInfo*))List_1_get_Item_m68284_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m68285_gshared (List_1_t3802 * __this, int32_t ___index, KeyValuePair_2_t3806  ___value, const MethodInfo* method);
#define List_1_set_Item_m68285(__this, ___index, ___value, method) (( void (*) (List_1_t3802 *, int32_t, KeyValuePair_2_t3806 , const MethodInfo*))List_1_set_Item_m68285_gshared)(__this, ___index, ___value, method)

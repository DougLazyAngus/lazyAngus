#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3382;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t9752;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8647;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9753;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t9754;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t8651;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t8655;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t9755;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t8658;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_109.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m63809_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1__ctor_m63809(__this, method) (( void (*) (List_1_t3382 *, const MethodInfo*))List_1__ctor_m63809_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m63810_gshared (List_1_t3382 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m63810(__this, ___collection, method) (( void (*) (List_1_t3382 *, Object_t*, const MethodInfo*))List_1__ctor_m63810_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12013_gshared (List_1_t3382 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12013(__this, ___capacity, method) (( void (*) (List_1_t3382 *, int32_t, const MethodInfo*))List_1__ctor_m12013_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m63811_gshared (List_1_t3382 * __this, KeyValuePair_2U5BU5D_t8647* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m63811(__this, ___data, ___size, method) (( void (*) (List_1_t3382 *, KeyValuePair_2U5BU5D_t8647*, int32_t, const MethodInfo*))List_1__ctor_m63811_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m63812_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m63812(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m63812_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63813_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63813(__this, method) (( Object_t* (*) (List_1_t3382 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63813_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m63814_gshared (List_1_t3382 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m63814(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3382 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m63814_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m63815_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m63815(__this, method) (( Object_t * (*) (List_1_t3382 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m63815_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m63816_gshared (List_1_t3382 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m63816(__this, ___item, method) (( int32_t (*) (List_1_t3382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m63816_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m63817_gshared (List_1_t3382 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m63817(__this, ___item, method) (( bool (*) (List_1_t3382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m63817_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m63818_gshared (List_1_t3382 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m63818(__this, ___item, method) (( int32_t (*) (List_1_t3382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m63818_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m63819_gshared (List_1_t3382 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m63819(__this, ___index, ___item, method) (( void (*) (List_1_t3382 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m63819_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m63820_gshared (List_1_t3382 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m63820(__this, ___item, method) (( void (*) (List_1_t3382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m63820_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63821_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63821(__this, method) (( bool (*) (List_1_t3382 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63821_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m63822_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m63822(__this, method) (( bool (*) (List_1_t3382 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m63822_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m63823_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m63823(__this, method) (( Object_t * (*) (List_1_t3382 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m63823_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m63824_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m63824(__this, method) (( bool (*) (List_1_t3382 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m63824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m63825_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m63825(__this, method) (( bool (*) (List_1_t3382 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m63825_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m63826_gshared (List_1_t3382 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m63826(__this, ___index, method) (( Object_t * (*) (List_1_t3382 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m63826_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m63827_gshared (List_1_t3382 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m63827(__this, ___index, ___value, method) (( void (*) (List_1_t3382 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m63827_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m63828_gshared (List_1_t3382 * __this, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define List_1_Add_m63828(__this, ___item, method) (( void (*) (List_1_t3382 *, KeyValuePair_2_t3396 , const MethodInfo*))List_1_Add_m63828_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m63829_gshared (List_1_t3382 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m63829(__this, ___newCount, method) (( void (*) (List_1_t3382 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m63829_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m63830_gshared (List_1_t3382 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m63830(__this, ___idx, ___count, method) (( void (*) (List_1_t3382 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m63830_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m63831_gshared (List_1_t3382 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m63831(__this, ___collection, method) (( void (*) (List_1_t3382 *, Object_t*, const MethodInfo*))List_1_AddCollection_m63831_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m63832_gshared (List_1_t3382 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m63832(__this, ___enumerable, method) (( void (*) (List_1_t3382 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m63832_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m63833_gshared (List_1_t3382 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m63833(__this, ___collection, method) (( void (*) (List_1_t3382 *, Object_t*, const MethodInfo*))List_1_AddRange_m63833_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8651 * List_1_AsReadOnly_m63834_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m63834(__this, method) (( ReadOnlyCollection_1_t8651 * (*) (List_1_t3382 *, const MethodInfo*))List_1_AsReadOnly_m63834_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m63835_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_Clear_m63835(__this, method) (( void (*) (List_1_t3382 *, const MethodInfo*))List_1_Clear_m63835_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m63836_gshared (List_1_t3382 * __this, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define List_1_Contains_m63836(__this, ___item, method) (( bool (*) (List_1_t3382 *, KeyValuePair_2_t3396 , const MethodInfo*))List_1_Contains_m63836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m63837_gshared (List_1_t3382 * __this, KeyValuePair_2U5BU5D_t8647* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m63837(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3382 *, KeyValuePair_2U5BU5D_t8647*, int32_t, const MethodInfo*))List_1_CopyTo_m63837_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3396  List_1_Find_m63838_gshared (List_1_t3382 * __this, Predicate_1_t8655 * ___match, const MethodInfo* method);
#define List_1_Find_m63838(__this, ___match, method) (( KeyValuePair_2_t3396  (*) (List_1_t3382 *, Predicate_1_t8655 *, const MethodInfo*))List_1_Find_m63838_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m63839_gshared (Object_t * __this /* static, unused */, Predicate_1_t8655 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m63839(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8655 *, const MethodInfo*))List_1_CheckMatch_m63839_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m63840_gshared (List_1_t3382 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8655 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m63840(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3382 *, int32_t, int32_t, Predicate_1_t8655 *, const MethodInfo*))List_1_GetIndex_m63840_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t8649  List_1_GetEnumerator_m63841_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m63841(__this, method) (( Enumerator_t8649  (*) (List_1_t3382 *, const MethodInfo*))List_1_GetEnumerator_m63841_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3382 * List_1_GetRange_m63842_gshared (List_1_t3382 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m63842(__this, ___index, ___count, method) (( List_1_t3382 * (*) (List_1_t3382 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m63842_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m63843_gshared (List_1_t3382 * __this, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define List_1_IndexOf_m63843(__this, ___item, method) (( int32_t (*) (List_1_t3382 *, KeyValuePair_2_t3396 , const MethodInfo*))List_1_IndexOf_m63843_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m63844_gshared (List_1_t3382 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m63844(__this, ___start, ___delta, method) (( void (*) (List_1_t3382 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m63844_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m63845_gshared (List_1_t3382 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m63845(__this, ___index, method) (( void (*) (List_1_t3382 *, int32_t, const MethodInfo*))List_1_CheckIndex_m63845_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m63846_gshared (List_1_t3382 * __this, int32_t ___index, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define List_1_Insert_m63846(__this, ___index, ___item, method) (( void (*) (List_1_t3382 *, int32_t, KeyValuePair_2_t3396 , const MethodInfo*))List_1_Insert_m63846_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m63847_gshared (List_1_t3382 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m63847(__this, ___collection, method) (( void (*) (List_1_t3382 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m63847_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m63848_gshared (List_1_t3382 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m63848(__this, ___index, ___collection, method) (( void (*) (List_1_t3382 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m63848_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m63849_gshared (List_1_t3382 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m63849(__this, ___index, ___collection, method) (( void (*) (List_1_t3382 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m63849_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m63850_gshared (List_1_t3382 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m63850(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3382 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m63850_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m63851_gshared (List_1_t3382 * __this, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define List_1_Remove_m63851(__this, ___item, method) (( bool (*) (List_1_t3382 *, KeyValuePair_2_t3396 , const MethodInfo*))List_1_Remove_m63851_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m63852_gshared (List_1_t3382 * __this, Predicate_1_t8655 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m63852(__this, ___match, method) (( int32_t (*) (List_1_t3382 *, Predicate_1_t8655 *, const MethodInfo*))List_1_RemoveAll_m63852_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m63853_gshared (List_1_t3382 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m63853(__this, ___index, method) (( void (*) (List_1_t3382 *, int32_t, const MethodInfo*))List_1_RemoveAt_m63853_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m63854_gshared (List_1_t3382 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m63854(__this, ___index, ___count, method) (( void (*) (List_1_t3382 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m63854_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m63855_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_Reverse_m63855(__this, method) (( void (*) (List_1_t3382 *, const MethodInfo*))List_1_Reverse_m63855_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m63856_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_Sort_m63856(__this, method) (( void (*) (List_1_t3382 *, const MethodInfo*))List_1_Sort_m63856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m63857_gshared (List_1_t3382 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m63857(__this, ___comparer, method) (( void (*) (List_1_t3382 *, Object_t*, const MethodInfo*))List_1_Sort_m63857_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m63858_gshared (List_1_t3382 * __this, Comparison_1_t8658 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m63858(__this, ___comparison, method) (( void (*) (List_1_t3382 *, Comparison_1_t8658 *, const MethodInfo*))List_1_Sort_m63858_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8647* List_1_ToArray_m63859_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_ToArray_m63859(__this, method) (( KeyValuePair_2U5BU5D_t8647* (*) (List_1_t3382 *, const MethodInfo*))List_1_ToArray_m63859_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m63860_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m63860(__this, method) (( void (*) (List_1_t3382 *, const MethodInfo*))List_1_TrimExcess_m63860_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m63861_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m63861(__this, method) (( int32_t (*) (List_1_t3382 *, const MethodInfo*))List_1_get_Capacity_m63861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m63862_gshared (List_1_t3382 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m63862(__this, ___value, method) (( void (*) (List_1_t3382 *, int32_t, const MethodInfo*))List_1_set_Capacity_m63862_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m63863_gshared (List_1_t3382 * __this, const MethodInfo* method);
#define List_1_get_Count_m63863(__this, method) (( int32_t (*) (List_1_t3382 *, const MethodInfo*))List_1_get_Count_m63863_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3396  List_1_get_Item_m63864_gshared (List_1_t3382 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m63864(__this, ___index, method) (( KeyValuePair_2_t3396  (*) (List_1_t3382 *, int32_t, const MethodInfo*))List_1_get_Item_m63864_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m63865_gshared (List_1_t3382 * __this, int32_t ___index, KeyValuePair_2_t3396  ___value, const MethodInfo* method);
#define List_1_set_Item_m63865(__this, ___index, ___value, method) (( void (*) (List_1_t3382 *, int32_t, KeyValuePair_2_t3396 , const MethodInfo*))List_1_set_Item_m63865_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3365;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerable_1_t9704;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8611;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9705;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ICollection_1_t9706;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct ReadOnlyCollection_1_t8615;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Predicate_1_t8619;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IComparer_1_t9707;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t8622;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_106.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void List_1__ctor_m63353_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1__ctor_m63353(__this, method) (( void (*) (List_1_t3365 *, const MethodInfo*))List_1__ctor_m63353_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m63354_gshared (List_1_t3365 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m63354(__this, ___collection, method) (( void (*) (List_1_t3365 *, Object_t*, const MethodInfo*))List_1__ctor_m63354_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11862_gshared (List_1_t3365 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11862(__this, ___capacity, method) (( void (*) (List_1_t3365 *, int32_t, const MethodInfo*))List_1__ctor_m11862_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m63355_gshared (List_1_t3365 * __this, KeyValuePair_2U5BU5D_t8611* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m63355(__this, ___data, ___size, method) (( void (*) (List_1_t3365 *, KeyValuePair_2U5BU5D_t8611*, int32_t, const MethodInfo*))List_1__ctor_m63355_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.cctor()
extern "C" void List_1__cctor_m63356_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m63356(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m63356_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63357_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63357(__this, method) (( Object_t* (*) (List_1_t3365 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63357_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m63358_gshared (List_1_t3365 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m63358(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3365 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m63358_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m63359_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m63359(__this, method) (( Object_t * (*) (List_1_t3365 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m63359_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m63360_gshared (List_1_t3365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m63360(__this, ___item, method) (( int32_t (*) (List_1_t3365 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m63360_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m63361_gshared (List_1_t3365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m63361(__this, ___item, method) (( bool (*) (List_1_t3365 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m63361_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m63362_gshared (List_1_t3365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m63362(__this, ___item, method) (( int32_t (*) (List_1_t3365 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m63362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m63363_gshared (List_1_t3365 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m63363(__this, ___index, ___item, method) (( void (*) (List_1_t3365 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m63363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m63364_gshared (List_1_t3365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m63364(__this, ___item, method) (( void (*) (List_1_t3365 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m63364_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63365_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63365(__this, method) (( bool (*) (List_1_t3365 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63365_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m63366_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m63366(__this, method) (( bool (*) (List_1_t3365 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m63366_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m63367_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m63367(__this, method) (( Object_t * (*) (List_1_t3365 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m63367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m63368_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m63368(__this, method) (( bool (*) (List_1_t3365 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m63368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m63369_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m63369(__this, method) (( bool (*) (List_1_t3365 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m63369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m63370_gshared (List_1_t3365 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m63370(__this, ___index, method) (( Object_t * (*) (List_1_t3365 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m63370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m63371_gshared (List_1_t3365 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m63371(__this, ___index, ___value, method) (( void (*) (List_1_t3365 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m63371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void List_1_Add_m63372_gshared (List_1_t3365 * __this, KeyValuePair_2_t3379  ___item, const MethodInfo* method);
#define List_1_Add_m63372(__this, ___item, method) (( void (*) (List_1_t3365 *, KeyValuePair_2_t3379 , const MethodInfo*))List_1_Add_m63372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m63373_gshared (List_1_t3365 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m63373(__this, ___newCount, method) (( void (*) (List_1_t3365 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m63373_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m63374_gshared (List_1_t3365 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m63374(__this, ___idx, ___count, method) (( void (*) (List_1_t3365 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m63374_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m63375_gshared (List_1_t3365 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m63375(__this, ___collection, method) (( void (*) (List_1_t3365 *, Object_t*, const MethodInfo*))List_1_AddCollection_m63375_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m63376_gshared (List_1_t3365 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m63376(__this, ___enumerable, method) (( void (*) (List_1_t3365 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m63376_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m63377_gshared (List_1_t3365 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m63377(__this, ___collection, method) (( void (*) (List_1_t3365 *, Object_t*, const MethodInfo*))List_1_AddRange_m63377_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8615 * List_1_AsReadOnly_m63378_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m63378(__this, method) (( ReadOnlyCollection_1_t8615 * (*) (List_1_t3365 *, const MethodInfo*))List_1_AsReadOnly_m63378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void List_1_Clear_m63379_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_Clear_m63379(__this, method) (( void (*) (List_1_t3365 *, const MethodInfo*))List_1_Clear_m63379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool List_1_Contains_m63380_gshared (List_1_t3365 * __this, KeyValuePair_2_t3379  ___item, const MethodInfo* method);
#define List_1_Contains_m63380(__this, ___item, method) (( bool (*) (List_1_t3365 *, KeyValuePair_2_t3379 , const MethodInfo*))List_1_Contains_m63380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m63381_gshared (List_1_t3365 * __this, KeyValuePair_2U5BU5D_t8611* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m63381(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3365 *, KeyValuePair_2U5BU5D_t8611*, int32_t, const MethodInfo*))List_1_CopyTo_m63381_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t3379  List_1_Find_m63382_gshared (List_1_t3365 * __this, Predicate_1_t8619 * ___match, const MethodInfo* method);
#define List_1_Find_m63382(__this, ___match, method) (( KeyValuePair_2_t3379  (*) (List_1_t3365 *, Predicate_1_t8619 *, const MethodInfo*))List_1_Find_m63382_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m63383_gshared (Object_t * __this /* static, unused */, Predicate_1_t8619 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m63383(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8619 *, const MethodInfo*))List_1_CheckMatch_m63383_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m63384_gshared (List_1_t3365 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8619 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m63384(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3365 *, int32_t, int32_t, Predicate_1_t8619 *, const MethodInfo*))List_1_GetIndex_m63384_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Enumerator_t8613  List_1_GetEnumerator_m63385_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m63385(__this, method) (( Enumerator_t8613  (*) (List_1_t3365 *, const MethodInfo*))List_1_GetEnumerator_m63385_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t3365 * List_1_GetRange_m63386_gshared (List_1_t3365 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m63386(__this, ___index, ___count, method) (( List_1_t3365 * (*) (List_1_t3365 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m63386_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m63387_gshared (List_1_t3365 * __this, KeyValuePair_2_t3379  ___item, const MethodInfo* method);
#define List_1_IndexOf_m63387(__this, ___item, method) (( int32_t (*) (List_1_t3365 *, KeyValuePair_2_t3379 , const MethodInfo*))List_1_IndexOf_m63387_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m63388_gshared (List_1_t3365 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m63388(__this, ___start, ___delta, method) (( void (*) (List_1_t3365 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m63388_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m63389_gshared (List_1_t3365 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m63389(__this, ___index, method) (( void (*) (List_1_t3365 *, int32_t, const MethodInfo*))List_1_CheckIndex_m63389_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m63390_gshared (List_1_t3365 * __this, int32_t ___index, KeyValuePair_2_t3379  ___item, const MethodInfo* method);
#define List_1_Insert_m63390(__this, ___index, ___item, method) (( void (*) (List_1_t3365 *, int32_t, KeyValuePair_2_t3379 , const MethodInfo*))List_1_Insert_m63390_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m63391_gshared (List_1_t3365 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m63391(__this, ___collection, method) (( void (*) (List_1_t3365 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m63391_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m63392_gshared (List_1_t3365 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m63392(__this, ___index, ___collection, method) (( void (*) (List_1_t3365 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m63392_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m63393_gshared (List_1_t3365 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m63393(__this, ___index, ___collection, method) (( void (*) (List_1_t3365 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m63393_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m63394_gshared (List_1_t3365 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m63394(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3365 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m63394_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool List_1_Remove_m63395_gshared (List_1_t3365 * __this, KeyValuePair_2_t3379  ___item, const MethodInfo* method);
#define List_1_Remove_m63395(__this, ___item, method) (( bool (*) (List_1_t3365 *, KeyValuePair_2_t3379 , const MethodInfo*))List_1_Remove_m63395_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m63396_gshared (List_1_t3365 * __this, Predicate_1_t8619 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m63396(__this, ___match, method) (( int32_t (*) (List_1_t3365 *, Predicate_1_t8619 *, const MethodInfo*))List_1_RemoveAll_m63396_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m63397_gshared (List_1_t3365 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m63397(__this, ___index, method) (( void (*) (List_1_t3365 *, int32_t, const MethodInfo*))List_1_RemoveAt_m63397_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m63398_gshared (List_1_t3365 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m63398(__this, ___index, ___count, method) (( void (*) (List_1_t3365 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m63398_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Reverse()
extern "C" void List_1_Reverse_m63399_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_Reverse_m63399(__this, method) (( void (*) (List_1_t3365 *, const MethodInfo*))List_1_Reverse_m63399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort()
extern "C" void List_1_Sort_m63400_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_Sort_m63400(__this, method) (( void (*) (List_1_t3365 *, const MethodInfo*))List_1_Sort_m63400_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m63401_gshared (List_1_t3365 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m63401(__this, ___comparer, method) (( void (*) (List_1_t3365 *, Object_t*, const MethodInfo*))List_1_Sort_m63401_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m63402_gshared (List_1_t3365 * __this, Comparison_1_t8622 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m63402(__this, ___comparison, method) (( void (*) (List_1_t3365 *, Comparison_1_t8622 *, const MethodInfo*))List_1_Sort_m63402_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8611* List_1_ToArray_m63403_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_ToArray_m63403(__this, method) (( KeyValuePair_2U5BU5D_t8611* (*) (List_1_t3365 *, const MethodInfo*))List_1_ToArray_m63403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::TrimExcess()
extern "C" void List_1_TrimExcess_m63404_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m63404(__this, method) (( void (*) (List_1_t3365 *, const MethodInfo*))List_1_TrimExcess_m63404_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m63405_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m63405(__this, method) (( int32_t (*) (List_1_t3365 *, const MethodInfo*))List_1_get_Capacity_m63405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m63406_gshared (List_1_t3365 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m63406(__this, ___value, method) (( void (*) (List_1_t3365 *, int32_t, const MethodInfo*))List_1_set_Capacity_m63406_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t List_1_get_Count_m63407_gshared (List_1_t3365 * __this, const MethodInfo* method);
#define List_1_get_Count_m63407(__this, method) (( int32_t (*) (List_1_t3365 *, const MethodInfo*))List_1_get_Count_m63407_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3379  List_1_get_Item_m63408_gshared (List_1_t3365 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m63408(__this, ___index, method) (( KeyValuePair_2_t3379  (*) (List_1_t3365 *, int32_t, const MethodInfo*))List_1_get_Item_m63408_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m63409_gshared (List_1_t3365 * __this, int32_t ___index, KeyValuePair_2_t3379  ___value, const MethodInfo* method);
#define List_1_set_Item_m63409(__this, ___index, ___value, method) (( void (*) (List_1_t3365 *, int32_t, KeyValuePair_2_t3379 , const MethodInfo*))List_1_set_Item_m63409_gshared)(__this, ___index, ___value, method)

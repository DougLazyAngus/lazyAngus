#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct List_1_t8578;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerable_1_t8569;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8577;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8570;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ICollection_1_t10052;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ReadOnlyCollection_1_t8581;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Predicate_1_t8585;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IComparer_1_t10053;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Comparison_1_t8588;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_98.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void List_1__ctor_m60545_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1__ctor_m60545(__this, method) (( void (*) (List_1_t8578 *, const MethodInfo*))List_1__ctor_m60545_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60546_gshared (List_1_t8578 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60546(__this, ___collection, method) (( void (*) (List_1_t8578 *, Object_t*, const MethodInfo*))List_1__ctor_m60546_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m60547_gshared (List_1_t8578 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m60547(__this, ___capacity, method) (( void (*) (List_1_t8578 *, int32_t, const MethodInfo*))List_1__ctor_m60547_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60548_gshared (List_1_t8578 * __this, KeyValuePair_2U5BU5D_t8577* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60548(__this, ___data, ___size, method) (( void (*) (List_1_t8578 *, KeyValuePair_2U5BU5D_t8577*, int32_t, const MethodInfo*))List_1__ctor_m60548_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.cctor()
extern "C" void List_1__cctor_m60549_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60549(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60549_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60550_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60550(__this, method) (( Object_t* (*) (List_1_t8578 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60551_gshared (List_1_t8578 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60551(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8578 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60551_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60552_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60552(__this, method) (( Object_t * (*) (List_1_t8578 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60552_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60553_gshared (List_1_t8578 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60553(__this, ___item, method) (( int32_t (*) (List_1_t8578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60553_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60554_gshared (List_1_t8578 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60554(__this, ___item, method) (( bool (*) (List_1_t8578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60554_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60555_gshared (List_1_t8578 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60555(__this, ___item, method) (( int32_t (*) (List_1_t8578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60555_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60556_gshared (List_1_t8578 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60556(__this, ___index, ___item, method) (( void (*) (List_1_t8578 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60556_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60557_gshared (List_1_t8578 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60557(__this, ___item, method) (( void (*) (List_1_t8578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60557_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60558_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60558(__this, method) (( bool (*) (List_1_t8578 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60558_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60559_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60559(__this, method) (( bool (*) (List_1_t8578 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60559_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60560_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60560(__this, method) (( Object_t * (*) (List_1_t8578 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60560_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60561_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60561(__this, method) (( bool (*) (List_1_t8578 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60561_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60562_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60562(__this, method) (( bool (*) (List_1_t8578 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60562_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60563_gshared (List_1_t8578 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60563(__this, ___index, method) (( Object_t * (*) (List_1_t8578 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60563_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60564_gshared (List_1_t8578 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60564(__this, ___index, ___value, method) (( void (*) (List_1_t8578 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60564_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Add(T)
extern "C" void List_1_Add_m60565_gshared (List_1_t8578 * __this, KeyValuePair_2_t7603  ___item, const MethodInfo* method);
#define List_1_Add_m60565(__this, ___item, method) (( void (*) (List_1_t8578 *, KeyValuePair_2_t7603 , const MethodInfo*))List_1_Add_m60565_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60566_gshared (List_1_t8578 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60566(__this, ___newCount, method) (( void (*) (List_1_t8578 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60566_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60567_gshared (List_1_t8578 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60567(__this, ___idx, ___count, method) (( void (*) (List_1_t8578 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60567_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60568_gshared (List_1_t8578 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60568(__this, ___collection, method) (( void (*) (List_1_t8578 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60568_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60569_gshared (List_1_t8578 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60569(__this, ___enumerable, method) (( void (*) (List_1_t8578 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60569_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60570_gshared (List_1_t8578 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60570(__this, ___collection, method) (( void (*) (List_1_t8578 *, Object_t*, const MethodInfo*))List_1_AddRange_m60570_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8581 * List_1_AsReadOnly_m60571_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60571(__this, method) (( ReadOnlyCollection_1_t8581 * (*) (List_1_t8578 *, const MethodInfo*))List_1_AsReadOnly_m60571_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Clear()
extern "C" void List_1_Clear_m60572_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_Clear_m60572(__this, method) (( void (*) (List_1_t8578 *, const MethodInfo*))List_1_Clear_m60572_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Contains(T)
extern "C" bool List_1_Contains_m60573_gshared (List_1_t8578 * __this, KeyValuePair_2_t7603  ___item, const MethodInfo* method);
#define List_1_Contains_m60573(__this, ___item, method) (( bool (*) (List_1_t8578 *, KeyValuePair_2_t7603 , const MethodInfo*))List_1_Contains_m60573_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60574_gshared (List_1_t8578 * __this, KeyValuePair_2U5BU5D_t8577* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60574(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8578 *, KeyValuePair_2U5BU5D_t8577*, int32_t, const MethodInfo*))List_1_CopyTo_m60574_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7603  List_1_Find_m60575_gshared (List_1_t8578 * __this, Predicate_1_t8585 * ___match, const MethodInfo* method);
#define List_1_Find_m60575(__this, ___match, method) (( KeyValuePair_2_t7603  (*) (List_1_t8578 *, Predicate_1_t8585 *, const MethodInfo*))List_1_Find_m60575_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60576_gshared (Object_t * __this /* static, unused */, Predicate_1_t8585 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60576(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8585 *, const MethodInfo*))List_1_CheckMatch_m60576_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60577_gshared (List_1_t8578 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8585 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60577(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8578 *, int32_t, int32_t, Predicate_1_t8585 *, const MethodInfo*))List_1_GetIndex_m60577_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetEnumerator()
extern "C" Enumerator_t8579  List_1_GetEnumerator_m60578_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60578(__this, method) (( Enumerator_t8579  (*) (List_1_t8578 *, const MethodInfo*))List_1_GetEnumerator_m60578_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8578 * List_1_GetRange_m60579_gshared (List_1_t8578 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60579(__this, ___index, ___count, method) (( List_1_t8578 * (*) (List_1_t8578 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60579_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60580_gshared (List_1_t8578 * __this, KeyValuePair_2_t7603  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60580(__this, ___item, method) (( int32_t (*) (List_1_t8578 *, KeyValuePair_2_t7603 , const MethodInfo*))List_1_IndexOf_m60580_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60581_gshared (List_1_t8578 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60581(__this, ___start, ___delta, method) (( void (*) (List_1_t8578 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60581_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60582_gshared (List_1_t8578 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60582(__this, ___index, method) (( void (*) (List_1_t8578 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60582_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60583_gshared (List_1_t8578 * __this, int32_t ___index, KeyValuePair_2_t7603  ___item, const MethodInfo* method);
#define List_1_Insert_m60583(__this, ___index, ___item, method) (( void (*) (List_1_t8578 *, int32_t, KeyValuePair_2_t7603 , const MethodInfo*))List_1_Insert_m60583_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60584_gshared (List_1_t8578 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60584(__this, ___collection, method) (( void (*) (List_1_t8578 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60584_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60585_gshared (List_1_t8578 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60585(__this, ___index, ___collection, method) (( void (*) (List_1_t8578 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60585_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60586_gshared (List_1_t8578 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60586(__this, ___index, ___collection, method) (( void (*) (List_1_t8578 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60586_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60587_gshared (List_1_t8578 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60587(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8578 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60587_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Remove(T)
extern "C" bool List_1_Remove_m60588_gshared (List_1_t8578 * __this, KeyValuePair_2_t7603  ___item, const MethodInfo* method);
#define List_1_Remove_m60588(__this, ___item, method) (( bool (*) (List_1_t8578 *, KeyValuePair_2_t7603 , const MethodInfo*))List_1_Remove_m60588_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60589_gshared (List_1_t8578 * __this, Predicate_1_t8585 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60589(__this, ___match, method) (( int32_t (*) (List_1_t8578 *, Predicate_1_t8585 *, const MethodInfo*))List_1_RemoveAll_m60589_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60590_gshared (List_1_t8578 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60590(__this, ___index, method) (( void (*) (List_1_t8578 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60590_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60591_gshared (List_1_t8578 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60591(__this, ___index, ___count, method) (( void (*) (List_1_t8578 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60591_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Reverse()
extern "C" void List_1_Reverse_m60592_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_Reverse_m60592(__this, method) (( void (*) (List_1_t8578 *, const MethodInfo*))List_1_Reverse_m60592_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort()
extern "C" void List_1_Sort_m60593_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_Sort_m60593(__this, method) (( void (*) (List_1_t8578 *, const MethodInfo*))List_1_Sort_m60593_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60594_gshared (List_1_t8578 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60594(__this, ___comparer, method) (( void (*) (List_1_t8578 *, Object_t*, const MethodInfo*))List_1_Sort_m60594_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60595_gshared (List_1_t8578 * __this, Comparison_1_t8588 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60595(__this, ___comparison, method) (( void (*) (List_1_t8578 *, Comparison_1_t8588 *, const MethodInfo*))List_1_Sort_m60595_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8577* List_1_ToArray_m60596_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_ToArray_m60596(__this, method) (( KeyValuePair_2U5BU5D_t8577* (*) (List_1_t8578 *, const MethodInfo*))List_1_ToArray_m60596_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::TrimExcess()
extern "C" void List_1_TrimExcess_m60597_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60597(__this, method) (( void (*) (List_1_t8578 *, const MethodInfo*))List_1_TrimExcess_m60597_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60598_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60598(__this, method) (( int32_t (*) (List_1_t8578 *, const MethodInfo*))List_1_get_Capacity_m60598_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60599_gshared (List_1_t8578 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60599(__this, ___value, method) (( void (*) (List_1_t8578 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60599_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Count()
extern "C" int32_t List_1_get_Count_m60600_gshared (List_1_t8578 * __this, const MethodInfo* method);
#define List_1_get_Count_m60600(__this, method) (( int32_t (*) (List_1_t8578 *, const MethodInfo*))List_1_get_Count_m60600_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7603  List_1_get_Item_m60601_gshared (List_1_t8578 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60601(__this, ___index, method) (( KeyValuePair_2_t7603  (*) (List_1_t8578 *, int32_t, const MethodInfo*))List_1_get_Item_m60601_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60602_gshared (List_1_t8578 * __this, int32_t ___index, KeyValuePair_2_t7603  ___value, const MethodInfo* method);
#define List_1_set_Item_m60602(__this, ___index, ___value, method) (( void (*) (List_1_t8578 *, int32_t, KeyValuePair_2_t7603 , const MethodInfo*))List_1_set_Item_m60602_gshared)(__this, ___index, ___value, method)

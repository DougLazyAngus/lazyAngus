#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct List_1_t8573;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerable_1_t8564;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8572;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8565;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ICollection_1_t10047;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ReadOnlyCollection_1_t8576;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Predicate_1_t8580;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IComparer_1_t10048;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Comparison_1_t8583;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_98.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void List_1__ctor_m60533_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1__ctor_m60533(__this, method) (( void (*) (List_1_t8573 *, const MethodInfo*))List_1__ctor_m60533_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60534_gshared (List_1_t8573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60534(__this, ___collection, method) (( void (*) (List_1_t8573 *, Object_t*, const MethodInfo*))List_1__ctor_m60534_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m60535_gshared (List_1_t8573 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m60535(__this, ___capacity, method) (( void (*) (List_1_t8573 *, int32_t, const MethodInfo*))List_1__ctor_m60535_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60536_gshared (List_1_t8573 * __this, KeyValuePair_2U5BU5D_t8572* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60536(__this, ___data, ___size, method) (( void (*) (List_1_t8573 *, KeyValuePair_2U5BU5D_t8572*, int32_t, const MethodInfo*))List_1__ctor_m60536_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.cctor()
extern "C" void List_1__cctor_m60537_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60537(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60537_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60538_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60538(__this, method) (( Object_t* (*) (List_1_t8573 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60539_gshared (List_1_t8573 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60539(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8573 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60539_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60540_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60540(__this, method) (( Object_t * (*) (List_1_t8573 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60540_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60541_gshared (List_1_t8573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60541(__this, ___item, method) (( int32_t (*) (List_1_t8573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60541_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60542_gshared (List_1_t8573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60542(__this, ___item, method) (( bool (*) (List_1_t8573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60542_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60543_gshared (List_1_t8573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60543(__this, ___item, method) (( int32_t (*) (List_1_t8573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60543_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60544_gshared (List_1_t8573 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60544(__this, ___index, ___item, method) (( void (*) (List_1_t8573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60544_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60545_gshared (List_1_t8573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60545(__this, ___item, method) (( void (*) (List_1_t8573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60545_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60546_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60546(__this, method) (( bool (*) (List_1_t8573 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60547_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60547(__this, method) (( bool (*) (List_1_t8573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60548_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60548(__this, method) (( Object_t * (*) (List_1_t8573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60548_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60549_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60549(__this, method) (( bool (*) (List_1_t8573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60549_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60550_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60550(__this, method) (( bool (*) (List_1_t8573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60550_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60551_gshared (List_1_t8573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60551(__this, ___index, method) (( Object_t * (*) (List_1_t8573 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60551_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60552_gshared (List_1_t8573 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60552(__this, ___index, ___value, method) (( void (*) (List_1_t8573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60552_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Add(T)
extern "C" void List_1_Add_m60553_gshared (List_1_t8573 * __this, KeyValuePair_2_t7598  ___item, const MethodInfo* method);
#define List_1_Add_m60553(__this, ___item, method) (( void (*) (List_1_t8573 *, KeyValuePair_2_t7598 , const MethodInfo*))List_1_Add_m60553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60554_gshared (List_1_t8573 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60554(__this, ___newCount, method) (( void (*) (List_1_t8573 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60554_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60555_gshared (List_1_t8573 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60555(__this, ___idx, ___count, method) (( void (*) (List_1_t8573 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60555_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60556_gshared (List_1_t8573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60556(__this, ___collection, method) (( void (*) (List_1_t8573 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60556_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60557_gshared (List_1_t8573 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60557(__this, ___enumerable, method) (( void (*) (List_1_t8573 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60557_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60558_gshared (List_1_t8573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60558(__this, ___collection, method) (( void (*) (List_1_t8573 *, Object_t*, const MethodInfo*))List_1_AddRange_m60558_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8576 * List_1_AsReadOnly_m60559_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60559(__this, method) (( ReadOnlyCollection_1_t8576 * (*) (List_1_t8573 *, const MethodInfo*))List_1_AsReadOnly_m60559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Clear()
extern "C" void List_1_Clear_m60560_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_Clear_m60560(__this, method) (( void (*) (List_1_t8573 *, const MethodInfo*))List_1_Clear_m60560_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Contains(T)
extern "C" bool List_1_Contains_m60561_gshared (List_1_t8573 * __this, KeyValuePair_2_t7598  ___item, const MethodInfo* method);
#define List_1_Contains_m60561(__this, ___item, method) (( bool (*) (List_1_t8573 *, KeyValuePair_2_t7598 , const MethodInfo*))List_1_Contains_m60561_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60562_gshared (List_1_t8573 * __this, KeyValuePair_2U5BU5D_t8572* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60562(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8573 *, KeyValuePair_2U5BU5D_t8572*, int32_t, const MethodInfo*))List_1_CopyTo_m60562_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7598  List_1_Find_m60563_gshared (List_1_t8573 * __this, Predicate_1_t8580 * ___match, const MethodInfo* method);
#define List_1_Find_m60563(__this, ___match, method) (( KeyValuePair_2_t7598  (*) (List_1_t8573 *, Predicate_1_t8580 *, const MethodInfo*))List_1_Find_m60563_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60564_gshared (Object_t * __this /* static, unused */, Predicate_1_t8580 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60564(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8580 *, const MethodInfo*))List_1_CheckMatch_m60564_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60565_gshared (List_1_t8573 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8580 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60565(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8573 *, int32_t, int32_t, Predicate_1_t8580 *, const MethodInfo*))List_1_GetIndex_m60565_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetEnumerator()
extern "C" Enumerator_t8574  List_1_GetEnumerator_m60566_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60566(__this, method) (( Enumerator_t8574  (*) (List_1_t8573 *, const MethodInfo*))List_1_GetEnumerator_m60566_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8573 * List_1_GetRange_m60567_gshared (List_1_t8573 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60567(__this, ___index, ___count, method) (( List_1_t8573 * (*) (List_1_t8573 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60567_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60568_gshared (List_1_t8573 * __this, KeyValuePair_2_t7598  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60568(__this, ___item, method) (( int32_t (*) (List_1_t8573 *, KeyValuePair_2_t7598 , const MethodInfo*))List_1_IndexOf_m60568_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60569_gshared (List_1_t8573 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60569(__this, ___start, ___delta, method) (( void (*) (List_1_t8573 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60569_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60570_gshared (List_1_t8573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60570(__this, ___index, method) (( void (*) (List_1_t8573 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60570_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60571_gshared (List_1_t8573 * __this, int32_t ___index, KeyValuePair_2_t7598  ___item, const MethodInfo* method);
#define List_1_Insert_m60571(__this, ___index, ___item, method) (( void (*) (List_1_t8573 *, int32_t, KeyValuePair_2_t7598 , const MethodInfo*))List_1_Insert_m60571_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60572_gshared (List_1_t8573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60572(__this, ___collection, method) (( void (*) (List_1_t8573 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60572_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60573_gshared (List_1_t8573 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60573(__this, ___index, ___collection, method) (( void (*) (List_1_t8573 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60573_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60574_gshared (List_1_t8573 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60574(__this, ___index, ___collection, method) (( void (*) (List_1_t8573 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60574_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60575_gshared (List_1_t8573 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60575(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8573 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60575_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Remove(T)
extern "C" bool List_1_Remove_m60576_gshared (List_1_t8573 * __this, KeyValuePair_2_t7598  ___item, const MethodInfo* method);
#define List_1_Remove_m60576(__this, ___item, method) (( bool (*) (List_1_t8573 *, KeyValuePair_2_t7598 , const MethodInfo*))List_1_Remove_m60576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60577_gshared (List_1_t8573 * __this, Predicate_1_t8580 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60577(__this, ___match, method) (( int32_t (*) (List_1_t8573 *, Predicate_1_t8580 *, const MethodInfo*))List_1_RemoveAll_m60577_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60578_gshared (List_1_t8573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60578(__this, ___index, method) (( void (*) (List_1_t8573 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60578_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60579_gshared (List_1_t8573 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60579(__this, ___index, ___count, method) (( void (*) (List_1_t8573 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60579_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Reverse()
extern "C" void List_1_Reverse_m60580_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_Reverse_m60580(__this, method) (( void (*) (List_1_t8573 *, const MethodInfo*))List_1_Reverse_m60580_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort()
extern "C" void List_1_Sort_m60581_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_Sort_m60581(__this, method) (( void (*) (List_1_t8573 *, const MethodInfo*))List_1_Sort_m60581_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60582_gshared (List_1_t8573 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60582(__this, ___comparer, method) (( void (*) (List_1_t8573 *, Object_t*, const MethodInfo*))List_1_Sort_m60582_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60583_gshared (List_1_t8573 * __this, Comparison_1_t8583 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60583(__this, ___comparison, method) (( void (*) (List_1_t8573 *, Comparison_1_t8583 *, const MethodInfo*))List_1_Sort_m60583_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8572* List_1_ToArray_m60584_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_ToArray_m60584(__this, method) (( KeyValuePair_2U5BU5D_t8572* (*) (List_1_t8573 *, const MethodInfo*))List_1_ToArray_m60584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::TrimExcess()
extern "C" void List_1_TrimExcess_m60585_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60585(__this, method) (( void (*) (List_1_t8573 *, const MethodInfo*))List_1_TrimExcess_m60585_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60586_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60586(__this, method) (( int32_t (*) (List_1_t8573 *, const MethodInfo*))List_1_get_Capacity_m60586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60587_gshared (List_1_t8573 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60587(__this, ___value, method) (( void (*) (List_1_t8573 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60587_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Count()
extern "C" int32_t List_1_get_Count_m60588_gshared (List_1_t8573 * __this, const MethodInfo* method);
#define List_1_get_Count_m60588(__this, method) (( int32_t (*) (List_1_t8573 *, const MethodInfo*))List_1_get_Count_m60588_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7598  List_1_get_Item_m60589_gshared (List_1_t8573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60589(__this, ___index, method) (( KeyValuePair_2_t7598  (*) (List_1_t8573 *, int32_t, const MethodInfo*))List_1_get_Item_m60589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60590_gshared (List_1_t8573 * __this, int32_t ___index, KeyValuePair_2_t7598  ___value, const MethodInfo* method);
#define List_1_set_Item_m60590(__this, ___index, ___value, method) (( void (*) (List_1_t8573 *, int32_t, KeyValuePair_2_t7598 , const MethodInfo*))List_1_set_Item_m60590_gshared)(__this, ___index, ___value, method)

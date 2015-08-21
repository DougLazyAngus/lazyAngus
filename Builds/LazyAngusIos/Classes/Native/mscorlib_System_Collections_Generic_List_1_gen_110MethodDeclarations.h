#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct List_1_t7973;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerable_1_t7964;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7972;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7965;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ICollection_1_t9414;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ReadOnlyCollection_1_t7976;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t7980;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IComparer_1_t9415;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t7983;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_93.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void List_1__ctor_m55503_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1__ctor_m55503(__this, method) (( void (*) (List_1_t7973 *, const MethodInfo*))List_1__ctor_m55503_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55504_gshared (List_1_t7973 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55504(__this, ___collection, method) (( void (*) (List_1_t7973 *, Object_t*, const MethodInfo*))List_1__ctor_m55504_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55505_gshared (List_1_t7973 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55505(__this, ___capacity, method) (( void (*) (List_1_t7973 *, int32_t, const MethodInfo*))List_1__ctor_m55505_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55506_gshared (List_1_t7973 * __this, KeyValuePair_2U5BU5D_t7972* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55506(__this, ___data, ___size, method) (( void (*) (List_1_t7973 *, KeyValuePair_2U5BU5D_t7972*, int32_t, const MethodInfo*))List_1__ctor_m55506_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.cctor()
extern "C" void List_1__cctor_m55507_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55507(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55507_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55508_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55508(__this, method) (( Object_t* (*) (List_1_t7973 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55508_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55509_gshared (List_1_t7973 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55509(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7973 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55509_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55510_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55510(__this, method) (( Object_t * (*) (List_1_t7973 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55511_gshared (List_1_t7973 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55511(__this, ___item, method) (( int32_t (*) (List_1_t7973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55511_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55512_gshared (List_1_t7973 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55512(__this, ___item, method) (( bool (*) (List_1_t7973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55513_gshared (List_1_t7973 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55513(__this, ___item, method) (( int32_t (*) (List_1_t7973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55514_gshared (List_1_t7973 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55514(__this, ___index, ___item, method) (( void (*) (List_1_t7973 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55514_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55515_gshared (List_1_t7973 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55515(__this, ___item, method) (( void (*) (List_1_t7973 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55515_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55516_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55516(__this, method) (( bool (*) (List_1_t7973 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55516_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55517_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55517(__this, method) (( bool (*) (List_1_t7973 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55517_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55518_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55518(__this, method) (( Object_t * (*) (List_1_t7973 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55519_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55519(__this, method) (( bool (*) (List_1_t7973 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55519_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55520_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55520(__this, method) (( bool (*) (List_1_t7973 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55520_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55521_gshared (List_1_t7973 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55521(__this, ___index, method) (( Object_t * (*) (List_1_t7973 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55521_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55522_gshared (List_1_t7973 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55522(__this, ___index, ___value, method) (( void (*) (List_1_t7973 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55522_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Add(T)
extern "C" void List_1_Add_m55523_gshared (List_1_t7973 * __this, KeyValuePair_2_t7021  ___item, const MethodInfo* method);
#define List_1_Add_m55523(__this, ___item, method) (( void (*) (List_1_t7973 *, KeyValuePair_2_t7021 , const MethodInfo*))List_1_Add_m55523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55524_gshared (List_1_t7973 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55524(__this, ___newCount, method) (( void (*) (List_1_t7973 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55524_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55525_gshared (List_1_t7973 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55525(__this, ___idx, ___count, method) (( void (*) (List_1_t7973 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55525_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55526_gshared (List_1_t7973 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55526(__this, ___collection, method) (( void (*) (List_1_t7973 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55526_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55527_gshared (List_1_t7973 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55527(__this, ___enumerable, method) (( void (*) (List_1_t7973 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55527_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55528_gshared (List_1_t7973 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55528(__this, ___collection, method) (( void (*) (List_1_t7973 *, Object_t*, const MethodInfo*))List_1_AddRange_m55528_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7976 * List_1_AsReadOnly_m55529_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55529(__this, method) (( ReadOnlyCollection_1_t7976 * (*) (List_1_t7973 *, const MethodInfo*))List_1_AsReadOnly_m55529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Clear()
extern "C" void List_1_Clear_m55530_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_Clear_m55530(__this, method) (( void (*) (List_1_t7973 *, const MethodInfo*))List_1_Clear_m55530_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Contains(T)
extern "C" bool List_1_Contains_m55531_gshared (List_1_t7973 * __this, KeyValuePair_2_t7021  ___item, const MethodInfo* method);
#define List_1_Contains_m55531(__this, ___item, method) (( bool (*) (List_1_t7973 *, KeyValuePair_2_t7021 , const MethodInfo*))List_1_Contains_m55531_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55532_gshared (List_1_t7973 * __this, KeyValuePair_2U5BU5D_t7972* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55532(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7973 *, KeyValuePair_2U5BU5D_t7972*, int32_t, const MethodInfo*))List_1_CopyTo_m55532_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7021  List_1_Find_m55533_gshared (List_1_t7973 * __this, Predicate_1_t7980 * ___match, const MethodInfo* method);
#define List_1_Find_m55533(__this, ___match, method) (( KeyValuePair_2_t7021  (*) (List_1_t7973 *, Predicate_1_t7980 *, const MethodInfo*))List_1_Find_m55533_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55534_gshared (Object_t * __this /* static, unused */, Predicate_1_t7980 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55534(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7980 *, const MethodInfo*))List_1_CheckMatch_m55534_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55535_gshared (List_1_t7973 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7980 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55535(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7973 *, int32_t, int32_t, Predicate_1_t7980 *, const MethodInfo*))List_1_GetIndex_m55535_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetEnumerator()
extern "C" Enumerator_t7974  List_1_GetEnumerator_m55536_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55536(__this, method) (( Enumerator_t7974  (*) (List_1_t7973 *, const MethodInfo*))List_1_GetEnumerator_m55536_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7973 * List_1_GetRange_m55537_gshared (List_1_t7973 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55537(__this, ___index, ___count, method) (( List_1_t7973 * (*) (List_1_t7973 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55537_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55538_gshared (List_1_t7973 * __this, KeyValuePair_2_t7021  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55538(__this, ___item, method) (( int32_t (*) (List_1_t7973 *, KeyValuePair_2_t7021 , const MethodInfo*))List_1_IndexOf_m55538_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55539_gshared (List_1_t7973 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55539(__this, ___start, ___delta, method) (( void (*) (List_1_t7973 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55539_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55540_gshared (List_1_t7973 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55540(__this, ___index, method) (( void (*) (List_1_t7973 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55540_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55541_gshared (List_1_t7973 * __this, int32_t ___index, KeyValuePair_2_t7021  ___item, const MethodInfo* method);
#define List_1_Insert_m55541(__this, ___index, ___item, method) (( void (*) (List_1_t7973 *, int32_t, KeyValuePair_2_t7021 , const MethodInfo*))List_1_Insert_m55541_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55542_gshared (List_1_t7973 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55542(__this, ___collection, method) (( void (*) (List_1_t7973 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55542_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55543_gshared (List_1_t7973 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55543(__this, ___index, ___collection, method) (( void (*) (List_1_t7973 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55543_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55544_gshared (List_1_t7973 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55544(__this, ___index, ___collection, method) (( void (*) (List_1_t7973 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55544_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55545_gshared (List_1_t7973 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55545(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7973 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55545_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Remove(T)
extern "C" bool List_1_Remove_m55546_gshared (List_1_t7973 * __this, KeyValuePair_2_t7021  ___item, const MethodInfo* method);
#define List_1_Remove_m55546(__this, ___item, method) (( bool (*) (List_1_t7973 *, KeyValuePair_2_t7021 , const MethodInfo*))List_1_Remove_m55546_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55547_gshared (List_1_t7973 * __this, Predicate_1_t7980 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55547(__this, ___match, method) (( int32_t (*) (List_1_t7973 *, Predicate_1_t7980 *, const MethodInfo*))List_1_RemoveAll_m55547_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55548_gshared (List_1_t7973 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55548(__this, ___index, method) (( void (*) (List_1_t7973 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55549_gshared (List_1_t7973 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55549(__this, ___index, ___count, method) (( void (*) (List_1_t7973 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55549_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Reverse()
extern "C" void List_1_Reverse_m55550_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_Reverse_m55550(__this, method) (( void (*) (List_1_t7973 *, const MethodInfo*))List_1_Reverse_m55550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort()
extern "C" void List_1_Sort_m55551_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_Sort_m55551(__this, method) (( void (*) (List_1_t7973 *, const MethodInfo*))List_1_Sort_m55551_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55552_gshared (List_1_t7973 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55552(__this, ___comparer, method) (( void (*) (List_1_t7973 *, Object_t*, const MethodInfo*))List_1_Sort_m55552_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55553_gshared (List_1_t7973 * __this, Comparison_1_t7983 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55553(__this, ___comparison, method) (( void (*) (List_1_t7973 *, Comparison_1_t7983 *, const MethodInfo*))List_1_Sort_m55553_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7972* List_1_ToArray_m55554_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_ToArray_m55554(__this, method) (( KeyValuePair_2U5BU5D_t7972* (*) (List_1_t7973 *, const MethodInfo*))List_1_ToArray_m55554_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55555_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55555(__this, method) (( void (*) (List_1_t7973 *, const MethodInfo*))List_1_TrimExcess_m55555_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55556_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55556(__this, method) (( int32_t (*) (List_1_t7973 *, const MethodInfo*))List_1_get_Capacity_m55556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55557_gshared (List_1_t7973 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55557(__this, ___value, method) (( void (*) (List_1_t7973 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55557_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Count()
extern "C" int32_t List_1_get_Count_m55558_gshared (List_1_t7973 * __this, const MethodInfo* method);
#define List_1_get_Count_m55558(__this, method) (( int32_t (*) (List_1_t7973 *, const MethodInfo*))List_1_get_Count_m55558_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7021  List_1_get_Item_m55559_gshared (List_1_t7973 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55559(__this, ___index, method) (( KeyValuePair_2_t7021  (*) (List_1_t7973 *, int32_t, const MethodInfo*))List_1_get_Item_m55559_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55560_gshared (List_1_t7973 * __this, int32_t ___index, KeyValuePair_2_t7021  ___value, const MethodInfo* method);
#define List_1_set_Item_m55560(__this, ___index, ___value, method) (( void (*) (List_1_t7973 *, int32_t, KeyValuePair_2_t7021 , const MethodInfo*))List_1_set_Item_m55560_gshared)(__this, ___index, ___value, method)

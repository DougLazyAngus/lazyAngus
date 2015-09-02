#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct List_1_t7658;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerable_1_t7272;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7657;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerator_1_t7273;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ICollection_1_t9426;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ReadOnlyCollection_1_t7661;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Predicate_1_t7665;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IComparer_1_t9427;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t7668;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_85.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C" void List_1__ctor_m51580_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1__ctor_m51580(__this, method) (( void (*) (List_1_t7658 *, const MethodInfo*))List_1__ctor_m51580_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m51581_gshared (List_1_t7658 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m51581(__this, ___collection, method) (( void (*) (List_1_t7658 *, Object_t*, const MethodInfo*))List_1__ctor_m51581_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m51582_gshared (List_1_t7658 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m51582(__this, ___capacity, method) (( void (*) (List_1_t7658 *, int32_t, const MethodInfo*))List_1__ctor_m51582_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m51583_gshared (List_1_t7658 * __this, KeyValuePair_2U5BU5D_t7657* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m51583(__this, ___data, ___size, method) (( void (*) (List_1_t7658 *, KeyValuePair_2U5BU5D_t7657*, int32_t, const MethodInfo*))List_1__ctor_m51583_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.cctor()
extern "C" void List_1__cctor_m51584_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m51584(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51584_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51585_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51585(__this, method) (( Object_t* (*) (List_1_t7658 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m51586_gshared (List_1_t7658 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m51586(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7658 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51586_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m51587_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51587(__this, method) (( Object_t * (*) (List_1_t7658 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51587_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m51588_gshared (List_1_t7658 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m51588(__this, ___item, method) (( int32_t (*) (List_1_t7658 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51588_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m51589_gshared (List_1_t7658 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m51589(__this, ___item, method) (( bool (*) (List_1_t7658 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51589_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m51590_gshared (List_1_t7658 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m51590(__this, ___item, method) (( int32_t (*) (List_1_t7658 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51590_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m51591_gshared (List_1_t7658 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m51591(__this, ___index, ___item, method) (( void (*) (List_1_t7658 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51591_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m51592_gshared (List_1_t7658 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m51592(__this, ___item, method) (( void (*) (List_1_t7658 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51592_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51593_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51593(__this, method) (( bool (*) (List_1_t7658 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m51594_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51594(__this, method) (( bool (*) (List_1_t7658 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51594_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m51595_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m51595(__this, method) (( Object_t * (*) (List_1_t7658 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51595_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m51596_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m51596(__this, method) (( bool (*) (List_1_t7658 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51596_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m51597_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m51597(__this, method) (( bool (*) (List_1_t7658 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51597_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m51598_gshared (List_1_t7658 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m51598(__this, ___index, method) (( Object_t * (*) (List_1_t7658 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51598_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m51599_gshared (List_1_t7658 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m51599(__this, ___index, ___value, method) (( void (*) (List_1_t7658 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51599_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Add(T)
extern "C" void List_1_Add_m51600_gshared (List_1_t7658 * __this, KeyValuePair_2_t7268  ___item, const MethodInfo* method);
#define List_1_Add_m51600(__this, ___item, method) (( void (*) (List_1_t7658 *, KeyValuePair_2_t7268 , const MethodInfo*))List_1_Add_m51600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m51601_gshared (List_1_t7658 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m51601(__this, ___newCount, method) (( void (*) (List_1_t7658 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51601_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m51602_gshared (List_1_t7658 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m51602(__this, ___idx, ___count, method) (( void (*) (List_1_t7658 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51602_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m51603_gshared (List_1_t7658 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m51603(__this, ___collection, method) (( void (*) (List_1_t7658 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51603_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m51604_gshared (List_1_t7658 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m51604(__this, ___enumerable, method) (( void (*) (List_1_t7658 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51604_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m51605_gshared (List_1_t7658 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m51605(__this, ___collection, method) (( void (*) (List_1_t7658 *, Object_t*, const MethodInfo*))List_1_AddRange_m51605_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7661 * List_1_AsReadOnly_m51606_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m51606(__this, method) (( ReadOnlyCollection_1_t7661 * (*) (List_1_t7658 *, const MethodInfo*))List_1_AsReadOnly_m51606_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Clear()
extern "C" void List_1_Clear_m51607_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_Clear_m51607(__this, method) (( void (*) (List_1_t7658 *, const MethodInfo*))List_1_Clear_m51607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Contains(T)
extern "C" bool List_1_Contains_m51608_gshared (List_1_t7658 * __this, KeyValuePair_2_t7268  ___item, const MethodInfo* method);
#define List_1_Contains_m51608(__this, ___item, method) (( bool (*) (List_1_t7658 *, KeyValuePair_2_t7268 , const MethodInfo*))List_1_Contains_m51608_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m51609_gshared (List_1_t7658 * __this, KeyValuePair_2U5BU5D_t7657* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m51609(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7658 *, KeyValuePair_2U5BU5D_t7657*, int32_t, const MethodInfo*))List_1_CopyTo_m51609_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7268  List_1_Find_m51610_gshared (List_1_t7658 * __this, Predicate_1_t7665 * ___match, const MethodInfo* method);
#define List_1_Find_m51610(__this, ___match, method) (( KeyValuePair_2_t7268  (*) (List_1_t7658 *, Predicate_1_t7665 *, const MethodInfo*))List_1_Find_m51610_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m51611_gshared (Object_t * __this /* static, unused */, Predicate_1_t7665 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m51611(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7665 *, const MethodInfo*))List_1_CheckMatch_m51611_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m51612_gshared (List_1_t7658 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7665 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m51612(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7658 *, int32_t, int32_t, Predicate_1_t7665 *, const MethodInfo*))List_1_GetIndex_m51612_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetEnumerator()
extern "C" Enumerator_t7659  List_1_GetEnumerator_m51613_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m51613(__this, method) (( Enumerator_t7659  (*) (List_1_t7658 *, const MethodInfo*))List_1_GetEnumerator_m51613_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7658 * List_1_GetRange_m51614_gshared (List_1_t7658 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m51614(__this, ___index, ___count, method) (( List_1_t7658 * (*) (List_1_t7658 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51614_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m51615_gshared (List_1_t7658 * __this, KeyValuePair_2_t7268  ___item, const MethodInfo* method);
#define List_1_IndexOf_m51615(__this, ___item, method) (( int32_t (*) (List_1_t7658 *, KeyValuePair_2_t7268 , const MethodInfo*))List_1_IndexOf_m51615_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m51616_gshared (List_1_t7658 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m51616(__this, ___start, ___delta, method) (( void (*) (List_1_t7658 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m51617_gshared (List_1_t7658 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m51617(__this, ___index, method) (( void (*) (List_1_t7658 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m51618_gshared (List_1_t7658 * __this, int32_t ___index, KeyValuePair_2_t7268  ___item, const MethodInfo* method);
#define List_1_Insert_m51618(__this, ___index, ___item, method) (( void (*) (List_1_t7658 *, int32_t, KeyValuePair_2_t7268 , const MethodInfo*))List_1_Insert_m51618_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m51619_gshared (List_1_t7658 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m51619(__this, ___collection, method) (( void (*) (List_1_t7658 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51619_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m51620_gshared (List_1_t7658 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m51620(__this, ___index, ___collection, method) (( void (*) (List_1_t7658 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51620_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m51621_gshared (List_1_t7658 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m51621(__this, ___index, ___collection, method) (( void (*) (List_1_t7658 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51621_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m51622_gshared (List_1_t7658 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m51622(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7658 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51622_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Remove(T)
extern "C" bool List_1_Remove_m51623_gshared (List_1_t7658 * __this, KeyValuePair_2_t7268  ___item, const MethodInfo* method);
#define List_1_Remove_m51623(__this, ___item, method) (( bool (*) (List_1_t7658 *, KeyValuePair_2_t7268 , const MethodInfo*))List_1_Remove_m51623_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m51624_gshared (List_1_t7658 * __this, Predicate_1_t7665 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m51624(__this, ___match, method) (( int32_t (*) (List_1_t7658 *, Predicate_1_t7665 *, const MethodInfo*))List_1_RemoveAll_m51624_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m51625_gshared (List_1_t7658 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m51625(__this, ___index, method) (( void (*) (List_1_t7658 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51625_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m51626_gshared (List_1_t7658 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m51626(__this, ___index, ___count, method) (( void (*) (List_1_t7658 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51626_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Reverse()
extern "C" void List_1_Reverse_m51627_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_Reverse_m51627(__this, method) (( void (*) (List_1_t7658 *, const MethodInfo*))List_1_Reverse_m51627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort()
extern "C" void List_1_Sort_m51628_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_Sort_m51628(__this, method) (( void (*) (List_1_t7658 *, const MethodInfo*))List_1_Sort_m51628_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m51629_gshared (List_1_t7658 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m51629(__this, ___comparer, method) (( void (*) (List_1_t7658 *, Object_t*, const MethodInfo*))List_1_Sort_m51629_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m51630_gshared (List_1_t7658 * __this, Comparison_1_t7668 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m51630(__this, ___comparison, method) (( void (*) (List_1_t7658 *, Comparison_1_t7668 *, const MethodInfo*))List_1_Sort_m51630_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7657* List_1_ToArray_m51631_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_ToArray_m51631(__this, method) (( KeyValuePair_2U5BU5D_t7657* (*) (List_1_t7658 *, const MethodInfo*))List_1_ToArray_m51631_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m51632_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m51632(__this, method) (( void (*) (List_1_t7658 *, const MethodInfo*))List_1_TrimExcess_m51632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m51633_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m51633(__this, method) (( int32_t (*) (List_1_t7658 *, const MethodInfo*))List_1_get_Capacity_m51633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m51634_gshared (List_1_t7658 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m51634(__this, ___value, method) (( void (*) (List_1_t7658 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51634_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Count()
extern "C" int32_t List_1_get_Count_m51635_gshared (List_1_t7658 * __this, const MethodInfo* method);
#define List_1_get_Count_m51635(__this, method) (( int32_t (*) (List_1_t7658 *, const MethodInfo*))List_1_get_Count_m51635_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7268  List_1_get_Item_m51636_gshared (List_1_t7658 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m51636(__this, ___index, method) (( KeyValuePair_2_t7268  (*) (List_1_t7658 *, int32_t, const MethodInfo*))List_1_get_Item_m51636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m51637_gshared (List_1_t7658 * __this, int32_t ___index, KeyValuePair_2_t7268  ___value, const MethodInfo* method);
#define List_1_set_Item_m51637(__this, ___index, ___value, method) (( void (*) (List_1_t7658 *, int32_t, KeyValuePair_2_t7268 , const MethodInfo*))List_1_set_Item_m51637_gshared)(__this, ___index, ___value, method)

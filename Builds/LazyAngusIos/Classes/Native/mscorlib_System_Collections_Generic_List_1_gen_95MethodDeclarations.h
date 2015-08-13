#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct List_1_t7492;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerable_1_t7218;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7491;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t7219;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ICollection_1_t9368;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ReadOnlyCollection_1_t7495;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Predicate_1_t7499;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IComparer_1_t9369;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Comparison_1_t7502;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_78.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void List_1__ctor_m49573_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1__ctor_m49573(__this, method) (( void (*) (List_1_t7492 *, const MethodInfo*))List_1__ctor_m49573_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m49574_gshared (List_1_t7492 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m49574(__this, ___collection, method) (( void (*) (List_1_t7492 *, Object_t*, const MethodInfo*))List_1__ctor_m49574_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m49575_gshared (List_1_t7492 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m49575(__this, ___capacity, method) (( void (*) (List_1_t7492 *, int32_t, const MethodInfo*))List_1__ctor_m49575_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m49576_gshared (List_1_t7492 * __this, KeyValuePair_2U5BU5D_t7491* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m49576(__this, ___data, ___size, method) (( void (*) (List_1_t7492 *, KeyValuePair_2U5BU5D_t7491*, int32_t, const MethodInfo*))List_1__ctor_m49576_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.cctor()
extern "C" void List_1__cctor_m49577_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m49577(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49577_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49578_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49578(__this, method) (( Object_t* (*) (List_1_t7492 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49578_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m49579_gshared (List_1_t7492 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m49579(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7492 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49579_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m49580_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49580(__this, method) (( Object_t * (*) (List_1_t7492 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49580_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m49581_gshared (List_1_t7492 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m49581(__this, ___item, method) (( int32_t (*) (List_1_t7492 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49581_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m49582_gshared (List_1_t7492 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m49582(__this, ___item, method) (( bool (*) (List_1_t7492 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49582_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m49583_gshared (List_1_t7492 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m49583(__this, ___item, method) (( int32_t (*) (List_1_t7492 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m49584_gshared (List_1_t7492 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m49584(__this, ___index, ___item, method) (( void (*) (List_1_t7492 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49584_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m49585_gshared (List_1_t7492 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m49585(__this, ___item, method) (( void (*) (List_1_t7492 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49585_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49586_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49586(__this, method) (( bool (*) (List_1_t7492 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49586_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m49587_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49587(__this, method) (( bool (*) (List_1_t7492 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49587_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m49588_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m49588(__this, method) (( Object_t * (*) (List_1_t7492 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49588_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m49589_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m49589(__this, method) (( bool (*) (List_1_t7492 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49589_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m49590_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m49590(__this, method) (( bool (*) (List_1_t7492 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m49591_gshared (List_1_t7492 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m49591(__this, ___index, method) (( Object_t * (*) (List_1_t7492 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49591_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m49592_gshared (List_1_t7492 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m49592(__this, ___index, ___value, method) (( void (*) (List_1_t7492 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49592_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Add(T)
extern "C" void List_1_Add_m49593_gshared (List_1_t7492 * __this, KeyValuePair_2_t7214  ___item, const MethodInfo* method);
#define List_1_Add_m49593(__this, ___item, method) (( void (*) (List_1_t7492 *, KeyValuePair_2_t7214 , const MethodInfo*))List_1_Add_m49593_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m49594_gshared (List_1_t7492 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m49594(__this, ___newCount, method) (( void (*) (List_1_t7492 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49594_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m49595_gshared (List_1_t7492 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m49595(__this, ___idx, ___count, method) (( void (*) (List_1_t7492 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49595_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m49596_gshared (List_1_t7492 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m49596(__this, ___collection, method) (( void (*) (List_1_t7492 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m49597_gshared (List_1_t7492 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m49597(__this, ___enumerable, method) (( void (*) (List_1_t7492 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49597_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m49598_gshared (List_1_t7492 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m49598(__this, ___collection, method) (( void (*) (List_1_t7492 *, Object_t*, const MethodInfo*))List_1_AddRange_m49598_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7495 * List_1_AsReadOnly_m49599_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m49599(__this, method) (( ReadOnlyCollection_1_t7495 * (*) (List_1_t7492 *, const MethodInfo*))List_1_AsReadOnly_m49599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Clear()
extern "C" void List_1_Clear_m49600_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_Clear_m49600(__this, method) (( void (*) (List_1_t7492 *, const MethodInfo*))List_1_Clear_m49600_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Contains(T)
extern "C" bool List_1_Contains_m49601_gshared (List_1_t7492 * __this, KeyValuePair_2_t7214  ___item, const MethodInfo* method);
#define List_1_Contains_m49601(__this, ___item, method) (( bool (*) (List_1_t7492 *, KeyValuePair_2_t7214 , const MethodInfo*))List_1_Contains_m49601_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m49602_gshared (List_1_t7492 * __this, KeyValuePair_2U5BU5D_t7491* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m49602(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7492 *, KeyValuePair_2U5BU5D_t7491*, int32_t, const MethodInfo*))List_1_CopyTo_m49602_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7214  List_1_Find_m49603_gshared (List_1_t7492 * __this, Predicate_1_t7499 * ___match, const MethodInfo* method);
#define List_1_Find_m49603(__this, ___match, method) (( KeyValuePair_2_t7214  (*) (List_1_t7492 *, Predicate_1_t7499 *, const MethodInfo*))List_1_Find_m49603_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m49604_gshared (Object_t * __this /* static, unused */, Predicate_1_t7499 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m49604(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7499 *, const MethodInfo*))List_1_CheckMatch_m49604_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m49605_gshared (List_1_t7492 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7499 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m49605(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7492 *, int32_t, int32_t, Predicate_1_t7499 *, const MethodInfo*))List_1_GetIndex_m49605_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetEnumerator()
extern "C" Enumerator_t7493  List_1_GetEnumerator_m49606_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m49606(__this, method) (( Enumerator_t7493  (*) (List_1_t7492 *, const MethodInfo*))List_1_GetEnumerator_m49606_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7492 * List_1_GetRange_m49607_gshared (List_1_t7492 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m49607(__this, ___index, ___count, method) (( List_1_t7492 * (*) (List_1_t7492 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49607_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m49608_gshared (List_1_t7492 * __this, KeyValuePair_2_t7214  ___item, const MethodInfo* method);
#define List_1_IndexOf_m49608(__this, ___item, method) (( int32_t (*) (List_1_t7492 *, KeyValuePair_2_t7214 , const MethodInfo*))List_1_IndexOf_m49608_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m49609_gshared (List_1_t7492 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m49609(__this, ___start, ___delta, method) (( void (*) (List_1_t7492 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49609_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m49610_gshared (List_1_t7492 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m49610(__this, ___index, method) (( void (*) (List_1_t7492 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49610_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m49611_gshared (List_1_t7492 * __this, int32_t ___index, KeyValuePair_2_t7214  ___item, const MethodInfo* method);
#define List_1_Insert_m49611(__this, ___index, ___item, method) (( void (*) (List_1_t7492 *, int32_t, KeyValuePair_2_t7214 , const MethodInfo*))List_1_Insert_m49611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m49612_gshared (List_1_t7492 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m49612(__this, ___collection, method) (( void (*) (List_1_t7492 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49612_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m49613_gshared (List_1_t7492 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m49613(__this, ___index, ___collection, method) (( void (*) (List_1_t7492 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49613_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m49614_gshared (List_1_t7492 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m49614(__this, ___index, ___collection, method) (( void (*) (List_1_t7492 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49614_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m49615_gshared (List_1_t7492 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m49615(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7492 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49615_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Remove(T)
extern "C" bool List_1_Remove_m49616_gshared (List_1_t7492 * __this, KeyValuePair_2_t7214  ___item, const MethodInfo* method);
#define List_1_Remove_m49616(__this, ___item, method) (( bool (*) (List_1_t7492 *, KeyValuePair_2_t7214 , const MethodInfo*))List_1_Remove_m49616_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m49617_gshared (List_1_t7492 * __this, Predicate_1_t7499 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m49617(__this, ___match, method) (( int32_t (*) (List_1_t7492 *, Predicate_1_t7499 *, const MethodInfo*))List_1_RemoveAll_m49617_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m49618_gshared (List_1_t7492 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m49618(__this, ___index, method) (( void (*) (List_1_t7492 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m49619_gshared (List_1_t7492 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m49619(__this, ___index, ___count, method) (( void (*) (List_1_t7492 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49619_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Reverse()
extern "C" void List_1_Reverse_m49620_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_Reverse_m49620(__this, method) (( void (*) (List_1_t7492 *, const MethodInfo*))List_1_Reverse_m49620_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort()
extern "C" void List_1_Sort_m49621_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_Sort_m49621(__this, method) (( void (*) (List_1_t7492 *, const MethodInfo*))List_1_Sort_m49621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m49622_gshared (List_1_t7492 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m49622(__this, ___comparer, method) (( void (*) (List_1_t7492 *, Object_t*, const MethodInfo*))List_1_Sort_m49622_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m49623_gshared (List_1_t7492 * __this, Comparison_1_t7502 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m49623(__this, ___comparison, method) (( void (*) (List_1_t7492 *, Comparison_1_t7502 *, const MethodInfo*))List_1_Sort_m49623_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7491* List_1_ToArray_m49624_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_ToArray_m49624(__this, method) (( KeyValuePair_2U5BU5D_t7491* (*) (List_1_t7492 *, const MethodInfo*))List_1_ToArray_m49624_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m49625_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m49625(__this, method) (( void (*) (List_1_t7492 *, const MethodInfo*))List_1_TrimExcess_m49625_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m49626_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m49626(__this, method) (( int32_t (*) (List_1_t7492 *, const MethodInfo*))List_1_get_Capacity_m49626_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m49627_gshared (List_1_t7492 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m49627(__this, ___value, method) (( void (*) (List_1_t7492 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49627_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Count()
extern "C" int32_t List_1_get_Count_m49628_gshared (List_1_t7492 * __this, const MethodInfo* method);
#define List_1_get_Count_m49628(__this, method) (( int32_t (*) (List_1_t7492 *, const MethodInfo*))List_1_get_Count_m49628_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7214  List_1_get_Item_m49629_gshared (List_1_t7492 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m49629(__this, ___index, method) (( KeyValuePair_2_t7214  (*) (List_1_t7492 *, int32_t, const MethodInfo*))List_1_get_Item_m49629_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m49630_gshared (List_1_t7492 * __this, int32_t ___index, KeyValuePair_2_t7214  ___value, const MethodInfo* method);
#define List_1_set_Item_m49630(__this, ___index, ___value, method) (( void (*) (List_1_t7492 *, int32_t, KeyValuePair_2_t7214 , const MethodInfo*))List_1_set_Item_m49630_gshared)(__this, ___index, ___value, method)

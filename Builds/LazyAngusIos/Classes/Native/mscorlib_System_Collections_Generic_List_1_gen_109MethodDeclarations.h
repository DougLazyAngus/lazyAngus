#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct List_1_t8414;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerable_1_t7852;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t8413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7853;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ICollection_1_t10044;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ReadOnlyCollection_1_t8417;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Predicate_1_t8421;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IComparer_1_t10045;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t8424;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_92.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void List_1__ctor_m58567_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1__ctor_m58567(__this, method) (( void (*) (List_1_t8414 *, const MethodInfo*))List_1__ctor_m58567_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m58568_gshared (List_1_t8414 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m58568(__this, ___collection, method) (( void (*) (List_1_t8414 *, Object_t*, const MethodInfo*))List_1__ctor_m58568_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m58569_gshared (List_1_t8414 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m58569(__this, ___capacity, method) (( void (*) (List_1_t8414 *, int32_t, const MethodInfo*))List_1__ctor_m58569_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m58570_gshared (List_1_t8414 * __this, KeyValuePair_2U5BU5D_t8413* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m58570(__this, ___data, ___size, method) (( void (*) (List_1_t8414 *, KeyValuePair_2U5BU5D_t8413*, int32_t, const MethodInfo*))List_1__ctor_m58570_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.cctor()
extern "C" void List_1__cctor_m58571_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m58571(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m58571_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58572_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58572(__this, method) (( Object_t* (*) (List_1_t8414 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58572_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m58573_gshared (List_1_t8414 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m58573(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8414 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m58573_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m58574_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m58574(__this, method) (( Object_t * (*) (List_1_t8414 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m58574_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m58575_gshared (List_1_t8414 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m58575(__this, ___item, method) (( int32_t (*) (List_1_t8414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m58575_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m58576_gshared (List_1_t8414 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m58576(__this, ___item, method) (( bool (*) (List_1_t8414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m58576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m58577_gshared (List_1_t8414 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m58577(__this, ___item, method) (( int32_t (*) (List_1_t8414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m58577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m58578_gshared (List_1_t8414 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m58578(__this, ___index, ___item, method) (( void (*) (List_1_t8414 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m58578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m58579_gshared (List_1_t8414 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m58579(__this, ___item, method) (( void (*) (List_1_t8414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m58579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58580_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58580(__this, method) (( bool (*) (List_1_t8414 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58580_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m58581_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m58581(__this, method) (( bool (*) (List_1_t8414 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m58581_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m58582_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m58582(__this, method) (( Object_t * (*) (List_1_t8414 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m58582_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m58583_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m58583(__this, method) (( bool (*) (List_1_t8414 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m58583_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m58584_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m58584(__this, method) (( bool (*) (List_1_t8414 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m58584_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m58585_gshared (List_1_t8414 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m58585(__this, ___index, method) (( Object_t * (*) (List_1_t8414 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m58585_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m58586_gshared (List_1_t8414 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m58586(__this, ___index, ___value, method) (( void (*) (List_1_t8414 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m58586_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Add(T)
extern "C" void List_1_Add_m58587_gshared (List_1_t8414 * __this, KeyValuePair_2_t7590  ___item, const MethodInfo* method);
#define List_1_Add_m58587(__this, ___item, method) (( void (*) (List_1_t8414 *, KeyValuePair_2_t7590 , const MethodInfo*))List_1_Add_m58587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m58588_gshared (List_1_t8414 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m58588(__this, ___newCount, method) (( void (*) (List_1_t8414 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m58588_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m58589_gshared (List_1_t8414 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m58589(__this, ___idx, ___count, method) (( void (*) (List_1_t8414 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m58589_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m58590_gshared (List_1_t8414 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m58590(__this, ___collection, method) (( void (*) (List_1_t8414 *, Object_t*, const MethodInfo*))List_1_AddCollection_m58590_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m58591_gshared (List_1_t8414 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m58591(__this, ___enumerable, method) (( void (*) (List_1_t8414 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m58591_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m58592_gshared (List_1_t8414 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m58592(__this, ___collection, method) (( void (*) (List_1_t8414 *, Object_t*, const MethodInfo*))List_1_AddRange_m58592_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8417 * List_1_AsReadOnly_m58593_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m58593(__this, method) (( ReadOnlyCollection_1_t8417 * (*) (List_1_t8414 *, const MethodInfo*))List_1_AsReadOnly_m58593_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Clear()
extern "C" void List_1_Clear_m58594_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_Clear_m58594(__this, method) (( void (*) (List_1_t8414 *, const MethodInfo*))List_1_Clear_m58594_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Contains(T)
extern "C" bool List_1_Contains_m58595_gshared (List_1_t8414 * __this, KeyValuePair_2_t7590  ___item, const MethodInfo* method);
#define List_1_Contains_m58595(__this, ___item, method) (( bool (*) (List_1_t8414 *, KeyValuePair_2_t7590 , const MethodInfo*))List_1_Contains_m58595_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m58596_gshared (List_1_t8414 * __this, KeyValuePair_2U5BU5D_t8413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m58596(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8414 *, KeyValuePair_2U5BU5D_t8413*, int32_t, const MethodInfo*))List_1_CopyTo_m58596_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7590  List_1_Find_m58597_gshared (List_1_t8414 * __this, Predicate_1_t8421 * ___match, const MethodInfo* method);
#define List_1_Find_m58597(__this, ___match, method) (( KeyValuePair_2_t7590  (*) (List_1_t8414 *, Predicate_1_t8421 *, const MethodInfo*))List_1_Find_m58597_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m58598_gshared (Object_t * __this /* static, unused */, Predicate_1_t8421 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m58598(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8421 *, const MethodInfo*))List_1_CheckMatch_m58598_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m58599_gshared (List_1_t8414 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8421 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m58599(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8414 *, int32_t, int32_t, Predicate_1_t8421 *, const MethodInfo*))List_1_GetIndex_m58599_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetEnumerator()
extern "C" Enumerator_t8415  List_1_GetEnumerator_m58600_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m58600(__this, method) (( Enumerator_t8415  (*) (List_1_t8414 *, const MethodInfo*))List_1_GetEnumerator_m58600_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8414 * List_1_GetRange_m58601_gshared (List_1_t8414 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m58601(__this, ___index, ___count, method) (( List_1_t8414 * (*) (List_1_t8414 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m58601_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m58602_gshared (List_1_t8414 * __this, KeyValuePair_2_t7590  ___item, const MethodInfo* method);
#define List_1_IndexOf_m58602(__this, ___item, method) (( int32_t (*) (List_1_t8414 *, KeyValuePair_2_t7590 , const MethodInfo*))List_1_IndexOf_m58602_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m58603_gshared (List_1_t8414 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m58603(__this, ___start, ___delta, method) (( void (*) (List_1_t8414 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m58603_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m58604_gshared (List_1_t8414 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m58604(__this, ___index, method) (( void (*) (List_1_t8414 *, int32_t, const MethodInfo*))List_1_CheckIndex_m58604_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m58605_gshared (List_1_t8414 * __this, int32_t ___index, KeyValuePair_2_t7590  ___item, const MethodInfo* method);
#define List_1_Insert_m58605(__this, ___index, ___item, method) (( void (*) (List_1_t8414 *, int32_t, KeyValuePair_2_t7590 , const MethodInfo*))List_1_Insert_m58605_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m58606_gshared (List_1_t8414 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m58606(__this, ___collection, method) (( void (*) (List_1_t8414 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m58606_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m58607_gshared (List_1_t8414 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m58607(__this, ___index, ___collection, method) (( void (*) (List_1_t8414 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m58607_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m58608_gshared (List_1_t8414 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m58608(__this, ___index, ___collection, method) (( void (*) (List_1_t8414 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m58608_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m58609_gshared (List_1_t8414 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m58609(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8414 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m58609_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Remove(T)
extern "C" bool List_1_Remove_m58610_gshared (List_1_t8414 * __this, KeyValuePair_2_t7590  ___item, const MethodInfo* method);
#define List_1_Remove_m58610(__this, ___item, method) (( bool (*) (List_1_t8414 *, KeyValuePair_2_t7590 , const MethodInfo*))List_1_Remove_m58610_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m58611_gshared (List_1_t8414 * __this, Predicate_1_t8421 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m58611(__this, ___match, method) (( int32_t (*) (List_1_t8414 *, Predicate_1_t8421 *, const MethodInfo*))List_1_RemoveAll_m58611_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m58612_gshared (List_1_t8414 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m58612(__this, ___index, method) (( void (*) (List_1_t8414 *, int32_t, const MethodInfo*))List_1_RemoveAt_m58612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m58613_gshared (List_1_t8414 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m58613(__this, ___index, ___count, method) (( void (*) (List_1_t8414 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m58613_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Reverse()
extern "C" void List_1_Reverse_m58614_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_Reverse_m58614(__this, method) (( void (*) (List_1_t8414 *, const MethodInfo*))List_1_Reverse_m58614_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort()
extern "C" void List_1_Sort_m58615_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_Sort_m58615(__this, method) (( void (*) (List_1_t8414 *, const MethodInfo*))List_1_Sort_m58615_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m58616_gshared (List_1_t8414 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m58616(__this, ___comparer, method) (( void (*) (List_1_t8414 *, Object_t*, const MethodInfo*))List_1_Sort_m58616_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m58617_gshared (List_1_t8414 * __this, Comparison_1_t8424 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m58617(__this, ___comparison, method) (( void (*) (List_1_t8414 *, Comparison_1_t8424 *, const MethodInfo*))List_1_Sort_m58617_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8413* List_1_ToArray_m58618_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_ToArray_m58618(__this, method) (( KeyValuePair_2U5BU5D_t8413* (*) (List_1_t8414 *, const MethodInfo*))List_1_ToArray_m58618_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::TrimExcess()
extern "C" void List_1_TrimExcess_m58619_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m58619(__this, method) (( void (*) (List_1_t8414 *, const MethodInfo*))List_1_TrimExcess_m58619_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m58620_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m58620(__this, method) (( int32_t (*) (List_1_t8414 *, const MethodInfo*))List_1_get_Capacity_m58620_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m58621_gshared (List_1_t8414 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m58621(__this, ___value, method) (( void (*) (List_1_t8414 *, int32_t, const MethodInfo*))List_1_set_Capacity_m58621_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Count()
extern "C" int32_t List_1_get_Count_m58622_gshared (List_1_t8414 * __this, const MethodInfo* method);
#define List_1_get_Count_m58622(__this, method) (( int32_t (*) (List_1_t8414 *, const MethodInfo*))List_1_get_Count_m58622_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7590  List_1_get_Item_m58623_gshared (List_1_t8414 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m58623(__this, ___index, method) (( KeyValuePair_2_t7590  (*) (List_1_t8414 *, int32_t, const MethodInfo*))List_1_get_Item_m58623_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m58624_gshared (List_1_t8414 * __this, int32_t ___index, KeyValuePair_2_t7590  ___value, const MethodInfo* method);
#define List_1_set_Item_m58624(__this, ___index, ___value, method) (( void (*) (List_1_t8414 *, int32_t, KeyValuePair_2_t7590 , const MethodInfo*))List_1_set_Item_m58624_gshared)(__this, ___index, ___value, method)

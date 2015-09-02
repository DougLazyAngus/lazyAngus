#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct List_1_t7398;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerable_1_t7232;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7397;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerator_1_t7233;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ICollection_1_t9406;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ReadOnlyCollection_1_t7401;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t7405;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IComparer_1_t9407;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Comparison_1_t7408;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_77.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void List_1__ctor_m48472_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1__ctor_m48472(__this, method) (( void (*) (List_1_t7398 *, const MethodInfo*))List_1__ctor_m48472_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m48473_gshared (List_1_t7398 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m48473(__this, ___collection, method) (( void (*) (List_1_t7398 *, Object_t*, const MethodInfo*))List_1__ctor_m48473_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m48474_gshared (List_1_t7398 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m48474(__this, ___capacity, method) (( void (*) (List_1_t7398 *, int32_t, const MethodInfo*))List_1__ctor_m48474_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m48475_gshared (List_1_t7398 * __this, KeyValuePair_2U5BU5D_t7397* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m48475(__this, ___data, ___size, method) (( void (*) (List_1_t7398 *, KeyValuePair_2U5BU5D_t7397*, int32_t, const MethodInfo*))List_1__ctor_m48475_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.cctor()
extern "C" void List_1__cctor_m48476_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m48476(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48476_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48477_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48477(__this, method) (( Object_t* (*) (List_1_t7398 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48477_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m48478_gshared (List_1_t7398 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m48478(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7398 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48478_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m48479_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48479(__this, method) (( Object_t * (*) (List_1_t7398 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48479_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m48480_gshared (List_1_t7398 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m48480(__this, ___item, method) (( int32_t (*) (List_1_t7398 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48480_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m48481_gshared (List_1_t7398 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m48481(__this, ___item, method) (( bool (*) (List_1_t7398 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48481_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m48482_gshared (List_1_t7398 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m48482(__this, ___item, method) (( int32_t (*) (List_1_t7398 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m48483_gshared (List_1_t7398 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m48483(__this, ___index, ___item, method) (( void (*) (List_1_t7398 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48483_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m48484_gshared (List_1_t7398 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m48484(__this, ___item, method) (( void (*) (List_1_t7398 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48484_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48485_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48485(__this, method) (( bool (*) (List_1_t7398 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48485_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m48486_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48486(__this, method) (( bool (*) (List_1_t7398 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48486_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m48487_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m48487(__this, method) (( Object_t * (*) (List_1_t7398 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48487_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m48488_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m48488(__this, method) (( bool (*) (List_1_t7398 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m48489_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m48489(__this, method) (( bool (*) (List_1_t7398 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48489_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m48490_gshared (List_1_t7398 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m48490(__this, ___index, method) (( Object_t * (*) (List_1_t7398 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48490_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m48491_gshared (List_1_t7398 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m48491(__this, ___index, ___value, method) (( void (*) (List_1_t7398 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48491_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Add(T)
extern "C" void List_1_Add_m48492_gshared (List_1_t7398 * __this, KeyValuePair_2_t7228  ___item, const MethodInfo* method);
#define List_1_Add_m48492(__this, ___item, method) (( void (*) (List_1_t7398 *, KeyValuePair_2_t7228 , const MethodInfo*))List_1_Add_m48492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m48493_gshared (List_1_t7398 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m48493(__this, ___newCount, method) (( void (*) (List_1_t7398 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48493_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m48494_gshared (List_1_t7398 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m48494(__this, ___idx, ___count, method) (( void (*) (List_1_t7398 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48494_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m48495_gshared (List_1_t7398 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m48495(__this, ___collection, method) (( void (*) (List_1_t7398 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48495_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m48496_gshared (List_1_t7398 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m48496(__this, ___enumerable, method) (( void (*) (List_1_t7398 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48496_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m48497_gshared (List_1_t7398 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m48497(__this, ___collection, method) (( void (*) (List_1_t7398 *, Object_t*, const MethodInfo*))List_1_AddRange_m48497_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7401 * List_1_AsReadOnly_m48498_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m48498(__this, method) (( ReadOnlyCollection_1_t7401 * (*) (List_1_t7398 *, const MethodInfo*))List_1_AsReadOnly_m48498_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Clear()
extern "C" void List_1_Clear_m48499_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_Clear_m48499(__this, method) (( void (*) (List_1_t7398 *, const MethodInfo*))List_1_Clear_m48499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Contains(T)
extern "C" bool List_1_Contains_m48500_gshared (List_1_t7398 * __this, KeyValuePair_2_t7228  ___item, const MethodInfo* method);
#define List_1_Contains_m48500(__this, ___item, method) (( bool (*) (List_1_t7398 *, KeyValuePair_2_t7228 , const MethodInfo*))List_1_Contains_m48500_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m48501_gshared (List_1_t7398 * __this, KeyValuePair_2U5BU5D_t7397* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m48501(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7398 *, KeyValuePair_2U5BU5D_t7397*, int32_t, const MethodInfo*))List_1_CopyTo_m48501_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7228  List_1_Find_m48502_gshared (List_1_t7398 * __this, Predicate_1_t7405 * ___match, const MethodInfo* method);
#define List_1_Find_m48502(__this, ___match, method) (( KeyValuePair_2_t7228  (*) (List_1_t7398 *, Predicate_1_t7405 *, const MethodInfo*))List_1_Find_m48502_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m48503_gshared (Object_t * __this /* static, unused */, Predicate_1_t7405 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m48503(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7405 *, const MethodInfo*))List_1_CheckMatch_m48503_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m48504_gshared (List_1_t7398 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7405 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m48504(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7398 *, int32_t, int32_t, Predicate_1_t7405 *, const MethodInfo*))List_1_GetIndex_m48504_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetEnumerator()
extern "C" Enumerator_t7399  List_1_GetEnumerator_m48505_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m48505(__this, method) (( Enumerator_t7399  (*) (List_1_t7398 *, const MethodInfo*))List_1_GetEnumerator_m48505_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7398 * List_1_GetRange_m48506_gshared (List_1_t7398 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m48506(__this, ___index, ___count, method) (( List_1_t7398 * (*) (List_1_t7398 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48506_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m48507_gshared (List_1_t7398 * __this, KeyValuePair_2_t7228  ___item, const MethodInfo* method);
#define List_1_IndexOf_m48507(__this, ___item, method) (( int32_t (*) (List_1_t7398 *, KeyValuePair_2_t7228 , const MethodInfo*))List_1_IndexOf_m48507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m48508_gshared (List_1_t7398 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m48508(__this, ___start, ___delta, method) (( void (*) (List_1_t7398 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48508_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m48509_gshared (List_1_t7398 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m48509(__this, ___index, method) (( void (*) (List_1_t7398 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48509_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m48510_gshared (List_1_t7398 * __this, int32_t ___index, KeyValuePair_2_t7228  ___item, const MethodInfo* method);
#define List_1_Insert_m48510(__this, ___index, ___item, method) (( void (*) (List_1_t7398 *, int32_t, KeyValuePair_2_t7228 , const MethodInfo*))List_1_Insert_m48510_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m48511_gshared (List_1_t7398 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m48511(__this, ___collection, method) (( void (*) (List_1_t7398 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48511_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m48512_gshared (List_1_t7398 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m48512(__this, ___index, ___collection, method) (( void (*) (List_1_t7398 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48512_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m48513_gshared (List_1_t7398 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m48513(__this, ___index, ___collection, method) (( void (*) (List_1_t7398 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48513_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m48514_gshared (List_1_t7398 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m48514(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7398 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48514_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Remove(T)
extern "C" bool List_1_Remove_m48515_gshared (List_1_t7398 * __this, KeyValuePair_2_t7228  ___item, const MethodInfo* method);
#define List_1_Remove_m48515(__this, ___item, method) (( bool (*) (List_1_t7398 *, KeyValuePair_2_t7228 , const MethodInfo*))List_1_Remove_m48515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m48516_gshared (List_1_t7398 * __this, Predicate_1_t7405 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m48516(__this, ___match, method) (( int32_t (*) (List_1_t7398 *, Predicate_1_t7405 *, const MethodInfo*))List_1_RemoveAll_m48516_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m48517_gshared (List_1_t7398 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m48517(__this, ___index, method) (( void (*) (List_1_t7398 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48517_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m48518_gshared (List_1_t7398 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m48518(__this, ___index, ___count, method) (( void (*) (List_1_t7398 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48518_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Reverse()
extern "C" void List_1_Reverse_m48519_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_Reverse_m48519(__this, method) (( void (*) (List_1_t7398 *, const MethodInfo*))List_1_Reverse_m48519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort()
extern "C" void List_1_Sort_m48520_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_Sort_m48520(__this, method) (( void (*) (List_1_t7398 *, const MethodInfo*))List_1_Sort_m48520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m48521_gshared (List_1_t7398 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m48521(__this, ___comparer, method) (( void (*) (List_1_t7398 *, Object_t*, const MethodInfo*))List_1_Sort_m48521_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m48522_gshared (List_1_t7398 * __this, Comparison_1_t7408 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m48522(__this, ___comparison, method) (( void (*) (List_1_t7398 *, Comparison_1_t7408 *, const MethodInfo*))List_1_Sort_m48522_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7397* List_1_ToArray_m48523_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_ToArray_m48523(__this, method) (( KeyValuePair_2U5BU5D_t7397* (*) (List_1_t7398 *, const MethodInfo*))List_1_ToArray_m48523_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m48524_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m48524(__this, method) (( void (*) (List_1_t7398 *, const MethodInfo*))List_1_TrimExcess_m48524_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m48525_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m48525(__this, method) (( int32_t (*) (List_1_t7398 *, const MethodInfo*))List_1_get_Capacity_m48525_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m48526_gshared (List_1_t7398 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m48526(__this, ___value, method) (( void (*) (List_1_t7398 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48526_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Count()
extern "C" int32_t List_1_get_Count_m48527_gshared (List_1_t7398 * __this, const MethodInfo* method);
#define List_1_get_Count_m48527(__this, method) (( int32_t (*) (List_1_t7398 *, const MethodInfo*))List_1_get_Count_m48527_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7228  List_1_get_Item_m48528_gshared (List_1_t7398 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m48528(__this, ___index, method) (( KeyValuePair_2_t7228  (*) (List_1_t7398 *, int32_t, const MethodInfo*))List_1_get_Item_m48528_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m48529_gshared (List_1_t7398 * __this, int32_t ___index, KeyValuePair_2_t7228  ___value, const MethodInfo* method);
#define List_1_set_Item_m48529(__this, ___index, ___value, method) (( void (*) (List_1_t7398 *, int32_t, KeyValuePair_2_t7228 , const MethodInfo*))List_1_set_Item_m48529_gshared)(__this, ___index, ___value, method)

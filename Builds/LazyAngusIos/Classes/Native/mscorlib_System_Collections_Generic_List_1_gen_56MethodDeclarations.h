#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t4022;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3307;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4524;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t4025;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3908;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t4027;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t4571;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t4030;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m27480_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1__ctor_m27480(__this, method) (( void (*) (List_1_t4022 *, const MethodInfo*))List_1__ctor_m27480_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27482_gshared (List_1_t4022 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m27482(__this, ___collection, method) (( void (*) (List_1_t4022 *, Object_t*, const MethodInfo*))List_1__ctor_m27482_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m27484_gshared (List_1_t4022 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m27484(__this, ___capacity, method) (( void (*) (List_1_t4022 *, int32_t, const MethodInfo*))List_1__ctor_m27484_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m27486_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m27486(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m27486_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27487_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27487(__this, method) (( Object_t* (*) (List_1_t4022 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27487_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27488_gshared (List_1_t4022 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m27488(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4022 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m27488_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m27489_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27489(__this, method) (( Object_t * (*) (List_1_t4022 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m27489_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m27490_gshared (List_1_t4022 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m27490(__this, ___item, method) (( int32_t (*) (List_1_t4022 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m27490_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m27491_gshared (List_1_t4022 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m27491(__this, ___item, method) (( bool (*) (List_1_t4022 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m27491_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m27492_gshared (List_1_t4022 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m27492(__this, ___item, method) (( int32_t (*) (List_1_t4022 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m27492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m27493_gshared (List_1_t4022 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m27493(__this, ___index, ___item, method) (( void (*) (List_1_t4022 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m27493_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m27494_gshared (List_1_t4022 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m27494(__this, ___item, method) (( void (*) (List_1_t4022 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m27494_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27495_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27495(__this, method) (( bool (*) (List_1_t4022 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m27496_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27496(__this, method) (( bool (*) (List_1_t4022 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m27496_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m27497_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m27497(__this, method) (( Object_t * (*) (List_1_t4022 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m27497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m27498_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m27498(__this, method) (( bool (*) (List_1_t4022 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m27498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m27499_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m27499(__this, method) (( bool (*) (List_1_t4022 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m27499_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m27500_gshared (List_1_t4022 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m27500(__this, ___index, method) (( Object_t * (*) (List_1_t4022 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m27500_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m27501_gshared (List_1_t4022 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m27501(__this, ___index, ___value, method) (( void (*) (List_1_t4022 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m27501_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m27502_gshared (List_1_t4022 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Add_m27502(__this, ___item, method) (( void (*) (List_1_t4022 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Add_m27502_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m27504_gshared (List_1_t4022 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m27504(__this, ___newCount, method) (( void (*) (List_1_t4022 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m27504_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m27506_gshared (List_1_t4022 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m27506(__this, ___collection, method) (( void (*) (List_1_t4022 *, Object_t*, const MethodInfo*))List_1_AddCollection_m27506_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m27508_gshared (List_1_t4022 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m27508(__this, ___enumerable, method) (( void (*) (List_1_t4022 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m27508_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m27510_gshared (List_1_t4022 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m27510(__this, ___collection, method) (( void (*) (List_1_t4022 *, Object_t*, const MethodInfo*))List_1_AddRange_m27510_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t4025 * List_1_AsReadOnly_m27512_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m27512(__this, method) (( ReadOnlyCollection_1_t4025 * (*) (List_1_t4022 *, const MethodInfo*))List_1_AsReadOnly_m27512_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m27513_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_Clear_m27513(__this, method) (( void (*) (List_1_t4022 *, const MethodInfo*))List_1_Clear_m27513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m27514_gshared (List_1_t4022 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Contains_m27514(__this, ___item, method) (( bool (*) (List_1_t4022 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Contains_m27514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m27515_gshared (List_1_t4022 * __this, KeyValuePair_2U5BU5D_t3908* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m27515(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4022 *, KeyValuePair_2U5BU5D_t3908*, int32_t, const MethodInfo*))List_1_CopyTo_m27515_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t40  List_1_Find_m27517_gshared (List_1_t4022 * __this, Predicate_1_t4027 * ___match, const MethodInfo* method);
#define List_1_Find_m27517(__this, ___match, method) (( KeyValuePair_2_t40  (*) (List_1_t4022 *, Predicate_1_t4027 *, const MethodInfo*))List_1_Find_m27517_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m27519_gshared (Object_t * __this /* static, unused */, Predicate_1_t4027 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m27519(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4027 *, const MethodInfo*))List_1_CheckMatch_m27519_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m27521_gshared (List_1_t4022 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4027 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m27521(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4022 *, int32_t, int32_t, Predicate_1_t4027 *, const MethodInfo*))List_1_GetIndex_m27521_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t4023  List_1_GetEnumerator_m27522_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m27522(__this, method) (( Enumerator_t4023  (*) (List_1_t4022 *, const MethodInfo*))List_1_GetEnumerator_m27522_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m27523_gshared (List_1_t4022 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_IndexOf_m27523(__this, ___item, method) (( int32_t (*) (List_1_t4022 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_IndexOf_m27523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m27525_gshared (List_1_t4022 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m27525(__this, ___start, ___delta, method) (( void (*) (List_1_t4022 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m27525_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m27527_gshared (List_1_t4022 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m27527(__this, ___index, method) (( void (*) (List_1_t4022 *, int32_t, const MethodInfo*))List_1_CheckIndex_m27527_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m27528_gshared (List_1_t4022 * __this, int32_t ___index, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Insert_m27528(__this, ___index, ___item, method) (( void (*) (List_1_t4022 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_Insert_m27528_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m27530_gshared (List_1_t4022 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m27530(__this, ___collection, method) (( void (*) (List_1_t4022 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m27530_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m27531_gshared (List_1_t4022 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Remove_m27531(__this, ___item, method) (( bool (*) (List_1_t4022 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Remove_m27531_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m27533_gshared (List_1_t4022 * __this, Predicate_1_t4027 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m27533(__this, ___match, method) (( int32_t (*) (List_1_t4022 *, Predicate_1_t4027 *, const MethodInfo*))List_1_RemoveAll_m27533_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m27534_gshared (List_1_t4022 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m27534(__this, ___index, method) (( void (*) (List_1_t4022 *, int32_t, const MethodInfo*))List_1_RemoveAt_m27534_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m27536_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_Reverse_m27536(__this, method) (( void (*) (List_1_t4022 *, const MethodInfo*))List_1_Reverse_m27536_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m27538_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_Sort_m27538(__this, method) (( void (*) (List_1_t4022 *, const MethodInfo*))List_1_Sort_m27538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m27540_gshared (List_1_t4022 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m27540(__this, ___comparer, method) (( void (*) (List_1_t4022 *, Object_t*, const MethodInfo*))List_1_Sort_m27540_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m27542_gshared (List_1_t4022 * __this, Comparison_1_t4030 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m27542(__this, ___comparison, method) (( void (*) (List_1_t4022 *, Comparison_1_t4030 *, const MethodInfo*))List_1_Sort_m27542_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t3908* List_1_ToArray_m27544_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_ToArray_m27544(__this, method) (( KeyValuePair_2U5BU5D_t3908* (*) (List_1_t4022 *, const MethodInfo*))List_1_ToArray_m27544_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m27546_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m27546(__this, method) (( void (*) (List_1_t4022 *, const MethodInfo*))List_1_TrimExcess_m27546_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m27548_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m27548(__this, method) (( int32_t (*) (List_1_t4022 *, const MethodInfo*))List_1_get_Capacity_m27548_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m27550_gshared (List_1_t4022 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m27550(__this, ___value, method) (( void (*) (List_1_t4022 *, int32_t, const MethodInfo*))List_1_set_Capacity_m27550_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m27551_gshared (List_1_t4022 * __this, const MethodInfo* method);
#define List_1_get_Count_m27551(__this, method) (( int32_t (*) (List_1_t4022 *, const MethodInfo*))List_1_get_Count_m27551_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t40  List_1_get_Item_m27552_gshared (List_1_t4022 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m27552(__this, ___index, method) (( KeyValuePair_2_t40  (*) (List_1_t4022 *, int32_t, const MethodInfo*))List_1_get_Item_m27552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m27553_gshared (List_1_t4022 * __this, int32_t ___index, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define List_1_set_Item_m27553(__this, ___index, ___value, method) (( void (*) (List_1_t4022 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_set_Item_m27553_gshared)(__this, ___index, ___value, method)

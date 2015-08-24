#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct List_1_t7564;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerable_1_t7232;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7563;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7233;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ICollection_1_t9384;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ReadOnlyCollection_1_t7567;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Predicate_1_t7571;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IComparer_1_t9385;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t7574;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_81.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void List_1__ctor_m50471_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1__ctor_m50471(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1__ctor_m50471_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m50472_gshared (List_1_t7564 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m50472(__this, ___collection, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1__ctor_m50472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m50473_gshared (List_1_t7564 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m50473(__this, ___capacity, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1__ctor_m50473_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m50474_gshared (List_1_t7564 * __this, KeyValuePair_2U5BU5D_t7563* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m50474(__this, ___data, ___size, method) (( void (*) (List_1_t7564 *, KeyValuePair_2U5BU5D_t7563*, int32_t, const MethodInfo*))List_1__ctor_m50474_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.cctor()
extern "C" void List_1__cctor_m50475_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m50475(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50475_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50476_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50476(__this, method) (( Object_t* (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50476_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m50477_gshared (List_1_t7564 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m50477(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7564 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50477_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m50478_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50478(__this, method) (( Object_t * (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m50479_gshared (List_1_t7564 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m50479(__this, ___item, method) (( int32_t (*) (List_1_t7564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50479_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m50480_gshared (List_1_t7564 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m50480(__this, ___item, method) (( bool (*) (List_1_t7564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50480_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m50481_gshared (List_1_t7564 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m50481(__this, ___item, method) (( int32_t (*) (List_1_t7564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50481_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m50482_gshared (List_1_t7564 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m50482(__this, ___index, ___item, method) (( void (*) (List_1_t7564 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50482_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m50483_gshared (List_1_t7564 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m50483(__this, ___item, method) (( void (*) (List_1_t7564 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50483_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50484_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50484(__this, method) (( bool (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50484_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m50485_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50485(__this, method) (( bool (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50485_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m50486_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m50486(__this, method) (( Object_t * (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m50487_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m50487(__this, method) (( bool (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50487_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m50488_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m50488(__this, method) (( bool (*) (List_1_t7564 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50488_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m50489_gshared (List_1_t7564 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m50489(__this, ___index, method) (( Object_t * (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50489_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m50490_gshared (List_1_t7564 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m50490(__this, ___index, ___value, method) (( void (*) (List_1_t7564 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50490_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
extern "C" void List_1_Add_m50491_gshared (List_1_t7564 * __this, KeyValuePair_2_t5533  ___item, const MethodInfo* method);
#define List_1_Add_m50491(__this, ___item, method) (( void (*) (List_1_t7564 *, KeyValuePair_2_t5533 , const MethodInfo*))List_1_Add_m50491_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m50492_gshared (List_1_t7564 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m50492(__this, ___newCount, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50492_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m50493_gshared (List_1_t7564 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m50493(__this, ___idx, ___count, method) (( void (*) (List_1_t7564 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50493_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m50494_gshared (List_1_t7564 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m50494(__this, ___collection, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50494_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m50495_gshared (List_1_t7564 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m50495(__this, ___enumerable, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50495_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m50496_gshared (List_1_t7564 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m50496(__this, ___collection, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_AddRange_m50496_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7567 * List_1_AsReadOnly_m50497_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m50497(__this, method) (( ReadOnlyCollection_1_t7567 * (*) (List_1_t7564 *, const MethodInfo*))List_1_AsReadOnly_m50497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
extern "C" void List_1_Clear_m50498_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_Clear_m50498(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1_Clear_m50498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
extern "C" bool List_1_Contains_m50499_gshared (List_1_t7564 * __this, KeyValuePair_2_t5533  ___item, const MethodInfo* method);
#define List_1_Contains_m50499(__this, ___item, method) (( bool (*) (List_1_t7564 *, KeyValuePair_2_t5533 , const MethodInfo*))List_1_Contains_m50499_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m50500_gshared (List_1_t7564 * __this, KeyValuePair_2U5BU5D_t7563* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m50500(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7564 *, KeyValuePair_2U5BU5D_t7563*, int32_t, const MethodInfo*))List_1_CopyTo_m50500_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t5533  List_1_Find_m50501_gshared (List_1_t7564 * __this, Predicate_1_t7571 * ___match, const MethodInfo* method);
#define List_1_Find_m50501(__this, ___match, method) (( KeyValuePair_2_t5533  (*) (List_1_t7564 *, Predicate_1_t7571 *, const MethodInfo*))List_1_Find_m50501_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m50502_gshared (Object_t * __this /* static, unused */, Predicate_1_t7571 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m50502(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7571 *, const MethodInfo*))List_1_CheckMatch_m50502_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m50503_gshared (List_1_t7564 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7571 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m50503(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7564 *, int32_t, int32_t, Predicate_1_t7571 *, const MethodInfo*))List_1_GetIndex_m50503_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
extern "C" Enumerator_t7565  List_1_GetEnumerator_m50504_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m50504(__this, method) (( Enumerator_t7565  (*) (List_1_t7564 *, const MethodInfo*))List_1_GetEnumerator_m50504_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7564 * List_1_GetRange_m50505_gshared (List_1_t7564 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m50505(__this, ___index, ___count, method) (( List_1_t7564 * (*) (List_1_t7564 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50505_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m50506_gshared (List_1_t7564 * __this, KeyValuePair_2_t5533  ___item, const MethodInfo* method);
#define List_1_IndexOf_m50506(__this, ___item, method) (( int32_t (*) (List_1_t7564 *, KeyValuePair_2_t5533 , const MethodInfo*))List_1_IndexOf_m50506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m50507_gshared (List_1_t7564 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m50507(__this, ___start, ___delta, method) (( void (*) (List_1_t7564 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50507_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m50508_gshared (List_1_t7564 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m50508(__this, ___index, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50508_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m50509_gshared (List_1_t7564 * __this, int32_t ___index, KeyValuePair_2_t5533  ___item, const MethodInfo* method);
#define List_1_Insert_m50509(__this, ___index, ___item, method) (( void (*) (List_1_t7564 *, int32_t, KeyValuePair_2_t5533 , const MethodInfo*))List_1_Insert_m50509_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m50510_gshared (List_1_t7564 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m50510(__this, ___collection, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50510_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m50511_gshared (List_1_t7564 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m50511(__this, ___index, ___collection, method) (( void (*) (List_1_t7564 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50511_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m50512_gshared (List_1_t7564 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m50512(__this, ___index, ___collection, method) (( void (*) (List_1_t7564 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50512_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m50513_gshared (List_1_t7564 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m50513(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7564 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50513_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
extern "C" bool List_1_Remove_m50514_gshared (List_1_t7564 * __this, KeyValuePair_2_t5533  ___item, const MethodInfo* method);
#define List_1_Remove_m50514(__this, ___item, method) (( bool (*) (List_1_t7564 *, KeyValuePair_2_t5533 , const MethodInfo*))List_1_Remove_m50514_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m50515_gshared (List_1_t7564 * __this, Predicate_1_t7571 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m50515(__this, ___match, method) (( int32_t (*) (List_1_t7564 *, Predicate_1_t7571 *, const MethodInfo*))List_1_RemoveAll_m50515_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m50516_gshared (List_1_t7564 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m50516(__this, ___index, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m50517_gshared (List_1_t7564 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m50517(__this, ___index, ___count, method) (( void (*) (List_1_t7564 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50517_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Reverse()
extern "C" void List_1_Reverse_m50518_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_Reverse_m50518(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1_Reverse_m50518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort()
extern "C" void List_1_Sort_m50519_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_Sort_m50519(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1_Sort_m50519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m50520_gshared (List_1_t7564 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m50520(__this, ___comparer, method) (( void (*) (List_1_t7564 *, Object_t*, const MethodInfo*))List_1_Sort_m50520_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m50521_gshared (List_1_t7564 * __this, Comparison_1_t7574 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m50521(__this, ___comparison, method) (( void (*) (List_1_t7564 *, Comparison_1_t7574 *, const MethodInfo*))List_1_Sort_m50521_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7563* List_1_ToArray_m50522_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_ToArray_m50522(__this, method) (( KeyValuePair_2U5BU5D_t7563* (*) (List_1_t7564 *, const MethodInfo*))List_1_ToArray_m50522_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m50523_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m50523(__this, method) (( void (*) (List_1_t7564 *, const MethodInfo*))List_1_TrimExcess_m50523_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m50524_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m50524(__this, method) (( int32_t (*) (List_1_t7564 *, const MethodInfo*))List_1_get_Capacity_m50524_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m50525_gshared (List_1_t7564 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m50525(__this, ___value, method) (( void (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50525_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
extern "C" int32_t List_1_get_Count_m50526_gshared (List_1_t7564 * __this, const MethodInfo* method);
#define List_1_get_Count_m50526(__this, method) (( int32_t (*) (List_1_t7564 *, const MethodInfo*))List_1_get_Count_m50526_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t5533  List_1_get_Item_m50527_gshared (List_1_t7564 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m50527(__this, ___index, method) (( KeyValuePair_2_t5533  (*) (List_1_t7564 *, int32_t, const MethodInfo*))List_1_get_Item_m50527_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m50528_gshared (List_1_t7564 * __this, int32_t ___index, KeyValuePair_2_t5533  ___value, const MethodInfo* method);
#define List_1_set_Item_m50528(__this, ___index, ___value, method) (( void (*) (List_1_t7564 *, int32_t, KeyValuePair_2_t5533 , const MethodInfo*))List_1_set_Item_m50528_gshared)(__this, ___index, ___value, method)

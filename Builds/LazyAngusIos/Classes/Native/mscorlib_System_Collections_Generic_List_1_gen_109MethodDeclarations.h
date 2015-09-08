#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct List_1_t8402;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerable_1_t7840;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t8401;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7841;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ICollection_1_t10032;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ReadOnlyCollection_1_t8405;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Predicate_1_t8409;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IComparer_1_t10033;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t8412;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_92.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void List_1__ctor_m58498_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1__ctor_m58498(__this, method) (( void (*) (List_1_t8402 *, const MethodInfo*))List_1__ctor_m58498_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m58499_gshared (List_1_t8402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m58499(__this, ___collection, method) (( void (*) (List_1_t8402 *, Object_t*, const MethodInfo*))List_1__ctor_m58499_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m58500_gshared (List_1_t8402 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m58500(__this, ___capacity, method) (( void (*) (List_1_t8402 *, int32_t, const MethodInfo*))List_1__ctor_m58500_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m58501_gshared (List_1_t8402 * __this, KeyValuePair_2U5BU5D_t8401* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m58501(__this, ___data, ___size, method) (( void (*) (List_1_t8402 *, KeyValuePair_2U5BU5D_t8401*, int32_t, const MethodInfo*))List_1__ctor_m58501_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.cctor()
extern "C" void List_1__cctor_m58502_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m58502(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m58502_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58503_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58503(__this, method) (( Object_t* (*) (List_1_t8402 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58503_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m58504_gshared (List_1_t8402 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m58504(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8402 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m58504_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m58505_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m58505(__this, method) (( Object_t * (*) (List_1_t8402 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m58505_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m58506_gshared (List_1_t8402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m58506(__this, ___item, method) (( int32_t (*) (List_1_t8402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m58506_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m58507_gshared (List_1_t8402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m58507(__this, ___item, method) (( bool (*) (List_1_t8402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m58507_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m58508_gshared (List_1_t8402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m58508(__this, ___item, method) (( int32_t (*) (List_1_t8402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m58508_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m58509_gshared (List_1_t8402 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m58509(__this, ___index, ___item, method) (( void (*) (List_1_t8402 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m58509_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m58510_gshared (List_1_t8402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m58510(__this, ___item, method) (( void (*) (List_1_t8402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m58510_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58511_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58511(__this, method) (( bool (*) (List_1_t8402 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m58512_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m58512(__this, method) (( bool (*) (List_1_t8402 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m58512_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m58513_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m58513(__this, method) (( Object_t * (*) (List_1_t8402 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m58513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m58514_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m58514(__this, method) (( bool (*) (List_1_t8402 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m58514_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m58515_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m58515(__this, method) (( bool (*) (List_1_t8402 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m58515_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m58516_gshared (List_1_t8402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m58516(__this, ___index, method) (( Object_t * (*) (List_1_t8402 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m58516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m58517_gshared (List_1_t8402 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m58517(__this, ___index, ___value, method) (( void (*) (List_1_t8402 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m58517_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Add(T)
extern "C" void List_1_Add_m58518_gshared (List_1_t8402 * __this, KeyValuePair_2_t7578  ___item, const MethodInfo* method);
#define List_1_Add_m58518(__this, ___item, method) (( void (*) (List_1_t8402 *, KeyValuePair_2_t7578 , const MethodInfo*))List_1_Add_m58518_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m58519_gshared (List_1_t8402 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m58519(__this, ___newCount, method) (( void (*) (List_1_t8402 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m58519_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m58520_gshared (List_1_t8402 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m58520(__this, ___idx, ___count, method) (( void (*) (List_1_t8402 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m58520_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m58521_gshared (List_1_t8402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m58521(__this, ___collection, method) (( void (*) (List_1_t8402 *, Object_t*, const MethodInfo*))List_1_AddCollection_m58521_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m58522_gshared (List_1_t8402 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m58522(__this, ___enumerable, method) (( void (*) (List_1_t8402 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m58522_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m58523_gshared (List_1_t8402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m58523(__this, ___collection, method) (( void (*) (List_1_t8402 *, Object_t*, const MethodInfo*))List_1_AddRange_m58523_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8405 * List_1_AsReadOnly_m58524_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m58524(__this, method) (( ReadOnlyCollection_1_t8405 * (*) (List_1_t8402 *, const MethodInfo*))List_1_AsReadOnly_m58524_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Clear()
extern "C" void List_1_Clear_m58525_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_Clear_m58525(__this, method) (( void (*) (List_1_t8402 *, const MethodInfo*))List_1_Clear_m58525_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Contains(T)
extern "C" bool List_1_Contains_m58526_gshared (List_1_t8402 * __this, KeyValuePair_2_t7578  ___item, const MethodInfo* method);
#define List_1_Contains_m58526(__this, ___item, method) (( bool (*) (List_1_t8402 *, KeyValuePair_2_t7578 , const MethodInfo*))List_1_Contains_m58526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m58527_gshared (List_1_t8402 * __this, KeyValuePair_2U5BU5D_t8401* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m58527(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8402 *, KeyValuePair_2U5BU5D_t8401*, int32_t, const MethodInfo*))List_1_CopyTo_m58527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7578  List_1_Find_m58528_gshared (List_1_t8402 * __this, Predicate_1_t8409 * ___match, const MethodInfo* method);
#define List_1_Find_m58528(__this, ___match, method) (( KeyValuePair_2_t7578  (*) (List_1_t8402 *, Predicate_1_t8409 *, const MethodInfo*))List_1_Find_m58528_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m58529_gshared (Object_t * __this /* static, unused */, Predicate_1_t8409 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m58529(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8409 *, const MethodInfo*))List_1_CheckMatch_m58529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m58530_gshared (List_1_t8402 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8409 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m58530(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8402 *, int32_t, int32_t, Predicate_1_t8409 *, const MethodInfo*))List_1_GetIndex_m58530_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetEnumerator()
extern "C" Enumerator_t8403  List_1_GetEnumerator_m58531_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m58531(__this, method) (( Enumerator_t8403  (*) (List_1_t8402 *, const MethodInfo*))List_1_GetEnumerator_m58531_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8402 * List_1_GetRange_m58532_gshared (List_1_t8402 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m58532(__this, ___index, ___count, method) (( List_1_t8402 * (*) (List_1_t8402 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m58532_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m58533_gshared (List_1_t8402 * __this, KeyValuePair_2_t7578  ___item, const MethodInfo* method);
#define List_1_IndexOf_m58533(__this, ___item, method) (( int32_t (*) (List_1_t8402 *, KeyValuePair_2_t7578 , const MethodInfo*))List_1_IndexOf_m58533_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m58534_gshared (List_1_t8402 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m58534(__this, ___start, ___delta, method) (( void (*) (List_1_t8402 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m58534_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m58535_gshared (List_1_t8402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m58535(__this, ___index, method) (( void (*) (List_1_t8402 *, int32_t, const MethodInfo*))List_1_CheckIndex_m58535_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m58536_gshared (List_1_t8402 * __this, int32_t ___index, KeyValuePair_2_t7578  ___item, const MethodInfo* method);
#define List_1_Insert_m58536(__this, ___index, ___item, method) (( void (*) (List_1_t8402 *, int32_t, KeyValuePair_2_t7578 , const MethodInfo*))List_1_Insert_m58536_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m58537_gshared (List_1_t8402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m58537(__this, ___collection, method) (( void (*) (List_1_t8402 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m58537_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m58538_gshared (List_1_t8402 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m58538(__this, ___index, ___collection, method) (( void (*) (List_1_t8402 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m58538_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m58539_gshared (List_1_t8402 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m58539(__this, ___index, ___collection, method) (( void (*) (List_1_t8402 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m58539_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m58540_gshared (List_1_t8402 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m58540(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8402 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m58540_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Remove(T)
extern "C" bool List_1_Remove_m58541_gshared (List_1_t8402 * __this, KeyValuePair_2_t7578  ___item, const MethodInfo* method);
#define List_1_Remove_m58541(__this, ___item, method) (( bool (*) (List_1_t8402 *, KeyValuePair_2_t7578 , const MethodInfo*))List_1_Remove_m58541_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m58542_gshared (List_1_t8402 * __this, Predicate_1_t8409 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m58542(__this, ___match, method) (( int32_t (*) (List_1_t8402 *, Predicate_1_t8409 *, const MethodInfo*))List_1_RemoveAll_m58542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m58543_gshared (List_1_t8402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m58543(__this, ___index, method) (( void (*) (List_1_t8402 *, int32_t, const MethodInfo*))List_1_RemoveAt_m58543_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m58544_gshared (List_1_t8402 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m58544(__this, ___index, ___count, method) (( void (*) (List_1_t8402 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m58544_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Reverse()
extern "C" void List_1_Reverse_m58545_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_Reverse_m58545(__this, method) (( void (*) (List_1_t8402 *, const MethodInfo*))List_1_Reverse_m58545_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort()
extern "C" void List_1_Sort_m58546_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_Sort_m58546(__this, method) (( void (*) (List_1_t8402 *, const MethodInfo*))List_1_Sort_m58546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m58547_gshared (List_1_t8402 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m58547(__this, ___comparer, method) (( void (*) (List_1_t8402 *, Object_t*, const MethodInfo*))List_1_Sort_m58547_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m58548_gshared (List_1_t8402 * __this, Comparison_1_t8412 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m58548(__this, ___comparison, method) (( void (*) (List_1_t8402 *, Comparison_1_t8412 *, const MethodInfo*))List_1_Sort_m58548_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8401* List_1_ToArray_m58549_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_ToArray_m58549(__this, method) (( KeyValuePair_2U5BU5D_t8401* (*) (List_1_t8402 *, const MethodInfo*))List_1_ToArray_m58549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::TrimExcess()
extern "C" void List_1_TrimExcess_m58550_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m58550(__this, method) (( void (*) (List_1_t8402 *, const MethodInfo*))List_1_TrimExcess_m58550_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m58551_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m58551(__this, method) (( int32_t (*) (List_1_t8402 *, const MethodInfo*))List_1_get_Capacity_m58551_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m58552_gshared (List_1_t8402 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m58552(__this, ___value, method) (( void (*) (List_1_t8402 *, int32_t, const MethodInfo*))List_1_set_Capacity_m58552_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Count()
extern "C" int32_t List_1_get_Count_m58553_gshared (List_1_t8402 * __this, const MethodInfo* method);
#define List_1_get_Count_m58553(__this, method) (( int32_t (*) (List_1_t8402 *, const MethodInfo*))List_1_get_Count_m58553_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7578  List_1_get_Item_m58554_gshared (List_1_t8402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m58554(__this, ___index, method) (( KeyValuePair_2_t7578  (*) (List_1_t8402 *, int32_t, const MethodInfo*))List_1_get_Item_m58554_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m58555_gshared (List_1_t8402 * __this, int32_t ___index, KeyValuePair_2_t7578  ___value, const MethodInfo* method);
#define List_1_set_Item_m58555(__this, ___index, ___value, method) (( void (*) (List_1_t8402 *, int32_t, KeyValuePair_2_t7578 , const MethodInfo*))List_1_set_Item_m58555_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct List_1_t8401;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerable_1_t7839;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t8400;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7840;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ICollection_1_t10031;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ReadOnlyCollection_1_t8404;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Predicate_1_t8408;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IComparer_1_t10032;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t8411;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_92.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void List_1__ctor_m58485_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1__ctor_m58485(__this, method) (( void (*) (List_1_t8401 *, const MethodInfo*))List_1__ctor_m58485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m58486_gshared (List_1_t8401 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m58486(__this, ___collection, method) (( void (*) (List_1_t8401 *, Object_t*, const MethodInfo*))List_1__ctor_m58486_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m58487_gshared (List_1_t8401 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m58487(__this, ___capacity, method) (( void (*) (List_1_t8401 *, int32_t, const MethodInfo*))List_1__ctor_m58487_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m58488_gshared (List_1_t8401 * __this, KeyValuePair_2U5BU5D_t8400* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m58488(__this, ___data, ___size, method) (( void (*) (List_1_t8401 *, KeyValuePair_2U5BU5D_t8400*, int32_t, const MethodInfo*))List_1__ctor_m58488_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.cctor()
extern "C" void List_1__cctor_m58489_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m58489(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m58489_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58490_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58490(__this, method) (( Object_t* (*) (List_1_t8401 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58490_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m58491_gshared (List_1_t8401 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m58491(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8401 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m58491_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m58492_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m58492(__this, method) (( Object_t * (*) (List_1_t8401 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m58492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m58493_gshared (List_1_t8401 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m58493(__this, ___item, method) (( int32_t (*) (List_1_t8401 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m58493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m58494_gshared (List_1_t8401 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m58494(__this, ___item, method) (( bool (*) (List_1_t8401 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m58494_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m58495_gshared (List_1_t8401 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m58495(__this, ___item, method) (( int32_t (*) (List_1_t8401 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m58495_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m58496_gshared (List_1_t8401 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m58496(__this, ___index, ___item, method) (( void (*) (List_1_t8401 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m58496_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m58497_gshared (List_1_t8401 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m58497(__this, ___item, method) (( void (*) (List_1_t8401 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m58497_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58498_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58498(__this, method) (( bool (*) (List_1_t8401 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m58499_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m58499(__this, method) (( bool (*) (List_1_t8401 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m58499_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m58500_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m58500(__this, method) (( Object_t * (*) (List_1_t8401 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m58500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m58501_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m58501(__this, method) (( bool (*) (List_1_t8401 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m58501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m58502_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m58502(__this, method) (( bool (*) (List_1_t8401 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m58502_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m58503_gshared (List_1_t8401 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m58503(__this, ___index, method) (( Object_t * (*) (List_1_t8401 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m58503_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m58504_gshared (List_1_t8401 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m58504(__this, ___index, ___value, method) (( void (*) (List_1_t8401 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m58504_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Add(T)
extern "C" void List_1_Add_m58505_gshared (List_1_t8401 * __this, KeyValuePair_2_t7577  ___item, const MethodInfo* method);
#define List_1_Add_m58505(__this, ___item, method) (( void (*) (List_1_t8401 *, KeyValuePair_2_t7577 , const MethodInfo*))List_1_Add_m58505_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m58506_gshared (List_1_t8401 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m58506(__this, ___newCount, method) (( void (*) (List_1_t8401 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m58506_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m58507_gshared (List_1_t8401 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m58507(__this, ___idx, ___count, method) (( void (*) (List_1_t8401 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m58507_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m58508_gshared (List_1_t8401 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m58508(__this, ___collection, method) (( void (*) (List_1_t8401 *, Object_t*, const MethodInfo*))List_1_AddCollection_m58508_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m58509_gshared (List_1_t8401 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m58509(__this, ___enumerable, method) (( void (*) (List_1_t8401 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m58509_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m58510_gshared (List_1_t8401 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m58510(__this, ___collection, method) (( void (*) (List_1_t8401 *, Object_t*, const MethodInfo*))List_1_AddRange_m58510_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8404 * List_1_AsReadOnly_m58511_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m58511(__this, method) (( ReadOnlyCollection_1_t8404 * (*) (List_1_t8401 *, const MethodInfo*))List_1_AsReadOnly_m58511_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Clear()
extern "C" void List_1_Clear_m58512_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_Clear_m58512(__this, method) (( void (*) (List_1_t8401 *, const MethodInfo*))List_1_Clear_m58512_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Contains(T)
extern "C" bool List_1_Contains_m58513_gshared (List_1_t8401 * __this, KeyValuePair_2_t7577  ___item, const MethodInfo* method);
#define List_1_Contains_m58513(__this, ___item, method) (( bool (*) (List_1_t8401 *, KeyValuePair_2_t7577 , const MethodInfo*))List_1_Contains_m58513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m58514_gshared (List_1_t8401 * __this, KeyValuePair_2U5BU5D_t8400* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m58514(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8401 *, KeyValuePair_2U5BU5D_t8400*, int32_t, const MethodInfo*))List_1_CopyTo_m58514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7577  List_1_Find_m58515_gshared (List_1_t8401 * __this, Predicate_1_t8408 * ___match, const MethodInfo* method);
#define List_1_Find_m58515(__this, ___match, method) (( KeyValuePair_2_t7577  (*) (List_1_t8401 *, Predicate_1_t8408 *, const MethodInfo*))List_1_Find_m58515_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m58516_gshared (Object_t * __this /* static, unused */, Predicate_1_t8408 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m58516(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8408 *, const MethodInfo*))List_1_CheckMatch_m58516_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m58517_gshared (List_1_t8401 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8408 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m58517(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8401 *, int32_t, int32_t, Predicate_1_t8408 *, const MethodInfo*))List_1_GetIndex_m58517_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetEnumerator()
extern "C" Enumerator_t8402  List_1_GetEnumerator_m58518_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m58518(__this, method) (( Enumerator_t8402  (*) (List_1_t8401 *, const MethodInfo*))List_1_GetEnumerator_m58518_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8401 * List_1_GetRange_m58519_gshared (List_1_t8401 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m58519(__this, ___index, ___count, method) (( List_1_t8401 * (*) (List_1_t8401 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m58519_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m58520_gshared (List_1_t8401 * __this, KeyValuePair_2_t7577  ___item, const MethodInfo* method);
#define List_1_IndexOf_m58520(__this, ___item, method) (( int32_t (*) (List_1_t8401 *, KeyValuePair_2_t7577 , const MethodInfo*))List_1_IndexOf_m58520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m58521_gshared (List_1_t8401 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m58521(__this, ___start, ___delta, method) (( void (*) (List_1_t8401 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m58521_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m58522_gshared (List_1_t8401 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m58522(__this, ___index, method) (( void (*) (List_1_t8401 *, int32_t, const MethodInfo*))List_1_CheckIndex_m58522_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m58523_gshared (List_1_t8401 * __this, int32_t ___index, KeyValuePair_2_t7577  ___item, const MethodInfo* method);
#define List_1_Insert_m58523(__this, ___index, ___item, method) (( void (*) (List_1_t8401 *, int32_t, KeyValuePair_2_t7577 , const MethodInfo*))List_1_Insert_m58523_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m58524_gshared (List_1_t8401 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m58524(__this, ___collection, method) (( void (*) (List_1_t8401 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m58524_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m58525_gshared (List_1_t8401 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m58525(__this, ___index, ___collection, method) (( void (*) (List_1_t8401 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m58525_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m58526_gshared (List_1_t8401 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m58526(__this, ___index, ___collection, method) (( void (*) (List_1_t8401 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m58526_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m58527_gshared (List_1_t8401 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m58527(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8401 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m58527_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Remove(T)
extern "C" bool List_1_Remove_m58528_gshared (List_1_t8401 * __this, KeyValuePair_2_t7577  ___item, const MethodInfo* method);
#define List_1_Remove_m58528(__this, ___item, method) (( bool (*) (List_1_t8401 *, KeyValuePair_2_t7577 , const MethodInfo*))List_1_Remove_m58528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m58529_gshared (List_1_t8401 * __this, Predicate_1_t8408 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m58529(__this, ___match, method) (( int32_t (*) (List_1_t8401 *, Predicate_1_t8408 *, const MethodInfo*))List_1_RemoveAll_m58529_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m58530_gshared (List_1_t8401 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m58530(__this, ___index, method) (( void (*) (List_1_t8401 *, int32_t, const MethodInfo*))List_1_RemoveAt_m58530_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m58531_gshared (List_1_t8401 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m58531(__this, ___index, ___count, method) (( void (*) (List_1_t8401 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m58531_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Reverse()
extern "C" void List_1_Reverse_m58532_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_Reverse_m58532(__this, method) (( void (*) (List_1_t8401 *, const MethodInfo*))List_1_Reverse_m58532_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort()
extern "C" void List_1_Sort_m58533_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_Sort_m58533(__this, method) (( void (*) (List_1_t8401 *, const MethodInfo*))List_1_Sort_m58533_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m58534_gshared (List_1_t8401 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m58534(__this, ___comparer, method) (( void (*) (List_1_t8401 *, Object_t*, const MethodInfo*))List_1_Sort_m58534_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m58535_gshared (List_1_t8401 * __this, Comparison_1_t8411 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m58535(__this, ___comparison, method) (( void (*) (List_1_t8401 *, Comparison_1_t8411 *, const MethodInfo*))List_1_Sort_m58535_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8400* List_1_ToArray_m58536_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_ToArray_m58536(__this, method) (( KeyValuePair_2U5BU5D_t8400* (*) (List_1_t8401 *, const MethodInfo*))List_1_ToArray_m58536_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::TrimExcess()
extern "C" void List_1_TrimExcess_m58537_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m58537(__this, method) (( void (*) (List_1_t8401 *, const MethodInfo*))List_1_TrimExcess_m58537_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m58538_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m58538(__this, method) (( int32_t (*) (List_1_t8401 *, const MethodInfo*))List_1_get_Capacity_m58538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m58539_gshared (List_1_t8401 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m58539(__this, ___value, method) (( void (*) (List_1_t8401 *, int32_t, const MethodInfo*))List_1_set_Capacity_m58539_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Count()
extern "C" int32_t List_1_get_Count_m58540_gshared (List_1_t8401 * __this, const MethodInfo* method);
#define List_1_get_Count_m58540(__this, method) (( int32_t (*) (List_1_t8401 *, const MethodInfo*))List_1_get_Count_m58540_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7577  List_1_get_Item_m58541_gshared (List_1_t8401 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m58541(__this, ___index, method) (( KeyValuePair_2_t7577  (*) (List_1_t8401 *, int32_t, const MethodInfo*))List_1_get_Item_m58541_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m58542_gshared (List_1_t8401 * __this, int32_t ___index, KeyValuePair_2_t7577  ___value, const MethodInfo* method);
#define List_1_set_Item_m58542(__this, ___index, ___value, method) (( void (*) (List_1_t8401 *, int32_t, KeyValuePair_2_t7577 , const MethodInfo*))List_1_set_Item_m58542_gshared)(__this, ___index, ___value, method)

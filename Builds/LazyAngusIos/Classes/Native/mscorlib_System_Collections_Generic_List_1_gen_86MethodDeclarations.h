#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_t7421;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.DateTime>
struct IEnumerable_1_t7415;
// System.DateTime[]
struct DateTimeU5BU5D_t5455;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t7416;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9855;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTime>
struct ReadOnlyCollection_1_t7423;
// System.Predicate`1<System.DateTime>
struct Predicate_1_t7428;
// System.Collections.Generic.IComparer`1<System.DateTime>
struct IComparer_1_t9856;
// System.Comparison`1<System.DateTime>
struct Comparison_1_t7432;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.List`1/Enumerator<System.DateTime>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_69.h"

// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor()
extern "C" void List_1__ctor_m46466_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1__ctor_m46466(__this, method) (( void (*) (List_1_t7421 *, const MethodInfo*))List_1__ctor_m46466_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m46467_gshared (List_1_t7421 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m46467(__this, ___collection, method) (( void (*) (List_1_t7421 *, Object_t*, const MethodInfo*))List_1__ctor_m46467_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Int32)
extern "C" void List_1__ctor_m46468_gshared (List_1_t7421 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m46468(__this, ___capacity, method) (( void (*) (List_1_t7421 *, int32_t, const MethodInfo*))List_1__ctor_m46468_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m46469_gshared (List_1_t7421 * __this, DateTimeU5BU5D_t5455* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m46469(__this, ___data, ___size, method) (( void (*) (List_1_t7421 *, DateTimeU5BU5D_t5455*, int32_t, const MethodInfo*))List_1__ctor_m46469_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.cctor()
extern "C" void List_1__cctor_m46470_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m46470(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46470_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46471_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46471(__this, method) (( Object_t* (*) (List_1_t7421 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46471_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m46472_gshared (List_1_t7421 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m46472(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7421 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46472_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m46473_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46473(__this, method) (( Object_t * (*) (List_1_t7421 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46473_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m46474_gshared (List_1_t7421 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m46474(__this, ___item, method) (( int32_t (*) (List_1_t7421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46474_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m46475_gshared (List_1_t7421 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m46475(__this, ___item, method) (( bool (*) (List_1_t7421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46475_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m46476_gshared (List_1_t7421 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m46476(__this, ___item, method) (( int32_t (*) (List_1_t7421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46476_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m46477_gshared (List_1_t7421 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m46477(__this, ___index, ___item, method) (( void (*) (List_1_t7421 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46477_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m46478_gshared (List_1_t7421 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m46478(__this, ___item, method) (( void (*) (List_1_t7421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46478_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46479_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46479(__this, method) (( bool (*) (List_1_t7421 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m46480_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46480(__this, method) (( bool (*) (List_1_t7421 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46480_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m46481_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m46481(__this, method) (( Object_t * (*) (List_1_t7421 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46481_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m46482_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m46482(__this, method) (( bool (*) (List_1_t7421 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m46483_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m46483(__this, method) (( bool (*) (List_1_t7421 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46483_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m46484_gshared (List_1_t7421 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m46484(__this, ___index, method) (( Object_t * (*) (List_1_t7421 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46484_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m46485_gshared (List_1_t7421 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m46485(__this, ___index, ___value, method) (( void (*) (List_1_t7421 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46485_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(T)
extern "C" void List_1_Add_m46486_gshared (List_1_t7421 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Add_m46486(__this, ___item, method) (( void (*) (List_1_t7421 *, DateTime_t287 , const MethodInfo*))List_1_Add_m46486_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m46487_gshared (List_1_t7421 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m46487(__this, ___newCount, method) (( void (*) (List_1_t7421 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46487_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m46488_gshared (List_1_t7421 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m46488(__this, ___idx, ___count, method) (( void (*) (List_1_t7421 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46488_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m46489_gshared (List_1_t7421 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m46489(__this, ___collection, method) (( void (*) (List_1_t7421 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46489_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m46490_gshared (List_1_t7421 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m46490(__this, ___enumerable, method) (( void (*) (List_1_t7421 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46490_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m46491_gshared (List_1_t7421 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m46491(__this, ___collection, method) (( void (*) (List_1_t7421 *, Object_t*, const MethodInfo*))List_1_AddRange_m46491_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.DateTime>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7423 * List_1_AsReadOnly_m46492_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m46492(__this, method) (( ReadOnlyCollection_1_t7423 * (*) (List_1_t7421 *, const MethodInfo*))List_1_AsReadOnly_m46492_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Clear()
extern "C" void List_1_Clear_m46493_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_Clear_m46493(__this, method) (( void (*) (List_1_t7421 *, const MethodInfo*))List_1_Clear_m46493_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Contains(T)
extern "C" bool List_1_Contains_m46494_gshared (List_1_t7421 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Contains_m46494(__this, ___item, method) (( bool (*) (List_1_t7421 *, DateTime_t287 , const MethodInfo*))List_1_Contains_m46494_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m46495_gshared (List_1_t7421 * __this, DateTimeU5BU5D_t5455* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m46495(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7421 *, DateTimeU5BU5D_t5455*, int32_t, const MethodInfo*))List_1_CopyTo_m46495_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.DateTime>::Find(System.Predicate`1<T>)
extern "C" DateTime_t287  List_1_Find_m46496_gshared (List_1_t7421 * __this, Predicate_1_t7428 * ___match, const MethodInfo* method);
#define List_1_Find_m46496(__this, ___match, method) (( DateTime_t287  (*) (List_1_t7421 *, Predicate_1_t7428 *, const MethodInfo*))List_1_Find_m46496_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m46497_gshared (Object_t * __this /* static, unused */, Predicate_1_t7428 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m46497(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7428 *, const MethodInfo*))List_1_CheckMatch_m46497_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m46498_gshared (List_1_t7421 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7428 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m46498(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7421 *, int32_t, int32_t, Predicate_1_t7428 *, const MethodInfo*))List_1_GetIndex_m46498_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7422  List_1_GetEnumerator_m46499_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m46499(__this, method) (( Enumerator_t7422  (*) (List_1_t7421 *, const MethodInfo*))List_1_GetEnumerator_m46499_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.DateTime>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7421 * List_1_GetRange_m46500_gshared (List_1_t7421 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m46500(__this, ___index, ___count, method) (( List_1_t7421 * (*) (List_1_t7421 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46500_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m46501_gshared (List_1_t7421 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_IndexOf_m46501(__this, ___item, method) (( int32_t (*) (List_1_t7421 *, DateTime_t287 , const MethodInfo*))List_1_IndexOf_m46501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m46502_gshared (List_1_t7421 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m46502(__this, ___start, ___delta, method) (( void (*) (List_1_t7421 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46502_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m46503_gshared (List_1_t7421 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m46503(__this, ___index, method) (( void (*) (List_1_t7421 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46503_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m46504_gshared (List_1_t7421 * __this, int32_t ___index, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Insert_m46504(__this, ___index, ___item, method) (( void (*) (List_1_t7421 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_Insert_m46504_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m46505_gshared (List_1_t7421 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m46505(__this, ___collection, method) (( void (*) (List_1_t7421 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46505_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m46506_gshared (List_1_t7421 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m46506(__this, ___index, ___collection, method) (( void (*) (List_1_t7421 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46506_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m46507_gshared (List_1_t7421 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m46507(__this, ___index, ___collection, method) (( void (*) (List_1_t7421 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46507_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m46508_gshared (List_1_t7421 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m46508(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7421 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46508_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Remove(T)
extern "C" bool List_1_Remove_m46509_gshared (List_1_t7421 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Remove_m46509(__this, ___item, method) (( bool (*) (List_1_t7421 *, DateTime_t287 , const MethodInfo*))List_1_Remove_m46509_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m46510_gshared (List_1_t7421 * __this, Predicate_1_t7428 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m46510(__this, ___match, method) (( int32_t (*) (List_1_t7421 *, Predicate_1_t7428 *, const MethodInfo*))List_1_RemoveAll_m46510_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m46511_gshared (List_1_t7421 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m46511(__this, ___index, method) (( void (*) (List_1_t7421 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46511_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m46512_gshared (List_1_t7421 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m46512(__this, ___index, ___count, method) (( void (*) (List_1_t7421 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46512_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Reverse()
extern "C" void List_1_Reverse_m46513_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_Reverse_m46513(__this, method) (( void (*) (List_1_t7421 *, const MethodInfo*))List_1_Reverse_m46513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort()
extern "C" void List_1_Sort_m46514_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_Sort_m46514(__this, method) (( void (*) (List_1_t7421 *, const MethodInfo*))List_1_Sort_m46514_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m46515_gshared (List_1_t7421 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m46515(__this, ___comparer, method) (( void (*) (List_1_t7421 *, Object_t*, const MethodInfo*))List_1_Sort_m46515_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m46516_gshared (List_1_t7421 * __this, Comparison_1_t7432 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m46516(__this, ___comparison, method) (( void (*) (List_1_t7421 *, Comparison_1_t7432 *, const MethodInfo*))List_1_Sort_m46516_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.DateTime>::ToArray()
extern "C" DateTimeU5BU5D_t5455* List_1_ToArray_m46517_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_ToArray_m46517(__this, method) (( DateTimeU5BU5D_t5455* (*) (List_1_t7421 *, const MethodInfo*))List_1_ToArray_m46517_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::TrimExcess()
extern "C" void List_1_TrimExcess_m46518_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m46518(__this, method) (( void (*) (List_1_t7421 *, const MethodInfo*))List_1_TrimExcess_m46518_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m46519_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m46519(__this, method) (( int32_t (*) (List_1_t7421 *, const MethodInfo*))List_1_get_Capacity_m46519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m46520_gshared (List_1_t7421 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m46520(__this, ___value, method) (( void (*) (List_1_t7421 *, int32_t, const MethodInfo*))List_1_set_Capacity_m46520_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Count()
extern "C" int32_t List_1_get_Count_m46521_gshared (List_1_t7421 * __this, const MethodInfo* method);
#define List_1_get_Count_m46521(__this, method) (( int32_t (*) (List_1_t7421 *, const MethodInfo*))List_1_get_Count_m46521_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.DateTime>::get_Item(System.Int32)
extern "C" DateTime_t287  List_1_get_Item_m46522_gshared (List_1_t7421 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m46522(__this, ___index, method) (( DateTime_t287  (*) (List_1_t7421 *, int32_t, const MethodInfo*))List_1_get_Item_m46522_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m46523_gshared (List_1_t7421 * __this, int32_t ___index, DateTime_t287  ___value, const MethodInfo* method);
#define List_1_set_Item_m46523(__this, ___index, ___value, method) (( void (*) (List_1_t7421 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_set_Item_m46523_gshared)(__this, ___index, ___value, method)

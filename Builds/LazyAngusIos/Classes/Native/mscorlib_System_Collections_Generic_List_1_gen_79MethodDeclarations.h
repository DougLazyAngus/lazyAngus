#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int16>
struct List_1_t6508;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int16>
struct IEnumerable_1_t6360;
// System.Int16[]
struct Int16U5BU5D_t4903;
// System.Collections.Generic.IEnumerator`1<System.Int16>
struct IEnumerator_1_t6361;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9246;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int16>
struct ReadOnlyCollection_1_t6510;
// System.Predicate`1<System.Int16>
struct Predicate_1_t6515;
// System.Collections.Generic.IComparer`1<System.Int16>
struct IComparer_1_t5382;
// System.Comparison`1<System.Int16>
struct Comparison_1_t6519;
// System.Collections.Generic.List`1/Enumerator<System.Int16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_62.h"

// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor()
extern "C" void List_1__ctor_m37474_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1__ctor_m37474(__this, method) (( void (*) (List_1_t6508 *, const MethodInfo*))List_1__ctor_m37474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37475_gshared (List_1_t6508 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37475(__this, ___collection, method) (( void (*) (List_1_t6508 *, Object_t*, const MethodInfo*))List_1__ctor_m37475_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m37476_gshared (List_1_t6508 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m37476(__this, ___capacity, method) (( void (*) (List_1_t6508 *, int32_t, const MethodInfo*))List_1__ctor_m37476_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37477_gshared (List_1_t6508 * __this, Int16U5BU5D_t4903* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37477(__this, ___data, ___size, method) (( void (*) (List_1_t6508 *, Int16U5BU5D_t4903*, int32_t, const MethodInfo*))List_1__ctor_m37477_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.cctor()
extern "C" void List_1__cctor_m37478_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37478(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37478_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37479_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37479(__this, method) (( Object_t* (*) (List_1_t6508 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37480_gshared (List_1_t6508 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37480(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6508 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37480_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37481_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37481(__this, method) (( Object_t * (*) (List_1_t6508 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37481_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37482_gshared (List_1_t6508 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37482(__this, ___item, method) (( int32_t (*) (List_1_t6508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37482_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37483_gshared (List_1_t6508 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37483(__this, ___item, method) (( bool (*) (List_1_t6508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37483_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37484_gshared (List_1_t6508 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37484(__this, ___item, method) (( int32_t (*) (List_1_t6508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37484_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37485_gshared (List_1_t6508 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37485(__this, ___index, ___item, method) (( void (*) (List_1_t6508 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37485_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37486_gshared (List_1_t6508 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37486(__this, ___item, method) (( void (*) (List_1_t6508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37486_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37487_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37487(__this, method) (( bool (*) (List_1_t6508 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37487_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37488_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37488(__this, method) (( bool (*) (List_1_t6508 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37488_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37489_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37489(__this, method) (( Object_t * (*) (List_1_t6508 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37489_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37490_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37490(__this, method) (( bool (*) (List_1_t6508 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37490_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37491_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37491(__this, method) (( bool (*) (List_1_t6508 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37491_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37492_gshared (List_1_t6508 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37492(__this, ___index, method) (( Object_t * (*) (List_1_t6508 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37493_gshared (List_1_t6508 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37493(__this, ___index, ___value, method) (( void (*) (List_1_t6508 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37493_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Add(T)
extern "C" void List_1_Add_m37494_gshared (List_1_t6508 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Add_m37494(__this, ___item, method) (( void (*) (List_1_t6508 *, int16_t, const MethodInfo*))List_1_Add_m37494_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37495_gshared (List_1_t6508 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37495(__this, ___newCount, method) (( void (*) (List_1_t6508 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37495_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37496_gshared (List_1_t6508 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37496(__this, ___idx, ___count, method) (( void (*) (List_1_t6508 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37496_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37497_gshared (List_1_t6508 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37497(__this, ___collection, method) (( void (*) (List_1_t6508 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37497_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37498_gshared (List_1_t6508 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37498(__this, ___enumerable, method) (( void (*) (List_1_t6508 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37498_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37499_gshared (List_1_t6508 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37499(__this, ___collection, method) (( void (*) (List_1_t6508 *, Object_t*, const MethodInfo*))List_1_AddRange_m37499_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6510 * List_1_AsReadOnly_m37500_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37500(__this, method) (( ReadOnlyCollection_1_t6510 * (*) (List_1_t6508 *, const MethodInfo*))List_1_AsReadOnly_m37500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Clear()
extern "C" void List_1_Clear_m37501_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_Clear_m37501(__this, method) (( void (*) (List_1_t6508 *, const MethodInfo*))List_1_Clear_m37501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Contains(T)
extern "C" bool List_1_Contains_m37502_gshared (List_1_t6508 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Contains_m37502(__this, ___item, method) (( bool (*) (List_1_t6508 *, int16_t, const MethodInfo*))List_1_Contains_m37502_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37503_gshared (List_1_t6508 * __this, Int16U5BU5D_t4903* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37503(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6508 *, Int16U5BU5D_t4903*, int32_t, const MethodInfo*))List_1_CopyTo_m37503_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int16>::Find(System.Predicate`1<T>)
extern "C" int16_t List_1_Find_m37504_gshared (List_1_t6508 * __this, Predicate_1_t6515 * ___match, const MethodInfo* method);
#define List_1_Find_m37504(__this, ___match, method) (( int16_t (*) (List_1_t6508 *, Predicate_1_t6515 *, const MethodInfo*))List_1_Find_m37504_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37505_gshared (Object_t * __this /* static, unused */, Predicate_1_t6515 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37505(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6515 *, const MethodInfo*))List_1_CheckMatch_m37505_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37506_gshared (List_1_t6508 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6515 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37506(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6508 *, int32_t, int32_t, Predicate_1_t6515 *, const MethodInfo*))List_1_GetIndex_m37506_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int16>::GetEnumerator()
extern "C" Enumerator_t6509  List_1_GetEnumerator_m37507_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37507(__this, method) (( Enumerator_t6509  (*) (List_1_t6508 *, const MethodInfo*))List_1_GetEnumerator_m37507_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6508 * List_1_GetRange_m37508_gshared (List_1_t6508 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37508(__this, ___index, ___count, method) (( List_1_t6508 * (*) (List_1_t6508 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37508_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37509_gshared (List_1_t6508 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m37509(__this, ___item, method) (( int32_t (*) (List_1_t6508 *, int16_t, const MethodInfo*))List_1_IndexOf_m37509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37510_gshared (List_1_t6508 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37510(__this, ___start, ___delta, method) (( void (*) (List_1_t6508 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37510_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37511_gshared (List_1_t6508 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37511(__this, ___index, method) (( void (*) (List_1_t6508 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37511_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37512_gshared (List_1_t6508 * __this, int32_t ___index, int16_t ___item, const MethodInfo* method);
#define List_1_Insert_m37512(__this, ___index, ___item, method) (( void (*) (List_1_t6508 *, int32_t, int16_t, const MethodInfo*))List_1_Insert_m37512_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37513_gshared (List_1_t6508 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37513(__this, ___collection, method) (( void (*) (List_1_t6508 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37514_gshared (List_1_t6508 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37514(__this, ___index, ___collection, method) (( void (*) (List_1_t6508 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37514_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37515_gshared (List_1_t6508 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37515(__this, ___index, ___collection, method) (( void (*) (List_1_t6508 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37515_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37516_gshared (List_1_t6508 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37516(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6508 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37516_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Remove(T)
extern "C" bool List_1_Remove_m37517_gshared (List_1_t6508 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Remove_m37517(__this, ___item, method) (( bool (*) (List_1_t6508 *, int16_t, const MethodInfo*))List_1_Remove_m37517_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37518_gshared (List_1_t6508 * __this, Predicate_1_t6515 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37518(__this, ___match, method) (( int32_t (*) (List_1_t6508 *, Predicate_1_t6515 *, const MethodInfo*))List_1_RemoveAll_m37518_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37519_gshared (List_1_t6508 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37519(__this, ___index, method) (( void (*) (List_1_t6508 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37520_gshared (List_1_t6508 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37520(__this, ___index, ___count, method) (( void (*) (List_1_t6508 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37520_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Reverse()
extern "C" void List_1_Reverse_m37521_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_Reverse_m37521(__this, method) (( void (*) (List_1_t6508 *, const MethodInfo*))List_1_Reverse_m37521_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort()
extern "C" void List_1_Sort_m37522_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_Sort_m37522(__this, method) (( void (*) (List_1_t6508 *, const MethodInfo*))List_1_Sort_m37522_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37523_gshared (List_1_t6508 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37523(__this, ___comparer, method) (( void (*) (List_1_t6508 *, Object_t*, const MethodInfo*))List_1_Sort_m37523_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37524_gshared (List_1_t6508 * __this, Comparison_1_t6519 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37524(__this, ___comparison, method) (( void (*) (List_1_t6508 *, Comparison_1_t6519 *, const MethodInfo*))List_1_Sort_m37524_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int16>::ToArray()
extern "C" Int16U5BU5D_t4903* List_1_ToArray_m37525_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_ToArray_m37525(__this, method) (( Int16U5BU5D_t4903* (*) (List_1_t6508 *, const MethodInfo*))List_1_ToArray_m37525_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::TrimExcess()
extern "C" void List_1_TrimExcess_m37526_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37526(__this, method) (( void (*) (List_1_t6508 *, const MethodInfo*))List_1_TrimExcess_m37526_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m37527_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m37527(__this, method) (( int32_t (*) (List_1_t6508 *, const MethodInfo*))List_1_get_Capacity_m37527_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m37528_gshared (List_1_t6508 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m37528(__this, ___value, method) (( void (*) (List_1_t6508 *, int32_t, const MethodInfo*))List_1_set_Capacity_m37528_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Count()
extern "C" int32_t List_1_get_Count_m37529_gshared (List_1_t6508 * __this, const MethodInfo* method);
#define List_1_get_Count_m37529(__this, method) (( int32_t (*) (List_1_t6508 *, const MethodInfo*))List_1_get_Count_m37529_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int16>::get_Item(System.Int32)
extern "C" int16_t List_1_get_Item_m37530_gshared (List_1_t6508 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37530(__this, ___index, method) (( int16_t (*) (List_1_t6508 *, int32_t, const MethodInfo*))List_1_get_Item_m37530_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37531_gshared (List_1_t6508 * __this, int32_t ___index, int16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m37531(__this, ___index, ___value, method) (( void (*) (List_1_t6508 *, int32_t, int16_t, const MethodInfo*))List_1_set_Item_m37531_gshared)(__this, ___index, ___value, method)

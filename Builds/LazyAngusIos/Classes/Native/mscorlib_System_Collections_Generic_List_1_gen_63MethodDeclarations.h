#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t5652;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t6292;
// System.Single[]
struct SingleU5BU5D_t544;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6293;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8841;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t5655;
// System.Predicate`1<System.Single>
struct Predicate_1_t5660;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t8842;
// System.Comparison`1<System.Single>
struct Comparison_1_t5664;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m26473_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1__ctor_m26473(__this, method) (( void (*) (List_1_t5652 *, const MethodInfo*))List_1__ctor_m26473_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26474_gshared (List_1_t5652 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26474(__this, ___collection, method) (( void (*) (List_1_t5652 *, Object_t*, const MethodInfo*))List_1__ctor_m26474_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m26475_gshared (List_1_t5652 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m26475(__this, ___capacity, method) (( void (*) (List_1_t5652 *, int32_t, const MethodInfo*))List_1__ctor_m26475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26476_gshared (List_1_t5652 * __this, SingleU5BU5D_t544* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m26476(__this, ___data, ___size, method) (( void (*) (List_1_t5652 *, SingleU5BU5D_t544*, int32_t, const MethodInfo*))List_1__ctor_m26476_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m26477_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26477(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26478_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26478(__this, method) (( Object_t* (*) (List_1_t5652 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26479_gshared (List_1_t5652 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26479(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5652 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26479_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26480_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26480(__this, method) (( Object_t * (*) (List_1_t5652 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26480_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26481_gshared (List_1_t5652 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26481(__this, ___item, method) (( int32_t (*) (List_1_t5652 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26481_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26482_gshared (List_1_t5652 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26482(__this, ___item, method) (( bool (*) (List_1_t5652 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26482_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26483_gshared (List_1_t5652 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26483(__this, ___item, method) (( int32_t (*) (List_1_t5652 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26483_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26484_gshared (List_1_t5652 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26484(__this, ___index, ___item, method) (( void (*) (List_1_t5652 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26484_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26485_gshared (List_1_t5652 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26485(__this, ___item, method) (( void (*) (List_1_t5652 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26486_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26486(__this, method) (( bool (*) (List_1_t5652 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26487_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26487(__this, method) (( bool (*) (List_1_t5652 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26487_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26488_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26488(__this, method) (( Object_t * (*) (List_1_t5652 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26489_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26489(__this, method) (( bool (*) (List_1_t5652 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26489_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26490_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26490(__this, method) (( bool (*) (List_1_t5652 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26490_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26491_gshared (List_1_t5652 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26491(__this, ___index, method) (( Object_t * (*) (List_1_t5652 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26491_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26492_gshared (List_1_t5652 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26492(__this, ___index, ___value, method) (( void (*) (List_1_t5652 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26492_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m26493_gshared (List_1_t5652 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m26493(__this, ___item, method) (( void (*) (List_1_t5652 *, float, const MethodInfo*))List_1_Add_m26493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26494_gshared (List_1_t5652 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26494(__this, ___newCount, method) (( void (*) (List_1_t5652 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26494_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26495_gshared (List_1_t5652 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26495(__this, ___idx, ___count, method) (( void (*) (List_1_t5652 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26495_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26496_gshared (List_1_t5652 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26496(__this, ___collection, method) (( void (*) (List_1_t5652 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26496_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26497_gshared (List_1_t5652 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26497(__this, ___enumerable, method) (( void (*) (List_1_t5652 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26497_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26498_gshared (List_1_t5652 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26498(__this, ___collection, method) (( void (*) (List_1_t5652 *, Object_t*, const MethodInfo*))List_1_AddRange_m26498_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5655 * List_1_AsReadOnly_m26499_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26499(__this, method) (( ReadOnlyCollection_1_t5655 * (*) (List_1_t5652 *, const MethodInfo*))List_1_AsReadOnly_m26499_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m26500_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_Clear_m26500(__this, method) (( void (*) (List_1_t5652 *, const MethodInfo*))List_1_Clear_m26500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m26501_gshared (List_1_t5652 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m26501(__this, ___item, method) (( bool (*) (List_1_t5652 *, float, const MethodInfo*))List_1_Contains_m26501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26502_gshared (List_1_t5652 * __this, SingleU5BU5D_t544* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26502(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5652 *, SingleU5BU5D_t544*, int32_t, const MethodInfo*))List_1_CopyTo_m26502_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m26503_gshared (List_1_t5652 * __this, Predicate_1_t5660 * ___match, const MethodInfo* method);
#define List_1_Find_m26503(__this, ___match, method) (( float (*) (List_1_t5652 *, Predicate_1_t5660 *, const MethodInfo*))List_1_Find_m26503_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26504_gshared (Object_t * __this /* static, unused */, Predicate_1_t5660 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26504(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5660 *, const MethodInfo*))List_1_CheckMatch_m26504_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26505_gshared (List_1_t5652 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5660 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26505(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5652 *, int32_t, int32_t, Predicate_1_t5660 *, const MethodInfo*))List_1_GetIndex_m26505_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t5653  List_1_GetEnumerator_m26506_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26506(__this, method) (( Enumerator_t5653  (*) (List_1_t5652 *, const MethodInfo*))List_1_GetEnumerator_m26506_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t5652 * List_1_GetRange_m26507_gshared (List_1_t5652 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26507(__this, ___index, ___count, method) (( List_1_t5652 * (*) (List_1_t5652 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26507_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26508_gshared (List_1_t5652 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m26508(__this, ___item, method) (( int32_t (*) (List_1_t5652 *, float, const MethodInfo*))List_1_IndexOf_m26508_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26509_gshared (List_1_t5652 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26509(__this, ___start, ___delta, method) (( void (*) (List_1_t5652 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26509_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26510_gshared (List_1_t5652 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26510(__this, ___index, method) (( void (*) (List_1_t5652 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26511_gshared (List_1_t5652 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m26511(__this, ___index, ___item, method) (( void (*) (List_1_t5652 *, int32_t, float, const MethodInfo*))List_1_Insert_m26511_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26512_gshared (List_1_t5652 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26512(__this, ___collection, method) (( void (*) (List_1_t5652 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26512_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26513_gshared (List_1_t5652 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26513(__this, ___index, ___collection, method) (( void (*) (List_1_t5652 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26513_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26514_gshared (List_1_t5652 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26514(__this, ___index, ___collection, method) (( void (*) (List_1_t5652 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26514_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26515_gshared (List_1_t5652 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26515(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5652 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26515_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m26516_gshared (List_1_t5652 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m26516(__this, ___item, method) (( bool (*) (List_1_t5652 *, float, const MethodInfo*))List_1_Remove_m26516_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26517_gshared (List_1_t5652 * __this, Predicate_1_t5660 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26517(__this, ___match, method) (( int32_t (*) (List_1_t5652 *, Predicate_1_t5660 *, const MethodInfo*))List_1_RemoveAll_m26517_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26518_gshared (List_1_t5652 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26518(__this, ___index, method) (( void (*) (List_1_t5652 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26518_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26519_gshared (List_1_t5652 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26519(__this, ___index, ___count, method) (( void (*) (List_1_t5652 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26519_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m26520_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_Reverse_m26520(__this, method) (( void (*) (List_1_t5652 *, const MethodInfo*))List_1_Reverse_m26520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m26521_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_Sort_m26521(__this, method) (( void (*) (List_1_t5652 *, const MethodInfo*))List_1_Sort_m26521_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26522_gshared (List_1_t5652 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26522(__this, ___comparer, method) (( void (*) (List_1_t5652 *, Object_t*, const MethodInfo*))List_1_Sort_m26522_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26523_gshared (List_1_t5652 * __this, Comparison_1_t5664 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26523(__this, ___comparison, method) (( void (*) (List_1_t5652 *, Comparison_1_t5664 *, const MethodInfo*))List_1_Sort_m26523_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t544* List_1_ToArray_m26524_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_ToArray_m26524(__this, method) (( SingleU5BU5D_t544* (*) (List_1_t5652 *, const MethodInfo*))List_1_ToArray_m26524_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m26525_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26525(__this, method) (( void (*) (List_1_t5652 *, const MethodInfo*))List_1_TrimExcess_m26525_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26526_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26526(__this, method) (( int32_t (*) (List_1_t5652 *, const MethodInfo*))List_1_get_Capacity_m26526_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26527_gshared (List_1_t5652 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26527(__this, ___value, method) (( void (*) (List_1_t5652 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26527_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m26528_gshared (List_1_t5652 * __this, const MethodInfo* method);
#define List_1_get_Count_m26528(__this, method) (( int32_t (*) (List_1_t5652 *, const MethodInfo*))List_1_get_Count_m26528_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m26529_gshared (List_1_t5652 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26529(__this, ___index, method) (( float (*) (List_1_t5652 *, int32_t, const MethodInfo*))List_1_get_Item_m26529_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26530_gshared (List_1_t5652 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m26530(__this, ___index, ___value, method) (( void (*) (List_1_t5652 *, int32_t, float, const MethodInfo*))List_1_set_Item_m26530_gshared)(__this, ___index, ___value, method)

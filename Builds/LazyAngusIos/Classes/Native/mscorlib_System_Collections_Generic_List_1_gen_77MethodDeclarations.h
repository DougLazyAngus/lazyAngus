#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t6519;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t6330;
// System.UInt16[]
struct UInt16U5BU5D_t4060;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t6331;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9199;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t6521;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t6526;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t9200;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t6530;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_60.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m37601_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1__ctor_m37601(__this, method) (( void (*) (List_1_t6519 *, const MethodInfo*))List_1__ctor_m37601_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37602_gshared (List_1_t6519 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37602(__this, ___collection, method) (( void (*) (List_1_t6519 *, Object_t*, const MethodInfo*))List_1__ctor_m37602_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m37603_gshared (List_1_t6519 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m37603(__this, ___capacity, method) (( void (*) (List_1_t6519 *, int32_t, const MethodInfo*))List_1__ctor_m37603_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37604_gshared (List_1_t6519 * __this, UInt16U5BU5D_t4060* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37604(__this, ___data, ___size, method) (( void (*) (List_1_t6519 *, UInt16U5BU5D_t4060*, int32_t, const MethodInfo*))List_1__ctor_m37604_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m37605_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37605(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37605_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37606_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37606(__this, method) (( Object_t* (*) (List_1_t6519 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37606_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37607_gshared (List_1_t6519 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37607(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6519 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37607_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37608_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37608(__this, method) (( Object_t * (*) (List_1_t6519 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37608_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37609_gshared (List_1_t6519 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37609(__this, ___item, method) (( int32_t (*) (List_1_t6519 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37609_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37610_gshared (List_1_t6519 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37610(__this, ___item, method) (( bool (*) (List_1_t6519 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37610_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37611_gshared (List_1_t6519 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37611(__this, ___item, method) (( int32_t (*) (List_1_t6519 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37611_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37612_gshared (List_1_t6519 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37612(__this, ___index, ___item, method) (( void (*) (List_1_t6519 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37612_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37613_gshared (List_1_t6519 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37613(__this, ___item, method) (( void (*) (List_1_t6519 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37613_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37614_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37614(__this, method) (( bool (*) (List_1_t6519 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37614_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37615_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37615(__this, method) (( bool (*) (List_1_t6519 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37615_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37616_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37616(__this, method) (( Object_t * (*) (List_1_t6519 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37617_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37617(__this, method) (( bool (*) (List_1_t6519 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37618_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37618(__this, method) (( bool (*) (List_1_t6519 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37618_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37619_gshared (List_1_t6519 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37619(__this, ___index, method) (( Object_t * (*) (List_1_t6519 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37619_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37620_gshared (List_1_t6519 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37620(__this, ___index, ___value, method) (( void (*) (List_1_t6519 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37620_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m37621_gshared (List_1_t6519 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m37621(__this, ___item, method) (( void (*) (List_1_t6519 *, uint16_t, const MethodInfo*))List_1_Add_m37621_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37622_gshared (List_1_t6519 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37622(__this, ___newCount, method) (( void (*) (List_1_t6519 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37622_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37623_gshared (List_1_t6519 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37623(__this, ___idx, ___count, method) (( void (*) (List_1_t6519 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37623_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37624_gshared (List_1_t6519 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37624(__this, ___collection, method) (( void (*) (List_1_t6519 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37624_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37625_gshared (List_1_t6519 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37625(__this, ___enumerable, method) (( void (*) (List_1_t6519 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37625_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37626_gshared (List_1_t6519 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37626(__this, ___collection, method) (( void (*) (List_1_t6519 *, Object_t*, const MethodInfo*))List_1_AddRange_m37626_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6521 * List_1_AsReadOnly_m37627_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37627(__this, method) (( ReadOnlyCollection_1_t6521 * (*) (List_1_t6519 *, const MethodInfo*))List_1_AsReadOnly_m37627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m37628_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_Clear_m37628(__this, method) (( void (*) (List_1_t6519 *, const MethodInfo*))List_1_Clear_m37628_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m37629_gshared (List_1_t6519 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m37629(__this, ___item, method) (( bool (*) (List_1_t6519 *, uint16_t, const MethodInfo*))List_1_Contains_m37629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37630_gshared (List_1_t6519 * __this, UInt16U5BU5D_t4060* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37630(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6519 *, UInt16U5BU5D_t4060*, int32_t, const MethodInfo*))List_1_CopyTo_m37630_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m37631_gshared (List_1_t6519 * __this, Predicate_1_t6526 * ___match, const MethodInfo* method);
#define List_1_Find_m37631(__this, ___match, method) (( uint16_t (*) (List_1_t6519 *, Predicate_1_t6526 *, const MethodInfo*))List_1_Find_m37631_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37632_gshared (Object_t * __this /* static, unused */, Predicate_1_t6526 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37632(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6526 *, const MethodInfo*))List_1_CheckMatch_m37632_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37633_gshared (List_1_t6519 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6526 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37633(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6519 *, int32_t, int32_t, Predicate_1_t6526 *, const MethodInfo*))List_1_GetIndex_m37633_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t6520  List_1_GetEnumerator_m37634_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37634(__this, method) (( Enumerator_t6520  (*) (List_1_t6519 *, const MethodInfo*))List_1_GetEnumerator_m37634_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6519 * List_1_GetRange_m37635_gshared (List_1_t6519 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37635(__this, ___index, ___count, method) (( List_1_t6519 * (*) (List_1_t6519 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37635_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37636_gshared (List_1_t6519 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m37636(__this, ___item, method) (( int32_t (*) (List_1_t6519 *, uint16_t, const MethodInfo*))List_1_IndexOf_m37636_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37637_gshared (List_1_t6519 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37637(__this, ___start, ___delta, method) (( void (*) (List_1_t6519 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37637_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37638_gshared (List_1_t6519 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37638(__this, ___index, method) (( void (*) (List_1_t6519 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37638_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37639_gshared (List_1_t6519 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m37639(__this, ___index, ___item, method) (( void (*) (List_1_t6519 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m37639_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37640_gshared (List_1_t6519 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37640(__this, ___collection, method) (( void (*) (List_1_t6519 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37641_gshared (List_1_t6519 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37641(__this, ___index, ___collection, method) (( void (*) (List_1_t6519 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37641_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37642_gshared (List_1_t6519 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37642(__this, ___index, ___collection, method) (( void (*) (List_1_t6519 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37643_gshared (List_1_t6519 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37643(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6519 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37643_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m37644_gshared (List_1_t6519 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m37644(__this, ___item, method) (( bool (*) (List_1_t6519 *, uint16_t, const MethodInfo*))List_1_Remove_m37644_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37645_gshared (List_1_t6519 * __this, Predicate_1_t6526 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37645(__this, ___match, method) (( int32_t (*) (List_1_t6519 *, Predicate_1_t6526 *, const MethodInfo*))List_1_RemoveAll_m37645_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37646_gshared (List_1_t6519 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37646(__this, ___index, method) (( void (*) (List_1_t6519 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37646_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37647_gshared (List_1_t6519 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37647(__this, ___index, ___count, method) (( void (*) (List_1_t6519 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37647_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m37648_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_Reverse_m37648(__this, method) (( void (*) (List_1_t6519 *, const MethodInfo*))List_1_Reverse_m37648_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m37649_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_Sort_m37649(__this, method) (( void (*) (List_1_t6519 *, const MethodInfo*))List_1_Sort_m37649_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37650_gshared (List_1_t6519 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37650(__this, ___comparer, method) (( void (*) (List_1_t6519 *, Object_t*, const MethodInfo*))List_1_Sort_m37650_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37651_gshared (List_1_t6519 * __this, Comparison_1_t6530 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37651(__this, ___comparison, method) (( void (*) (List_1_t6519 *, Comparison_1_t6530 *, const MethodInfo*))List_1_Sort_m37651_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t4060* List_1_ToArray_m37652_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_ToArray_m37652(__this, method) (( UInt16U5BU5D_t4060* (*) (List_1_t6519 *, const MethodInfo*))List_1_ToArray_m37652_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m37653_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37653(__this, method) (( void (*) (List_1_t6519 *, const MethodInfo*))List_1_TrimExcess_m37653_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m37654_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m37654(__this, method) (( int32_t (*) (List_1_t6519 *, const MethodInfo*))List_1_get_Capacity_m37654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m37655_gshared (List_1_t6519 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m37655(__this, ___value, method) (( void (*) (List_1_t6519 *, int32_t, const MethodInfo*))List_1_set_Capacity_m37655_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m37656_gshared (List_1_t6519 * __this, const MethodInfo* method);
#define List_1_get_Count_m37656(__this, method) (( int32_t (*) (List_1_t6519 *, const MethodInfo*))List_1_get_Count_m37656_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m37657_gshared (List_1_t6519 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37657(__this, ___index, method) (( uint16_t (*) (List_1_t6519 *, int32_t, const MethodInfo*))List_1_get_Item_m37657_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37658_gshared (List_1_t6519 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m37658(__this, ___index, ___value, method) (( void (*) (List_1_t6519 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m37658_gshared)(__this, ___index, ___value, method)

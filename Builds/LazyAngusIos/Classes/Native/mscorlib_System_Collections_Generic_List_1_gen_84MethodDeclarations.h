#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t7266;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt64>
struct IEnumerable_1_t6926;
// System.UInt64[]
struct UInt64U5BU5D_t5282;
// System.Collections.Generic.IEnumerator`1<System.UInt64>
struct IEnumerator_1_t6927;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9844;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt64>
struct ReadOnlyCollection_1_t7268;
// System.Predicate`1<System.UInt64>
struct Predicate_1_t7273;
// System.Collections.Generic.IComparer`1<System.UInt64>
struct IComparer_1_t9845;
// System.Comparison`1<System.UInt64>
struct Comparison_1_t7277;
// System.Collections.Generic.List`1/Enumerator<System.UInt64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_67.h"

// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
extern "C" void List_1__ctor_m44489_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1__ctor_m44489(__this, method) (( void (*) (List_1_t7266 *, const MethodInfo*))List_1__ctor_m44489_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m44490_gshared (List_1_t7266 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m44490(__this, ___collection, method) (( void (*) (List_1_t7266 *, Object_t*, const MethodInfo*))List_1__ctor_m44490_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m44491_gshared (List_1_t7266 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m44491(__this, ___capacity, method) (( void (*) (List_1_t7266 *, int32_t, const MethodInfo*))List_1__ctor_m44491_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m44492_gshared (List_1_t7266 * __this, UInt64U5BU5D_t5282* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m44492(__this, ___data, ___size, method) (( void (*) (List_1_t7266 *, UInt64U5BU5D_t5282*, int32_t, const MethodInfo*))List_1__ctor_m44492_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.cctor()
extern "C" void List_1__cctor_m44493_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m44493(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m44493_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44494_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44494(__this, method) (( Object_t* (*) (List_1_t7266 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44494_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m44495_gshared (List_1_t7266 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m44495(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7266 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m44495_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m44496_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m44496(__this, method) (( Object_t * (*) (List_1_t7266 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m44496_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m44497_gshared (List_1_t7266 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m44497(__this, ___item, method) (( int32_t (*) (List_1_t7266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m44497_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m44498_gshared (List_1_t7266 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m44498(__this, ___item, method) (( bool (*) (List_1_t7266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m44498_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m44499_gshared (List_1_t7266 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m44499(__this, ___item, method) (( int32_t (*) (List_1_t7266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m44499_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m44500_gshared (List_1_t7266 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m44500(__this, ___index, ___item, method) (( void (*) (List_1_t7266 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m44500_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m44501_gshared (List_1_t7266 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m44501(__this, ___item, method) (( void (*) (List_1_t7266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m44501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44502_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44502(__this, method) (( bool (*) (List_1_t7266 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m44503_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m44503(__this, method) (( bool (*) (List_1_t7266 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m44503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m44504_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m44504(__this, method) (( Object_t * (*) (List_1_t7266 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m44504_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m44505_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m44505(__this, method) (( bool (*) (List_1_t7266 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m44505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m44506_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m44506(__this, method) (( bool (*) (List_1_t7266 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m44506_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m44507_gshared (List_1_t7266 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m44507(__this, ___index, method) (( Object_t * (*) (List_1_t7266 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m44507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m44508_gshared (List_1_t7266 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m44508(__this, ___index, ___value, method) (( void (*) (List_1_t7266 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m44508_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Add(T)
extern "C" void List_1_Add_m44509_gshared (List_1_t7266 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Add_m44509(__this, ___item, method) (( void (*) (List_1_t7266 *, uint64_t, const MethodInfo*))List_1_Add_m44509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m44510_gshared (List_1_t7266 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m44510(__this, ___newCount, method) (( void (*) (List_1_t7266 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m44510_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m44511_gshared (List_1_t7266 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m44511(__this, ___idx, ___count, method) (( void (*) (List_1_t7266 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m44511_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m44512_gshared (List_1_t7266 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m44512(__this, ___collection, method) (( void (*) (List_1_t7266 *, Object_t*, const MethodInfo*))List_1_AddCollection_m44512_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m44513_gshared (List_1_t7266 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m44513(__this, ___enumerable, method) (( void (*) (List_1_t7266 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m44513_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m44514_gshared (List_1_t7266 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m44514(__this, ___collection, method) (( void (*) (List_1_t7266 *, Object_t*, const MethodInfo*))List_1_AddRange_m44514_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7268 * List_1_AsReadOnly_m44515_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m44515(__this, method) (( ReadOnlyCollection_1_t7268 * (*) (List_1_t7266 *, const MethodInfo*))List_1_AsReadOnly_m44515_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Clear()
extern "C" void List_1_Clear_m44516_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_Clear_m44516(__this, method) (( void (*) (List_1_t7266 *, const MethodInfo*))List_1_Clear_m44516_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Contains(T)
extern "C" bool List_1_Contains_m44517_gshared (List_1_t7266 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Contains_m44517(__this, ___item, method) (( bool (*) (List_1_t7266 *, uint64_t, const MethodInfo*))List_1_Contains_m44517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m44518_gshared (List_1_t7266 * __this, UInt64U5BU5D_t5282* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m44518(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7266 *, UInt64U5BU5D_t5282*, int32_t, const MethodInfo*))List_1_CopyTo_m44518_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt64>::Find(System.Predicate`1<T>)
extern "C" uint64_t List_1_Find_m44519_gshared (List_1_t7266 * __this, Predicate_1_t7273 * ___match, const MethodInfo* method);
#define List_1_Find_m44519(__this, ___match, method) (( uint64_t (*) (List_1_t7266 *, Predicate_1_t7273 *, const MethodInfo*))List_1_Find_m44519_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m44520_gshared (Object_t * __this /* static, unused */, Predicate_1_t7273 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m44520(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7273 *, const MethodInfo*))List_1_CheckMatch_m44520_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m44521_gshared (List_1_t7266 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7273 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m44521(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7266 *, int32_t, int32_t, Predicate_1_t7273 *, const MethodInfo*))List_1_GetIndex_m44521_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt64>::GetEnumerator()
extern "C" Enumerator_t7267  List_1_GetEnumerator_m44522_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m44522(__this, method) (( Enumerator_t7267  (*) (List_1_t7266 *, const MethodInfo*))List_1_GetEnumerator_m44522_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7266 * List_1_GetRange_m44523_gshared (List_1_t7266 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m44523(__this, ___index, ___count, method) (( List_1_t7266 * (*) (List_1_t7266 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m44523_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m44524_gshared (List_1_t7266 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m44524(__this, ___item, method) (( int32_t (*) (List_1_t7266 *, uint64_t, const MethodInfo*))List_1_IndexOf_m44524_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m44525_gshared (List_1_t7266 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m44525(__this, ___start, ___delta, method) (( void (*) (List_1_t7266 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m44525_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m44526_gshared (List_1_t7266 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m44526(__this, ___index, method) (( void (*) (List_1_t7266 *, int32_t, const MethodInfo*))List_1_CheckIndex_m44526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m44527_gshared (List_1_t7266 * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define List_1_Insert_m44527(__this, ___index, ___item, method) (( void (*) (List_1_t7266 *, int32_t, uint64_t, const MethodInfo*))List_1_Insert_m44527_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m44528_gshared (List_1_t7266 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m44528(__this, ___collection, method) (( void (*) (List_1_t7266 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m44528_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m44529_gshared (List_1_t7266 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m44529(__this, ___index, ___collection, method) (( void (*) (List_1_t7266 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m44529_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m44530_gshared (List_1_t7266 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m44530(__this, ___index, ___collection, method) (( void (*) (List_1_t7266 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m44530_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m44531_gshared (List_1_t7266 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m44531(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7266 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m44531_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Remove(T)
extern "C" bool List_1_Remove_m44532_gshared (List_1_t7266 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Remove_m44532(__this, ___item, method) (( bool (*) (List_1_t7266 *, uint64_t, const MethodInfo*))List_1_Remove_m44532_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m44533_gshared (List_1_t7266 * __this, Predicate_1_t7273 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m44533(__this, ___match, method) (( int32_t (*) (List_1_t7266 *, Predicate_1_t7273 *, const MethodInfo*))List_1_RemoveAll_m44533_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m44534_gshared (List_1_t7266 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m44534(__this, ___index, method) (( void (*) (List_1_t7266 *, int32_t, const MethodInfo*))List_1_RemoveAt_m44534_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m44535_gshared (List_1_t7266 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m44535(__this, ___index, ___count, method) (( void (*) (List_1_t7266 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m44535_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Reverse()
extern "C" void List_1_Reverse_m44536_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_Reverse_m44536(__this, method) (( void (*) (List_1_t7266 *, const MethodInfo*))List_1_Reverse_m44536_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort()
extern "C" void List_1_Sort_m44537_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_Sort_m44537(__this, method) (( void (*) (List_1_t7266 *, const MethodInfo*))List_1_Sort_m44537_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m44538_gshared (List_1_t7266 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m44538(__this, ___comparer, method) (( void (*) (List_1_t7266 *, Object_t*, const MethodInfo*))List_1_Sort_m44538_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m44539_gshared (List_1_t7266 * __this, Comparison_1_t7277 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m44539(__this, ___comparison, method) (( void (*) (List_1_t7266 *, Comparison_1_t7277 *, const MethodInfo*))List_1_Sort_m44539_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt64>::ToArray()
extern "C" UInt64U5BU5D_t5282* List_1_ToArray_m44540_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_ToArray_m44540(__this, method) (( UInt64U5BU5D_t5282* (*) (List_1_t7266 *, const MethodInfo*))List_1_ToArray_m44540_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::TrimExcess()
extern "C" void List_1_TrimExcess_m44541_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m44541(__this, method) (( void (*) (List_1_t7266 *, const MethodInfo*))List_1_TrimExcess_m44541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m44542_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m44542(__this, method) (( int32_t (*) (List_1_t7266 *, const MethodInfo*))List_1_get_Capacity_m44542_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m44543_gshared (List_1_t7266 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m44543(__this, ___value, method) (( void (*) (List_1_t7266 *, int32_t, const MethodInfo*))List_1_set_Capacity_m44543_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Count()
extern "C" int32_t List_1_get_Count_m44544_gshared (List_1_t7266 * __this, const MethodInfo* method);
#define List_1_get_Count_m44544(__this, method) (( int32_t (*) (List_1_t7266 *, const MethodInfo*))List_1_get_Count_m44544_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt64>::get_Item(System.Int32)
extern "C" uint64_t List_1_get_Item_m44545_gshared (List_1_t7266 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m44545(__this, ___index, method) (( uint64_t (*) (List_1_t7266 *, int32_t, const MethodInfo*))List_1_get_Item_m44545_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m44546_gshared (List_1_t7266 * __this, int32_t ___index, uint64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m44546(__this, ___index, ___value, method) (( void (*) (List_1_t7266 *, int32_t, uint64_t, const MethodInfo*))List_1_set_Item_m44546_gshared)(__this, ___index, ___value, method)

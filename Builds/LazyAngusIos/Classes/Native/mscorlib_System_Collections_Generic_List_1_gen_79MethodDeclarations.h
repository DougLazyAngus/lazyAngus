#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t6607;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t6345;
// System.UInt32[]
struct UInt32U5BU5D_t3218;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6346;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9212;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t6609;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t6614;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t9213;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t6618;
// System.Collections.Generic.List`1/Enumerator<System.UInt32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_62.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m38729_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1__ctor_m38729(__this, method) (( void (*) (List_1_t6607 *, const MethodInfo*))List_1__ctor_m38729_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m38730_gshared (List_1_t6607 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m38730(__this, ___collection, method) (( void (*) (List_1_t6607 *, Object_t*, const MethodInfo*))List_1__ctor_m38730_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m38731_gshared (List_1_t6607 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m38731(__this, ___capacity, method) (( void (*) (List_1_t6607 *, int32_t, const MethodInfo*))List_1__ctor_m38731_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m38732_gshared (List_1_t6607 * __this, UInt32U5BU5D_t3218* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m38732(__this, ___data, ___size, method) (( void (*) (List_1_t6607 *, UInt32U5BU5D_t3218*, int32_t, const MethodInfo*))List_1__ctor_m38732_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m38733_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m38733(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m38733_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38734_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38734(__this, method) (( Object_t* (*) (List_1_t6607 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38734_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m38735_gshared (List_1_t6607 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m38735(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6607 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m38735_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m38736_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m38736(__this, method) (( Object_t * (*) (List_1_t6607 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m38736_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m38737_gshared (List_1_t6607 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m38737(__this, ___item, method) (( int32_t (*) (List_1_t6607 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m38737_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m38738_gshared (List_1_t6607 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m38738(__this, ___item, method) (( bool (*) (List_1_t6607 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m38738_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m38739_gshared (List_1_t6607 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m38739(__this, ___item, method) (( int32_t (*) (List_1_t6607 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m38739_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m38740_gshared (List_1_t6607 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m38740(__this, ___index, ___item, method) (( void (*) (List_1_t6607 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m38740_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m38741_gshared (List_1_t6607 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m38741(__this, ___item, method) (( void (*) (List_1_t6607 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m38741_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38742_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38742(__this, method) (( bool (*) (List_1_t6607 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38742_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m38743_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m38743(__this, method) (( bool (*) (List_1_t6607 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m38743_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m38744_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m38744(__this, method) (( Object_t * (*) (List_1_t6607 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m38744_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m38745_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m38745(__this, method) (( bool (*) (List_1_t6607 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m38745_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m38746_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m38746(__this, method) (( bool (*) (List_1_t6607 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m38746_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m38747_gshared (List_1_t6607 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m38747(__this, ___index, method) (( Object_t * (*) (List_1_t6607 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m38747_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m38748_gshared (List_1_t6607 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m38748(__this, ___index, ___value, method) (( void (*) (List_1_t6607 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m38748_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m38749_gshared (List_1_t6607 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m38749(__this, ___item, method) (( void (*) (List_1_t6607 *, uint32_t, const MethodInfo*))List_1_Add_m38749_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m38750_gshared (List_1_t6607 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m38750(__this, ___newCount, method) (( void (*) (List_1_t6607 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m38750_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m38751_gshared (List_1_t6607 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m38751(__this, ___idx, ___count, method) (( void (*) (List_1_t6607 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m38751_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m38752_gshared (List_1_t6607 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m38752(__this, ___collection, method) (( void (*) (List_1_t6607 *, Object_t*, const MethodInfo*))List_1_AddCollection_m38752_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m38753_gshared (List_1_t6607 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m38753(__this, ___enumerable, method) (( void (*) (List_1_t6607 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m38753_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m38754_gshared (List_1_t6607 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m38754(__this, ___collection, method) (( void (*) (List_1_t6607 *, Object_t*, const MethodInfo*))List_1_AddRange_m38754_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6609 * List_1_AsReadOnly_m38755_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m38755(__this, method) (( ReadOnlyCollection_1_t6609 * (*) (List_1_t6607 *, const MethodInfo*))List_1_AsReadOnly_m38755_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m38756_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_Clear_m38756(__this, method) (( void (*) (List_1_t6607 *, const MethodInfo*))List_1_Clear_m38756_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m38757_gshared (List_1_t6607 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m38757(__this, ___item, method) (( bool (*) (List_1_t6607 *, uint32_t, const MethodInfo*))List_1_Contains_m38757_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m38758_gshared (List_1_t6607 * __this, UInt32U5BU5D_t3218* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m38758(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6607 *, UInt32U5BU5D_t3218*, int32_t, const MethodInfo*))List_1_CopyTo_m38758_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m38759_gshared (List_1_t6607 * __this, Predicate_1_t6614 * ___match, const MethodInfo* method);
#define List_1_Find_m38759(__this, ___match, method) (( uint32_t (*) (List_1_t6607 *, Predicate_1_t6614 *, const MethodInfo*))List_1_Find_m38759_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m38760_gshared (Object_t * __this /* static, unused */, Predicate_1_t6614 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m38760(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6614 *, const MethodInfo*))List_1_CheckMatch_m38760_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m38761_gshared (List_1_t6607 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6614 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m38761(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6607 *, int32_t, int32_t, Predicate_1_t6614 *, const MethodInfo*))List_1_GetIndex_m38761_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t6608  List_1_GetEnumerator_m38762_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m38762(__this, method) (( Enumerator_t6608  (*) (List_1_t6607 *, const MethodInfo*))List_1_GetEnumerator_m38762_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6607 * List_1_GetRange_m38763_gshared (List_1_t6607 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m38763(__this, ___index, ___count, method) (( List_1_t6607 * (*) (List_1_t6607 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m38763_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m38764_gshared (List_1_t6607 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m38764(__this, ___item, method) (( int32_t (*) (List_1_t6607 *, uint32_t, const MethodInfo*))List_1_IndexOf_m38764_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m38765_gshared (List_1_t6607 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m38765(__this, ___start, ___delta, method) (( void (*) (List_1_t6607 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m38765_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m38766_gshared (List_1_t6607 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m38766(__this, ___index, method) (( void (*) (List_1_t6607 *, int32_t, const MethodInfo*))List_1_CheckIndex_m38766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m38767_gshared (List_1_t6607 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m38767(__this, ___index, ___item, method) (( void (*) (List_1_t6607 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m38767_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m38768_gshared (List_1_t6607 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m38768(__this, ___collection, method) (( void (*) (List_1_t6607 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m38768_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m38769_gshared (List_1_t6607 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m38769(__this, ___index, ___collection, method) (( void (*) (List_1_t6607 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m38769_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m38770_gshared (List_1_t6607 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m38770(__this, ___index, ___collection, method) (( void (*) (List_1_t6607 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m38770_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m38771_gshared (List_1_t6607 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m38771(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6607 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m38771_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m38772_gshared (List_1_t6607 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m38772(__this, ___item, method) (( bool (*) (List_1_t6607 *, uint32_t, const MethodInfo*))List_1_Remove_m38772_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m38773_gshared (List_1_t6607 * __this, Predicate_1_t6614 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m38773(__this, ___match, method) (( int32_t (*) (List_1_t6607 *, Predicate_1_t6614 *, const MethodInfo*))List_1_RemoveAll_m38773_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m38774_gshared (List_1_t6607 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m38774(__this, ___index, method) (( void (*) (List_1_t6607 *, int32_t, const MethodInfo*))List_1_RemoveAt_m38774_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m38775_gshared (List_1_t6607 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m38775(__this, ___index, ___count, method) (( void (*) (List_1_t6607 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m38775_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m38776_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_Reverse_m38776(__this, method) (( void (*) (List_1_t6607 *, const MethodInfo*))List_1_Reverse_m38776_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m38777_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_Sort_m38777(__this, method) (( void (*) (List_1_t6607 *, const MethodInfo*))List_1_Sort_m38777_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m38778_gshared (List_1_t6607 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m38778(__this, ___comparer, method) (( void (*) (List_1_t6607 *, Object_t*, const MethodInfo*))List_1_Sort_m38778_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m38779_gshared (List_1_t6607 * __this, Comparison_1_t6618 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m38779(__this, ___comparison, method) (( void (*) (List_1_t6607 *, Comparison_1_t6618 *, const MethodInfo*))List_1_Sort_m38779_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t3218* List_1_ToArray_m38780_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_ToArray_m38780(__this, method) (( UInt32U5BU5D_t3218* (*) (List_1_t6607 *, const MethodInfo*))List_1_ToArray_m38780_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m38781_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m38781(__this, method) (( void (*) (List_1_t6607 *, const MethodInfo*))List_1_TrimExcess_m38781_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m38782_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m38782(__this, method) (( int32_t (*) (List_1_t6607 *, const MethodInfo*))List_1_get_Capacity_m38782_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m38783_gshared (List_1_t6607 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m38783(__this, ___value, method) (( void (*) (List_1_t6607 *, int32_t, const MethodInfo*))List_1_set_Capacity_m38783_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m38784_gshared (List_1_t6607 * __this, const MethodInfo* method);
#define List_1_get_Count_m38784(__this, method) (( int32_t (*) (List_1_t6607 *, const MethodInfo*))List_1_get_Count_m38784_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m38785_gshared (List_1_t6607 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m38785(__this, ___index, method) (( uint32_t (*) (List_1_t6607 *, int32_t, const MethodInfo*))List_1_get_Item_m38785_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m38786_gshared (List_1_t6607 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m38786(__this, ___index, ___value, method) (( void (*) (List_1_t6607 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m38786_gshared)(__this, ___index, ___value, method)

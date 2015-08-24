#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t6526;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t6337;
// System.UInt16[]
struct UInt16U5BU5D_t4061;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t6338;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9210;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t6528;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t6533;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t9211;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t6537;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m37725_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1__ctor_m37725(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1__ctor_m37725_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37726_gshared (List_1_t6526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37726(__this, ___collection, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1__ctor_m37726_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m37727_gshared (List_1_t6526 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m37727(__this, ___capacity, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1__ctor_m37727_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37728_gshared (List_1_t6526 * __this, UInt16U5BU5D_t4061* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37728(__this, ___data, ___size, method) (( void (*) (List_1_t6526 *, UInt16U5BU5D_t4061*, int32_t, const MethodInfo*))List_1__ctor_m37728_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m37729_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37729(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37729_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37730_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37730(__this, method) (( Object_t* (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37730_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37731_gshared (List_1_t6526 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37731(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6526 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37731_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37732_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37732(__this, method) (( Object_t * (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37732_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37733_gshared (List_1_t6526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37733(__this, ___item, method) (( int32_t (*) (List_1_t6526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37733_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37734_gshared (List_1_t6526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37734(__this, ___item, method) (( bool (*) (List_1_t6526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37734_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37735_gshared (List_1_t6526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37735(__this, ___item, method) (( int32_t (*) (List_1_t6526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37735_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37736_gshared (List_1_t6526 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37736(__this, ___index, ___item, method) (( void (*) (List_1_t6526 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37736_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37737_gshared (List_1_t6526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37737(__this, ___item, method) (( void (*) (List_1_t6526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37737_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37738_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37738(__this, method) (( bool (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37738_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37739_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37739(__this, method) (( bool (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37739_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37740_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37740(__this, method) (( Object_t * (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37740_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37741_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37741(__this, method) (( bool (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37741_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37742_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37742(__this, method) (( bool (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37742_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37743_gshared (List_1_t6526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37743(__this, ___index, method) (( Object_t * (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37743_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37744_gshared (List_1_t6526 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37744(__this, ___index, ___value, method) (( void (*) (List_1_t6526 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37744_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m37745_gshared (List_1_t6526 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m37745(__this, ___item, method) (( void (*) (List_1_t6526 *, uint16_t, const MethodInfo*))List_1_Add_m37745_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37746_gshared (List_1_t6526 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37746(__this, ___newCount, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37746_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37747_gshared (List_1_t6526 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37747(__this, ___idx, ___count, method) (( void (*) (List_1_t6526 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37747_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37748_gshared (List_1_t6526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37748(__this, ___collection, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37748_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37749_gshared (List_1_t6526 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37749(__this, ___enumerable, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37749_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37750_gshared (List_1_t6526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37750(__this, ___collection, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_AddRange_m37750_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6528 * List_1_AsReadOnly_m37751_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37751(__this, method) (( ReadOnlyCollection_1_t6528 * (*) (List_1_t6526 *, const MethodInfo*))List_1_AsReadOnly_m37751_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m37752_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_Clear_m37752(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1_Clear_m37752_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m37753_gshared (List_1_t6526 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m37753(__this, ___item, method) (( bool (*) (List_1_t6526 *, uint16_t, const MethodInfo*))List_1_Contains_m37753_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37754_gshared (List_1_t6526 * __this, UInt16U5BU5D_t4061* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37754(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6526 *, UInt16U5BU5D_t4061*, int32_t, const MethodInfo*))List_1_CopyTo_m37754_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m37755_gshared (List_1_t6526 * __this, Predicate_1_t6533 * ___match, const MethodInfo* method);
#define List_1_Find_m37755(__this, ___match, method) (( uint16_t (*) (List_1_t6526 *, Predicate_1_t6533 *, const MethodInfo*))List_1_Find_m37755_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37756_gshared (Object_t * __this /* static, unused */, Predicate_1_t6533 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37756(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6533 *, const MethodInfo*))List_1_CheckMatch_m37756_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37757_gshared (List_1_t6526 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6533 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37757(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6526 *, int32_t, int32_t, Predicate_1_t6533 *, const MethodInfo*))List_1_GetIndex_m37757_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t6527  List_1_GetEnumerator_m37758_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37758(__this, method) (( Enumerator_t6527  (*) (List_1_t6526 *, const MethodInfo*))List_1_GetEnumerator_m37758_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6526 * List_1_GetRange_m37759_gshared (List_1_t6526 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37759(__this, ___index, ___count, method) (( List_1_t6526 * (*) (List_1_t6526 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37759_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37760_gshared (List_1_t6526 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m37760(__this, ___item, method) (( int32_t (*) (List_1_t6526 *, uint16_t, const MethodInfo*))List_1_IndexOf_m37760_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37761_gshared (List_1_t6526 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37761(__this, ___start, ___delta, method) (( void (*) (List_1_t6526 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37761_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37762_gshared (List_1_t6526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37762(__this, ___index, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37762_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37763_gshared (List_1_t6526 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m37763(__this, ___index, ___item, method) (( void (*) (List_1_t6526 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m37763_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37764_gshared (List_1_t6526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37764(__this, ___collection, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37764_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37765_gshared (List_1_t6526 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37765(__this, ___index, ___collection, method) (( void (*) (List_1_t6526 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37765_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37766_gshared (List_1_t6526 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37766(__this, ___index, ___collection, method) (( void (*) (List_1_t6526 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37766_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37767_gshared (List_1_t6526 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37767(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6526 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37767_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m37768_gshared (List_1_t6526 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m37768(__this, ___item, method) (( bool (*) (List_1_t6526 *, uint16_t, const MethodInfo*))List_1_Remove_m37768_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37769_gshared (List_1_t6526 * __this, Predicate_1_t6533 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37769(__this, ___match, method) (( int32_t (*) (List_1_t6526 *, Predicate_1_t6533 *, const MethodInfo*))List_1_RemoveAll_m37769_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37770_gshared (List_1_t6526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37770(__this, ___index, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37770_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37771_gshared (List_1_t6526 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37771(__this, ___index, ___count, method) (( void (*) (List_1_t6526 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37771_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m37772_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_Reverse_m37772(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1_Reverse_m37772_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m37773_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_Sort_m37773(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1_Sort_m37773_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37774_gshared (List_1_t6526 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37774(__this, ___comparer, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_Sort_m37774_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37775_gshared (List_1_t6526 * __this, Comparison_1_t6537 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37775(__this, ___comparison, method) (( void (*) (List_1_t6526 *, Comparison_1_t6537 *, const MethodInfo*))List_1_Sort_m37775_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t4061* List_1_ToArray_m37776_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_ToArray_m37776(__this, method) (( UInt16U5BU5D_t4061* (*) (List_1_t6526 *, const MethodInfo*))List_1_ToArray_m37776_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m37777_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37777(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1_TrimExcess_m37777_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m37778_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m37778(__this, method) (( int32_t (*) (List_1_t6526 *, const MethodInfo*))List_1_get_Capacity_m37778_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m37779_gshared (List_1_t6526 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m37779(__this, ___value, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_set_Capacity_m37779_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m37780_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_get_Count_m37780(__this, method) (( int32_t (*) (List_1_t6526 *, const MethodInfo*))List_1_get_Count_m37780_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m37781_gshared (List_1_t6526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37781(__this, ___index, method) (( uint16_t (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_get_Item_m37781_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37782_gshared (List_1_t6526 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m37782(__this, ___index, ___value, method) (( void (*) (List_1_t6526 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m37782_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t6604;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t6342;
// System.UInt32[]
struct UInt32U5BU5D_t3215;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6343;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9209;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t6606;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t6611;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t9210;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t6615;
// System.Collections.Generic.List`1/Enumerator<System.UInt32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_62.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m38696_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1__ctor_m38696(__this, method) (( void (*) (List_1_t6604 *, const MethodInfo*))List_1__ctor_m38696_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m38697_gshared (List_1_t6604 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m38697(__this, ___collection, method) (( void (*) (List_1_t6604 *, Object_t*, const MethodInfo*))List_1__ctor_m38697_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m38698_gshared (List_1_t6604 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m38698(__this, ___capacity, method) (( void (*) (List_1_t6604 *, int32_t, const MethodInfo*))List_1__ctor_m38698_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m38699_gshared (List_1_t6604 * __this, UInt32U5BU5D_t3215* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m38699(__this, ___data, ___size, method) (( void (*) (List_1_t6604 *, UInt32U5BU5D_t3215*, int32_t, const MethodInfo*))List_1__ctor_m38699_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m38700_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m38700(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m38700_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38701_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38701(__this, method) (( Object_t* (*) (List_1_t6604 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m38702_gshared (List_1_t6604 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m38702(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6604 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m38702_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m38703_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m38703(__this, method) (( Object_t * (*) (List_1_t6604 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m38703_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m38704_gshared (List_1_t6604 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m38704(__this, ___item, method) (( int32_t (*) (List_1_t6604 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m38704_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m38705_gshared (List_1_t6604 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m38705(__this, ___item, method) (( bool (*) (List_1_t6604 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m38705_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m38706_gshared (List_1_t6604 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m38706(__this, ___item, method) (( int32_t (*) (List_1_t6604 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m38706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m38707_gshared (List_1_t6604 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m38707(__this, ___index, ___item, method) (( void (*) (List_1_t6604 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m38707_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m38708_gshared (List_1_t6604 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m38708(__this, ___item, method) (( void (*) (List_1_t6604 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m38708_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38709_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38709(__this, method) (( bool (*) (List_1_t6604 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38709_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m38710_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m38710(__this, method) (( bool (*) (List_1_t6604 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m38710_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m38711_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m38711(__this, method) (( Object_t * (*) (List_1_t6604 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m38711_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m38712_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m38712(__this, method) (( bool (*) (List_1_t6604 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m38712_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m38713_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m38713(__this, method) (( bool (*) (List_1_t6604 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m38713_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m38714_gshared (List_1_t6604 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m38714(__this, ___index, method) (( Object_t * (*) (List_1_t6604 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m38714_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m38715_gshared (List_1_t6604 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m38715(__this, ___index, ___value, method) (( void (*) (List_1_t6604 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m38715_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m38716_gshared (List_1_t6604 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m38716(__this, ___item, method) (( void (*) (List_1_t6604 *, uint32_t, const MethodInfo*))List_1_Add_m38716_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m38717_gshared (List_1_t6604 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m38717(__this, ___newCount, method) (( void (*) (List_1_t6604 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m38717_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m38718_gshared (List_1_t6604 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m38718(__this, ___idx, ___count, method) (( void (*) (List_1_t6604 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m38718_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m38719_gshared (List_1_t6604 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m38719(__this, ___collection, method) (( void (*) (List_1_t6604 *, Object_t*, const MethodInfo*))List_1_AddCollection_m38719_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m38720_gshared (List_1_t6604 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m38720(__this, ___enumerable, method) (( void (*) (List_1_t6604 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m38720_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m38721_gshared (List_1_t6604 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m38721(__this, ___collection, method) (( void (*) (List_1_t6604 *, Object_t*, const MethodInfo*))List_1_AddRange_m38721_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6606 * List_1_AsReadOnly_m38722_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m38722(__this, method) (( ReadOnlyCollection_1_t6606 * (*) (List_1_t6604 *, const MethodInfo*))List_1_AsReadOnly_m38722_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m38723_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_Clear_m38723(__this, method) (( void (*) (List_1_t6604 *, const MethodInfo*))List_1_Clear_m38723_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m38724_gshared (List_1_t6604 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m38724(__this, ___item, method) (( bool (*) (List_1_t6604 *, uint32_t, const MethodInfo*))List_1_Contains_m38724_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m38725_gshared (List_1_t6604 * __this, UInt32U5BU5D_t3215* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m38725(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6604 *, UInt32U5BU5D_t3215*, int32_t, const MethodInfo*))List_1_CopyTo_m38725_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m38726_gshared (List_1_t6604 * __this, Predicate_1_t6611 * ___match, const MethodInfo* method);
#define List_1_Find_m38726(__this, ___match, method) (( uint32_t (*) (List_1_t6604 *, Predicate_1_t6611 *, const MethodInfo*))List_1_Find_m38726_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m38727_gshared (Object_t * __this /* static, unused */, Predicate_1_t6611 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m38727(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6611 *, const MethodInfo*))List_1_CheckMatch_m38727_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m38728_gshared (List_1_t6604 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6611 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m38728(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6604 *, int32_t, int32_t, Predicate_1_t6611 *, const MethodInfo*))List_1_GetIndex_m38728_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t6605  List_1_GetEnumerator_m38729_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m38729(__this, method) (( Enumerator_t6605  (*) (List_1_t6604 *, const MethodInfo*))List_1_GetEnumerator_m38729_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6604 * List_1_GetRange_m38730_gshared (List_1_t6604 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m38730(__this, ___index, ___count, method) (( List_1_t6604 * (*) (List_1_t6604 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m38730_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m38731_gshared (List_1_t6604 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m38731(__this, ___item, method) (( int32_t (*) (List_1_t6604 *, uint32_t, const MethodInfo*))List_1_IndexOf_m38731_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m38732_gshared (List_1_t6604 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m38732(__this, ___start, ___delta, method) (( void (*) (List_1_t6604 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m38732_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m38733_gshared (List_1_t6604 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m38733(__this, ___index, method) (( void (*) (List_1_t6604 *, int32_t, const MethodInfo*))List_1_CheckIndex_m38733_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m38734_gshared (List_1_t6604 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m38734(__this, ___index, ___item, method) (( void (*) (List_1_t6604 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m38734_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m38735_gshared (List_1_t6604 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m38735(__this, ___collection, method) (( void (*) (List_1_t6604 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m38735_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m38736_gshared (List_1_t6604 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m38736(__this, ___index, ___collection, method) (( void (*) (List_1_t6604 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m38736_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m38737_gshared (List_1_t6604 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m38737(__this, ___index, ___collection, method) (( void (*) (List_1_t6604 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m38737_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m38738_gshared (List_1_t6604 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m38738(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6604 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m38738_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m38739_gshared (List_1_t6604 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m38739(__this, ___item, method) (( bool (*) (List_1_t6604 *, uint32_t, const MethodInfo*))List_1_Remove_m38739_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m38740_gshared (List_1_t6604 * __this, Predicate_1_t6611 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m38740(__this, ___match, method) (( int32_t (*) (List_1_t6604 *, Predicate_1_t6611 *, const MethodInfo*))List_1_RemoveAll_m38740_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m38741_gshared (List_1_t6604 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m38741(__this, ___index, method) (( void (*) (List_1_t6604 *, int32_t, const MethodInfo*))List_1_RemoveAt_m38741_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m38742_gshared (List_1_t6604 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m38742(__this, ___index, ___count, method) (( void (*) (List_1_t6604 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m38742_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m38743_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_Reverse_m38743(__this, method) (( void (*) (List_1_t6604 *, const MethodInfo*))List_1_Reverse_m38743_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m38744_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_Sort_m38744(__this, method) (( void (*) (List_1_t6604 *, const MethodInfo*))List_1_Sort_m38744_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m38745_gshared (List_1_t6604 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m38745(__this, ___comparer, method) (( void (*) (List_1_t6604 *, Object_t*, const MethodInfo*))List_1_Sort_m38745_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m38746_gshared (List_1_t6604 * __this, Comparison_1_t6615 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m38746(__this, ___comparison, method) (( void (*) (List_1_t6604 *, Comparison_1_t6615 *, const MethodInfo*))List_1_Sort_m38746_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t3215* List_1_ToArray_m38747_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_ToArray_m38747(__this, method) (( UInt32U5BU5D_t3215* (*) (List_1_t6604 *, const MethodInfo*))List_1_ToArray_m38747_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m38748_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m38748(__this, method) (( void (*) (List_1_t6604 *, const MethodInfo*))List_1_TrimExcess_m38748_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m38749_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m38749(__this, method) (( int32_t (*) (List_1_t6604 *, const MethodInfo*))List_1_get_Capacity_m38749_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m38750_gshared (List_1_t6604 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m38750(__this, ___value, method) (( void (*) (List_1_t6604 *, int32_t, const MethodInfo*))List_1_set_Capacity_m38750_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m38751_gshared (List_1_t6604 * __this, const MethodInfo* method);
#define List_1_get_Count_m38751(__this, method) (( int32_t (*) (List_1_t6604 *, const MethodInfo*))List_1_get_Count_m38751_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m38752_gshared (List_1_t6604 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m38752(__this, ___index, method) (( uint32_t (*) (List_1_t6604 *, int32_t, const MethodInfo*))List_1_get_Item_m38752_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m38753_gshared (List_1_t6604 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m38753(__this, ___index, ___value, method) (( void (*) (List_1_t6604 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m38753_gshared)(__this, ___index, ___value, method)

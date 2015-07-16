#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t4074;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3362;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4560;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t4077;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3960;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t4079;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t4607;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t4082;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m27735_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1__ctor_m27735(__this, method) (( void (*) (List_1_t4074 *, const MethodInfo*))List_1__ctor_m27735_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27737_gshared (List_1_t4074 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m27737(__this, ___collection, method) (( void (*) (List_1_t4074 *, Object_t*, const MethodInfo*))List_1__ctor_m27737_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m27739_gshared (List_1_t4074 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m27739(__this, ___capacity, method) (( void (*) (List_1_t4074 *, int32_t, const MethodInfo*))List_1__ctor_m27739_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m27741_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m27741(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m27741_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27742_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27742(__this, method) (( Object_t* (*) (List_1_t4074 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27742_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27743_gshared (List_1_t4074 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m27743(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4074 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m27743_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m27744_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27744(__this, method) (( Object_t * (*) (List_1_t4074 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m27744_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m27745_gshared (List_1_t4074 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m27745(__this, ___item, method) (( int32_t (*) (List_1_t4074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m27745_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m27746_gshared (List_1_t4074 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m27746(__this, ___item, method) (( bool (*) (List_1_t4074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m27746_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m27747_gshared (List_1_t4074 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m27747(__this, ___item, method) (( int32_t (*) (List_1_t4074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m27747_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m27748_gshared (List_1_t4074 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m27748(__this, ___index, ___item, method) (( void (*) (List_1_t4074 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m27748_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m27749_gshared (List_1_t4074 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m27749(__this, ___item, method) (( void (*) (List_1_t4074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m27749_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27750_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27750(__this, method) (( bool (*) (List_1_t4074 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27750_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m27751_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27751(__this, method) (( bool (*) (List_1_t4074 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m27751_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m27752_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m27752(__this, method) (( Object_t * (*) (List_1_t4074 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m27752_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m27753_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m27753(__this, method) (( bool (*) (List_1_t4074 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m27753_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m27754_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m27754(__this, method) (( bool (*) (List_1_t4074 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m27754_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m27755_gshared (List_1_t4074 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m27755(__this, ___index, method) (( Object_t * (*) (List_1_t4074 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m27755_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m27756_gshared (List_1_t4074 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m27756(__this, ___index, ___value, method) (( void (*) (List_1_t4074 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m27756_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m27757_gshared (List_1_t4074 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Add_m27757(__this, ___item, method) (( void (*) (List_1_t4074 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Add_m27757_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m27759_gshared (List_1_t4074 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m27759(__this, ___newCount, method) (( void (*) (List_1_t4074 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m27759_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m27761_gshared (List_1_t4074 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m27761(__this, ___collection, method) (( void (*) (List_1_t4074 *, Object_t*, const MethodInfo*))List_1_AddCollection_m27761_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m27763_gshared (List_1_t4074 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m27763(__this, ___enumerable, method) (( void (*) (List_1_t4074 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m27763_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m27765_gshared (List_1_t4074 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m27765(__this, ___collection, method) (( void (*) (List_1_t4074 *, Object_t*, const MethodInfo*))List_1_AddRange_m27765_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t4077 * List_1_AsReadOnly_m27767_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m27767(__this, method) (( ReadOnlyCollection_1_t4077 * (*) (List_1_t4074 *, const MethodInfo*))List_1_AsReadOnly_m27767_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m27768_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_Clear_m27768(__this, method) (( void (*) (List_1_t4074 *, const MethodInfo*))List_1_Clear_m27768_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m27769_gshared (List_1_t4074 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Contains_m27769(__this, ___item, method) (( bool (*) (List_1_t4074 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Contains_m27769_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m27770_gshared (List_1_t4074 * __this, KeyValuePair_2U5BU5D_t3960* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m27770(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4074 *, KeyValuePair_2U5BU5D_t3960*, int32_t, const MethodInfo*))List_1_CopyTo_m27770_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t40  List_1_Find_m27772_gshared (List_1_t4074 * __this, Predicate_1_t4079 * ___match, const MethodInfo* method);
#define List_1_Find_m27772(__this, ___match, method) (( KeyValuePair_2_t40  (*) (List_1_t4074 *, Predicate_1_t4079 *, const MethodInfo*))List_1_Find_m27772_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m27774_gshared (Object_t * __this /* static, unused */, Predicate_1_t4079 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m27774(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4079 *, const MethodInfo*))List_1_CheckMatch_m27774_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m27776_gshared (List_1_t4074 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4079 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m27776(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4074 *, int32_t, int32_t, Predicate_1_t4079 *, const MethodInfo*))List_1_GetIndex_m27776_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t4075  List_1_GetEnumerator_m27777_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m27777(__this, method) (( Enumerator_t4075  (*) (List_1_t4074 *, const MethodInfo*))List_1_GetEnumerator_m27777_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m27778_gshared (List_1_t4074 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_IndexOf_m27778(__this, ___item, method) (( int32_t (*) (List_1_t4074 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_IndexOf_m27778_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m27780_gshared (List_1_t4074 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m27780(__this, ___start, ___delta, method) (( void (*) (List_1_t4074 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m27780_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m27782_gshared (List_1_t4074 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m27782(__this, ___index, method) (( void (*) (List_1_t4074 *, int32_t, const MethodInfo*))List_1_CheckIndex_m27782_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m27783_gshared (List_1_t4074 * __this, int32_t ___index, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Insert_m27783(__this, ___index, ___item, method) (( void (*) (List_1_t4074 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_Insert_m27783_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m27785_gshared (List_1_t4074 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m27785(__this, ___collection, method) (( void (*) (List_1_t4074 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m27785_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m27786_gshared (List_1_t4074 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Remove_m27786(__this, ___item, method) (( bool (*) (List_1_t4074 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Remove_m27786_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m27788_gshared (List_1_t4074 * __this, Predicate_1_t4079 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m27788(__this, ___match, method) (( int32_t (*) (List_1_t4074 *, Predicate_1_t4079 *, const MethodInfo*))List_1_RemoveAll_m27788_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m27789_gshared (List_1_t4074 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m27789(__this, ___index, method) (( void (*) (List_1_t4074 *, int32_t, const MethodInfo*))List_1_RemoveAt_m27789_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m27791_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_Reverse_m27791(__this, method) (( void (*) (List_1_t4074 *, const MethodInfo*))List_1_Reverse_m27791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m27793_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_Sort_m27793(__this, method) (( void (*) (List_1_t4074 *, const MethodInfo*))List_1_Sort_m27793_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m27795_gshared (List_1_t4074 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m27795(__this, ___comparer, method) (( void (*) (List_1_t4074 *, Object_t*, const MethodInfo*))List_1_Sort_m27795_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m27797_gshared (List_1_t4074 * __this, Comparison_1_t4082 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m27797(__this, ___comparison, method) (( void (*) (List_1_t4074 *, Comparison_1_t4082 *, const MethodInfo*))List_1_Sort_m27797_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t3960* List_1_ToArray_m27799_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_ToArray_m27799(__this, method) (( KeyValuePair_2U5BU5D_t3960* (*) (List_1_t4074 *, const MethodInfo*))List_1_ToArray_m27799_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m27801_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m27801(__this, method) (( void (*) (List_1_t4074 *, const MethodInfo*))List_1_TrimExcess_m27801_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m27803_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m27803(__this, method) (( int32_t (*) (List_1_t4074 *, const MethodInfo*))List_1_get_Capacity_m27803_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m27805_gshared (List_1_t4074 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m27805(__this, ___value, method) (( void (*) (List_1_t4074 *, int32_t, const MethodInfo*))List_1_set_Capacity_m27805_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m27806_gshared (List_1_t4074 * __this, const MethodInfo* method);
#define List_1_get_Count_m27806(__this, method) (( int32_t (*) (List_1_t4074 *, const MethodInfo*))List_1_get_Count_m27806_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t40  List_1_get_Item_m27807_gshared (List_1_t4074 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m27807(__this, ___index, method) (( KeyValuePair_2_t40  (*) (List_1_t4074 *, int32_t, const MethodInfo*))List_1_get_Item_m27807_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m27808_gshared (List_1_t4074 * __this, int32_t ___index, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define List_1_set_Item_m27808(__this, ___index, ___value, method) (( void (*) (List_1_t4074 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_set_Item_m27808_gshared)(__this, ___index, ___value, method)

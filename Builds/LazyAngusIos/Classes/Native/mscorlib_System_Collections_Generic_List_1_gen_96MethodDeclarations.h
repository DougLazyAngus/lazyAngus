#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct List_1_t7499;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerable_1_t7225;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7498;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t7226;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ICollection_1_t9379;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ReadOnlyCollection_1_t7502;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Predicate_1_t7506;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IComparer_1_t9380;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Comparison_1_t7509;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_79.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void List_1__ctor_m49694_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1__ctor_m49694(__this, method) (( void (*) (List_1_t7499 *, const MethodInfo*))List_1__ctor_m49694_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m49695_gshared (List_1_t7499 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m49695(__this, ___collection, method) (( void (*) (List_1_t7499 *, Object_t*, const MethodInfo*))List_1__ctor_m49695_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m49696_gshared (List_1_t7499 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m49696(__this, ___capacity, method) (( void (*) (List_1_t7499 *, int32_t, const MethodInfo*))List_1__ctor_m49696_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m49697_gshared (List_1_t7499 * __this, KeyValuePair_2U5BU5D_t7498* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m49697(__this, ___data, ___size, method) (( void (*) (List_1_t7499 *, KeyValuePair_2U5BU5D_t7498*, int32_t, const MethodInfo*))List_1__ctor_m49697_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.cctor()
extern "C" void List_1__cctor_m49698_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m49698(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49698_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49699_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49699(__this, method) (( Object_t* (*) (List_1_t7499 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m49700_gshared (List_1_t7499 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m49700(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7499 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49700_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m49701_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49701(__this, method) (( Object_t * (*) (List_1_t7499 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49701_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m49702_gshared (List_1_t7499 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m49702(__this, ___item, method) (( int32_t (*) (List_1_t7499 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49702_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m49703_gshared (List_1_t7499 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m49703(__this, ___item, method) (( bool (*) (List_1_t7499 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49703_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m49704_gshared (List_1_t7499 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m49704(__this, ___item, method) (( int32_t (*) (List_1_t7499 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49704_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m49705_gshared (List_1_t7499 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m49705(__this, ___index, ___item, method) (( void (*) (List_1_t7499 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49705_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m49706_gshared (List_1_t7499 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m49706(__this, ___item, method) (( void (*) (List_1_t7499 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49706_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49707_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49707(__this, method) (( bool (*) (List_1_t7499 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m49708_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49708(__this, method) (( bool (*) (List_1_t7499 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49708_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m49709_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m49709(__this, method) (( Object_t * (*) (List_1_t7499 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49709_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m49710_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m49710(__this, method) (( bool (*) (List_1_t7499 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49710_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m49711_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m49711(__this, method) (( bool (*) (List_1_t7499 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49711_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m49712_gshared (List_1_t7499 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m49712(__this, ___index, method) (( Object_t * (*) (List_1_t7499 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49712_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m49713_gshared (List_1_t7499 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m49713(__this, ___index, ___value, method) (( void (*) (List_1_t7499 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49713_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Add(T)
extern "C" void List_1_Add_m49714_gshared (List_1_t7499 * __this, KeyValuePair_2_t7221  ___item, const MethodInfo* method);
#define List_1_Add_m49714(__this, ___item, method) (( void (*) (List_1_t7499 *, KeyValuePair_2_t7221 , const MethodInfo*))List_1_Add_m49714_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m49715_gshared (List_1_t7499 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m49715(__this, ___newCount, method) (( void (*) (List_1_t7499 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49715_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m49716_gshared (List_1_t7499 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m49716(__this, ___idx, ___count, method) (( void (*) (List_1_t7499 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49716_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m49717_gshared (List_1_t7499 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m49717(__this, ___collection, method) (( void (*) (List_1_t7499 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49717_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m49718_gshared (List_1_t7499 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m49718(__this, ___enumerable, method) (( void (*) (List_1_t7499 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49718_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m49719_gshared (List_1_t7499 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m49719(__this, ___collection, method) (( void (*) (List_1_t7499 *, Object_t*, const MethodInfo*))List_1_AddRange_m49719_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7502 * List_1_AsReadOnly_m49720_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m49720(__this, method) (( ReadOnlyCollection_1_t7502 * (*) (List_1_t7499 *, const MethodInfo*))List_1_AsReadOnly_m49720_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Clear()
extern "C" void List_1_Clear_m49721_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_Clear_m49721(__this, method) (( void (*) (List_1_t7499 *, const MethodInfo*))List_1_Clear_m49721_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Contains(T)
extern "C" bool List_1_Contains_m49722_gshared (List_1_t7499 * __this, KeyValuePair_2_t7221  ___item, const MethodInfo* method);
#define List_1_Contains_m49722(__this, ___item, method) (( bool (*) (List_1_t7499 *, KeyValuePair_2_t7221 , const MethodInfo*))List_1_Contains_m49722_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m49723_gshared (List_1_t7499 * __this, KeyValuePair_2U5BU5D_t7498* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m49723(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7499 *, KeyValuePair_2U5BU5D_t7498*, int32_t, const MethodInfo*))List_1_CopyTo_m49723_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7221  List_1_Find_m49724_gshared (List_1_t7499 * __this, Predicate_1_t7506 * ___match, const MethodInfo* method);
#define List_1_Find_m49724(__this, ___match, method) (( KeyValuePair_2_t7221  (*) (List_1_t7499 *, Predicate_1_t7506 *, const MethodInfo*))List_1_Find_m49724_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m49725_gshared (Object_t * __this /* static, unused */, Predicate_1_t7506 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m49725(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7506 *, const MethodInfo*))List_1_CheckMatch_m49725_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m49726_gshared (List_1_t7499 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7506 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m49726(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7499 *, int32_t, int32_t, Predicate_1_t7506 *, const MethodInfo*))List_1_GetIndex_m49726_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetEnumerator()
extern "C" Enumerator_t7500  List_1_GetEnumerator_m49727_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m49727(__this, method) (( Enumerator_t7500  (*) (List_1_t7499 *, const MethodInfo*))List_1_GetEnumerator_m49727_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7499 * List_1_GetRange_m49728_gshared (List_1_t7499 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m49728(__this, ___index, ___count, method) (( List_1_t7499 * (*) (List_1_t7499 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49728_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m49729_gshared (List_1_t7499 * __this, KeyValuePair_2_t7221  ___item, const MethodInfo* method);
#define List_1_IndexOf_m49729(__this, ___item, method) (( int32_t (*) (List_1_t7499 *, KeyValuePair_2_t7221 , const MethodInfo*))List_1_IndexOf_m49729_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m49730_gshared (List_1_t7499 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m49730(__this, ___start, ___delta, method) (( void (*) (List_1_t7499 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49730_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m49731_gshared (List_1_t7499 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m49731(__this, ___index, method) (( void (*) (List_1_t7499 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49731_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m49732_gshared (List_1_t7499 * __this, int32_t ___index, KeyValuePair_2_t7221  ___item, const MethodInfo* method);
#define List_1_Insert_m49732(__this, ___index, ___item, method) (( void (*) (List_1_t7499 *, int32_t, KeyValuePair_2_t7221 , const MethodInfo*))List_1_Insert_m49732_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m49733_gshared (List_1_t7499 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m49733(__this, ___collection, method) (( void (*) (List_1_t7499 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49733_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m49734_gshared (List_1_t7499 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m49734(__this, ___index, ___collection, method) (( void (*) (List_1_t7499 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49734_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m49735_gshared (List_1_t7499 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m49735(__this, ___index, ___collection, method) (( void (*) (List_1_t7499 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49735_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m49736_gshared (List_1_t7499 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m49736(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7499 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49736_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Remove(T)
extern "C" bool List_1_Remove_m49737_gshared (List_1_t7499 * __this, KeyValuePair_2_t7221  ___item, const MethodInfo* method);
#define List_1_Remove_m49737(__this, ___item, method) (( bool (*) (List_1_t7499 *, KeyValuePair_2_t7221 , const MethodInfo*))List_1_Remove_m49737_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m49738_gshared (List_1_t7499 * __this, Predicate_1_t7506 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m49738(__this, ___match, method) (( int32_t (*) (List_1_t7499 *, Predicate_1_t7506 *, const MethodInfo*))List_1_RemoveAll_m49738_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m49739_gshared (List_1_t7499 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m49739(__this, ___index, method) (( void (*) (List_1_t7499 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49739_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m49740_gshared (List_1_t7499 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m49740(__this, ___index, ___count, method) (( void (*) (List_1_t7499 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49740_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Reverse()
extern "C" void List_1_Reverse_m49741_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_Reverse_m49741(__this, method) (( void (*) (List_1_t7499 *, const MethodInfo*))List_1_Reverse_m49741_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort()
extern "C" void List_1_Sort_m49742_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_Sort_m49742(__this, method) (( void (*) (List_1_t7499 *, const MethodInfo*))List_1_Sort_m49742_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m49743_gshared (List_1_t7499 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m49743(__this, ___comparer, method) (( void (*) (List_1_t7499 *, Object_t*, const MethodInfo*))List_1_Sort_m49743_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m49744_gshared (List_1_t7499 * __this, Comparison_1_t7509 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m49744(__this, ___comparison, method) (( void (*) (List_1_t7499 *, Comparison_1_t7509 *, const MethodInfo*))List_1_Sort_m49744_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7498* List_1_ToArray_m49745_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_ToArray_m49745(__this, method) (( KeyValuePair_2U5BU5D_t7498* (*) (List_1_t7499 *, const MethodInfo*))List_1_ToArray_m49745_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m49746_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m49746(__this, method) (( void (*) (List_1_t7499 *, const MethodInfo*))List_1_TrimExcess_m49746_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m49747_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m49747(__this, method) (( int32_t (*) (List_1_t7499 *, const MethodInfo*))List_1_get_Capacity_m49747_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m49748_gshared (List_1_t7499 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m49748(__this, ___value, method) (( void (*) (List_1_t7499 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49748_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Count()
extern "C" int32_t List_1_get_Count_m49749_gshared (List_1_t7499 * __this, const MethodInfo* method);
#define List_1_get_Count_m49749(__this, method) (( int32_t (*) (List_1_t7499 *, const MethodInfo*))List_1_get_Count_m49749_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7221  List_1_get_Item_m49750_gshared (List_1_t7499 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m49750(__this, ___index, method) (( KeyValuePair_2_t7221  (*) (List_1_t7499 *, int32_t, const MethodInfo*))List_1_get_Item_m49750_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m49751_gshared (List_1_t7499 * __this, int32_t ___index, KeyValuePair_2_t7221  ___value, const MethodInfo* method);
#define List_1_set_Item_m49751(__this, ___index, ___value, method) (( void (*) (List_1_t7499 *, int32_t, KeyValuePair_2_t7221 , const MethodInfo*))List_1_set_Item_m49751_gshared)(__this, ___index, ___value, method)

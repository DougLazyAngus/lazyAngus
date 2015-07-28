#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t737;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1417;
// System.Int32[]
struct Int32U5BU5D_t539;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3304;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8624;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t5625;
// System.Predicate`1<System.Int32>
struct Predicate_1_t5627;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5310;
// System.Comparison`1<System.Int32>
struct Comparison_1_t5631;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m3953_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1__ctor_m3953(__this, method) (( void (*) (List_1_t737 *, const MethodInfo*))List_1__ctor_m3953_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26060_gshared (List_1_t737 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26060(__this, ___collection, method) (( void (*) (List_1_t737 *, Object_t*, const MethodInfo*))List_1__ctor_m26060_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m26061_gshared (List_1_t737 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m26061(__this, ___capacity, method) (( void (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1__ctor_m26061_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26062_gshared (List_1_t737 * __this, Int32U5BU5D_t539* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m26062(__this, ___data, ___size, method) (( void (*) (List_1_t737 *, Int32U5BU5D_t539*, int32_t, const MethodInfo*))List_1__ctor_m26062_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m26063_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26063(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26063_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26064_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26064(__this, method) (( Object_t* (*) (List_1_t737 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26065_gshared (List_1_t737 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26065(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t737 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26065_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26066_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26066(__this, method) (( Object_t * (*) (List_1_t737 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26066_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26067_gshared (List_1_t737 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26067(__this, ___item, method) (( int32_t (*) (List_1_t737 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26067_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26068_gshared (List_1_t737 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26068(__this, ___item, method) (( bool (*) (List_1_t737 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26069_gshared (List_1_t737 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26069(__this, ___item, method) (( int32_t (*) (List_1_t737 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26070_gshared (List_1_t737 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26070(__this, ___index, ___item, method) (( void (*) (List_1_t737 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26070_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26071_gshared (List_1_t737 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26071(__this, ___item, method) (( void (*) (List_1_t737 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26071_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26072_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26072(__this, method) (( bool (*) (List_1_t737 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26073_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26073(__this, method) (( bool (*) (List_1_t737 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26074_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26074(__this, method) (( Object_t * (*) (List_1_t737 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26074_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26075_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26075(__this, method) (( bool (*) (List_1_t737 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26075_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26076_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26076(__this, method) (( bool (*) (List_1_t737 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26076_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26077_gshared (List_1_t737 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26077(__this, ___index, method) (( Object_t * (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26077_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26078_gshared (List_1_t737 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26078(__this, ___index, ___value, method) (( void (*) (List_1_t737 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26078_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m26079_gshared (List_1_t737 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m26079(__this, ___item, method) (( void (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_Add_m26079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26080_gshared (List_1_t737 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26080(__this, ___newCount, method) (( void (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26080_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26081_gshared (List_1_t737 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26081(__this, ___idx, ___count, method) (( void (*) (List_1_t737 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26081_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26082_gshared (List_1_t737 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26082(__this, ___collection, method) (( void (*) (List_1_t737 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26082_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26083_gshared (List_1_t737 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26083(__this, ___enumerable, method) (( void (*) (List_1_t737 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26083_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26084_gshared (List_1_t737 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26084(__this, ___collection, method) (( void (*) (List_1_t737 *, Object_t*, const MethodInfo*))List_1_AddRange_m26084_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5625 * List_1_AsReadOnly_m26085_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26085(__this, method) (( ReadOnlyCollection_1_t5625 * (*) (List_1_t737 *, const MethodInfo*))List_1_AsReadOnly_m26085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m26086_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_Clear_m26086(__this, method) (( void (*) (List_1_t737 *, const MethodInfo*))List_1_Clear_m26086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m26087_gshared (List_1_t737 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m26087(__this, ___item, method) (( bool (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_Contains_m26087_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26088_gshared (List_1_t737 * __this, Int32U5BU5D_t539* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26088(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t737 *, Int32U5BU5D_t539*, int32_t, const MethodInfo*))List_1_CopyTo_m26088_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m26089_gshared (List_1_t737 * __this, Predicate_1_t5627 * ___match, const MethodInfo* method);
#define List_1_Find_m26089(__this, ___match, method) (( int32_t (*) (List_1_t737 *, Predicate_1_t5627 *, const MethodInfo*))List_1_Find_m26089_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26090_gshared (Object_t * __this /* static, unused */, Predicate_1_t5627 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26090(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5627 *, const MethodInfo*))List_1_CheckMatch_m26090_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26091_gshared (List_1_t737 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5627 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26091(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t737 *, int32_t, int32_t, Predicate_1_t5627 *, const MethodInfo*))List_1_GetIndex_m26091_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t5623  List_1_GetEnumerator_m26092_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26092(__this, method) (( Enumerator_t5623  (*) (List_1_t737 *, const MethodInfo*))List_1_GetEnumerator_m26092_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t737 * List_1_GetRange_m26093_gshared (List_1_t737 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26093(__this, ___index, ___count, method) (( List_1_t737 * (*) (List_1_t737 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26093_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26094_gshared (List_1_t737 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m26094(__this, ___item, method) (( int32_t (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_IndexOf_m26094_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26095_gshared (List_1_t737 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26095(__this, ___start, ___delta, method) (( void (*) (List_1_t737 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26095_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26096_gshared (List_1_t737 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26096(__this, ___index, method) (( void (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26096_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26097_gshared (List_1_t737 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m26097(__this, ___index, ___item, method) (( void (*) (List_1_t737 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m26097_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26098_gshared (List_1_t737 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26098(__this, ___collection, method) (( void (*) (List_1_t737 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26098_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26099_gshared (List_1_t737 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26099(__this, ___index, ___collection, method) (( void (*) (List_1_t737 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26099_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26100_gshared (List_1_t737 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26100(__this, ___index, ___collection, method) (( void (*) (List_1_t737 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26100_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26101_gshared (List_1_t737 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26101(__this, ___index, ___enumerable, method) (( void (*) (List_1_t737 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26101_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m26102_gshared (List_1_t737 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m26102(__this, ___item, method) (( bool (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_Remove_m26102_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26103_gshared (List_1_t737 * __this, Predicate_1_t5627 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26103(__this, ___match, method) (( int32_t (*) (List_1_t737 *, Predicate_1_t5627 *, const MethodInfo*))List_1_RemoveAll_m26103_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26104_gshared (List_1_t737 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26104(__this, ___index, method) (( void (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26105_gshared (List_1_t737 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26105(__this, ___index, ___count, method) (( void (*) (List_1_t737 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26105_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m26106_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_Reverse_m26106(__this, method) (( void (*) (List_1_t737 *, const MethodInfo*))List_1_Reverse_m26106_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m26107_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_Sort_m26107(__this, method) (( void (*) (List_1_t737 *, const MethodInfo*))List_1_Sort_m26107_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26108_gshared (List_1_t737 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26108(__this, ___comparer, method) (( void (*) (List_1_t737 *, Object_t*, const MethodInfo*))List_1_Sort_m26108_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26109_gshared (List_1_t737 * __this, Comparison_1_t5631 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26109(__this, ___comparison, method) (( void (*) (List_1_t737 *, Comparison_1_t5631 *, const MethodInfo*))List_1_Sort_m26109_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t539* List_1_ToArray_m26110_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_ToArray_m26110(__this, method) (( Int32U5BU5D_t539* (*) (List_1_t737 *, const MethodInfo*))List_1_ToArray_m26110_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m26111_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26111(__this, method) (( void (*) (List_1_t737 *, const MethodInfo*))List_1_TrimExcess_m26111_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26112_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26112(__this, method) (( int32_t (*) (List_1_t737 *, const MethodInfo*))List_1_get_Capacity_m26112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26113_gshared (List_1_t737 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26113(__this, ___value, method) (( void (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26113_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m26114_gshared (List_1_t737 * __this, const MethodInfo* method);
#define List_1_get_Count_m26114(__this, method) (( int32_t (*) (List_1_t737 *, const MethodInfo*))List_1_get_Count_m26114_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m26115_gshared (List_1_t737 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26115(__this, ___index, method) (( int32_t (*) (List_1_t737 *, int32_t, const MethodInfo*))List_1_get_Item_m26115_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26116_gshared (List_1_t737 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m26116(__this, ___index, ___value, method) (( void (*) (List_1_t737 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m26116_gshared)(__this, ___index, ___value, method)

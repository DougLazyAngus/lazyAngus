#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct List_1_t7552;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerable_1_t7166;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7551;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerator_1_t7167;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ICollection_1_t9289;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ReadOnlyCollection_1_t7555;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Predicate_1_t7559;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IComparer_1_t9290;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t7562;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_79.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C" void List_1__ctor_m50455_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1__ctor_m50455(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1__ctor_m50455_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m50456_gshared (List_1_t7552 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m50456(__this, ___collection, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1__ctor_m50456_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m50457_gshared (List_1_t7552 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m50457(__this, ___capacity, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1__ctor_m50457_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m50458_gshared (List_1_t7552 * __this, KeyValuePair_2U5BU5D_t7551* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m50458(__this, ___data, ___size, method) (( void (*) (List_1_t7552 *, KeyValuePair_2U5BU5D_t7551*, int32_t, const MethodInfo*))List_1__ctor_m50458_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.cctor()
extern "C" void List_1__cctor_m50459_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m50459(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50459_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50460_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50460(__this, method) (( Object_t* (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50460_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m50461_gshared (List_1_t7552 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m50461(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7552 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50461_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m50462_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50462(__this, method) (( Object_t * (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50462_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m50463_gshared (List_1_t7552 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m50463(__this, ___item, method) (( int32_t (*) (List_1_t7552 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50463_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m50464_gshared (List_1_t7552 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m50464(__this, ___item, method) (( bool (*) (List_1_t7552 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50464_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m50465_gshared (List_1_t7552 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m50465(__this, ___item, method) (( int32_t (*) (List_1_t7552 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50465_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m50466_gshared (List_1_t7552 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m50466(__this, ___index, ___item, method) (( void (*) (List_1_t7552 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50466_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m50467_gshared (List_1_t7552 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m50467(__this, ___item, method) (( void (*) (List_1_t7552 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50467_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50468_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50468(__this, method) (( bool (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50468_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m50469_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50469(__this, method) (( bool (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50469_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m50470_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m50470(__this, method) (( Object_t * (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50470_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m50471_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m50471(__this, method) (( bool (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50471_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m50472_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m50472(__this, method) (( bool (*) (List_1_t7552 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50472_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m50473_gshared (List_1_t7552 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m50473(__this, ___index, method) (( Object_t * (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50473_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m50474_gshared (List_1_t7552 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m50474(__this, ___index, ___value, method) (( void (*) (List_1_t7552 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50474_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Add(T)
extern "C" void List_1_Add_m50475_gshared (List_1_t7552 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_Add_m50475(__this, ___item, method) (( void (*) (List_1_t7552 *, KeyValuePair_2_t7162 , const MethodInfo*))List_1_Add_m50475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m50476_gshared (List_1_t7552 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m50476(__this, ___newCount, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50476_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m50477_gshared (List_1_t7552 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m50477(__this, ___idx, ___count, method) (( void (*) (List_1_t7552 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50477_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m50478_gshared (List_1_t7552 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m50478(__this, ___collection, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50478_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m50479_gshared (List_1_t7552 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m50479(__this, ___enumerable, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50479_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m50480_gshared (List_1_t7552 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m50480(__this, ___collection, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_AddRange_m50480_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7555 * List_1_AsReadOnly_m50481_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m50481(__this, method) (( ReadOnlyCollection_1_t7555 * (*) (List_1_t7552 *, const MethodInfo*))List_1_AsReadOnly_m50481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Clear()
extern "C" void List_1_Clear_m50482_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_Clear_m50482(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1_Clear_m50482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Contains(T)
extern "C" bool List_1_Contains_m50483_gshared (List_1_t7552 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_Contains_m50483(__this, ___item, method) (( bool (*) (List_1_t7552 *, KeyValuePair_2_t7162 , const MethodInfo*))List_1_Contains_m50483_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m50484_gshared (List_1_t7552 * __this, KeyValuePair_2U5BU5D_t7551* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m50484(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7552 *, KeyValuePair_2U5BU5D_t7551*, int32_t, const MethodInfo*))List_1_CopyTo_m50484_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7162  List_1_Find_m50485_gshared (List_1_t7552 * __this, Predicate_1_t7559 * ___match, const MethodInfo* method);
#define List_1_Find_m50485(__this, ___match, method) (( KeyValuePair_2_t7162  (*) (List_1_t7552 *, Predicate_1_t7559 *, const MethodInfo*))List_1_Find_m50485_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m50486_gshared (Object_t * __this /* static, unused */, Predicate_1_t7559 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m50486(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7559 *, const MethodInfo*))List_1_CheckMatch_m50486_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m50487_gshared (List_1_t7552 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7559 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m50487(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7552 *, int32_t, int32_t, Predicate_1_t7559 *, const MethodInfo*))List_1_GetIndex_m50487_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetEnumerator()
extern "C" Enumerator_t7553  List_1_GetEnumerator_m50488_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m50488(__this, method) (( Enumerator_t7553  (*) (List_1_t7552 *, const MethodInfo*))List_1_GetEnumerator_m50488_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7552 * List_1_GetRange_m50489_gshared (List_1_t7552 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m50489(__this, ___index, ___count, method) (( List_1_t7552 * (*) (List_1_t7552 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50489_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m50490_gshared (List_1_t7552 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_IndexOf_m50490(__this, ___item, method) (( int32_t (*) (List_1_t7552 *, KeyValuePair_2_t7162 , const MethodInfo*))List_1_IndexOf_m50490_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m50491_gshared (List_1_t7552 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m50491(__this, ___start, ___delta, method) (( void (*) (List_1_t7552 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50491_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m50492_gshared (List_1_t7552 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m50492(__this, ___index, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m50493_gshared (List_1_t7552 * __this, int32_t ___index, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_Insert_m50493(__this, ___index, ___item, method) (( void (*) (List_1_t7552 *, int32_t, KeyValuePair_2_t7162 , const MethodInfo*))List_1_Insert_m50493_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m50494_gshared (List_1_t7552 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m50494(__this, ___collection, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50494_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m50495_gshared (List_1_t7552 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m50495(__this, ___index, ___collection, method) (( void (*) (List_1_t7552 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50495_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m50496_gshared (List_1_t7552 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m50496(__this, ___index, ___collection, method) (( void (*) (List_1_t7552 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50496_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m50497_gshared (List_1_t7552 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m50497(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7552 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50497_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Remove(T)
extern "C" bool List_1_Remove_m50498_gshared (List_1_t7552 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_Remove_m50498(__this, ___item, method) (( bool (*) (List_1_t7552 *, KeyValuePair_2_t7162 , const MethodInfo*))List_1_Remove_m50498_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m50499_gshared (List_1_t7552 * __this, Predicate_1_t7559 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m50499(__this, ___match, method) (( int32_t (*) (List_1_t7552 *, Predicate_1_t7559 *, const MethodInfo*))List_1_RemoveAll_m50499_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m50500_gshared (List_1_t7552 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m50500(__this, ___index, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50500_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m50501_gshared (List_1_t7552 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m50501(__this, ___index, ___count, method) (( void (*) (List_1_t7552 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50501_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Reverse()
extern "C" void List_1_Reverse_m50502_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_Reverse_m50502(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1_Reverse_m50502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort()
extern "C" void List_1_Sort_m50503_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_Sort_m50503(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1_Sort_m50503_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m50504_gshared (List_1_t7552 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m50504(__this, ___comparer, method) (( void (*) (List_1_t7552 *, Object_t*, const MethodInfo*))List_1_Sort_m50504_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m50505_gshared (List_1_t7552 * __this, Comparison_1_t7562 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m50505(__this, ___comparison, method) (( void (*) (List_1_t7552 *, Comparison_1_t7562 *, const MethodInfo*))List_1_Sort_m50505_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7551* List_1_ToArray_m50506_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_ToArray_m50506(__this, method) (( KeyValuePair_2U5BU5D_t7551* (*) (List_1_t7552 *, const MethodInfo*))List_1_ToArray_m50506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m50507_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m50507(__this, method) (( void (*) (List_1_t7552 *, const MethodInfo*))List_1_TrimExcess_m50507_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m50508_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m50508(__this, method) (( int32_t (*) (List_1_t7552 *, const MethodInfo*))List_1_get_Capacity_m50508_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m50509_gshared (List_1_t7552 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m50509(__this, ___value, method) (( void (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50509_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Count()
extern "C" int32_t List_1_get_Count_m50510_gshared (List_1_t7552 * __this, const MethodInfo* method);
#define List_1_get_Count_m50510(__this, method) (( int32_t (*) (List_1_t7552 *, const MethodInfo*))List_1_get_Count_m50510_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7162  List_1_get_Item_m50511_gshared (List_1_t7552 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m50511(__this, ___index, method) (( KeyValuePair_2_t7162  (*) (List_1_t7552 *, int32_t, const MethodInfo*))List_1_get_Item_m50511_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m50512_gshared (List_1_t7552 * __this, int32_t ___index, KeyValuePair_2_t7162  ___value, const MethodInfo* method);
#define List_1_set_Item_m50512(__this, ___index, ___value, method) (( void (*) (List_1_t7552 *, int32_t, KeyValuePair_2_t7162 , const MethodInfo*))List_1_set_Item_m50512_gshared)(__this, ___index, ___value, method)

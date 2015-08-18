#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct List_1_t7969;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerable_1_t7960;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7968;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7961;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ICollection_1_t9406;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ReadOnlyCollection_1_t7972;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t7976;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IComparer_1_t9407;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t7979;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_92.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void List_1__ctor_m55412_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1__ctor_m55412(__this, method) (( void (*) (List_1_t7969 *, const MethodInfo*))List_1__ctor_m55412_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55413_gshared (List_1_t7969 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55413(__this, ___collection, method) (( void (*) (List_1_t7969 *, Object_t*, const MethodInfo*))List_1__ctor_m55413_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55414_gshared (List_1_t7969 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55414(__this, ___capacity, method) (( void (*) (List_1_t7969 *, int32_t, const MethodInfo*))List_1__ctor_m55414_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55415_gshared (List_1_t7969 * __this, KeyValuePair_2U5BU5D_t7968* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55415(__this, ___data, ___size, method) (( void (*) (List_1_t7969 *, KeyValuePair_2U5BU5D_t7968*, int32_t, const MethodInfo*))List_1__ctor_m55415_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.cctor()
extern "C" void List_1__cctor_m55416_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55416(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55416_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55417_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55417(__this, method) (( Object_t* (*) (List_1_t7969 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55417_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55418_gshared (List_1_t7969 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55418(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7969 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55418_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55419_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55419(__this, method) (( Object_t * (*) (List_1_t7969 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55419_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55420_gshared (List_1_t7969 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55420(__this, ___item, method) (( int32_t (*) (List_1_t7969 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55420_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55421_gshared (List_1_t7969 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55421(__this, ___item, method) (( bool (*) (List_1_t7969 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55421_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55422_gshared (List_1_t7969 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55422(__this, ___item, method) (( int32_t (*) (List_1_t7969 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55422_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55423_gshared (List_1_t7969 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55423(__this, ___index, ___item, method) (( void (*) (List_1_t7969 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55423_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55424_gshared (List_1_t7969 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55424(__this, ___item, method) (( void (*) (List_1_t7969 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55424_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55425_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55425(__this, method) (( bool (*) (List_1_t7969 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55426_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55426(__this, method) (( bool (*) (List_1_t7969 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55426_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55427_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55427(__this, method) (( Object_t * (*) (List_1_t7969 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55428_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55428(__this, method) (( bool (*) (List_1_t7969 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55428_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55429_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55429(__this, method) (( bool (*) (List_1_t7969 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55429_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55430_gshared (List_1_t7969 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55430(__this, ___index, method) (( Object_t * (*) (List_1_t7969 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55430_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55431_gshared (List_1_t7969 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55431(__this, ___index, ___value, method) (( void (*) (List_1_t7969 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55431_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Add(T)
extern "C" void List_1_Add_m55432_gshared (List_1_t7969 * __this, KeyValuePair_2_t7017  ___item, const MethodInfo* method);
#define List_1_Add_m55432(__this, ___item, method) (( void (*) (List_1_t7969 *, KeyValuePair_2_t7017 , const MethodInfo*))List_1_Add_m55432_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55433_gshared (List_1_t7969 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55433(__this, ___newCount, method) (( void (*) (List_1_t7969 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55433_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55434_gshared (List_1_t7969 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55434(__this, ___idx, ___count, method) (( void (*) (List_1_t7969 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55434_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55435_gshared (List_1_t7969 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55435(__this, ___collection, method) (( void (*) (List_1_t7969 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55435_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55436_gshared (List_1_t7969 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55436(__this, ___enumerable, method) (( void (*) (List_1_t7969 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55436_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55437_gshared (List_1_t7969 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55437(__this, ___collection, method) (( void (*) (List_1_t7969 *, Object_t*, const MethodInfo*))List_1_AddRange_m55437_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7972 * List_1_AsReadOnly_m55438_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55438(__this, method) (( ReadOnlyCollection_1_t7972 * (*) (List_1_t7969 *, const MethodInfo*))List_1_AsReadOnly_m55438_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Clear()
extern "C" void List_1_Clear_m55439_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_Clear_m55439(__this, method) (( void (*) (List_1_t7969 *, const MethodInfo*))List_1_Clear_m55439_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Contains(T)
extern "C" bool List_1_Contains_m55440_gshared (List_1_t7969 * __this, KeyValuePair_2_t7017  ___item, const MethodInfo* method);
#define List_1_Contains_m55440(__this, ___item, method) (( bool (*) (List_1_t7969 *, KeyValuePair_2_t7017 , const MethodInfo*))List_1_Contains_m55440_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55441_gshared (List_1_t7969 * __this, KeyValuePair_2U5BU5D_t7968* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55441(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7969 *, KeyValuePair_2U5BU5D_t7968*, int32_t, const MethodInfo*))List_1_CopyTo_m55441_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7017  List_1_Find_m55442_gshared (List_1_t7969 * __this, Predicate_1_t7976 * ___match, const MethodInfo* method);
#define List_1_Find_m55442(__this, ___match, method) (( KeyValuePair_2_t7017  (*) (List_1_t7969 *, Predicate_1_t7976 *, const MethodInfo*))List_1_Find_m55442_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55443_gshared (Object_t * __this /* static, unused */, Predicate_1_t7976 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55443(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7976 *, const MethodInfo*))List_1_CheckMatch_m55443_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55444_gshared (List_1_t7969 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7976 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55444(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7969 *, int32_t, int32_t, Predicate_1_t7976 *, const MethodInfo*))List_1_GetIndex_m55444_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetEnumerator()
extern "C" Enumerator_t7970  List_1_GetEnumerator_m55445_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55445(__this, method) (( Enumerator_t7970  (*) (List_1_t7969 *, const MethodInfo*))List_1_GetEnumerator_m55445_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7969 * List_1_GetRange_m55446_gshared (List_1_t7969 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55446(__this, ___index, ___count, method) (( List_1_t7969 * (*) (List_1_t7969 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55446_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55447_gshared (List_1_t7969 * __this, KeyValuePair_2_t7017  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55447(__this, ___item, method) (( int32_t (*) (List_1_t7969 *, KeyValuePair_2_t7017 , const MethodInfo*))List_1_IndexOf_m55447_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55448_gshared (List_1_t7969 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55448(__this, ___start, ___delta, method) (( void (*) (List_1_t7969 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55448_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55449_gshared (List_1_t7969 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55449(__this, ___index, method) (( void (*) (List_1_t7969 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55449_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55450_gshared (List_1_t7969 * __this, int32_t ___index, KeyValuePair_2_t7017  ___item, const MethodInfo* method);
#define List_1_Insert_m55450(__this, ___index, ___item, method) (( void (*) (List_1_t7969 *, int32_t, KeyValuePair_2_t7017 , const MethodInfo*))List_1_Insert_m55450_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55451_gshared (List_1_t7969 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55451(__this, ___collection, method) (( void (*) (List_1_t7969 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55451_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55452_gshared (List_1_t7969 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55452(__this, ___index, ___collection, method) (( void (*) (List_1_t7969 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55452_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55453_gshared (List_1_t7969 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55453(__this, ___index, ___collection, method) (( void (*) (List_1_t7969 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55453_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55454_gshared (List_1_t7969 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55454(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7969 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55454_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Remove(T)
extern "C" bool List_1_Remove_m55455_gshared (List_1_t7969 * __this, KeyValuePair_2_t7017  ___item, const MethodInfo* method);
#define List_1_Remove_m55455(__this, ___item, method) (( bool (*) (List_1_t7969 *, KeyValuePair_2_t7017 , const MethodInfo*))List_1_Remove_m55455_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55456_gshared (List_1_t7969 * __this, Predicate_1_t7976 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55456(__this, ___match, method) (( int32_t (*) (List_1_t7969 *, Predicate_1_t7976 *, const MethodInfo*))List_1_RemoveAll_m55456_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55457_gshared (List_1_t7969 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55457(__this, ___index, method) (( void (*) (List_1_t7969 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55457_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55458_gshared (List_1_t7969 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55458(__this, ___index, ___count, method) (( void (*) (List_1_t7969 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55458_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Reverse()
extern "C" void List_1_Reverse_m55459_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_Reverse_m55459(__this, method) (( void (*) (List_1_t7969 *, const MethodInfo*))List_1_Reverse_m55459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort()
extern "C" void List_1_Sort_m55460_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_Sort_m55460(__this, method) (( void (*) (List_1_t7969 *, const MethodInfo*))List_1_Sort_m55460_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55461_gshared (List_1_t7969 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55461(__this, ___comparer, method) (( void (*) (List_1_t7969 *, Object_t*, const MethodInfo*))List_1_Sort_m55461_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55462_gshared (List_1_t7969 * __this, Comparison_1_t7979 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55462(__this, ___comparison, method) (( void (*) (List_1_t7969 *, Comparison_1_t7979 *, const MethodInfo*))List_1_Sort_m55462_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7968* List_1_ToArray_m55463_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_ToArray_m55463(__this, method) (( KeyValuePair_2U5BU5D_t7968* (*) (List_1_t7969 *, const MethodInfo*))List_1_ToArray_m55463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55464_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55464(__this, method) (( void (*) (List_1_t7969 *, const MethodInfo*))List_1_TrimExcess_m55464_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55465_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55465(__this, method) (( int32_t (*) (List_1_t7969 *, const MethodInfo*))List_1_get_Capacity_m55465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55466_gshared (List_1_t7969 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55466(__this, ___value, method) (( void (*) (List_1_t7969 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55466_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Count()
extern "C" int32_t List_1_get_Count_m55467_gshared (List_1_t7969 * __this, const MethodInfo* method);
#define List_1_get_Count_m55467(__this, method) (( int32_t (*) (List_1_t7969 *, const MethodInfo*))List_1_get_Count_m55467_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7017  List_1_get_Item_m55468_gshared (List_1_t7969 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55468(__this, ___index, method) (( KeyValuePair_2_t7017  (*) (List_1_t7969 *, int32_t, const MethodInfo*))List_1_get_Item_m55468_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55469_gshared (List_1_t7969 * __this, int32_t ___index, KeyValuePair_2_t7017  ___value, const MethodInfo* method);
#define List_1_set_Item_m55469(__this, ___index, ___value, method) (( void (*) (List_1_t7969 *, int32_t, KeyValuePair_2_t7017 , const MethodInfo*))List_1_set_Item_m55469_gshared)(__this, ___index, ___value, method)

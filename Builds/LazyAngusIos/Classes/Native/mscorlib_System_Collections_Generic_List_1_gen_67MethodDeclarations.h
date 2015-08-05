#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t5967;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t71;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t5966;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5407;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t8990;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t5970;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t5974;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t8991;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t5977;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_48.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m30755_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1__ctor_m30755(__this, method) (( void (*) (List_1_t5967 *, const MethodInfo*))List_1__ctor_m30755_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m30756_gshared (List_1_t5967 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m30756(__this, ___collection, method) (( void (*) (List_1_t5967 *, Object_t*, const MethodInfo*))List_1__ctor_m30756_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m30757_gshared (List_1_t5967 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m30757(__this, ___capacity, method) (( void (*) (List_1_t5967 *, int32_t, const MethodInfo*))List_1__ctor_m30757_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m30758_gshared (List_1_t5967 * __this, KeyValuePair_2U5BU5D_t5966* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m30758(__this, ___data, ___size, method) (( void (*) (List_1_t5967 *, KeyValuePair_2U5BU5D_t5966*, int32_t, const MethodInfo*))List_1__ctor_m30758_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m30759_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m30759(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m30759_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30760_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30760(__this, method) (( Object_t* (*) (List_1_t5967 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30760_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m30761_gshared (List_1_t5967 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m30761(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5967 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m30761_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m30762_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30762(__this, method) (( Object_t * (*) (List_1_t5967 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m30762_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m30763_gshared (List_1_t5967 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m30763(__this, ___item, method) (( int32_t (*) (List_1_t5967 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m30763_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m30764_gshared (List_1_t5967 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m30764(__this, ___item, method) (( bool (*) (List_1_t5967 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m30764_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m30765_gshared (List_1_t5967 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m30765(__this, ___item, method) (( int32_t (*) (List_1_t5967 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m30765_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m30766_gshared (List_1_t5967 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m30766(__this, ___index, ___item, method) (( void (*) (List_1_t5967 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m30766_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m30767_gshared (List_1_t5967 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m30767(__this, ___item, method) (( void (*) (List_1_t5967 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m30767_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30768_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30768(__this, method) (( bool (*) (List_1_t5967 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30768_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m30769_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30769(__this, method) (( bool (*) (List_1_t5967 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m30769_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m30770_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m30770(__this, method) (( Object_t * (*) (List_1_t5967 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m30770_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m30771_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m30771(__this, method) (( bool (*) (List_1_t5967 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m30771_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m30772_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m30772(__this, method) (( bool (*) (List_1_t5967 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m30772_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m30773_gshared (List_1_t5967 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m30773(__this, ___index, method) (( Object_t * (*) (List_1_t5967 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m30773_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m30774_gshared (List_1_t5967 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m30774(__this, ___index, ___value, method) (( void (*) (List_1_t5967 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m30774_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m30775_gshared (List_1_t5967 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Add_m30775(__this, ___item, method) (( void (*) (List_1_t5967 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Add_m30775_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m30776_gshared (List_1_t5967 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m30776(__this, ___newCount, method) (( void (*) (List_1_t5967 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m30776_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m30777_gshared (List_1_t5967 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m30777(__this, ___idx, ___count, method) (( void (*) (List_1_t5967 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m30777_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m30778_gshared (List_1_t5967 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m30778(__this, ___collection, method) (( void (*) (List_1_t5967 *, Object_t*, const MethodInfo*))List_1_AddCollection_m30778_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m30779_gshared (List_1_t5967 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m30779(__this, ___enumerable, method) (( void (*) (List_1_t5967 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m30779_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m30780_gshared (List_1_t5967 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m30780(__this, ___collection, method) (( void (*) (List_1_t5967 *, Object_t*, const MethodInfo*))List_1_AddRange_m30780_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5970 * List_1_AsReadOnly_m30781_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m30781(__this, method) (( ReadOnlyCollection_1_t5970 * (*) (List_1_t5967 *, const MethodInfo*))List_1_AsReadOnly_m30781_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m30782_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_Clear_m30782(__this, method) (( void (*) (List_1_t5967 *, const MethodInfo*))List_1_Clear_m30782_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m30783_gshared (List_1_t5967 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Contains_m30783(__this, ___item, method) (( bool (*) (List_1_t5967 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Contains_m30783_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m30784_gshared (List_1_t5967 * __this, KeyValuePair_2U5BU5D_t5966* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m30784(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5967 *, KeyValuePair_2U5BU5D_t5966*, int32_t, const MethodInfo*))List_1_CopyTo_m30784_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t70  List_1_Find_m30785_gshared (List_1_t5967 * __this, Predicate_1_t5974 * ___match, const MethodInfo* method);
#define List_1_Find_m30785(__this, ___match, method) (( KeyValuePair_2_t70  (*) (List_1_t5967 *, Predicate_1_t5974 *, const MethodInfo*))List_1_Find_m30785_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m30786_gshared (Object_t * __this /* static, unused */, Predicate_1_t5974 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m30786(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5974 *, const MethodInfo*))List_1_CheckMatch_m30786_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m30787_gshared (List_1_t5967 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5974 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m30787(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5967 *, int32_t, int32_t, Predicate_1_t5974 *, const MethodInfo*))List_1_GetIndex_m30787_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t5968  List_1_GetEnumerator_m30788_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m30788(__this, method) (( Enumerator_t5968  (*) (List_1_t5967 *, const MethodInfo*))List_1_GetEnumerator_m30788_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t5967 * List_1_GetRange_m30789_gshared (List_1_t5967 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m30789(__this, ___index, ___count, method) (( List_1_t5967 * (*) (List_1_t5967 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m30789_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m30790_gshared (List_1_t5967 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_IndexOf_m30790(__this, ___item, method) (( int32_t (*) (List_1_t5967 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_IndexOf_m30790_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m30791_gshared (List_1_t5967 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m30791(__this, ___start, ___delta, method) (( void (*) (List_1_t5967 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m30791_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m30792_gshared (List_1_t5967 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m30792(__this, ___index, method) (( void (*) (List_1_t5967 *, int32_t, const MethodInfo*))List_1_CheckIndex_m30792_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m30793_gshared (List_1_t5967 * __this, int32_t ___index, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Insert_m30793(__this, ___index, ___item, method) (( void (*) (List_1_t5967 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_Insert_m30793_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m30794_gshared (List_1_t5967 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m30794(__this, ___collection, method) (( void (*) (List_1_t5967 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m30794_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m30795_gshared (List_1_t5967 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m30795(__this, ___index, ___collection, method) (( void (*) (List_1_t5967 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m30795_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m30796_gshared (List_1_t5967 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m30796(__this, ___index, ___collection, method) (( void (*) (List_1_t5967 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m30796_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m30797_gshared (List_1_t5967 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m30797(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5967 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m30797_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m30798_gshared (List_1_t5967 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Remove_m30798(__this, ___item, method) (( bool (*) (List_1_t5967 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Remove_m30798_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m30799_gshared (List_1_t5967 * __this, Predicate_1_t5974 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m30799(__this, ___match, method) (( int32_t (*) (List_1_t5967 *, Predicate_1_t5974 *, const MethodInfo*))List_1_RemoveAll_m30799_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m30800_gshared (List_1_t5967 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m30800(__this, ___index, method) (( void (*) (List_1_t5967 *, int32_t, const MethodInfo*))List_1_RemoveAt_m30800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m30801_gshared (List_1_t5967 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m30801(__this, ___index, ___count, method) (( void (*) (List_1_t5967 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m30801_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m30802_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_Reverse_m30802(__this, method) (( void (*) (List_1_t5967 *, const MethodInfo*))List_1_Reverse_m30802_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m30803_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_Sort_m30803(__this, method) (( void (*) (List_1_t5967 *, const MethodInfo*))List_1_Sort_m30803_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m30804_gshared (List_1_t5967 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m30804(__this, ___comparer, method) (( void (*) (List_1_t5967 *, Object_t*, const MethodInfo*))List_1_Sort_m30804_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m30805_gshared (List_1_t5967 * __this, Comparison_1_t5977 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m30805(__this, ___comparison, method) (( void (*) (List_1_t5967 *, Comparison_1_t5977 *, const MethodInfo*))List_1_Sort_m30805_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t5966* List_1_ToArray_m30806_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_ToArray_m30806(__this, method) (( KeyValuePair_2U5BU5D_t5966* (*) (List_1_t5967 *, const MethodInfo*))List_1_ToArray_m30806_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m30807_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m30807(__this, method) (( void (*) (List_1_t5967 *, const MethodInfo*))List_1_TrimExcess_m30807_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m30808_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m30808(__this, method) (( int32_t (*) (List_1_t5967 *, const MethodInfo*))List_1_get_Capacity_m30808_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m30809_gshared (List_1_t5967 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m30809(__this, ___value, method) (( void (*) (List_1_t5967 *, int32_t, const MethodInfo*))List_1_set_Capacity_m30809_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m30810_gshared (List_1_t5967 * __this, const MethodInfo* method);
#define List_1_get_Count_m30810(__this, method) (( int32_t (*) (List_1_t5967 *, const MethodInfo*))List_1_get_Count_m30810_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t70  List_1_get_Item_m30811_gshared (List_1_t5967 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m30811(__this, ___index, method) (( KeyValuePair_2_t70  (*) (List_1_t5967 *, int32_t, const MethodInfo*))List_1_get_Item_m30811_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m30812_gshared (List_1_t5967 * __this, int32_t ___index, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define List_1_set_Item_m30812(__this, ___index, ___value, method) (( void (*) (List_1_t5967 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_set_Item_m30812_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct List_1_t7830;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerable_1_t7268;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7829;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7269;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ICollection_1_t9396;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ReadOnlyCollection_1_t7833;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Predicate_1_t7837;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IComparer_1_t9397;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t7840;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_88.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void List_1__ctor_m53767_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1__ctor_m53767(__this, method) (( void (*) (List_1_t7830 *, const MethodInfo*))List_1__ctor_m53767_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m53768_gshared (List_1_t7830 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m53768(__this, ___collection, method) (( void (*) (List_1_t7830 *, Object_t*, const MethodInfo*))List_1__ctor_m53768_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m53769_gshared (List_1_t7830 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m53769(__this, ___capacity, method) (( void (*) (List_1_t7830 *, int32_t, const MethodInfo*))List_1__ctor_m53769_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m53770_gshared (List_1_t7830 * __this, KeyValuePair_2U5BU5D_t7829* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m53770(__this, ___data, ___size, method) (( void (*) (List_1_t7830 *, KeyValuePair_2U5BU5D_t7829*, int32_t, const MethodInfo*))List_1__ctor_m53770_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.cctor()
extern "C" void List_1__cctor_m53771_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m53771(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53771_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53772_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53772(__this, method) (( Object_t* (*) (List_1_t7830 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53772_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m53773_gshared (List_1_t7830 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m53773(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7830 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53773_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m53774_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53774(__this, method) (( Object_t * (*) (List_1_t7830 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53774_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m53775_gshared (List_1_t7830 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m53775(__this, ___item, method) (( int32_t (*) (List_1_t7830 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53775_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m53776_gshared (List_1_t7830 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m53776(__this, ___item, method) (( bool (*) (List_1_t7830 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53776_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m53777_gshared (List_1_t7830 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m53777(__this, ___item, method) (( int32_t (*) (List_1_t7830 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53777_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m53778_gshared (List_1_t7830 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m53778(__this, ___index, ___item, method) (( void (*) (List_1_t7830 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53778_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m53779_gshared (List_1_t7830 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m53779(__this, ___item, method) (( void (*) (List_1_t7830 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53779_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53780_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53780(__this, method) (( bool (*) (List_1_t7830 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53780_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m53781_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53781(__this, method) (( bool (*) (List_1_t7830 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53781_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m53782_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m53782(__this, method) (( Object_t * (*) (List_1_t7830 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53782_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m53783_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m53783(__this, method) (( bool (*) (List_1_t7830 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53783_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m53784_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m53784(__this, method) (( bool (*) (List_1_t7830 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53784_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m53785_gshared (List_1_t7830 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m53785(__this, ___index, method) (( Object_t * (*) (List_1_t7830 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53785_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m53786_gshared (List_1_t7830 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m53786(__this, ___index, ___value, method) (( void (*) (List_1_t7830 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53786_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Add(T)
extern "C" void List_1_Add_m53787_gshared (List_1_t7830 * __this, KeyValuePair_2_t7006  ___item, const MethodInfo* method);
#define List_1_Add_m53787(__this, ___item, method) (( void (*) (List_1_t7830 *, KeyValuePair_2_t7006 , const MethodInfo*))List_1_Add_m53787_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m53788_gshared (List_1_t7830 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m53788(__this, ___newCount, method) (( void (*) (List_1_t7830 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53788_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m53789_gshared (List_1_t7830 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m53789(__this, ___idx, ___count, method) (( void (*) (List_1_t7830 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53789_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m53790_gshared (List_1_t7830 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m53790(__this, ___collection, method) (( void (*) (List_1_t7830 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53790_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m53791_gshared (List_1_t7830 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m53791(__this, ___enumerable, method) (( void (*) (List_1_t7830 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53791_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m53792_gshared (List_1_t7830 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m53792(__this, ___collection, method) (( void (*) (List_1_t7830 *, Object_t*, const MethodInfo*))List_1_AddRange_m53792_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7833 * List_1_AsReadOnly_m53793_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m53793(__this, method) (( ReadOnlyCollection_1_t7833 * (*) (List_1_t7830 *, const MethodInfo*))List_1_AsReadOnly_m53793_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Clear()
extern "C" void List_1_Clear_m53794_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_Clear_m53794(__this, method) (( void (*) (List_1_t7830 *, const MethodInfo*))List_1_Clear_m53794_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Contains(T)
extern "C" bool List_1_Contains_m53795_gshared (List_1_t7830 * __this, KeyValuePair_2_t7006  ___item, const MethodInfo* method);
#define List_1_Contains_m53795(__this, ___item, method) (( bool (*) (List_1_t7830 *, KeyValuePair_2_t7006 , const MethodInfo*))List_1_Contains_m53795_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m53796_gshared (List_1_t7830 * __this, KeyValuePair_2U5BU5D_t7829* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m53796(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7830 *, KeyValuePair_2U5BU5D_t7829*, int32_t, const MethodInfo*))List_1_CopyTo_m53796_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7006  List_1_Find_m53797_gshared (List_1_t7830 * __this, Predicate_1_t7837 * ___match, const MethodInfo* method);
#define List_1_Find_m53797(__this, ___match, method) (( KeyValuePair_2_t7006  (*) (List_1_t7830 *, Predicate_1_t7837 *, const MethodInfo*))List_1_Find_m53797_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m53798_gshared (Object_t * __this /* static, unused */, Predicate_1_t7837 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m53798(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7837 *, const MethodInfo*))List_1_CheckMatch_m53798_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m53799_gshared (List_1_t7830 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7837 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m53799(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7830 *, int32_t, int32_t, Predicate_1_t7837 *, const MethodInfo*))List_1_GetIndex_m53799_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetEnumerator()
extern "C" Enumerator_t7831  List_1_GetEnumerator_m53800_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m53800(__this, method) (( Enumerator_t7831  (*) (List_1_t7830 *, const MethodInfo*))List_1_GetEnumerator_m53800_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7830 * List_1_GetRange_m53801_gshared (List_1_t7830 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m53801(__this, ___index, ___count, method) (( List_1_t7830 * (*) (List_1_t7830 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53801_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m53802_gshared (List_1_t7830 * __this, KeyValuePair_2_t7006  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53802(__this, ___item, method) (( int32_t (*) (List_1_t7830 *, KeyValuePair_2_t7006 , const MethodInfo*))List_1_IndexOf_m53802_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m53803_gshared (List_1_t7830 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m53803(__this, ___start, ___delta, method) (( void (*) (List_1_t7830 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53803_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m53804_gshared (List_1_t7830 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m53804(__this, ___index, method) (( void (*) (List_1_t7830 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53804_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m53805_gshared (List_1_t7830 * __this, int32_t ___index, KeyValuePair_2_t7006  ___item, const MethodInfo* method);
#define List_1_Insert_m53805(__this, ___index, ___item, method) (( void (*) (List_1_t7830 *, int32_t, KeyValuePair_2_t7006 , const MethodInfo*))List_1_Insert_m53805_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m53806_gshared (List_1_t7830 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m53806(__this, ___collection, method) (( void (*) (List_1_t7830 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53806_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m53807_gshared (List_1_t7830 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m53807(__this, ___index, ___collection, method) (( void (*) (List_1_t7830 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53807_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m53808_gshared (List_1_t7830 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m53808(__this, ___index, ___collection, method) (( void (*) (List_1_t7830 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53808_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m53809_gshared (List_1_t7830 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m53809(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7830 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53809_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Remove(T)
extern "C" bool List_1_Remove_m53810_gshared (List_1_t7830 * __this, KeyValuePair_2_t7006  ___item, const MethodInfo* method);
#define List_1_Remove_m53810(__this, ___item, method) (( bool (*) (List_1_t7830 *, KeyValuePair_2_t7006 , const MethodInfo*))List_1_Remove_m53810_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m53811_gshared (List_1_t7830 * __this, Predicate_1_t7837 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m53811(__this, ___match, method) (( int32_t (*) (List_1_t7830 *, Predicate_1_t7837 *, const MethodInfo*))List_1_RemoveAll_m53811_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m53812_gshared (List_1_t7830 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m53812(__this, ___index, method) (( void (*) (List_1_t7830 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53812_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m53813_gshared (List_1_t7830 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m53813(__this, ___index, ___count, method) (( void (*) (List_1_t7830 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53813_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Reverse()
extern "C" void List_1_Reverse_m53814_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_Reverse_m53814(__this, method) (( void (*) (List_1_t7830 *, const MethodInfo*))List_1_Reverse_m53814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort()
extern "C" void List_1_Sort_m53815_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_Sort_m53815(__this, method) (( void (*) (List_1_t7830 *, const MethodInfo*))List_1_Sort_m53815_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m53816_gshared (List_1_t7830 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m53816(__this, ___comparer, method) (( void (*) (List_1_t7830 *, Object_t*, const MethodInfo*))List_1_Sort_m53816_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m53817_gshared (List_1_t7830 * __this, Comparison_1_t7840 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m53817(__this, ___comparison, method) (( void (*) (List_1_t7830 *, Comparison_1_t7840 *, const MethodInfo*))List_1_Sort_m53817_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7829* List_1_ToArray_m53818_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_ToArray_m53818(__this, method) (( KeyValuePair_2U5BU5D_t7829* (*) (List_1_t7830 *, const MethodInfo*))List_1_ToArray_m53818_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::TrimExcess()
extern "C" void List_1_TrimExcess_m53819_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m53819(__this, method) (( void (*) (List_1_t7830 *, const MethodInfo*))List_1_TrimExcess_m53819_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m53820_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m53820(__this, method) (( int32_t (*) (List_1_t7830 *, const MethodInfo*))List_1_get_Capacity_m53820_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m53821_gshared (List_1_t7830 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m53821(__this, ___value, method) (( void (*) (List_1_t7830 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53821_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Count()
extern "C" int32_t List_1_get_Count_m53822_gshared (List_1_t7830 * __this, const MethodInfo* method);
#define List_1_get_Count_m53822(__this, method) (( int32_t (*) (List_1_t7830 *, const MethodInfo*))List_1_get_Count_m53822_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7006  List_1_get_Item_m53823_gshared (List_1_t7830 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m53823(__this, ___index, method) (( KeyValuePair_2_t7006  (*) (List_1_t7830 *, int32_t, const MethodInfo*))List_1_get_Item_m53823_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m53824_gshared (List_1_t7830 * __this, int32_t ___index, KeyValuePair_2_t7006  ___value, const MethodInfo* method);
#define List_1_set_Item_m53824(__this, ___index, ___value, method) (( void (*) (List_1_t7830 *, int32_t, KeyValuePair_2_t7006 , const MethodInfo*))List_1_set_Item_m53824_gshared)(__this, ___index, ___value, method)

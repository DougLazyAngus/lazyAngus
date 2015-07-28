#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct List_1_t7814;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerable_1_t7194;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7813;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7195;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ICollection_1_t9301;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ReadOnlyCollection_1_t7817;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t7821;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IComparer_1_t9302;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Comparison_1_t7824;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void List_1__ctor_m53800_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1__ctor_m53800(__this, method) (( void (*) (List_1_t7814 *, const MethodInfo*))List_1__ctor_m53800_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m53801_gshared (List_1_t7814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m53801(__this, ___collection, method) (( void (*) (List_1_t7814 *, Object_t*, const MethodInfo*))List_1__ctor_m53801_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m53802_gshared (List_1_t7814 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m53802(__this, ___capacity, method) (( void (*) (List_1_t7814 *, int32_t, const MethodInfo*))List_1__ctor_m53802_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m53803_gshared (List_1_t7814 * __this, KeyValuePair_2U5BU5D_t7813* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m53803(__this, ___data, ___size, method) (( void (*) (List_1_t7814 *, KeyValuePair_2U5BU5D_t7813*, int32_t, const MethodInfo*))List_1__ctor_m53803_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.cctor()
extern "C" void List_1__cctor_m53804_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m53804(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53804_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53805_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53805(__this, method) (( Object_t* (*) (List_1_t7814 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53805_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m53806_gshared (List_1_t7814 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m53806(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7814 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53806_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m53807_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53807(__this, method) (( Object_t * (*) (List_1_t7814 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53807_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m53808_gshared (List_1_t7814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m53808(__this, ___item, method) (( int32_t (*) (List_1_t7814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53808_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m53809_gshared (List_1_t7814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m53809(__this, ___item, method) (( bool (*) (List_1_t7814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53809_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m53810_gshared (List_1_t7814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m53810(__this, ___item, method) (( int32_t (*) (List_1_t7814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m53811_gshared (List_1_t7814 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m53811(__this, ___index, ___item, method) (( void (*) (List_1_t7814 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53811_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m53812_gshared (List_1_t7814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m53812(__this, ___item, method) (( void (*) (List_1_t7814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53812_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53813_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53813(__this, method) (( bool (*) (List_1_t7814 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m53814_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53814(__this, method) (( bool (*) (List_1_t7814 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53814_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m53815_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m53815(__this, method) (( Object_t * (*) (List_1_t7814 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m53816_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m53816(__this, method) (( bool (*) (List_1_t7814 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m53817_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m53817(__this, method) (( bool (*) (List_1_t7814 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53817_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m53818_gshared (List_1_t7814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m53818(__this, ___index, method) (( Object_t * (*) (List_1_t7814 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53818_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m53819_gshared (List_1_t7814 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m53819(__this, ___index, ___value, method) (( void (*) (List_1_t7814 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53819_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Add(T)
extern "C" void List_1_Add_m53820_gshared (List_1_t7814 * __this, KeyValuePair_2_t6919  ___item, const MethodInfo* method);
#define List_1_Add_m53820(__this, ___item, method) (( void (*) (List_1_t7814 *, KeyValuePair_2_t6919 , const MethodInfo*))List_1_Add_m53820_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m53821_gshared (List_1_t7814 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m53821(__this, ___newCount, method) (( void (*) (List_1_t7814 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53821_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m53822_gshared (List_1_t7814 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m53822(__this, ___idx, ___count, method) (( void (*) (List_1_t7814 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53822_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m53823_gshared (List_1_t7814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m53823(__this, ___collection, method) (( void (*) (List_1_t7814 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53823_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m53824_gshared (List_1_t7814 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m53824(__this, ___enumerable, method) (( void (*) (List_1_t7814 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53824_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m53825_gshared (List_1_t7814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m53825(__this, ___collection, method) (( void (*) (List_1_t7814 *, Object_t*, const MethodInfo*))List_1_AddRange_m53825_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7817 * List_1_AsReadOnly_m53826_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m53826(__this, method) (( ReadOnlyCollection_1_t7817 * (*) (List_1_t7814 *, const MethodInfo*))List_1_AsReadOnly_m53826_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Clear()
extern "C" void List_1_Clear_m53827_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_Clear_m53827(__this, method) (( void (*) (List_1_t7814 *, const MethodInfo*))List_1_Clear_m53827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Contains(T)
extern "C" bool List_1_Contains_m53828_gshared (List_1_t7814 * __this, KeyValuePair_2_t6919  ___item, const MethodInfo* method);
#define List_1_Contains_m53828(__this, ___item, method) (( bool (*) (List_1_t7814 *, KeyValuePair_2_t6919 , const MethodInfo*))List_1_Contains_m53828_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m53829_gshared (List_1_t7814 * __this, KeyValuePair_2U5BU5D_t7813* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m53829(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7814 *, KeyValuePair_2U5BU5D_t7813*, int32_t, const MethodInfo*))List_1_CopyTo_m53829_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6919  List_1_Find_m53830_gshared (List_1_t7814 * __this, Predicate_1_t7821 * ___match, const MethodInfo* method);
#define List_1_Find_m53830(__this, ___match, method) (( KeyValuePair_2_t6919  (*) (List_1_t7814 *, Predicate_1_t7821 *, const MethodInfo*))List_1_Find_m53830_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m53831_gshared (Object_t * __this /* static, unused */, Predicate_1_t7821 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m53831(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7821 *, const MethodInfo*))List_1_CheckMatch_m53831_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m53832_gshared (List_1_t7814 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7821 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m53832(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7814 *, int32_t, int32_t, Predicate_1_t7821 *, const MethodInfo*))List_1_GetIndex_m53832_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetEnumerator()
extern "C" Enumerator_t7815  List_1_GetEnumerator_m53833_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m53833(__this, method) (( Enumerator_t7815  (*) (List_1_t7814 *, const MethodInfo*))List_1_GetEnumerator_m53833_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7814 * List_1_GetRange_m53834_gshared (List_1_t7814 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m53834(__this, ___index, ___count, method) (( List_1_t7814 * (*) (List_1_t7814 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53834_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m53835_gshared (List_1_t7814 * __this, KeyValuePair_2_t6919  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53835(__this, ___item, method) (( int32_t (*) (List_1_t7814 *, KeyValuePair_2_t6919 , const MethodInfo*))List_1_IndexOf_m53835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m53836_gshared (List_1_t7814 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m53836(__this, ___start, ___delta, method) (( void (*) (List_1_t7814 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53836_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m53837_gshared (List_1_t7814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m53837(__this, ___index, method) (( void (*) (List_1_t7814 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53837_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m53838_gshared (List_1_t7814 * __this, int32_t ___index, KeyValuePair_2_t6919  ___item, const MethodInfo* method);
#define List_1_Insert_m53838(__this, ___index, ___item, method) (( void (*) (List_1_t7814 *, int32_t, KeyValuePair_2_t6919 , const MethodInfo*))List_1_Insert_m53838_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m53839_gshared (List_1_t7814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m53839(__this, ___collection, method) (( void (*) (List_1_t7814 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53839_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m53840_gshared (List_1_t7814 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m53840(__this, ___index, ___collection, method) (( void (*) (List_1_t7814 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53840_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m53841_gshared (List_1_t7814 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m53841(__this, ___index, ___collection, method) (( void (*) (List_1_t7814 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53841_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m53842_gshared (List_1_t7814 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m53842(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7814 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53842_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Remove(T)
extern "C" bool List_1_Remove_m53843_gshared (List_1_t7814 * __this, KeyValuePair_2_t6919  ___item, const MethodInfo* method);
#define List_1_Remove_m53843(__this, ___item, method) (( bool (*) (List_1_t7814 *, KeyValuePair_2_t6919 , const MethodInfo*))List_1_Remove_m53843_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m53844_gshared (List_1_t7814 * __this, Predicate_1_t7821 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m53844(__this, ___match, method) (( int32_t (*) (List_1_t7814 *, Predicate_1_t7821 *, const MethodInfo*))List_1_RemoveAll_m53844_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m53845_gshared (List_1_t7814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m53845(__this, ___index, method) (( void (*) (List_1_t7814 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53845_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m53846_gshared (List_1_t7814 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m53846(__this, ___index, ___count, method) (( void (*) (List_1_t7814 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53846_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Reverse()
extern "C" void List_1_Reverse_m53847_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_Reverse_m53847(__this, method) (( void (*) (List_1_t7814 *, const MethodInfo*))List_1_Reverse_m53847_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort()
extern "C" void List_1_Sort_m53848_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_Sort_m53848(__this, method) (( void (*) (List_1_t7814 *, const MethodInfo*))List_1_Sort_m53848_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m53849_gshared (List_1_t7814 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m53849(__this, ___comparer, method) (( void (*) (List_1_t7814 *, Object_t*, const MethodInfo*))List_1_Sort_m53849_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m53850_gshared (List_1_t7814 * __this, Comparison_1_t7824 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m53850(__this, ___comparison, method) (( void (*) (List_1_t7814 *, Comparison_1_t7824 *, const MethodInfo*))List_1_Sort_m53850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7813* List_1_ToArray_m53851_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_ToArray_m53851(__this, method) (( KeyValuePair_2U5BU5D_t7813* (*) (List_1_t7814 *, const MethodInfo*))List_1_ToArray_m53851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::TrimExcess()
extern "C" void List_1_TrimExcess_m53852_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m53852(__this, method) (( void (*) (List_1_t7814 *, const MethodInfo*))List_1_TrimExcess_m53852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m53853_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m53853(__this, method) (( int32_t (*) (List_1_t7814 *, const MethodInfo*))List_1_get_Capacity_m53853_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m53854_gshared (List_1_t7814 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m53854(__this, ___value, method) (( void (*) (List_1_t7814 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53854_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Count()
extern "C" int32_t List_1_get_Count_m53855_gshared (List_1_t7814 * __this, const MethodInfo* method);
#define List_1_get_Count_m53855(__this, method) (( int32_t (*) (List_1_t7814 *, const MethodInfo*))List_1_get_Count_m53855_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6919  List_1_get_Item_m53856_gshared (List_1_t7814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m53856(__this, ___index, method) (( KeyValuePair_2_t6919  (*) (List_1_t7814 *, int32_t, const MethodInfo*))List_1_get_Item_m53856_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m53857_gshared (List_1_t7814 * __this, int32_t ___index, KeyValuePair_2_t6919  ___value, const MethodInfo* method);
#define List_1_set_Item_m53857(__this, ___index, ___value, method) (( void (*) (List_1_t7814 *, int32_t, KeyValuePair_2_t6919 , const MethodInfo*))List_1_set_Item_m53857_gshared)(__this, ___index, ___value, method)

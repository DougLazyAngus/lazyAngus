#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct List_1_t7427;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerable_1_t7207;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7426;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerator_1_t7208;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ICollection_1_t9363;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ReadOnlyCollection_1_t7430;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Predicate_1_t7434;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IComparer_1_t9364;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t7437;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void List_1__ctor_m48796_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1__ctor_m48796(__this, method) (( void (*) (List_1_t7427 *, const MethodInfo*))List_1__ctor_m48796_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m48797_gshared (List_1_t7427 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m48797(__this, ___collection, method) (( void (*) (List_1_t7427 *, Object_t*, const MethodInfo*))List_1__ctor_m48797_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m48798_gshared (List_1_t7427 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m48798(__this, ___capacity, method) (( void (*) (List_1_t7427 *, int32_t, const MethodInfo*))List_1__ctor_m48798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m48799_gshared (List_1_t7427 * __this, KeyValuePair_2U5BU5D_t7426* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m48799(__this, ___data, ___size, method) (( void (*) (List_1_t7427 *, KeyValuePair_2U5BU5D_t7426*, int32_t, const MethodInfo*))List_1__ctor_m48799_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.cctor()
extern "C" void List_1__cctor_m48800_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m48800(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48800_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48801_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48801(__this, method) (( Object_t* (*) (List_1_t7427 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48801_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m48802_gshared (List_1_t7427 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m48802(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7427 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48802_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m48803_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48803(__this, method) (( Object_t * (*) (List_1_t7427 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48803_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m48804_gshared (List_1_t7427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m48804(__this, ___item, method) (( int32_t (*) (List_1_t7427 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48804_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m48805_gshared (List_1_t7427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m48805(__this, ___item, method) (( bool (*) (List_1_t7427 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48805_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m48806_gshared (List_1_t7427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m48806(__this, ___item, method) (( int32_t (*) (List_1_t7427 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48806_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m48807_gshared (List_1_t7427 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m48807(__this, ___index, ___item, method) (( void (*) (List_1_t7427 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48807_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m48808_gshared (List_1_t7427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m48808(__this, ___item, method) (( void (*) (List_1_t7427 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48808_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48809_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48809(__this, method) (( bool (*) (List_1_t7427 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m48810_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48810(__this, method) (( bool (*) (List_1_t7427 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48810_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m48811_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m48811(__this, method) (( Object_t * (*) (List_1_t7427 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48811_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m48812_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m48812(__this, method) (( bool (*) (List_1_t7427 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48812_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m48813_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m48813(__this, method) (( bool (*) (List_1_t7427 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48813_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m48814_gshared (List_1_t7427 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m48814(__this, ___index, method) (( Object_t * (*) (List_1_t7427 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48814_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m48815_gshared (List_1_t7427 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m48815(__this, ___index, ___value, method) (( void (*) (List_1_t7427 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48815_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Add(T)
extern "C" void List_1_Add_m48816_gshared (List_1_t7427 * __this, KeyValuePair_2_t7203  ___item, const MethodInfo* method);
#define List_1_Add_m48816(__this, ___item, method) (( void (*) (List_1_t7427 *, KeyValuePair_2_t7203 , const MethodInfo*))List_1_Add_m48816_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m48817_gshared (List_1_t7427 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m48817(__this, ___newCount, method) (( void (*) (List_1_t7427 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48817_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m48818_gshared (List_1_t7427 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m48818(__this, ___idx, ___count, method) (( void (*) (List_1_t7427 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48818_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m48819_gshared (List_1_t7427 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m48819(__this, ___collection, method) (( void (*) (List_1_t7427 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m48820_gshared (List_1_t7427 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m48820(__this, ___enumerable, method) (( void (*) (List_1_t7427 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48820_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m48821_gshared (List_1_t7427 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m48821(__this, ___collection, method) (( void (*) (List_1_t7427 *, Object_t*, const MethodInfo*))List_1_AddRange_m48821_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7430 * List_1_AsReadOnly_m48822_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m48822(__this, method) (( ReadOnlyCollection_1_t7430 * (*) (List_1_t7427 *, const MethodInfo*))List_1_AsReadOnly_m48822_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Clear()
extern "C" void List_1_Clear_m48823_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_Clear_m48823(__this, method) (( void (*) (List_1_t7427 *, const MethodInfo*))List_1_Clear_m48823_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Contains(T)
extern "C" bool List_1_Contains_m48824_gshared (List_1_t7427 * __this, KeyValuePair_2_t7203  ___item, const MethodInfo* method);
#define List_1_Contains_m48824(__this, ___item, method) (( bool (*) (List_1_t7427 *, KeyValuePair_2_t7203 , const MethodInfo*))List_1_Contains_m48824_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m48825_gshared (List_1_t7427 * __this, KeyValuePair_2U5BU5D_t7426* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m48825(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7427 *, KeyValuePair_2U5BU5D_t7426*, int32_t, const MethodInfo*))List_1_CopyTo_m48825_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7203  List_1_Find_m48826_gshared (List_1_t7427 * __this, Predicate_1_t7434 * ___match, const MethodInfo* method);
#define List_1_Find_m48826(__this, ___match, method) (( KeyValuePair_2_t7203  (*) (List_1_t7427 *, Predicate_1_t7434 *, const MethodInfo*))List_1_Find_m48826_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m48827_gshared (Object_t * __this /* static, unused */, Predicate_1_t7434 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m48827(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7434 *, const MethodInfo*))List_1_CheckMatch_m48827_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m48828_gshared (List_1_t7427 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7434 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m48828(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7427 *, int32_t, int32_t, Predicate_1_t7434 *, const MethodInfo*))List_1_GetIndex_m48828_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetEnumerator()
extern "C" Enumerator_t7428  List_1_GetEnumerator_m48829_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m48829(__this, method) (( Enumerator_t7428  (*) (List_1_t7427 *, const MethodInfo*))List_1_GetEnumerator_m48829_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7427 * List_1_GetRange_m48830_gshared (List_1_t7427 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m48830(__this, ___index, ___count, method) (( List_1_t7427 * (*) (List_1_t7427 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48830_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m48831_gshared (List_1_t7427 * __this, KeyValuePair_2_t7203  ___item, const MethodInfo* method);
#define List_1_IndexOf_m48831(__this, ___item, method) (( int32_t (*) (List_1_t7427 *, KeyValuePair_2_t7203 , const MethodInfo*))List_1_IndexOf_m48831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m48832_gshared (List_1_t7427 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m48832(__this, ___start, ___delta, method) (( void (*) (List_1_t7427 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48832_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m48833_gshared (List_1_t7427 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m48833(__this, ___index, method) (( void (*) (List_1_t7427 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48833_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m48834_gshared (List_1_t7427 * __this, int32_t ___index, KeyValuePair_2_t7203  ___item, const MethodInfo* method);
#define List_1_Insert_m48834(__this, ___index, ___item, method) (( void (*) (List_1_t7427 *, int32_t, KeyValuePair_2_t7203 , const MethodInfo*))List_1_Insert_m48834_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m48835_gshared (List_1_t7427 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m48835(__this, ___collection, method) (( void (*) (List_1_t7427 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48835_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m48836_gshared (List_1_t7427 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m48836(__this, ___index, ___collection, method) (( void (*) (List_1_t7427 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48836_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m48837_gshared (List_1_t7427 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m48837(__this, ___index, ___collection, method) (( void (*) (List_1_t7427 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48837_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m48838_gshared (List_1_t7427 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m48838(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7427 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48838_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Remove(T)
extern "C" bool List_1_Remove_m48839_gshared (List_1_t7427 * __this, KeyValuePair_2_t7203  ___item, const MethodInfo* method);
#define List_1_Remove_m48839(__this, ___item, method) (( bool (*) (List_1_t7427 *, KeyValuePair_2_t7203 , const MethodInfo*))List_1_Remove_m48839_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m48840_gshared (List_1_t7427 * __this, Predicate_1_t7434 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m48840(__this, ___match, method) (( int32_t (*) (List_1_t7427 *, Predicate_1_t7434 *, const MethodInfo*))List_1_RemoveAll_m48840_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m48841_gshared (List_1_t7427 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m48841(__this, ___index, method) (( void (*) (List_1_t7427 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m48842_gshared (List_1_t7427 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m48842(__this, ___index, ___count, method) (( void (*) (List_1_t7427 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48842_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Reverse()
extern "C" void List_1_Reverse_m48843_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_Reverse_m48843(__this, method) (( void (*) (List_1_t7427 *, const MethodInfo*))List_1_Reverse_m48843_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort()
extern "C" void List_1_Sort_m48844_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_Sort_m48844(__this, method) (( void (*) (List_1_t7427 *, const MethodInfo*))List_1_Sort_m48844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m48845_gshared (List_1_t7427 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m48845(__this, ___comparer, method) (( void (*) (List_1_t7427 *, Object_t*, const MethodInfo*))List_1_Sort_m48845_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m48846_gshared (List_1_t7427 * __this, Comparison_1_t7437 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m48846(__this, ___comparison, method) (( void (*) (List_1_t7427 *, Comparison_1_t7437 *, const MethodInfo*))List_1_Sort_m48846_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7426* List_1_ToArray_m48847_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_ToArray_m48847(__this, method) (( KeyValuePair_2U5BU5D_t7426* (*) (List_1_t7427 *, const MethodInfo*))List_1_ToArray_m48847_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m48848_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m48848(__this, method) (( void (*) (List_1_t7427 *, const MethodInfo*))List_1_TrimExcess_m48848_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m48849_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m48849(__this, method) (( int32_t (*) (List_1_t7427 *, const MethodInfo*))List_1_get_Capacity_m48849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m48850_gshared (List_1_t7427 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m48850(__this, ___value, method) (( void (*) (List_1_t7427 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48850_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Count()
extern "C" int32_t List_1_get_Count_m48851_gshared (List_1_t7427 * __this, const MethodInfo* method);
#define List_1_get_Count_m48851(__this, method) (( int32_t (*) (List_1_t7427 *, const MethodInfo*))List_1_get_Count_m48851_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7203  List_1_get_Item_m48852_gshared (List_1_t7427 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m48852(__this, ___index, method) (( KeyValuePair_2_t7203  (*) (List_1_t7427 *, int32_t, const MethodInfo*))List_1_get_Item_m48852_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m48853_gshared (List_1_t7427 * __this, int32_t ___index, KeyValuePair_2_t7203  ___value, const MethodInfo* method);
#define List_1_set_Item_m48853(__this, ___index, ___value, method) (( void (*) (List_1_t7427 *, int32_t, KeyValuePair_2_t7203 , const MethodInfo*))List_1_set_Item_m48853_gshared)(__this, ___index, ___value, method)

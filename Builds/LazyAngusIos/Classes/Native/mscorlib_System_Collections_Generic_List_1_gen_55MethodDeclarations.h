﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t4094;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3408;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4657;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t4097;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4027;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t4099;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t4686;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t4102;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m28238_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1__ctor_m28238(__this, method) (( void (*) (List_1_t4094 *, const MethodInfo*))List_1__ctor_m28238_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28240_gshared (List_1_t4094 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m28240(__this, ___collection, method) (( void (*) (List_1_t4094 *, Object_t*, const MethodInfo*))List_1__ctor_m28240_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m28242_gshared (List_1_t4094 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m28242(__this, ___capacity, method) (( void (*) (List_1_t4094 *, int32_t, const MethodInfo*))List_1__ctor_m28242_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m28244_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m28244(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m28244_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28245_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28245(__this, method) (( Object_t* (*) (List_1_t4094 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28245_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28246_gshared (List_1_t4094 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m28246(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4094 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m28246_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28247_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28247(__this, method) (( Object_t * (*) (List_1_t4094 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28247_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28248_gshared (List_1_t4094 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28248(__this, ___item, method) (( int32_t (*) (List_1_t4094 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m28248_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28249_gshared (List_1_t4094 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28249(__this, ___item, method) (( bool (*) (List_1_t4094 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m28249_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28250_gshared (List_1_t4094 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28250(__this, ___item, method) (( int32_t (*) (List_1_t4094 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m28250_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28251_gshared (List_1_t4094 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28251(__this, ___index, ___item, method) (( void (*) (List_1_t4094 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m28251_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28252_gshared (List_1_t4094 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28252(__this, ___item, method) (( void (*) (List_1_t4094 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m28252_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28253_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28253(__this, method) (( bool (*) (List_1_t4094 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28253_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28254_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28254(__this, method) (( bool (*) (List_1_t4094 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m28254_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28255_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m28255(__this, method) (( Object_t * (*) (List_1_t4094 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m28255_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28256_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28256(__this, method) (( bool (*) (List_1_t4094 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28257_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m28257(__this, method) (( bool (*) (List_1_t4094 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m28257_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28258_gshared (List_1_t4094 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28258(__this, ___index, method) (( Object_t * (*) (List_1_t4094 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m28258_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28259_gshared (List_1_t4094 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28259(__this, ___index, ___value, method) (( void (*) (List_1_t4094 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m28259_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m28260_gshared (List_1_t4094 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Add_m28260(__this, ___item, method) (( void (*) (List_1_t4094 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Add_m28260_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28262_gshared (List_1_t4094 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m28262(__this, ___newCount, method) (( void (*) (List_1_t4094 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m28262_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28264_gshared (List_1_t4094 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m28264(__this, ___collection, method) (( void (*) (List_1_t4094 *, Object_t*, const MethodInfo*))List_1_AddCollection_m28264_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28266_gshared (List_1_t4094 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m28266(__this, ___enumerable, method) (( void (*) (List_1_t4094 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m28266_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28268_gshared (List_1_t4094 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m28268(__this, ___collection, method) (( void (*) (List_1_t4094 *, Object_t*, const MethodInfo*))List_1_AddRange_m28268_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t4097 * List_1_AsReadOnly_m28270_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m28270(__this, method) (( ReadOnlyCollection_1_t4097 * (*) (List_1_t4094 *, const MethodInfo*))List_1_AsReadOnly_m28270_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m28271_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_Clear_m28271(__this, method) (( void (*) (List_1_t4094 *, const MethodInfo*))List_1_Clear_m28271_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m28272_gshared (List_1_t4094 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Contains_m28272(__this, ___item, method) (( bool (*) (List_1_t4094 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Contains_m28272_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28273_gshared (List_1_t4094 * __this, KeyValuePair_2U5BU5D_t4027* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m28273(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4094 *, KeyValuePair_2U5BU5D_t4027*, int32_t, const MethodInfo*))List_1_CopyTo_m28273_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t40  List_1_Find_m28275_gshared (List_1_t4094 * __this, Predicate_1_t4099 * ___match, const MethodInfo* method);
#define List_1_Find_m28275(__this, ___match, method) (( KeyValuePair_2_t40  (*) (List_1_t4094 *, Predicate_1_t4099 *, const MethodInfo*))List_1_Find_m28275_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28277_gshared (Object_t * __this /* static, unused */, Predicate_1_t4099 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m28277(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4099 *, const MethodInfo*))List_1_CheckMatch_m28277_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28279_gshared (List_1_t4094 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4099 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m28279(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4094 *, int32_t, int32_t, Predicate_1_t4099 *, const MethodInfo*))List_1_GetIndex_m28279_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t4095  List_1_GetEnumerator_m28280_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28280(__this, method) (( Enumerator_t4095  (*) (List_1_t4094 *, const MethodInfo*))List_1_GetEnumerator_m28280_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28281_gshared (List_1_t4094 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_IndexOf_m28281(__this, ___item, method) (( int32_t (*) (List_1_t4094 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_IndexOf_m28281_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28283_gshared (List_1_t4094 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m28283(__this, ___start, ___delta, method) (( void (*) (List_1_t4094 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m28283_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28285_gshared (List_1_t4094 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m28285(__this, ___index, method) (( void (*) (List_1_t4094 *, int32_t, const MethodInfo*))List_1_CheckIndex_m28285_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28286_gshared (List_1_t4094 * __this, int32_t ___index, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Insert_m28286(__this, ___index, ___item, method) (( void (*) (List_1_t4094 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_Insert_m28286_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28288_gshared (List_1_t4094 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m28288(__this, ___collection, method) (( void (*) (List_1_t4094 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m28288_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m28289_gshared (List_1_t4094 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Remove_m28289(__this, ___item, method) (( bool (*) (List_1_t4094 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Remove_m28289_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m28291_gshared (List_1_t4094 * __this, Predicate_1_t4099 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m28291(__this, ___match, method) (( int32_t (*) (List_1_t4094 *, Predicate_1_t4099 *, const MethodInfo*))List_1_RemoveAll_m28291_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28292_gshared (List_1_t4094 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m28292(__this, ___index, method) (( void (*) (List_1_t4094 *, int32_t, const MethodInfo*))List_1_RemoveAt_m28292_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m28294_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_Reverse_m28294(__this, method) (( void (*) (List_1_t4094 *, const MethodInfo*))List_1_Reverse_m28294_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m28296_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_Sort_m28296(__this, method) (( void (*) (List_1_t4094 *, const MethodInfo*))List_1_Sort_m28296_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28298_gshared (List_1_t4094 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m28298(__this, ___comparer, method) (( void (*) (List_1_t4094 *, Object_t*, const MethodInfo*))List_1_Sort_m28298_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m28300_gshared (List_1_t4094 * __this, Comparison_1_t4102 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m28300(__this, ___comparison, method) (( void (*) (List_1_t4094 *, Comparison_1_t4102 *, const MethodInfo*))List_1_Sort_m28300_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t4027* List_1_ToArray_m28302_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_ToArray_m28302(__this, method) (( KeyValuePair_2U5BU5D_t4027* (*) (List_1_t4094 *, const MethodInfo*))List_1_ToArray_m28302_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m28304_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m28304(__this, method) (( void (*) (List_1_t4094 *, const MethodInfo*))List_1_TrimExcess_m28304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m28306_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m28306(__this, method) (( int32_t (*) (List_1_t4094 *, const MethodInfo*))List_1_get_Capacity_m28306_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m28308_gshared (List_1_t4094 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m28308(__this, ___value, method) (( void (*) (List_1_t4094 *, int32_t, const MethodInfo*))List_1_set_Capacity_m28308_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m28309_gshared (List_1_t4094 * __this, const MethodInfo* method);
#define List_1_get_Count_m28309(__this, method) (( int32_t (*) (List_1_t4094 *, const MethodInfo*))List_1_get_Count_m28309_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t40  List_1_get_Item_m28310_gshared (List_1_t4094 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m28310(__this, ___index, method) (( KeyValuePair_2_t40  (*) (List_1_t4094 *, int32_t, const MethodInfo*))List_1_get_Item_m28310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28311_gshared (List_1_t4094 * __this, int32_t ___index, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define List_1_set_Item_m28311(__this, ___index, ___value, method) (( void (*) (List_1_t4094 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_set_Item_m28311_gshared)(__this, ___index, ___value, method)

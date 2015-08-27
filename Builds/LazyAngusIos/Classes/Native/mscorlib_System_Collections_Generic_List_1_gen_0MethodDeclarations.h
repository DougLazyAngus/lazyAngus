﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t685;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t711;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1186;
// System.Predicate`1<System.Object>
struct Predicate_1_t5428;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5651;
// System.Comparison`1<System.Object>
struct Comparison_1_t5434;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3728_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1__ctor_m3728(__this, method) (( void (*) (List_1_t685 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7491_gshared (List_1_t685 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7491(__this, ___collection, method) (( void (*) (List_1_t685 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21589_gshared (List_1_t685 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21589(__this, ___capacity, method) (( void (*) (List_1_t685 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m21591_gshared (List_1_t685 * __this, ObjectU5BU5D_t683* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m21591(__this, ___data, ___size, method) (( void (*) (List_1_t685 *, ObjectU5BU5D_t683*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21593_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21593(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384(__this, method) (( Object_t* (*) (List_1_t685 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10367_gshared (List_1_t685 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10367(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t685 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10363(__this, method) (( Object_t * (*) (List_1_t685 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10372_gshared (List_1_t685 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10372(__this, ___item, method) (( int32_t (*) (List_1_t685 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10374_gshared (List_1_t685 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10374(__this, ___item, method) (( bool (*) (List_1_t685 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10375_gshared (List_1_t685 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10375(__this, ___item, method) (( int32_t (*) (List_1_t685 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10376_gshared (List_1_t685 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10376(__this, ___index, ___item, method) (( void (*) (List_1_t685 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10377_gshared (List_1_t685 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10377(__this, ___item, method) (( void (*) (List_1_t685 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379(__this, method) (( bool (*) (List_1_t685 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10365(__this, method) (( bool (*) (List_1_t685 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10366(__this, method) (( Object_t * (*) (List_1_t685 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10368(__this, method) (( bool (*) (List_1_t685 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10369(__this, method) (( bool (*) (List_1_t685 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10370_gshared (List_1_t685 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10370(__this, ___index, method) (( Object_t * (*) (List_1_t685 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10371_gshared (List_1_t685 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10371(__this, ___index, ___value, method) (( void (*) (List_1_t685 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10380_gshared (List_1_t685 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10380(__this, ___item, method) (( void (*) (List_1_t685 *, Object_t *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21611_gshared (List_1_t685 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21611(__this, ___newCount, method) (( void (*) (List_1_t685 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m21613_gshared (List_1_t685 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m21613(__this, ___idx, ___count, method) (( void (*) (List_1_t685 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21615_gshared (List_1_t685 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21615(__this, ___collection, method) (( void (*) (List_1_t685 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21617_gshared (List_1_t685 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21617(__this, ___enumerable, method) (( void (*) (List_1_t685 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21619_gshared (List_1_t685 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21619(__this, ___collection, method) (( void (*) (List_1_t685 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1186 * List_1_AsReadOnly_m21621_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21621(__this, method) (( ReadOnlyCollection_1_t1186 * (*) (List_1_t685 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10373_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_Clear_m10373(__this, method) (( void (*) (List_1_t685 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10381_gshared (List_1_t685 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10381(__this, ___item, method) (( bool (*) (List_1_t685 *, Object_t *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10382_gshared (List_1_t685 * __this, ObjectU5BU5D_t683* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10382(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t685 *, ObjectU5BU5D_t683*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m21626_gshared (List_1_t685 * __this, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define List_1_Find_m21626(__this, ___match, method) (( Object_t * (*) (List_1_t685 *, Predicate_1_t5428 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21628_gshared (Object_t * __this /* static, unused */, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21628(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5428 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21630_gshared (List_1_t685 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21630(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t685 *, int32_t, int32_t, Predicate_1_t5428 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t747  List_1_GetEnumerator_m3884_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3884(__this, method) (( Enumerator_t747  (*) (List_1_t685 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t685 * List_1_GetRange_m21632_gshared (List_1_t685 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m21632(__this, ___index, ___count, method) (( List_1_t685 * (*) (List_1_t685 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10385_gshared (List_1_t685 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10385(__this, ___item, method) (( int32_t (*) (List_1_t685 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21635_gshared (List_1_t685 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21635(__this, ___start, ___delta, method) (( void (*) (List_1_t685 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21637_gshared (List_1_t685 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21637(__this, ___index, method) (( void (*) (List_1_t685 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10386_gshared (List_1_t685 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10386(__this, ___index, ___item, method) (( void (*) (List_1_t685 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21640_gshared (List_1_t685 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21640(__this, ___collection, method) (( void (*) (List_1_t685 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m21642_gshared (List_1_t685 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m21642(__this, ___index, ___collection, method) (( void (*) (List_1_t685 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m21644_gshared (List_1_t685 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m21644(__this, ___index, ___collection, method) (( void (*) (List_1_t685 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m21646_gshared (List_1_t685 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m21646(__this, ___index, ___enumerable, method) (( void (*) (List_1_t685 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10383_gshared (List_1_t685 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10383(__this, ___item, method) (( bool (*) (List_1_t685 *, Object_t *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21649_gshared (List_1_t685 * __this, Predicate_1_t5428 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21649(__this, ___match, method) (( int32_t (*) (List_1_t685 *, Predicate_1_t5428 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10378_gshared (List_1_t685 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10378(__this, ___index, method) (( void (*) (List_1_t685 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m21652_gshared (List_1_t685 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m21652(__this, ___index, ___count, method) (( void (*) (List_1_t685 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m21654_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_Reverse_m21654(__this, method) (( void (*) (List_1_t685 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m21656_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_Sort_m21656(__this, method) (( void (*) (List_1_t685 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21658_gshared (List_1_t685 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21658(__this, ___comparer, method) (( void (*) (List_1_t685 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21660_gshared (List_1_t685 * __this, Comparison_1_t5434 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21660(__this, ___comparison, method) (( void (*) (List_1_t685 *, Comparison_1_t5434 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t683* List_1_ToArray_m21662_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_ToArray_m21662(__this, method) (( ObjectU5BU5D_t683* (*) (List_1_t685 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m21664_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21664(__this, method) (( void (*) (List_1_t685 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21666_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21666(__this, method) (( int32_t (*) (List_1_t685 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21668_gshared (List_1_t685 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21668(__this, ___value, method) (( void (*) (List_1_t685 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10364_gshared (List_1_t685 * __this, const MethodInfo* method);
#define List_1_get_Count_m10364(__this, method) (( int32_t (*) (List_1_t685 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10387_gshared (List_1_t685 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10387(__this, ___index, method) (( Object_t * (*) (List_1_t685 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10388_gshared (List_1_t685 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10388(__this, ___index, ___value, method) (( void (*) (List_1_t685 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

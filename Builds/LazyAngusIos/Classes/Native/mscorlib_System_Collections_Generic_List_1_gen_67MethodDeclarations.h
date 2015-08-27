﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t5726;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t6371;
// System.Single[]
struct SingleU5BU5D_t583;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6372;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8939;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t5729;
// System.Predicate`1<System.Single>
struct Predicate_1_t5734;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t8940;
// System.Comparison`1<System.Single>
struct Comparison_1_t5738;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m27173_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1__ctor_m27173(__this, method) (( void (*) (List_1_t5726 *, const MethodInfo*))List_1__ctor_m27173_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27174_gshared (List_1_t5726 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m27174(__this, ___collection, method) (( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))List_1__ctor_m27174_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m27175_gshared (List_1_t5726 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m27175(__this, ___capacity, method) (( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))List_1__ctor_m27175_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m27176_gshared (List_1_t5726 * __this, SingleU5BU5D_t583* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m27176(__this, ___data, ___size, method) (( void (*) (List_1_t5726 *, SingleU5BU5D_t583*, int32_t, const MethodInfo*))List_1__ctor_m27176_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m27177_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m27177(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m27177_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27178_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27178(__this, method) (( Object_t* (*) (List_1_t5726 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27179_gshared (List_1_t5726 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m27179(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5726 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m27179_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m27180_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27180(__this, method) (( Object_t * (*) (List_1_t5726 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m27180_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m27181_gshared (List_1_t5726 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m27181(__this, ___item, method) (( int32_t (*) (List_1_t5726 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m27181_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m27182_gshared (List_1_t5726 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m27182(__this, ___item, method) (( bool (*) (List_1_t5726 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m27182_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m27183_gshared (List_1_t5726 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m27183(__this, ___item, method) (( int32_t (*) (List_1_t5726 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m27183_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m27184_gshared (List_1_t5726 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m27184(__this, ___index, ___item, method) (( void (*) (List_1_t5726 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m27184_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m27185_gshared (List_1_t5726 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m27185(__this, ___item, method) (( void (*) (List_1_t5726 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m27185_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27186_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27186(__this, method) (( bool (*) (List_1_t5726 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27186_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m27187_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27187(__this, method) (( bool (*) (List_1_t5726 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m27187_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m27188_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m27188(__this, method) (( Object_t * (*) (List_1_t5726 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m27188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m27189_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m27189(__this, method) (( bool (*) (List_1_t5726 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m27189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m27190_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m27190(__this, method) (( bool (*) (List_1_t5726 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m27190_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m27191_gshared (List_1_t5726 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m27191(__this, ___index, method) (( Object_t * (*) (List_1_t5726 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m27191_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m27192_gshared (List_1_t5726 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m27192(__this, ___index, ___value, method) (( void (*) (List_1_t5726 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m27192_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m27193_gshared (List_1_t5726 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m27193(__this, ___item, method) (( void (*) (List_1_t5726 *, float, const MethodInfo*))List_1_Add_m27193_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m27194_gshared (List_1_t5726 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m27194(__this, ___newCount, method) (( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m27194_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m27195_gshared (List_1_t5726 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m27195(__this, ___idx, ___count, method) (( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m27195_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m27196_gshared (List_1_t5726 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m27196(__this, ___collection, method) (( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))List_1_AddCollection_m27196_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m27197_gshared (List_1_t5726 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m27197(__this, ___enumerable, method) (( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m27197_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m27198_gshared (List_1_t5726 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m27198(__this, ___collection, method) (( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))List_1_AddRange_m27198_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5729 * List_1_AsReadOnly_m27199_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m27199(__this, method) (( ReadOnlyCollection_1_t5729 * (*) (List_1_t5726 *, const MethodInfo*))List_1_AsReadOnly_m27199_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m27200_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_Clear_m27200(__this, method) (( void (*) (List_1_t5726 *, const MethodInfo*))List_1_Clear_m27200_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m27201_gshared (List_1_t5726 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m27201(__this, ___item, method) (( bool (*) (List_1_t5726 *, float, const MethodInfo*))List_1_Contains_m27201_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m27202_gshared (List_1_t5726 * __this, SingleU5BU5D_t583* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m27202(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5726 *, SingleU5BU5D_t583*, int32_t, const MethodInfo*))List_1_CopyTo_m27202_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m27203_gshared (List_1_t5726 * __this, Predicate_1_t5734 * ___match, const MethodInfo* method);
#define List_1_Find_m27203(__this, ___match, method) (( float (*) (List_1_t5726 *, Predicate_1_t5734 *, const MethodInfo*))List_1_Find_m27203_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m27204_gshared (Object_t * __this /* static, unused */, Predicate_1_t5734 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m27204(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5734 *, const MethodInfo*))List_1_CheckMatch_m27204_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m27205_gshared (List_1_t5726 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5734 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m27205(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5726 *, int32_t, int32_t, Predicate_1_t5734 *, const MethodInfo*))List_1_GetIndex_m27205_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t5727  List_1_GetEnumerator_m27206_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m27206(__this, method) (( Enumerator_t5727  (*) (List_1_t5726 *, const MethodInfo*))List_1_GetEnumerator_m27206_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t5726 * List_1_GetRange_m27207_gshared (List_1_t5726 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m27207(__this, ___index, ___count, method) (( List_1_t5726 * (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m27207_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m27208_gshared (List_1_t5726 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m27208(__this, ___item, method) (( int32_t (*) (List_1_t5726 *, float, const MethodInfo*))List_1_IndexOf_m27208_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m27209_gshared (List_1_t5726 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m27209(__this, ___start, ___delta, method) (( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m27209_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m27210_gshared (List_1_t5726 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m27210(__this, ___index, method) (( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))List_1_CheckIndex_m27210_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m27211_gshared (List_1_t5726 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m27211(__this, ___index, ___item, method) (( void (*) (List_1_t5726 *, int32_t, float, const MethodInfo*))List_1_Insert_m27211_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m27212_gshared (List_1_t5726 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m27212(__this, ___collection, method) (( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m27212_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m27213_gshared (List_1_t5726 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m27213(__this, ___index, ___collection, method) (( void (*) (List_1_t5726 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m27213_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m27214_gshared (List_1_t5726 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m27214(__this, ___index, ___collection, method) (( void (*) (List_1_t5726 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m27214_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m27215_gshared (List_1_t5726 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m27215(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5726 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m27215_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m27216_gshared (List_1_t5726 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m27216(__this, ___item, method) (( bool (*) (List_1_t5726 *, float, const MethodInfo*))List_1_Remove_m27216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m27217_gshared (List_1_t5726 * __this, Predicate_1_t5734 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m27217(__this, ___match, method) (( int32_t (*) (List_1_t5726 *, Predicate_1_t5734 *, const MethodInfo*))List_1_RemoveAll_m27217_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m27218_gshared (List_1_t5726 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m27218(__this, ___index, method) (( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))List_1_RemoveAt_m27218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m27219_gshared (List_1_t5726 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m27219(__this, ___index, ___count, method) (( void (*) (List_1_t5726 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m27219_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m27220_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_Reverse_m27220(__this, method) (( void (*) (List_1_t5726 *, const MethodInfo*))List_1_Reverse_m27220_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m27221_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_Sort_m27221(__this, method) (( void (*) (List_1_t5726 *, const MethodInfo*))List_1_Sort_m27221_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m27222_gshared (List_1_t5726 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m27222(__this, ___comparer, method) (( void (*) (List_1_t5726 *, Object_t*, const MethodInfo*))List_1_Sort_m27222_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m27223_gshared (List_1_t5726 * __this, Comparison_1_t5738 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m27223(__this, ___comparison, method) (( void (*) (List_1_t5726 *, Comparison_1_t5738 *, const MethodInfo*))List_1_Sort_m27223_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t583* List_1_ToArray_m27224_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_ToArray_m27224(__this, method) (( SingleU5BU5D_t583* (*) (List_1_t5726 *, const MethodInfo*))List_1_ToArray_m27224_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m27225_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m27225(__this, method) (( void (*) (List_1_t5726 *, const MethodInfo*))List_1_TrimExcess_m27225_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m27226_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m27226(__this, method) (( int32_t (*) (List_1_t5726 *, const MethodInfo*))List_1_get_Capacity_m27226_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m27227_gshared (List_1_t5726 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m27227(__this, ___value, method) (( void (*) (List_1_t5726 *, int32_t, const MethodInfo*))List_1_set_Capacity_m27227_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m27228_gshared (List_1_t5726 * __this, const MethodInfo* method);
#define List_1_get_Count_m27228(__this, method) (( int32_t (*) (List_1_t5726 *, const MethodInfo*))List_1_get_Count_m27228_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m27229_gshared (List_1_t5726 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m27229(__this, ___index, method) (( float (*) (List_1_t5726 *, int32_t, const MethodInfo*))List_1_get_Item_m27229_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m27230_gshared (List_1_t5726 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m27230(__this, ___index, ___value, method) (( void (*) (List_1_t5726 *, int32_t, float, const MethodInfo*))List_1_set_Item_m27230_gshared)(__this, ___index, ___value, method)

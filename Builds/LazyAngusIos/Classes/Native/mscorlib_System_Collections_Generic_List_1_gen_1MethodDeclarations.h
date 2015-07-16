﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t73;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t563;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4163;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1245;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t3369;
// System.String[]
struct StringU5BU5D_t45;
// System.Predicate`1<System.String>
struct Predicate_1_t3370;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t3308;
// System.Comparison`1<System.String>
struct Comparison_1_t3371;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m2638(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1__ctor_m2643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m2749(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1__ctor_m16852_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m2939(__this, ___capacity, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1__ctor_m16854_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m17487(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16856_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17488(__this, method) (( Object_t* (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6876_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17489(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t73 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6859_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17490(__this, method) (( Object_t * (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17491(__this, ___item, method) (( int32_t (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6864_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17492(__this, ___item, method) (( bool (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17493(__this, ___item, method) (( int32_t (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6867_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17494(__this, ___index, ___item, method) (( void (*) (List_1_t73 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17495(__this, ___item, method) (( void (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6869_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17496(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17497(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6857_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17498(__this, method) (( Object_t * (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17499(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17500(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6861_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17501(__this, ___index, method) (( Object_t * (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6862_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17502(__this, ___index, ___value, method) (( void (*) (List_1_t73 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6863_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m17503(__this, ___item, method) (( void (*) (List_1_t73 *, String_t*, const MethodInfo*))List_1_Add_m6872_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17504(__this, ___newCount, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16874_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17505(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17506(__this, ___enumerable, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16878_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17507(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_AddRange_m16880_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.String>::AsReadOnly()
#define List_1_AsReadOnly_m17508(__this, method) (( ReadOnlyCollection_1_t3369 * (*) (List_1_t73 *, const MethodInfo*))List_1_AsReadOnly_m16882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m17509(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_Clear_m6865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m17510(__this, ___item, method) (( bool (*) (List_1_t73 *, String_t*, const MethodInfo*))List_1_Contains_m6873_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17511(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t73 *, StringU5BU5D_t45*, int32_t, const MethodInfo*))List_1_CopyTo_m6874_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.String>::Find(System.Predicate`1<T>)
#define List_1_Find_m17512(__this, ___match, method) (( String_t* (*) (List_1_t73 *, Predicate_1_t3370 *, const MethodInfo*))List_1_Find_m16887_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17513(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3370 *, const MethodInfo*))List_1_CheckMatch_m16889_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17514(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t73 *, int32_t, int32_t, Predicate_1_t3370 *, const MethodInfo*))List_1_GetIndex_m16891_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m2691(__this, method) (( Enumerator_t580  (*) (List_1_t73 *, const MethodInfo*))List_1_GetEnumerator_m2746_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m17515(__this, ___item, method) (( int32_t (*) (List_1_t73 *, String_t*, const MethodInfo*))List_1_IndexOf_m6877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17516(__this, ___start, ___delta, method) (( void (*) (List_1_t73 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16894_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17517(__this, ___index, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16896_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m17518(__this, ___index, ___item, method) (( void (*) (List_1_t73 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m6878_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17519(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16899_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m17520(__this, ___item, method) (( bool (*) (List_1_t73 *, String_t*, const MethodInfo*))List_1_Remove_m6875_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17521(__this, ___match, method) (( int32_t (*) (List_1_t73 *, Predicate_1_t3370 *, const MethodInfo*))List_1_RemoveAll_m16902_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17522(__this, ___index, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6870_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Reverse()
#define List_1_Reverse_m17523(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_Reverse_m16905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort()
#define List_1_Sort_m17524(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_Sort_m16907_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m17525(__this, ___comparer, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_Sort_m16909_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17526(__this, ___comparison, method) (( void (*) (List_1_t73 *, Comparison_1_t3371 *, const MethodInfo*))List_1_Sort_m16911_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m15925(__this, method) (( StringU5BU5D_t45* (*) (List_1_t73 *, const MethodInfo*))List_1_ToArray_m16913_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::TrimExcess()
#define List_1_TrimExcess_m17527(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_TrimExcess_m16915_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m17528(__this, method) (( int32_t (*) (List_1_t73 *, const MethodInfo*))List_1_get_Capacity_m16917_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17529(__this, ___value, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16919_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m17530(__this, method) (( int32_t (*) (List_1_t73 *, const MethodInfo*))List_1_get_Count_m6856_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m17531(__this, ___index, method) (( String_t* (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_get_Item_m6879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m17532(__this, ___index, ___value, method) (( void (*) (List_1_t73 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m6880_gshared)(__this, ___index, ___value, method)

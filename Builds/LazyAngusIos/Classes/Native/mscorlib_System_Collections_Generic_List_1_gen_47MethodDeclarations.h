﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Exception>
struct List_1_t2148;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t1414;
// System.Exception[]
struct ExceptionU5BU5D_t8339;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t2149;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Exception>
struct ICollection_1_t9581;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t1338;
// System.Predicate`1<System.Exception>
struct Predicate_1_t8340;
// System.Collections.Generic.IComparer`1<System.Exception>
struct IComparer_1_t9582;
// System.Comparison`1<System.Exception>
struct Comparison_1_t8342;
// System.Collections.Generic.List`1/Enumerator<System.Exception>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_97.h"

// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7814(__this, method) (( void (*) (List_1_t2148 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59694(__this, ___collection, method) (( void (*) (List_1_t2148 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
#define List_1__ctor_m59695(__this, ___capacity, method) (( void (*) (List_1_t2148 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(T[],System.Int32)
#define List_1__ctor_m59696(__this, ___data, ___size, method) (( void (*) (List_1_t2148 *, ExceptionU5BU5D_t8339*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.cctor()
#define List_1__cctor_m59697(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59698(__this, method) (( Object_t* (*) (List_1_t2148 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59699(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2148 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Exception>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59700(__this, method) (( Object_t * (*) (List_1_t2148 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59701(__this, ___item, method) (( int32_t (*) (List_1_t2148 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59702(__this, ___item, method) (( bool (*) (List_1_t2148 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59703(__this, ___item, method) (( int32_t (*) (List_1_t2148 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59704(__this, ___index, ___item, method) (( void (*) (List_1_t2148 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59705(__this, ___item, method) (( void (*) (List_1_t2148 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59706(__this, method) (( bool (*) (List_1_t2148 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59707(__this, method) (( bool (*) (List_1_t2148 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59708(__this, method) (( Object_t * (*) (List_1_t2148 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59709(__this, method) (( bool (*) (List_1_t2148 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59710(__this, method) (( bool (*) (List_1_t2148 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59711(__this, ___index, method) (( Object_t * (*) (List_1_t2148 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59712(__this, ___index, ___value, method) (( void (*) (List_1_t2148 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
#define List_1_Add_m59713(__this, ___item, method) (( void (*) (List_1_t2148 *, Exception_t57 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59714(__this, ___newCount, method) (( void (*) (List_1_t2148 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59715(__this, ___idx, ___count, method) (( void (*) (List_1_t2148 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59716(__this, ___collection, method) (( void (*) (List_1_t2148 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59717(__this, ___enumerable, method) (( void (*) (List_1_t2148 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m7815(__this, ___collection, method) (( void (*) (List_1_t2148 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Exception>::AsReadOnly()
#define List_1_AsReadOnly_m59718(__this, method) (( ReadOnlyCollection_1_t1338 * (*) (List_1_t2148 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
#define List_1_Clear_m59719(__this, method) (( void (*) (List_1_t2148 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Contains(T)
#define List_1_Contains_m59720(__this, ___item, method) (( bool (*) (List_1_t2148 *, Exception_t57 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59721(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2148 *, ExceptionU5BU5D_t8339*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Exception>::Find(System.Predicate`1<T>)
#define List_1_Find_m59722(__this, ___match, method) (( Exception_t57 * (*) (List_1_t2148 *, Predicate_1_t8340 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59723(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8340 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59724(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2148 *, int32_t, int32_t, Predicate_1_t8340 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Exception>::GetEnumerator()
#define List_1_GetEnumerator_m59725(__this, method) (( Enumerator_t8341  (*) (List_1_t2148 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59726(__this, ___index, ___count, method) (( List_1_t2148 * (*) (List_1_t2148 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::IndexOf(T)
#define List_1_IndexOf_m59727(__this, ___item, method) (( int32_t (*) (List_1_t2148 *, Exception_t57 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59728(__this, ___start, ___delta, method) (( void (*) (List_1_t2148 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59729(__this, ___index, method) (( void (*) (List_1_t2148 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Insert(System.Int32,T)
#define List_1_Insert_m59730(__this, ___index, ___item, method) (( void (*) (List_1_t2148 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59731(__this, ___collection, method) (( void (*) (List_1_t2148 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59732(__this, ___index, ___collection, method) (( void (*) (List_1_t2148 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59733(__this, ___index, ___collection, method) (( void (*) (List_1_t2148 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59734(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2148 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Remove(T)
#define List_1_Remove_m59735(__this, ___item, method) (( bool (*) (List_1_t2148 *, Exception_t57 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59736(__this, ___match, method) (( int32_t (*) (List_1_t2148 *, Predicate_1_t8340 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59737(__this, ___index, method) (( void (*) (List_1_t2148 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59738(__this, ___index, ___count, method) (( void (*) (List_1_t2148 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Reverse()
#define List_1_Reverse_m59739(__this, method) (( void (*) (List_1_t2148 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort()
#define List_1_Sort_m59740(__this, method) (( void (*) (List_1_t2148 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59741(__this, ___comparer, method) (( void (*) (List_1_t2148 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59742(__this, ___comparison, method) (( void (*) (List_1_t2148 *, Comparison_1_t8342 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
#define List_1_ToArray_m59743(__this, method) (( ExceptionU5BU5D_t8339* (*) (List_1_t2148 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::TrimExcess()
#define List_1_TrimExcess_m59744(__this, method) (( void (*) (List_1_t2148 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Capacity()
#define List_1_get_Capacity_m59745(__this, method) (( int32_t (*) (List_1_t2148 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59746(__this, ___value, method) (( void (*) (List_1_t2148 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
#define List_1_get_Count_m59747(__this, method) (( int32_t (*) (List_1_t2148 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
#define List_1_get_Item_m59748(__this, ___index, method) (( Exception_t57 * (*) (List_1_t2148 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Item(System.Int32,T)
#define List_1_set_Item_m59749(__this, ___index, ___value, method) (( void (*) (List_1_t2148 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

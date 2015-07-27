#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t1339;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t4665;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t4664;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t4630;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t4054;
// System.Type[]
struct TypeU5BU5D_t1200;
// System.Predicate`1<System.Type>
struct Predicate_1_t4055;
// System.Collections.Generic.IComparer`1<System.Type>
struct IComparer_1_t4666;
// System.Comparison`1<System.Type>
struct Comparison_1_t4057;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7225(__this, method) (( void (*) (List_1_t1339 *, const MethodInfo*))List_1__ctor_m3119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27798(__this, ___collection, method) (( void (*) (List_1_t1339 *, Object_t*, const MethodInfo*))List_1__ctor_m17400_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m27799(__this, ___capacity, method) (( void (*) (List_1_t1339 *, int32_t, const MethodInfo*))List_1__ctor_m17402_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m27800(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17404_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27801(__this, method) (( Object_t* (*) (List_1_t1339 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27802(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1339 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7409_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27803(__this, method) (( Object_t * (*) (List_1_t1339 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7405_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27804(__this, ___item, method) (( int32_t (*) (List_1_t1339 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7414_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27805(__this, ___item, method) (( bool (*) (List_1_t1339 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7416_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27806(__this, ___item, method) (( int32_t (*) (List_1_t1339 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7417_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27807(__this, ___index, ___item, method) (( void (*) (List_1_t1339 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7418_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27808(__this, ___item, method) (( void (*) (List_1_t1339 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7419_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27809(__this, method) (( bool (*) (List_1_t1339 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7421_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27810(__this, method) (( bool (*) (List_1_t1339 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7407_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27811(__this, method) (( Object_t * (*) (List_1_t1339 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7408_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27812(__this, method) (( bool (*) (List_1_t1339 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27813(__this, method) (( bool (*) (List_1_t1339 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27814(__this, ___index, method) (( Object_t * (*) (List_1_t1339 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7412_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27815(__this, ___index, ___value, method) (( void (*) (List_1_t1339 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m27816(__this, ___item, method) (( void (*) (List_1_t1339 *, Type_t *, const MethodInfo*))List_1_Add_m7422_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27817(__this, ___newCount, method) (( void (*) (List_1_t1339 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17422_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27818(__this, ___collection, method) (( void (*) (List_1_t1339 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27819(__this, ___enumerable, method) (( void (*) (List_1_t1339 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17426_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27820(__this, ___collection, method) (( void (*) (List_1_t1339 *, Object_t*, const MethodInfo*))List_1_AddRange_m17428_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m27821(__this, method) (( ReadOnlyCollection_1_t4054 * (*) (List_1_t1339 *, const MethodInfo*))List_1_AsReadOnly_m17430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m27822(__this, method) (( void (*) (List_1_t1339 *, const MethodInfo*))List_1_Clear_m7415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m27823(__this, ___item, method) (( bool (*) (List_1_t1339 *, Type_t *, const MethodInfo*))List_1_Contains_m7423_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27824(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1339 *, TypeU5BU5D_t1200*, int32_t, const MethodInfo*))List_1_CopyTo_m7424_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m27825(__this, ___match, method) (( Type_t * (*) (List_1_t1339 *, Predicate_1_t4055 *, const MethodInfo*))List_1_Find_m17435_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27826(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4055 *, const MethodInfo*))List_1_CheckMatch_m17437_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27827(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1339 *, int32_t, int32_t, Predicate_1_t4055 *, const MethodInfo*))List_1_GetIndex_m17439_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m27828(__this, method) (( Enumerator_t4056  (*) (List_1_t1339 *, const MethodInfo*))List_1_GetEnumerator_m3277_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m27829(__this, ___item, method) (( int32_t (*) (List_1_t1339 *, Type_t *, const MethodInfo*))List_1_IndexOf_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27830(__this, ___start, ___delta, method) (( void (*) (List_1_t1339 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17442_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27831(__this, ___index, method) (( void (*) (List_1_t1339 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17444_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m27832(__this, ___index, ___item, method) (( void (*) (List_1_t1339 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m7428_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27833(__this, ___collection, method) (( void (*) (List_1_t1339 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17447_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m27834(__this, ___item, method) (( bool (*) (List_1_t1339 *, Type_t *, const MethodInfo*))List_1_Remove_m7425_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27835(__this, ___match, method) (( int32_t (*) (List_1_t1339 *, Predicate_1_t4055 *, const MethodInfo*))List_1_RemoveAll_m17450_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27836(__this, ___index, method) (( void (*) (List_1_t1339 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7420_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m27837(__this, method) (( void (*) (List_1_t1339 *, const MethodInfo*))List_1_Reverse_m17453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m27838(__this, method) (( void (*) (List_1_t1339 *, const MethodInfo*))List_1_Sort_m17455_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27839(__this, ___comparer, method) (( void (*) (List_1_t1339 *, Object_t*, const MethodInfo*))List_1_Sort_m17457_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27840(__this, ___comparison, method) (( void (*) (List_1_t1339 *, Comparison_1_t4057 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m7226(__this, method) (( TypeU5BU5D_t1200* (*) (List_1_t1339 *, const MethodInfo*))List_1_ToArray_m17461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m27841(__this, method) (( void (*) (List_1_t1339 *, const MethodInfo*))List_1_TrimExcess_m17463_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m27842(__this, method) (( int32_t (*) (List_1_t1339 *, const MethodInfo*))List_1_get_Capacity_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27843(__this, ___value, method) (( void (*) (List_1_t1339 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17467_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m27844(__this, method) (( int32_t (*) (List_1_t1339 *, const MethodInfo*))List_1_get_Count_m7406_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m27845(__this, ___index, method) (( Type_t * (*) (List_1_t1339 *, int32_t, const MethodInfo*))List_1_get_Item_m7429_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m27846(__this, ___index, ___value, method) (( void (*) (List_1_t1339 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m7430_gshared)(__this, ___index, ___value, method)

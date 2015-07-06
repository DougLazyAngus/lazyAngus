#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t1259;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t4556;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t4555;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t4521;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t3959;
// System.Type[]
struct TypeU5BU5D_t1120;
// System.Predicate`1<System.Type>
struct Predicate_1_t3960;
// System.Collections.Generic.IComparer`1<System.Type>
struct IComparer_1_t4557;
// System.Comparison`1<System.Type>
struct Comparison_1_t3962;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6465(__this, method) (( void (*) (List_1_t1259 *, const MethodInfo*))List_1__ctor_m2481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26668(__this, ___collection, method) (( void (*) (List_1_t1259 *, Object_t*, const MethodInfo*))List_1__ctor_m16636_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m26669(__this, ___capacity, method) (( void (*) (List_1_t1259 *, int32_t, const MethodInfo*))List_1__ctor_m16638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m26670(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16640_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26671(__this, method) (( Object_t* (*) (List_1_t1259 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26672(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1259 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26673(__this, method) (( Object_t * (*) (List_1_t1259 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26674(__this, ___item, method) (( int32_t (*) (List_1_t1259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6646_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26675(__this, ___item, method) (( bool (*) (List_1_t1259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6648_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26676(__this, ___item, method) (( int32_t (*) (List_1_t1259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6649_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26677(__this, ___index, ___item, method) (( void (*) (List_1_t1259 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6650_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26678(__this, ___item, method) (( void (*) (List_1_t1259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6651_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26679(__this, method) (( bool (*) (List_1_t1259 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26680(__this, method) (( bool (*) (List_1_t1259 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6639_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26681(__this, method) (( Object_t * (*) (List_1_t1259 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26682(__this, method) (( bool (*) (List_1_t1259 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26683(__this, method) (( bool (*) (List_1_t1259 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26684(__this, ___index, method) (( Object_t * (*) (List_1_t1259 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26685(__this, ___index, ___value, method) (( void (*) (List_1_t1259 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6645_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m26686(__this, ___item, method) (( void (*) (List_1_t1259 *, Type_t *, const MethodInfo*))List_1_Add_m6654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26687(__this, ___newCount, method) (( void (*) (List_1_t1259 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16658_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26688(__this, ___collection, method) (( void (*) (List_1_t1259 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16660_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26689(__this, ___enumerable, method) (( void (*) (List_1_t1259 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16662_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26690(__this, ___collection, method) (( void (*) (List_1_t1259 *, Object_t*, const MethodInfo*))List_1_AddRange_m16664_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m26691(__this, method) (( ReadOnlyCollection_1_t3959 * (*) (List_1_t1259 *, const MethodInfo*))List_1_AsReadOnly_m16666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m26692(__this, method) (( void (*) (List_1_t1259 *, const MethodInfo*))List_1_Clear_m6647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m26693(__this, ___item, method) (( bool (*) (List_1_t1259 *, Type_t *, const MethodInfo*))List_1_Contains_m6655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26694(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1259 *, TypeU5BU5D_t1120*, int32_t, const MethodInfo*))List_1_CopyTo_m6656_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m26695(__this, ___match, method) (( Type_t * (*) (List_1_t1259 *, Predicate_1_t3960 *, const MethodInfo*))List_1_Find_m16671_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26696(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3960 *, const MethodInfo*))List_1_CheckMatch_m16673_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26697(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1259 *, int32_t, int32_t, Predicate_1_t3960 *, const MethodInfo*))List_1_GetIndex_m16675_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m26698(__this, method) (( Enumerator_t3961  (*) (List_1_t1259 *, const MethodInfo*))List_1_GetEnumerator_m2584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m26699(__this, ___item, method) (( int32_t (*) (List_1_t1259 *, Type_t *, const MethodInfo*))List_1_IndexOf_m6659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26700(__this, ___start, ___delta, method) (( void (*) (List_1_t1259 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16678_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26701(__this, ___index, method) (( void (*) (List_1_t1259 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m26702(__this, ___index, ___item, method) (( void (*) (List_1_t1259 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m6660_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26703(__this, ___collection, method) (( void (*) (List_1_t1259 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16683_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m26704(__this, ___item, method) (( bool (*) (List_1_t1259 *, Type_t *, const MethodInfo*))List_1_Remove_m6657_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26705(__this, ___match, method) (( int32_t (*) (List_1_t1259 *, Predicate_1_t3960 *, const MethodInfo*))List_1_RemoveAll_m16686_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26706(__this, ___index, method) (( void (*) (List_1_t1259 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6652_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m26707(__this, method) (( void (*) (List_1_t1259 *, const MethodInfo*))List_1_Reverse_m16689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m26708(__this, method) (( void (*) (List_1_t1259 *, const MethodInfo*))List_1_Sort_m16691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26709(__this, ___comparer, method) (( void (*) (List_1_t1259 *, Object_t*, const MethodInfo*))List_1_Sort_m16693_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26710(__this, ___comparison, method) (( void (*) (List_1_t1259 *, Comparison_1_t3962 *, const MethodInfo*))List_1_Sort_m16695_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m6466(__this, method) (( TypeU5BU5D_t1120* (*) (List_1_t1259 *, const MethodInfo*))List_1_ToArray_m16697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m26711(__this, method) (( void (*) (List_1_t1259 *, const MethodInfo*))List_1_TrimExcess_m16699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m26712(__this, method) (( int32_t (*) (List_1_t1259 *, const MethodInfo*))List_1_get_Capacity_m16701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26713(__this, ___value, method) (( void (*) (List_1_t1259 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16703_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m26714(__this, method) (( int32_t (*) (List_1_t1259 *, const MethodInfo*))List_1_get_Count_m6638_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m26715(__this, ___index, method) (( Type_t * (*) (List_1_t1259 *, int32_t, const MethodInfo*))List_1_get_Item_m6661_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m26716(__this, ___index, ___value, method) (( void (*) (List_1_t1259 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m6662_gshared)(__this, ___index, ___value, method)

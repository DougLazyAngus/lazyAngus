#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t876;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEventSystemHandler
struct IEventSystemHandler_t942;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerable_1_t4346;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerator_1_t4347;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ICollection_1_t4348;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ReadOnlyCollection_1_t3633;
// UnityEngine.EventSystems.IEventSystemHandler[]
struct IEventSystemHandlerU5BU5D_t3632;
// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Predicate_1_t3634;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IComparer_1_t4349;
// System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Comparison_1_t3636;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m21820(__this, method) (( void (*) (List_1_t876 *, const MethodInfo*))List_1__ctor_m2609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21821(__this, ___collection, method) (( void (*) (List_1_t876 *, Object_t*, const MethodInfo*))List_1__ctor_m16816_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Int32)
#define List_1__ctor_m21822(__this, ___capacity, method) (( void (*) (List_1_t876 *, int32_t, const MethodInfo*))List_1__ctor_m16818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
#define List_1__cctor_m21823(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21824(__this, method) (( Object_t* (*) (List_1_t876 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21825(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t876 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6821_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21826(__this, method) (( Object_t * (*) (List_1_t876 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21827(__this, ___item, method) (( int32_t (*) (List_1_t876 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21828(__this, ___item, method) (( bool (*) (List_1_t876 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21829(__this, ___item, method) (( int32_t (*) (List_1_t876 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21830(__this, ___index, ___item, method) (( void (*) (List_1_t876 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21831(__this, ___item, method) (( void (*) (List_1_t876 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21832(__this, method) (( bool (*) (List_1_t876 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21833(__this, method) (( bool (*) (List_1_t876 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21834(__this, method) (( Object_t * (*) (List_1_t876 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21835(__this, method) (( bool (*) (List_1_t876 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21836(__this, method) (( bool (*) (List_1_t876 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21837(__this, ___index, method) (( Object_t * (*) (List_1_t876 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21838(__this, ___index, ___value, method) (( void (*) (List_1_t876 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6825_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
#define List_1_Add_m21839(__this, ___item, method) (( void (*) (List_1_t876 *, Object_t *, const MethodInfo*))List_1_Add_m6834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21840(__this, ___newCount, method) (( void (*) (List_1_t876 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16838_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21841(__this, ___collection, method) (( void (*) (List_1_t876 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16840_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21842(__this, ___enumerable, method) (( void (*) (List_1_t876 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m21843(__this, ___collection, method) (( void (*) (List_1_t876 *, Object_t*, const MethodInfo*))List_1_AddRange_m16844_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AsReadOnly()
#define List_1_AsReadOnly_m21844(__this, method) (( ReadOnlyCollection_1_t3633 * (*) (List_1_t876 *, const MethodInfo*))List_1_AsReadOnly_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
#define List_1_Clear_m21845(__this, method) (( void (*) (List_1_t876 *, const MethodInfo*))List_1_Clear_m6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
#define List_1_Contains_m21846(__this, ___item, method) (( bool (*) (List_1_t876 *, Object_t *, const MethodInfo*))List_1_Contains_m6835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21847(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t876 *, IEventSystemHandlerU5BU5D_t3632*, int32_t, const MethodInfo*))List_1_CopyTo_m6836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m21848(__this, ___match, method) (( Object_t * (*) (List_1_t876 *, Predicate_1_t3634 *, const MethodInfo*))List_1_Find_m16851_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21849(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3634 *, const MethodInfo*))List_1_CheckMatch_m16853_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21850(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t876 *, int32_t, int32_t, Predicate_1_t3634 *, const MethodInfo*))List_1_GetIndex_m16855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
#define List_1_GetEnumerator_m21851(__this, method) (( Enumerator_t3635  (*) (List_1_t876 *, const MethodInfo*))List_1_GetEnumerator_m2712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
#define List_1_IndexOf_m21852(__this, ___item, method) (( int32_t (*) (List_1_t876 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21853(__this, ___start, ___delta, method) (( void (*) (List_1_t876 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16858_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21854(__this, ___index, method) (( void (*) (List_1_t876 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
#define List_1_Insert_m21855(__this, ___index, ___item, method) (( void (*) (List_1_t876 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21856(__this, ___collection, method) (( void (*) (List_1_t876 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16863_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
#define List_1_Remove_m21857(__this, ___item, method) (( bool (*) (List_1_t876 *, Object_t *, const MethodInfo*))List_1_Remove_m6837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21858(__this, ___match, method) (( int32_t (*) (List_1_t876 *, Predicate_1_t3634 *, const MethodInfo*))List_1_RemoveAll_m16866_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21859(__this, ___index, method) (( void (*) (List_1_t876 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6832_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Reverse()
#define List_1_Reverse_m21860(__this, method) (( void (*) (List_1_t876 *, const MethodInfo*))List_1_Reverse_m16869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort()
#define List_1_Sort_m21861(__this, method) (( void (*) (List_1_t876 *, const MethodInfo*))List_1_Sort_m16871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21862(__this, ___comparer, method) (( void (*) (List_1_t876 *, Object_t*, const MethodInfo*))List_1_Sort_m16873_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21863(__this, ___comparison, method) (( void (*) (List_1_t876 *, Comparison_1_t3636 *, const MethodInfo*))List_1_Sort_m16875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::ToArray()
#define List_1_ToArray_m21864(__this, method) (( IEventSystemHandlerU5BU5D_t3632* (*) (List_1_t876 *, const MethodInfo*))List_1_ToArray_m16877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::TrimExcess()
#define List_1_TrimExcess_m21865(__this, method) (( void (*) (List_1_t876 *, const MethodInfo*))List_1_TrimExcess_m16879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Capacity()
#define List_1_get_Capacity_m21866(__this, method) (( int32_t (*) (List_1_t876 *, const MethodInfo*))List_1_get_Capacity_m16881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21867(__this, ___value, method) (( void (*) (List_1_t876 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16883_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
#define List_1_get_Count_m21868(__this, method) (( int32_t (*) (List_1_t876 *, const MethodInfo*))List_1_get_Count_m6818_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
#define List_1_get_Item_m21869(__this, ___index, method) (( Object_t * (*) (List_1_t876 *, int32_t, const MethodInfo*))List_1_get_Item_m6841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m21870(__this, ___index, ___value, method) (( void (*) (List_1_t876 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6842_gshared)(__this, ___index, ___value, method)

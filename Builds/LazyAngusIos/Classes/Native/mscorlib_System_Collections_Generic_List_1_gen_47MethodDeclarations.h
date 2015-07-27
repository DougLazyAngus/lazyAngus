#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1265;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t1264;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>
struct IEnumerable_1_t4676;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t4677;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>
struct ICollection_1_t4678;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
struct ReadOnlyCollection_1_t4082;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t4080;
// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t4083;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.PersistentCall>
struct IComparer_1_t4679;
// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t4084;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7253(__this, method) (( void (*) (List_1_t1265 *, const MethodInfo*))List_1__ctor_m3123_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28051(__this, ___collection, method) (( void (*) (List_1_t1265 *, Object_t*, const MethodInfo*))List_1__ctor_m17404_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m28052(__this, ___capacity, method) (( void (*) (List_1_t1265 *, int32_t, const MethodInfo*))List_1__ctor_m17406_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m28053(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17408_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28054(__this, method) (( Object_t* (*) (List_1_t1265 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28055(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1265 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28056(__this, method) (( Object_t * (*) (List_1_t1265 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28057(__this, ___item, method) (( int32_t (*) (List_1_t1265 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7418_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28058(__this, ___item, method) (( bool (*) (List_1_t1265 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7420_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28059(__this, ___item, method) (( int32_t (*) (List_1_t1265 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28060(__this, ___index, ___item, method) (( void (*) (List_1_t1265 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7422_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28061(__this, ___item, method) (( void (*) (List_1_t1265 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7423_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28062(__this, method) (( bool (*) (List_1_t1265 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28063(__this, method) (( bool (*) (List_1_t1265 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28064(__this, method) (( Object_t * (*) (List_1_t1265 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28065(__this, method) (( bool (*) (List_1_t1265 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28066(__this, method) (( bool (*) (List_1_t1265 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7415_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28067(__this, ___index, method) (( Object_t * (*) (List_1_t1265 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7416_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28068(__this, ___index, ___value, method) (( void (*) (List_1_t1265 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7417_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m28069(__this, ___item, method) (( void (*) (List_1_t1265 *, PersistentCall_t1264 *, const MethodInfo*))List_1_Add_m7426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28070(__this, ___newCount, method) (( void (*) (List_1_t1265 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17426_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28071(__this, ___collection, method) (( void (*) (List_1_t1265 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28072(__this, ___enumerable, method) (( void (*) (List_1_t1265 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17430_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28073(__this, ___collection, method) (( void (*) (List_1_t1265 *, Object_t*, const MethodInfo*))List_1_AddRange_m17432_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AsReadOnly()
#define List_1_AsReadOnly_m28074(__this, method) (( ReadOnlyCollection_1_t4082 * (*) (List_1_t1265 *, const MethodInfo*))List_1_AsReadOnly_m17434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m28075(__this, method) (( void (*) (List_1_t1265 *, const MethodInfo*))List_1_Clear_m7419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m28076(__this, ___item, method) (( bool (*) (List_1_t1265 *, PersistentCall_t1264 *, const MethodInfo*))List_1_Contains_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28077(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1265 *, PersistentCallU5BU5D_t4080*, int32_t, const MethodInfo*))List_1_CopyTo_m7428_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m28078(__this, ___match, method) (( PersistentCall_t1264 * (*) (List_1_t1265 *, Predicate_1_t4083 *, const MethodInfo*))List_1_Find_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28079(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4083 *, const MethodInfo*))List_1_CheckMatch_m17441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28080(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1265 *, int32_t, int32_t, Predicate_1_t4083 *, const MethodInfo*))List_1_GetIndex_m17443_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m7254(__this, method) (( Enumerator_t1350  (*) (List_1_t1265 *, const MethodInfo*))List_1_GetEnumerator_m3281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m28081(__this, ___item, method) (( int32_t (*) (List_1_t1265 *, PersistentCall_t1264 *, const MethodInfo*))List_1_IndexOf_m7431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28082(__this, ___start, ___delta, method) (( void (*) (List_1_t1265 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17446_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28083(__this, ___index, method) (( void (*) (List_1_t1265 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m28084(__this, ___index, ___item, method) (( void (*) (List_1_t1265 *, int32_t, PersistentCall_t1264 *, const MethodInfo*))List_1_Insert_m7432_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28085(__this, ___collection, method) (( void (*) (List_1_t1265 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17451_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m28086(__this, ___item, method) (( bool (*) (List_1_t1265 *, PersistentCall_t1264 *, const MethodInfo*))List_1_Remove_m7429_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28087(__this, ___match, method) (( int32_t (*) (List_1_t1265 *, Predicate_1_t4083 *, const MethodInfo*))List_1_RemoveAll_m17454_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28088(__this, ___index, method) (( void (*) (List_1_t1265 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7424_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Reverse()
#define List_1_Reverse_m28089(__this, method) (( void (*) (List_1_t1265 *, const MethodInfo*))List_1_Reverse_m17457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort()
#define List_1_Sort_m28090(__this, method) (( void (*) (List_1_t1265 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28091(__this, ___comparer, method) (( void (*) (List_1_t1265 *, Object_t*, const MethodInfo*))List_1_Sort_m17461_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28092(__this, ___comparison, method) (( void (*) (List_1_t1265 *, Comparison_1_t4084 *, const MethodInfo*))List_1_Sort_m17463_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m28093(__this, method) (( PersistentCallU5BU5D_t4080* (*) (List_1_t1265 *, const MethodInfo*))List_1_ToArray_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::TrimExcess()
#define List_1_TrimExcess_m28094(__this, method) (( void (*) (List_1_t1265 *, const MethodInfo*))List_1_TrimExcess_m17467_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m28095(__this, method) (( int32_t (*) (List_1_t1265 *, const MethodInfo*))List_1_get_Capacity_m17469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28096(__this, ___value, method) (( void (*) (List_1_t1265 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m28097(__this, method) (( int32_t (*) (List_1_t1265 *, const MethodInfo*))List_1_get_Count_m7410_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m28098(__this, ___index, method) (( PersistentCall_t1264 * (*) (List_1_t1265 *, int32_t, const MethodInfo*))List_1_get_Item_m7433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m28099(__this, ___index, ___value, method) (( void (*) (List_1_t1265 *, int32_t, PersistentCall_t1264 *, const MethodInfo*))List_1_set_Item_m7434_gshared)(__this, ___index, ___value, method)

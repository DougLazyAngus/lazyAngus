#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t1266;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1260;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t4679;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t4680;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t4681;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t4086;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t4084;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t1350;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>
struct IComparer_1_t4682;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t4088;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7250(__this, method) (( void (*) (List_1_t1266 *, const MethodInfo*))List_1__ctor_m3116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28135(__this, ___collection, method) (( void (*) (List_1_t1266 *, Object_t*, const MethodInfo*))List_1__ctor_m17397_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m28136(__this, ___capacity, method) (( void (*) (List_1_t1266 *, int32_t, const MethodInfo*))List_1__ctor_m17399_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m28137(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17401_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28138(__this, method) (( Object_t* (*) (List_1_t1266 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28139(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1266 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7406_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28140(__this, method) (( Object_t * (*) (List_1_t1266 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7402_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28141(__this, ___item, method) (( int32_t (*) (List_1_t1266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7411_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28142(__this, ___item, method) (( bool (*) (List_1_t1266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7413_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28143(__this, ___item, method) (( int32_t (*) (List_1_t1266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28144(__this, ___index, ___item, method) (( void (*) (List_1_t1266 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7415_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28145(__this, ___item, method) (( void (*) (List_1_t1266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7416_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28146(__this, method) (( bool (*) (List_1_t1266 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28147(__this, method) (( bool (*) (List_1_t1266 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7404_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28148(__this, method) (( Object_t * (*) (List_1_t1266 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7405_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28149(__this, method) (( bool (*) (List_1_t1266 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7407_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28150(__this, method) (( bool (*) (List_1_t1266 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7408_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28151(__this, ___index, method) (( Object_t * (*) (List_1_t1266 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7409_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28152(__this, ___index, ___value, method) (( void (*) (List_1_t1266 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7410_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m28153(__this, ___item, method) (( void (*) (List_1_t1266 *, BaseInvokableCall_t1260 *, const MethodInfo*))List_1_Add_m7419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28154(__this, ___newCount, method) (( void (*) (List_1_t1266 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17419_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28155(__this, ___collection, method) (( void (*) (List_1_t1266 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17421_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28156(__this, ___enumerable, method) (( void (*) (List_1_t1266 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17423_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m7253(__this, ___collection, method) (( void (*) (List_1_t1266 *, Object_t*, const MethodInfo*))List_1_AddRange_m17425_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
#define List_1_AsReadOnly_m28157(__this, method) (( ReadOnlyCollection_1_t4086 * (*) (List_1_t1266 *, const MethodInfo*))List_1_AsReadOnly_m17427_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m28158(__this, method) (( void (*) (List_1_t1266 *, const MethodInfo*))List_1_Clear_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m28159(__this, ___item, method) (( bool (*) (List_1_t1266 *, BaseInvokableCall_t1260 *, const MethodInfo*))List_1_Contains_m7420_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28160(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1266 *, BaseInvokableCallU5BU5D_t4084*, int32_t, const MethodInfo*))List_1_CopyTo_m7421_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m28161(__this, ___match, method) (( BaseInvokableCall_t1260 * (*) (List_1_t1266 *, Predicate_1_t1350 *, const MethodInfo*))List_1_Find_m17432_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28162(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1350 *, const MethodInfo*))List_1_CheckMatch_m17434_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28163(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1266 *, int32_t, int32_t, Predicate_1_t1350 *, const MethodInfo*))List_1_GetIndex_m17436_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m28164(__this, method) (( Enumerator_t4087  (*) (List_1_t1266 *, const MethodInfo*))List_1_GetEnumerator_m3274_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m28165(__this, ___item, method) (( int32_t (*) (List_1_t1266 *, BaseInvokableCall_t1260 *, const MethodInfo*))List_1_IndexOf_m7424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28166(__this, ___start, ___delta, method) (( void (*) (List_1_t1266 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17439_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28167(__this, ___index, method) (( void (*) (List_1_t1266 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17441_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m28168(__this, ___index, ___item, method) (( void (*) (List_1_t1266 *, int32_t, BaseInvokableCall_t1260 *, const MethodInfo*))List_1_Insert_m7425_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28169(__this, ___collection, method) (( void (*) (List_1_t1266 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17444_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m28170(__this, ___item, method) (( bool (*) (List_1_t1266 *, BaseInvokableCall_t1260 *, const MethodInfo*))List_1_Remove_m7422_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m7252(__this, ___match, method) (( int32_t (*) (List_1_t1266 *, Predicate_1_t1350 *, const MethodInfo*))List_1_RemoveAll_m17447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28171(__this, ___index, method) (( void (*) (List_1_t1266 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7417_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
#define List_1_Reverse_m28172(__this, method) (( void (*) (List_1_t1266 *, const MethodInfo*))List_1_Reverse_m17450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m28173(__this, method) (( void (*) (List_1_t1266 *, const MethodInfo*))List_1_Sort_m17452_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28174(__this, ___comparer, method) (( void (*) (List_1_t1266 *, Object_t*, const MethodInfo*))List_1_Sort_m17454_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28175(__this, ___comparison, method) (( void (*) (List_1_t1266 *, Comparison_1_t4088 *, const MethodInfo*))List_1_Sort_m17456_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m28176(__this, method) (( BaseInvokableCallU5BU5D_t4084* (*) (List_1_t1266 *, const MethodInfo*))List_1_ToArray_m17458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
#define List_1_TrimExcess_m28177(__this, method) (( void (*) (List_1_t1266 *, const MethodInfo*))List_1_TrimExcess_m17460_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m28178(__this, method) (( int32_t (*) (List_1_t1266 *, const MethodInfo*))List_1_get_Capacity_m17462_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28179(__this, ___value, method) (( void (*) (List_1_t1266 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17464_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m28180(__this, method) (( int32_t (*) (List_1_t1266 *, const MethodInfo*))List_1_get_Count_m7403_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m28181(__this, ___index, method) (( BaseInvokableCall_t1260 * (*) (List_1_t1266 *, int32_t, const MethodInfo*))List_1_get_Item_m7426_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m28182(__this, ___index, ___value, method) (( void (*) (List_1_t1266 *, int32_t, BaseInvokableCall_t1260 *, const MethodInfo*))List_1_set_Item_m7427_gshared)(__this, ___index, ___value, method)

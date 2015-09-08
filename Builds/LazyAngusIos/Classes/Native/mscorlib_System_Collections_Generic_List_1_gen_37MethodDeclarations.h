#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t1067;
// System.Object
struct Object_t;
// UnityEngine.Canvas
struct Canvas_t547;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Canvas>
struct IEnumerable_1_t9647;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t6426;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Canvas>
struct IEnumerator_1_t9648;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Canvas>
struct ICollection_1_t9649;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Canvas>
struct ReadOnlyCollection_1_t6428;
// System.Predicate`1<UnityEngine.Canvas>
struct Predicate_1_t6429;
// System.Collections.Generic.IComparer`1<UnityEngine.Canvas>
struct IComparer_1_t9650;
// System.Comparison`1<UnityEngine.Canvas>
struct Comparison_1_t6431;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Canvas>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_46.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m33923(__this, method) (( void (*) (List_1_t1067 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m33924(__this, ___collection, method) (( void (*) (List_1_t1067 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor(System.Int32)
#define List_1__ctor_m33925(__this, ___capacity, method) (( void (*) (List_1_t1067 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.ctor(T[],System.Int32)
#define List_1__ctor_m33926(__this, ___data, ___size, method) (( void (*) (List_1_t1067 *, CanvasU5BU5D_t6426*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::.cctor()
#define List_1__cctor_m33927(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33928(__this, method) (( Object_t* (*) (List_1_t1067 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m33929(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1067 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33930(__this, method) (( Object_t * (*) (List_1_t1067 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m33931(__this, ___item, method) (( int32_t (*) (List_1_t1067 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m33932(__this, ___item, method) (( bool (*) (List_1_t1067 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m33933(__this, ___item, method) (( int32_t (*) (List_1_t1067 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m33934(__this, ___index, ___item, method) (( void (*) (List_1_t1067 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m33935(__this, ___item, method) (( void (*) (List_1_t1067 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33936(__this, method) (( bool (*) (List_1_t1067 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33937(__this, method) (( bool (*) (List_1_t1067 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m33938(__this, method) (( Object_t * (*) (List_1_t1067 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m33939(__this, method) (( bool (*) (List_1_t1067 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m33940(__this, method) (( bool (*) (List_1_t1067 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m33941(__this, ___index, method) (( Object_t * (*) (List_1_t1067 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m33942(__this, ___index, ___value, method) (( void (*) (List_1_t1067 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Add(T)
#define List_1_Add_m33943(__this, ___item, method) (( void (*) (List_1_t1067 *, Canvas_t547 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m33944(__this, ___newCount, method) (( void (*) (List_1_t1067 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m33945(__this, ___idx, ___count, method) (( void (*) (List_1_t1067 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m33946(__this, ___collection, method) (( void (*) (List_1_t1067 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m33947(__this, ___enumerable, method) (( void (*) (List_1_t1067 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m33948(__this, ___collection, method) (( void (*) (List_1_t1067 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::AsReadOnly()
#define List_1_AsReadOnly_m33949(__this, method) (( ReadOnlyCollection_1_t6428 * (*) (List_1_t1067 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Clear()
#define List_1_Clear_m33950(__this, method) (( void (*) (List_1_t1067 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::Contains(T)
#define List_1_Contains_m33951(__this, ___item, method) (( bool (*) (List_1_t1067 *, Canvas_t547 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m33952(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1067 *, CanvasU5BU5D_t6426*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Canvas>::Find(System.Predicate`1<T>)
#define List_1_Find_m33953(__this, ___match, method) (( Canvas_t547 * (*) (List_1_t1067 *, Predicate_1_t6429 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m33954(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6429 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m33955(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1067 *, int32_t, int32_t, Predicate_1_t6429 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::GetEnumerator()
#define List_1_GetEnumerator_m33956(__this, method) (( Enumerator_t6430  (*) (List_1_t1067 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Canvas>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m33957(__this, ___index, ___count, method) (( List_1_t1067 * (*) (List_1_t1067 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::IndexOf(T)
#define List_1_IndexOf_m33958(__this, ___item, method) (( int32_t (*) (List_1_t1067 *, Canvas_t547 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m33959(__this, ___start, ___delta, method) (( void (*) (List_1_t1067 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m33960(__this, ___index, method) (( void (*) (List_1_t1067 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Insert(System.Int32,T)
#define List_1_Insert_m33961(__this, ___index, ___item, method) (( void (*) (List_1_t1067 *, int32_t, Canvas_t547 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m33962(__this, ___collection, method) (( void (*) (List_1_t1067 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m33963(__this, ___index, ___collection, method) (( void (*) (List_1_t1067 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m33964(__this, ___index, ___collection, method) (( void (*) (List_1_t1067 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m33965(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1067 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Canvas>::Remove(T)
#define List_1_Remove_m33966(__this, ___item, method) (( bool (*) (List_1_t1067 *, Canvas_t547 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m33967(__this, ___match, method) (( int32_t (*) (List_1_t1067 *, Predicate_1_t6429 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m33968(__this, ___index, method) (( void (*) (List_1_t1067 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m33969(__this, ___index, ___count, method) (( void (*) (List_1_t1067 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Reverse()
#define List_1_Reverse_m33970(__this, method) (( void (*) (List_1_t1067 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Sort()
#define List_1_Sort_m33971(__this, method) (( void (*) (List_1_t1067 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m33972(__this, ___comparer, method) (( void (*) (List_1_t1067 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m33973(__this, ___comparison, method) (( void (*) (List_1_t1067 *, Comparison_1_t6431 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Canvas>::ToArray()
#define List_1_ToArray_m33974(__this, method) (( CanvasU5BU5D_t6426* (*) (List_1_t1067 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::TrimExcess()
#define List_1_TrimExcess_m33975(__this, method) (( void (*) (List_1_t1067 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::get_Capacity()
#define List_1_get_Capacity_m33976(__this, method) (( int32_t (*) (List_1_t1067 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m33977(__this, ___value, method) (( void (*) (List_1_t1067 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Canvas>::get_Count()
#define List_1_get_Count_m33978(__this, method) (( int32_t (*) (List_1_t1067 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Canvas>::get_Item(System.Int32)
#define List_1_get_Item_m33979(__this, ___index, method) (( Canvas_t547 * (*) (List_1_t1067 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Canvas>::set_Item(System.Int32,T)
#define List_1_set_Item_m33980(__this, ___index, ___value, method) (( void (*) (List_1_t1067 *, int32_t, Canvas_t547 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)

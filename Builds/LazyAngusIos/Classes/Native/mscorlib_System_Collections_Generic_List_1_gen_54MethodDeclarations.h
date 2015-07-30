#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t2835;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2834;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>
struct IEnumerable_1_t9586;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t8490;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t9587;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>
struct ICollection_1_t9588;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
struct ReadOnlyCollection_1_t8492;
// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t8493;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.PersistentCall>
struct IComparer_1_t9589;
// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t8494;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9919(__this, method) (( void (*) (List_1_t2835 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m61946(__this, ___collection, method) (( void (*) (List_1_t2835 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m61947(__this, ___capacity, method) (( void (*) (List_1_t2835 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(T[],System.Int32)
#define List_1__ctor_m61948(__this, ___data, ___size, method) (( void (*) (List_1_t2835 *, PersistentCallU5BU5D_t8490*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m61949(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61950(__this, method) (( Object_t* (*) (List_1_t2835 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m61951(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2835 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m61952(__this, method) (( Object_t * (*) (List_1_t2835 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m61953(__this, ___item, method) (( int32_t (*) (List_1_t2835 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m61954(__this, ___item, method) (( bool (*) (List_1_t2835 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m61955(__this, ___item, method) (( int32_t (*) (List_1_t2835 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m61956(__this, ___index, ___item, method) (( void (*) (List_1_t2835 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m61957(__this, ___item, method) (( void (*) (List_1_t2835 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61958(__this, method) (( bool (*) (List_1_t2835 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m61959(__this, method) (( bool (*) (List_1_t2835 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m61960(__this, method) (( Object_t * (*) (List_1_t2835 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m61961(__this, method) (( bool (*) (List_1_t2835 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m61962(__this, method) (( bool (*) (List_1_t2835 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m61963(__this, ___index, method) (( Object_t * (*) (List_1_t2835 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m61964(__this, ___index, ___value, method) (( void (*) (List_1_t2835 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m61965(__this, ___item, method) (( void (*) (List_1_t2835 *, PersistentCall_t2834 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m61966(__this, ___newCount, method) (( void (*) (List_1_t2835 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m61967(__this, ___idx, ___count, method) (( void (*) (List_1_t2835 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m61968(__this, ___collection, method) (( void (*) (List_1_t2835 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m61969(__this, ___enumerable, method) (( void (*) (List_1_t2835 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m61970(__this, ___collection, method) (( void (*) (List_1_t2835 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AsReadOnly()
#define List_1_AsReadOnly_m61971(__this, method) (( ReadOnlyCollection_1_t8492 * (*) (List_1_t2835 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m61972(__this, method) (( void (*) (List_1_t2835 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m61973(__this, ___item, method) (( bool (*) (List_1_t2835 *, PersistentCall_t2834 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m61974(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2835 *, PersistentCallU5BU5D_t8490*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m61975(__this, ___match, method) (( PersistentCall_t2834 * (*) (List_1_t2835 *, Predicate_1_t8493 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m61976(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8493 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m61977(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2835 *, int32_t, int32_t, Predicate_1_t8493 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m9920(__this, method) (( Enumerator_t2909  (*) (List_1_t2835 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m61978(__this, ___index, ___count, method) (( List_1_t2835 * (*) (List_1_t2835 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m61979(__this, ___item, method) (( int32_t (*) (List_1_t2835 *, PersistentCall_t2834 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m61980(__this, ___start, ___delta, method) (( void (*) (List_1_t2835 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m61981(__this, ___index, method) (( void (*) (List_1_t2835 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m61982(__this, ___index, ___item, method) (( void (*) (List_1_t2835 *, int32_t, PersistentCall_t2834 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m61983(__this, ___collection, method) (( void (*) (List_1_t2835 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m61984(__this, ___index, ___collection, method) (( void (*) (List_1_t2835 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m61985(__this, ___index, ___collection, method) (( void (*) (List_1_t2835 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m61986(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2835 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m61987(__this, ___item, method) (( bool (*) (List_1_t2835 *, PersistentCall_t2834 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m61988(__this, ___match, method) (( int32_t (*) (List_1_t2835 *, Predicate_1_t8493 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m61989(__this, ___index, method) (( void (*) (List_1_t2835 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m61990(__this, ___index, ___count, method) (( void (*) (List_1_t2835 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Reverse()
#define List_1_Reverse_m61991(__this, method) (( void (*) (List_1_t2835 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort()
#define List_1_Sort_m61992(__this, method) (( void (*) (List_1_t2835 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m61993(__this, ___comparer, method) (( void (*) (List_1_t2835 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m61994(__this, ___comparison, method) (( void (*) (List_1_t2835 *, Comparison_1_t8494 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m61995(__this, method) (( PersistentCallU5BU5D_t8490* (*) (List_1_t2835 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::TrimExcess()
#define List_1_TrimExcess_m61996(__this, method) (( void (*) (List_1_t2835 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m61997(__this, method) (( int32_t (*) (List_1_t2835 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m61998(__this, ___value, method) (( void (*) (List_1_t2835 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m61999(__this, method) (( int32_t (*) (List_1_t2835 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m62000(__this, ___index, method) (( PersistentCall_t2834 * (*) (List_1_t2835 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m62001(__this, ___index, ___value, method) (( void (*) (List_1_t2835 *, int32_t, PersistentCall_t2834 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)

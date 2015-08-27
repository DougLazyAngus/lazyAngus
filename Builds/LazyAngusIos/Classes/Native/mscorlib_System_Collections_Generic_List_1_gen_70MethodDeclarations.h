#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t6029;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2225;
// System.Collections.Generic.IEnumerable`1<System.WeakReference>
struct IEnumerable_1_t9086;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t6028;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t9087;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.WeakReference>
struct ICollection_1_t9088;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>
struct ReadOnlyCollection_1_t6030;
// System.Predicate`1<System.WeakReference>
struct Predicate_1_t6031;
// System.Collections.Generic.IComparer`1<System.WeakReference>
struct IComparer_1_t9089;
// System.Comparison`1<System.WeakReference>
struct Comparison_1_t6033;
// System.Collections.Generic.List`1/Enumerator<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m31350(__this, method) (( void (*) (List_1_t6029 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31351(__this, ___collection, method) (( void (*) (List_1_t6029 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Int32)
#define List_1__ctor_m31352(__this, ___capacity, method) (( void (*) (List_1_t6029 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(T[],System.Int32)
#define List_1__ctor_m31353(__this, ___data, ___size, method) (( void (*) (List_1_t6029 *, WeakReferenceU5BU5D_t6028*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.cctor()
#define List_1__cctor_m31354(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31355(__this, method) (( Object_t* (*) (List_1_t6029 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31356(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6029 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31357(__this, method) (( Object_t * (*) (List_1_t6029 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31358(__this, ___item, method) (( int32_t (*) (List_1_t6029 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31359(__this, ___item, method) (( bool (*) (List_1_t6029 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31360(__this, ___item, method) (( int32_t (*) (List_1_t6029 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31361(__this, ___index, ___item, method) (( void (*) (List_1_t6029 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31362(__this, ___item, method) (( void (*) (List_1_t6029 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31363(__this, method) (( bool (*) (List_1_t6029 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31364(__this, method) (( bool (*) (List_1_t6029 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31365(__this, method) (( Object_t * (*) (List_1_t6029 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31366(__this, method) (( bool (*) (List_1_t6029 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31367(__this, method) (( bool (*) (List_1_t6029 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31368(__this, ___index, method) (( Object_t * (*) (List_1_t6029 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31369(__this, ___index, ___value, method) (( void (*) (List_1_t6029 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(T)
#define List_1_Add_m31370(__this, ___item, method) (( void (*) (List_1_t6029 *, WeakReference_t2225 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31371(__this, ___newCount, method) (( void (*) (List_1_t6029 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31372(__this, ___idx, ___count, method) (( void (*) (List_1_t6029 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31373(__this, ___collection, method) (( void (*) (List_1_t6029 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31374(__this, ___enumerable, method) (( void (*) (List_1_t6029 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31375(__this, ___collection, method) (( void (*) (List_1_t6029 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.WeakReference>::AsReadOnly()
#define List_1_AsReadOnly_m31376(__this, method) (( ReadOnlyCollection_1_t6030 * (*) (List_1_t6029 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Clear()
#define List_1_Clear_m31377(__this, method) (( void (*) (List_1_t6029 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Contains(T)
#define List_1_Contains_m31378(__this, ___item, method) (( bool (*) (List_1_t6029 *, WeakReference_t2225 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31379(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6029 *, WeakReferenceU5BU5D_t6028*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.WeakReference>::Find(System.Predicate`1<T>)
#define List_1_Find_m31380(__this, ___match, method) (( WeakReference_t2225 * (*) (List_1_t6029 *, Predicate_1_t6031 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31381(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6031 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31382(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6029 *, int32_t, int32_t, Predicate_1_t6031 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
#define List_1_GetEnumerator_m31383(__this, method) (( Enumerator_t6032  (*) (List_1_t6029 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31384(__this, ___index, ___count, method) (( List_1_t6029 * (*) (List_1_t6029 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::IndexOf(T)
#define List_1_IndexOf_m31385(__this, ___item, method) (( int32_t (*) (List_1_t6029 *, WeakReference_t2225 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31386(__this, ___start, ___delta, method) (( void (*) (List_1_t6029 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31387(__this, ___index, method) (( void (*) (List_1_t6029 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Insert(System.Int32,T)
#define List_1_Insert_m31388(__this, ___index, ___item, method) (( void (*) (List_1_t6029 *, int32_t, WeakReference_t2225 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31389(__this, ___collection, method) (( void (*) (List_1_t6029 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31390(__this, ___index, ___collection, method) (( void (*) (List_1_t6029 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31391(__this, ___index, ___collection, method) (( void (*) (List_1_t6029 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31392(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6029 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(T)
#define List_1_Remove_m31393(__this, ___item, method) (( bool (*) (List_1_t6029 *, WeakReference_t2225 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31394(__this, ___match, method) (( int32_t (*) (List_1_t6029 *, Predicate_1_t6031 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31395(__this, ___index, method) (( void (*) (List_1_t6029 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31396(__this, ___index, ___count, method) (( void (*) (List_1_t6029 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Reverse()
#define List_1_Reverse_m31397(__this, method) (( void (*) (List_1_t6029 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort()
#define List_1_Sort_m31398(__this, method) (( void (*) (List_1_t6029 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31399(__this, ___comparer, method) (( void (*) (List_1_t6029 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31400(__this, ___comparison, method) (( void (*) (List_1_t6029 *, Comparison_1_t6033 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.WeakReference>::ToArray()
#define List_1_ToArray_m31401(__this, method) (( WeakReferenceU5BU5D_t6028* (*) (List_1_t6029 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::TrimExcess()
#define List_1_TrimExcess_m31402(__this, method) (( void (*) (List_1_t6029 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Capacity()
#define List_1_get_Capacity_m31403(__this, method) (( int32_t (*) (List_1_t6029 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31404(__this, ___value, method) (( void (*) (List_1_t6029 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Count()
#define List_1_get_Count_m31405(__this, method) (( int32_t (*) (List_1_t6029 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.WeakReference>::get_Item(System.Int32)
#define List_1_get_Item_m31406(__this, ___index, method) (( WeakReference_t2225 * (*) (List_1_t6029 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Item(System.Int32,T)
#define List_1_set_Item_m31407(__this, ___index, ___value, method) (( void (*) (List_1_t6029 *, int32_t, WeakReference_t2225 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

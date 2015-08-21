#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t6026;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2222;
// System.Collections.Generic.IEnumerable`1<System.WeakReference>
struct IEnumerable_1_t9083;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t6025;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t9084;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.WeakReference>
struct ICollection_1_t9085;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>
struct ReadOnlyCollection_1_t6027;
// System.Predicate`1<System.WeakReference>
struct Predicate_1_t6028;
// System.Collections.Generic.IComparer`1<System.WeakReference>
struct IComparer_1_t9086;
// System.Comparison`1<System.WeakReference>
struct Comparison_1_t6030;
// System.Collections.Generic.List`1/Enumerator<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m31317(__this, method) (( void (*) (List_1_t6026 *, const MethodInfo*))List_1__ctor_m3698_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31318(__this, ___collection, method) (( void (*) (List_1_t6026 *, Object_t*, const MethodInfo*))List_1__ctor_m7458_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Int32)
#define List_1__ctor_m31319(__this, ___capacity, method) (( void (*) (List_1_t6026 *, int32_t, const MethodInfo*))List_1__ctor_m21556_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(T[],System.Int32)
#define List_1__ctor_m31320(__this, ___data, ___size, method) (( void (*) (List_1_t6026 *, WeakReferenceU5BU5D_t6025*, int32_t, const MethodInfo*))List_1__ctor_m21558_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.cctor()
#define List_1__cctor_m31321(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21560_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31322(__this, method) (( Object_t* (*) (List_1_t6026 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31323(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6026 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10334_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31324(__this, method) (( Object_t * (*) (List_1_t6026 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10330_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31325(__this, ___item, method) (( int32_t (*) (List_1_t6026 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10339_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31326(__this, ___item, method) (( bool (*) (List_1_t6026 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10341_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31327(__this, ___item, method) (( int32_t (*) (List_1_t6026 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31328(__this, ___index, ___item, method) (( void (*) (List_1_t6026 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31329(__this, ___item, method) (( void (*) (List_1_t6026 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31330(__this, method) (( bool (*) (List_1_t6026 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31331(__this, method) (( bool (*) (List_1_t6026 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10332_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31332(__this, method) (( Object_t * (*) (List_1_t6026 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10333_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31333(__this, method) (( bool (*) (List_1_t6026 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31334(__this, method) (( bool (*) (List_1_t6026 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10336_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31335(__this, ___index, method) (( Object_t * (*) (List_1_t6026 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10337_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31336(__this, ___index, ___value, method) (( void (*) (List_1_t6026 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10338_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(T)
#define List_1_Add_m31337(__this, ___item, method) (( void (*) (List_1_t6026 *, WeakReference_t2222 *, const MethodInfo*))List_1_Add_m10347_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31338(__this, ___newCount, method) (( void (*) (List_1_t6026 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21578_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31339(__this, ___idx, ___count, method) (( void (*) (List_1_t6026 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21580_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31340(__this, ___collection, method) (( void (*) (List_1_t6026 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21582_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31341(__this, ___enumerable, method) (( void (*) (List_1_t6026 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21584_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31342(__this, ___collection, method) (( void (*) (List_1_t6026 *, Object_t*, const MethodInfo*))List_1_AddRange_m21586_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.WeakReference>::AsReadOnly()
#define List_1_AsReadOnly_m31343(__this, method) (( ReadOnlyCollection_1_t6027 * (*) (List_1_t6026 *, const MethodInfo*))List_1_AsReadOnly_m21588_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Clear()
#define List_1_Clear_m31344(__this, method) (( void (*) (List_1_t6026 *, const MethodInfo*))List_1_Clear_m10340_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Contains(T)
#define List_1_Contains_m31345(__this, ___item, method) (( bool (*) (List_1_t6026 *, WeakReference_t2222 *, const MethodInfo*))List_1_Contains_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31346(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6026 *, WeakReferenceU5BU5D_t6025*, int32_t, const MethodInfo*))List_1_CopyTo_m10349_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.WeakReference>::Find(System.Predicate`1<T>)
#define List_1_Find_m31347(__this, ___match, method) (( WeakReference_t2222 * (*) (List_1_t6026 *, Predicate_1_t6028 *, const MethodInfo*))List_1_Find_m21593_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31348(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6028 *, const MethodInfo*))List_1_CheckMatch_m21595_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31349(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6026 *, int32_t, int32_t, Predicate_1_t6028 *, const MethodInfo*))List_1_GetIndex_m21597_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
#define List_1_GetEnumerator_m31350(__this, method) (( Enumerator_t6029  (*) (List_1_t6026 *, const MethodInfo*))List_1_GetEnumerator_m3854_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31351(__this, ___index, ___count, method) (( List_1_t6026 * (*) (List_1_t6026 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21599_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::IndexOf(T)
#define List_1_IndexOf_m31352(__this, ___item, method) (( int32_t (*) (List_1_t6026 *, WeakReference_t2222 *, const MethodInfo*))List_1_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31353(__this, ___start, ___delta, method) (( void (*) (List_1_t6026 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21602_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31354(__this, ___index, method) (( void (*) (List_1_t6026 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21604_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Insert(System.Int32,T)
#define List_1_Insert_m31355(__this, ___index, ___item, method) (( void (*) (List_1_t6026 *, int32_t, WeakReference_t2222 *, const MethodInfo*))List_1_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31356(__this, ___collection, method) (( void (*) (List_1_t6026 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21607_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31357(__this, ___index, ___collection, method) (( void (*) (List_1_t6026 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21609_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31358(__this, ___index, ___collection, method) (( void (*) (List_1_t6026 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21611_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31359(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6026 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21613_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(T)
#define List_1_Remove_m31360(__this, ___item, method) (( bool (*) (List_1_t6026 *, WeakReference_t2222 *, const MethodInfo*))List_1_Remove_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31361(__this, ___match, method) (( int32_t (*) (List_1_t6026 *, Predicate_1_t6028 *, const MethodInfo*))List_1_RemoveAll_m21616_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31362(__this, ___index, method) (( void (*) (List_1_t6026 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10345_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31363(__this, ___index, ___count, method) (( void (*) (List_1_t6026 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21619_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Reverse()
#define List_1_Reverse_m31364(__this, method) (( void (*) (List_1_t6026 *, const MethodInfo*))List_1_Reverse_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort()
#define List_1_Sort_m31365(__this, method) (( void (*) (List_1_t6026 *, const MethodInfo*))List_1_Sort_m21623_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31366(__this, ___comparer, method) (( void (*) (List_1_t6026 *, Object_t*, const MethodInfo*))List_1_Sort_m21625_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31367(__this, ___comparison, method) (( void (*) (List_1_t6026 *, Comparison_1_t6030 *, const MethodInfo*))List_1_Sort_m21627_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.WeakReference>::ToArray()
#define List_1_ToArray_m31368(__this, method) (( WeakReferenceU5BU5D_t6025* (*) (List_1_t6026 *, const MethodInfo*))List_1_ToArray_m21629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::TrimExcess()
#define List_1_TrimExcess_m31369(__this, method) (( void (*) (List_1_t6026 *, const MethodInfo*))List_1_TrimExcess_m21631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Capacity()
#define List_1_get_Capacity_m31370(__this, method) (( int32_t (*) (List_1_t6026 *, const MethodInfo*))List_1_get_Capacity_m21633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31371(__this, ___value, method) (( void (*) (List_1_t6026 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21635_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Count()
#define List_1_get_Count_m31372(__this, method) (( int32_t (*) (List_1_t6026 *, const MethodInfo*))List_1_get_Count_m10331_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.WeakReference>::get_Item(System.Int32)
#define List_1_get_Item_m31373(__this, ___index, method) (( WeakReference_t2222 * (*) (List_1_t6026 *, int32_t, const MethodInfo*))List_1_get_Item_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Item(System.Int32,T)
#define List_1_set_Item_m31374(__this, ___index, ___value, method) (( void (*) (List_1_t6026 *, int32_t, WeakReference_t2222 *, const MethodInfo*))List_1_set_Item_m10355_gshared)(__this, ___index, ___value, method)

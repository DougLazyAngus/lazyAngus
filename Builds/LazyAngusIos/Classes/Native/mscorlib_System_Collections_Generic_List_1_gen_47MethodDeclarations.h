#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Exception>
struct List_1_t2145;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t1411;
// System.Exception[]
struct ExceptionU5BU5D_t8336;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t2146;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Exception>
struct ICollection_1_t9578;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t1335;
// System.Predicate`1<System.Exception>
struct Predicate_1_t8337;
// System.Collections.Generic.IComparer`1<System.Exception>
struct IComparer_1_t9579;
// System.Comparison`1<System.Exception>
struct Comparison_1_t8339;
// System.Collections.Generic.List`1/Enumerator<System.Exception>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_97.h"

// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7781(__this, method) (( void (*) (List_1_t2145 *, const MethodInfo*))List_1__ctor_m3698_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59661(__this, ___collection, method) (( void (*) (List_1_t2145 *, Object_t*, const MethodInfo*))List_1__ctor_m7458_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
#define List_1__ctor_m59662(__this, ___capacity, method) (( void (*) (List_1_t2145 *, int32_t, const MethodInfo*))List_1__ctor_m21556_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(T[],System.Int32)
#define List_1__ctor_m59663(__this, ___data, ___size, method) (( void (*) (List_1_t2145 *, ExceptionU5BU5D_t8336*, int32_t, const MethodInfo*))List_1__ctor_m21558_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.cctor()
#define List_1__cctor_m59664(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21560_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59665(__this, method) (( Object_t* (*) (List_1_t2145 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59666(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2145 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10334_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Exception>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59667(__this, method) (( Object_t * (*) (List_1_t2145 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10330_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59668(__this, ___item, method) (( int32_t (*) (List_1_t2145 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10339_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59669(__this, ___item, method) (( bool (*) (List_1_t2145 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10341_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59670(__this, ___item, method) (( int32_t (*) (List_1_t2145 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59671(__this, ___index, ___item, method) (( void (*) (List_1_t2145 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59672(__this, ___item, method) (( void (*) (List_1_t2145 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59673(__this, method) (( bool (*) (List_1_t2145 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59674(__this, method) (( bool (*) (List_1_t2145 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10332_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59675(__this, method) (( Object_t * (*) (List_1_t2145 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10333_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59676(__this, method) (( bool (*) (List_1_t2145 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59677(__this, method) (( bool (*) (List_1_t2145 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10336_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59678(__this, ___index, method) (( Object_t * (*) (List_1_t2145 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10337_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59679(__this, ___index, ___value, method) (( void (*) (List_1_t2145 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10338_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
#define List_1_Add_m59680(__this, ___item, method) (( void (*) (List_1_t2145 *, Exception_t57 *, const MethodInfo*))List_1_Add_m10347_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59681(__this, ___newCount, method) (( void (*) (List_1_t2145 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21578_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59682(__this, ___idx, ___count, method) (( void (*) (List_1_t2145 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21580_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59683(__this, ___collection, method) (( void (*) (List_1_t2145 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21582_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59684(__this, ___enumerable, method) (( void (*) (List_1_t2145 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21584_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m7782(__this, ___collection, method) (( void (*) (List_1_t2145 *, Object_t*, const MethodInfo*))List_1_AddRange_m21586_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Exception>::AsReadOnly()
#define List_1_AsReadOnly_m59685(__this, method) (( ReadOnlyCollection_1_t1335 * (*) (List_1_t2145 *, const MethodInfo*))List_1_AsReadOnly_m21588_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
#define List_1_Clear_m59686(__this, method) (( void (*) (List_1_t2145 *, const MethodInfo*))List_1_Clear_m10340_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Contains(T)
#define List_1_Contains_m59687(__this, ___item, method) (( bool (*) (List_1_t2145 *, Exception_t57 *, const MethodInfo*))List_1_Contains_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59688(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2145 *, ExceptionU5BU5D_t8336*, int32_t, const MethodInfo*))List_1_CopyTo_m10349_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Exception>::Find(System.Predicate`1<T>)
#define List_1_Find_m59689(__this, ___match, method) (( Exception_t57 * (*) (List_1_t2145 *, Predicate_1_t8337 *, const MethodInfo*))List_1_Find_m21593_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59690(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8337 *, const MethodInfo*))List_1_CheckMatch_m21595_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59691(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2145 *, int32_t, int32_t, Predicate_1_t8337 *, const MethodInfo*))List_1_GetIndex_m21597_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Exception>::GetEnumerator()
#define List_1_GetEnumerator_m59692(__this, method) (( Enumerator_t8338  (*) (List_1_t2145 *, const MethodInfo*))List_1_GetEnumerator_m3854_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59693(__this, ___index, ___count, method) (( List_1_t2145 * (*) (List_1_t2145 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21599_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::IndexOf(T)
#define List_1_IndexOf_m59694(__this, ___item, method) (( int32_t (*) (List_1_t2145 *, Exception_t57 *, const MethodInfo*))List_1_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59695(__this, ___start, ___delta, method) (( void (*) (List_1_t2145 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21602_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59696(__this, ___index, method) (( void (*) (List_1_t2145 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21604_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Insert(System.Int32,T)
#define List_1_Insert_m59697(__this, ___index, ___item, method) (( void (*) (List_1_t2145 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59698(__this, ___collection, method) (( void (*) (List_1_t2145 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21607_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59699(__this, ___index, ___collection, method) (( void (*) (List_1_t2145 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21609_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59700(__this, ___index, ___collection, method) (( void (*) (List_1_t2145 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21611_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59701(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2145 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21613_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Remove(T)
#define List_1_Remove_m59702(__this, ___item, method) (( bool (*) (List_1_t2145 *, Exception_t57 *, const MethodInfo*))List_1_Remove_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59703(__this, ___match, method) (( int32_t (*) (List_1_t2145 *, Predicate_1_t8337 *, const MethodInfo*))List_1_RemoveAll_m21616_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59704(__this, ___index, method) (( void (*) (List_1_t2145 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10345_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59705(__this, ___index, ___count, method) (( void (*) (List_1_t2145 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21619_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Reverse()
#define List_1_Reverse_m59706(__this, method) (( void (*) (List_1_t2145 *, const MethodInfo*))List_1_Reverse_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort()
#define List_1_Sort_m59707(__this, method) (( void (*) (List_1_t2145 *, const MethodInfo*))List_1_Sort_m21623_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59708(__this, ___comparer, method) (( void (*) (List_1_t2145 *, Object_t*, const MethodInfo*))List_1_Sort_m21625_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59709(__this, ___comparison, method) (( void (*) (List_1_t2145 *, Comparison_1_t8339 *, const MethodInfo*))List_1_Sort_m21627_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
#define List_1_ToArray_m59710(__this, method) (( ExceptionU5BU5D_t8336* (*) (List_1_t2145 *, const MethodInfo*))List_1_ToArray_m21629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::TrimExcess()
#define List_1_TrimExcess_m59711(__this, method) (( void (*) (List_1_t2145 *, const MethodInfo*))List_1_TrimExcess_m21631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Capacity()
#define List_1_get_Capacity_m59712(__this, method) (( int32_t (*) (List_1_t2145 *, const MethodInfo*))List_1_get_Capacity_m21633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59713(__this, ___value, method) (( void (*) (List_1_t2145 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21635_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
#define List_1_get_Count_m59714(__this, method) (( int32_t (*) (List_1_t2145 *, const MethodInfo*))List_1_get_Count_m10331_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
#define List_1_get_Item_m59715(__this, ___index, method) (( Exception_t57 * (*) (List_1_t2145 *, int32_t, const MethodInfo*))List_1_get_Item_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Item(System.Int32,T)
#define List_1_set_Item_m59716(__this, ___index, ___value, method) (( void (*) (List_1_t2145 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_set_Item_m10355_gshared)(__this, ___index, ___value, method)

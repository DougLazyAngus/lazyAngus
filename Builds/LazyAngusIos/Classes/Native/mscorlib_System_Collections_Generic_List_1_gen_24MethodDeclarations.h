#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<RealAngusItemDesc>
struct List_1_t643;
// System.Object
struct Object_t;
// RealAngusItemDesc
struct RealAngusItemDesc_t646;
// System.Collections.Generic.IEnumerable`1<RealAngusItemDesc>
struct IEnumerable_1_t9568;
// RealAngusItemDesc[]
struct RealAngusItemDescU5BU5D_t6311;
// System.Collections.Generic.IEnumerator`1<RealAngusItemDesc>
struct IEnumerator_1_t9569;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<RealAngusItemDesc>
struct ICollection_1_t9570;
// System.Collections.ObjectModel.ReadOnlyCollection`1<RealAngusItemDesc>
struct ReadOnlyCollection_1_t6313;
// System.Predicate`1<RealAngusItemDesc>
struct Predicate_1_t6314;
// System.Collections.Generic.IComparer`1<RealAngusItemDesc>
struct IComparer_1_t9571;
// System.Comparison`1<RealAngusItemDesc>
struct Comparison_1_t6316;
// System.Collections.Generic.List`1/Enumerator<RealAngusItemDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m4463(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31954(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor(System.Int32)
#define List_1__ctor_m31955(__this, ___capacity, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.ctor(T[],System.Int32)
#define List_1__ctor_m31956(__this, ___data, ___size, method) (( void (*) (List_1_t643 *, RealAngusItemDescU5BU5D_t6311*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::.cctor()
#define List_1__cctor_m31957(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31958(__this, method) (( Object_t* (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31959(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t643 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31960(__this, method) (( Object_t * (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31961(__this, ___item, method) (( int32_t (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31962(__this, ___item, method) (( bool (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31963(__this, ___item, method) (( int32_t (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31964(__this, ___index, ___item, method) (( void (*) (List_1_t643 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31965(__this, ___item, method) (( void (*) (List_1_t643 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31966(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31967(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31968(__this, method) (( Object_t * (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31969(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31970(__this, method) (( bool (*) (List_1_t643 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31971(__this, ___index, method) (( Object_t * (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31972(__this, ___index, ___value, method) (( void (*) (List_1_t643 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Add(T)
#define List_1_Add_m31973(__this, ___item, method) (( void (*) (List_1_t643 *, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31974(__this, ___newCount, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31975(__this, ___idx, ___count, method) (( void (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31976(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31977(__this, ___enumerable, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31978(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<RealAngusItemDesc>::AsReadOnly()
#define List_1_AsReadOnly_m31979(__this, method) (( ReadOnlyCollection_1_t6313 * (*) (List_1_t643 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Clear()
#define List_1_Clear_m31980(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::Contains(T)
#define List_1_Contains_m31981(__this, ___item, method) (( bool (*) (List_1_t643 *, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31982(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t643 *, RealAngusItemDescU5BU5D_t6311*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<RealAngusItemDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m31983(__this, ___match, method) (( RealAngusItemDesc_t646 * (*) (List_1_t643 *, Predicate_1_t6314 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31984(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6314 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31985(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t643 *, int32_t, int32_t, Predicate_1_t6314 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RealAngusItemDesc>::GetEnumerator()
#define List_1_GetEnumerator_m31986(__this, method) (( Enumerator_t6315  (*) (List_1_t643 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<RealAngusItemDesc>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31987(__this, ___index, ___count, method) (( List_1_t643 * (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::IndexOf(T)
#define List_1_IndexOf_m31988(__this, ___item, method) (( int32_t (*) (List_1_t643 *, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31989(__this, ___start, ___delta, method) (( void (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31990(__this, ___index, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Insert(System.Int32,T)
#define List_1_Insert_m31991(__this, ___index, ___item, method) (( void (*) (List_1_t643 *, int32_t, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31992(__this, ___collection, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31993(__this, ___index, ___collection, method) (( void (*) (List_1_t643 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31994(__this, ___index, ___collection, method) (( void (*) (List_1_t643 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31995(__this, ___index, ___enumerable, method) (( void (*) (List_1_t643 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<RealAngusItemDesc>::Remove(T)
#define List_1_Remove_m31996(__this, ___item, method) (( bool (*) (List_1_t643 *, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31997(__this, ___match, method) (( int32_t (*) (List_1_t643 *, Predicate_1_t6314 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31998(__this, ___index, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31999(__this, ___index, ___count, method) (( void (*) (List_1_t643 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Reverse()
#define List_1_Reverse_m32000(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Sort()
#define List_1_Sort_m32001(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m32002(__this, ___comparer, method) (( void (*) (List_1_t643 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m32003(__this, ___comparison, method) (( void (*) (List_1_t643 *, Comparison_1_t6316 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<RealAngusItemDesc>::ToArray()
#define List_1_ToArray_m32004(__this, method) (( RealAngusItemDescU5BU5D_t6311* (*) (List_1_t643 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::TrimExcess()
#define List_1_TrimExcess_m32005(__this, method) (( void (*) (List_1_t643 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Capacity()
#define List_1_get_Capacity_m32006(__this, method) (( int32_t (*) (List_1_t643 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m32007(__this, ___value, method) (( void (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<RealAngusItemDesc>::get_Count()
#define List_1_get_Count_m32008(__this, method) (( int32_t (*) (List_1_t643 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<RealAngusItemDesc>::get_Item(System.Int32)
#define List_1_get_Item_m32009(__this, ___index, method) (( RealAngusItemDesc_t646 * (*) (List_1_t643 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<RealAngusItemDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m32010(__this, ___index, ___value, method) (( void (*) (List_1_t643 *, int32_t, RealAngusItemDesc_t646 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

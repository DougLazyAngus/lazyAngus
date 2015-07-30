#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t5947;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2171;
// System.Collections.Generic.IEnumerable`1<System.WeakReference>
struct IEnumerable_1_t8982;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t5946;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t8983;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.WeakReference>
struct ICollection_1_t8984;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>
struct ReadOnlyCollection_1_t5948;
// System.Predicate`1<System.WeakReference>
struct Predicate_1_t5949;
// System.Collections.Generic.IComparer`1<System.WeakReference>
struct IComparer_1_t8985;
// System.Comparison`1<System.WeakReference>
struct Comparison_1_t5951;
// System.Collections.Generic.List`1/Enumerator<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30522(__this, method) (( void (*) (List_1_t5947 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30523(__this, ___collection, method) (( void (*) (List_1_t5947 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Int32)
#define List_1__ctor_m30524(__this, ___capacity, method) (( void (*) (List_1_t5947 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(T[],System.Int32)
#define List_1__ctor_m30525(__this, ___data, ___size, method) (( void (*) (List_1_t5947 *, WeakReferenceU5BU5D_t5946*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.cctor()
#define List_1__cctor_m30526(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30527(__this, method) (( Object_t* (*) (List_1_t5947 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30528(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5947 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30529(__this, method) (( Object_t * (*) (List_1_t5947 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30530(__this, ___item, method) (( int32_t (*) (List_1_t5947 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30531(__this, ___item, method) (( bool (*) (List_1_t5947 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30532(__this, ___item, method) (( int32_t (*) (List_1_t5947 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30533(__this, ___index, ___item, method) (( void (*) (List_1_t5947 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30534(__this, ___item, method) (( void (*) (List_1_t5947 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30535(__this, method) (( bool (*) (List_1_t5947 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30536(__this, method) (( bool (*) (List_1_t5947 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30537(__this, method) (( Object_t * (*) (List_1_t5947 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30538(__this, method) (( bool (*) (List_1_t5947 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30539(__this, method) (( bool (*) (List_1_t5947 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30540(__this, ___index, method) (( Object_t * (*) (List_1_t5947 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30541(__this, ___index, ___value, method) (( void (*) (List_1_t5947 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(T)
#define List_1_Add_m30542(__this, ___item, method) (( void (*) (List_1_t5947 *, WeakReference_t2171 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30543(__this, ___newCount, method) (( void (*) (List_1_t5947 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30544(__this, ___idx, ___count, method) (( void (*) (List_1_t5947 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30545(__this, ___collection, method) (( void (*) (List_1_t5947 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30546(__this, ___enumerable, method) (( void (*) (List_1_t5947 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30547(__this, ___collection, method) (( void (*) (List_1_t5947 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.WeakReference>::AsReadOnly()
#define List_1_AsReadOnly_m30548(__this, method) (( ReadOnlyCollection_1_t5948 * (*) (List_1_t5947 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Clear()
#define List_1_Clear_m30549(__this, method) (( void (*) (List_1_t5947 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Contains(T)
#define List_1_Contains_m30550(__this, ___item, method) (( bool (*) (List_1_t5947 *, WeakReference_t2171 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30551(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5947 *, WeakReferenceU5BU5D_t5946*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.WeakReference>::Find(System.Predicate`1<T>)
#define List_1_Find_m30552(__this, ___match, method) (( WeakReference_t2171 * (*) (List_1_t5947 *, Predicate_1_t5949 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30553(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5949 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30554(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5947 *, int32_t, int32_t, Predicate_1_t5949 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
#define List_1_GetEnumerator_m30555(__this, method) (( Enumerator_t5950  (*) (List_1_t5947 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30556(__this, ___index, ___count, method) (( List_1_t5947 * (*) (List_1_t5947 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::IndexOf(T)
#define List_1_IndexOf_m30557(__this, ___item, method) (( int32_t (*) (List_1_t5947 *, WeakReference_t2171 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30558(__this, ___start, ___delta, method) (( void (*) (List_1_t5947 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30559(__this, ___index, method) (( void (*) (List_1_t5947 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Insert(System.Int32,T)
#define List_1_Insert_m30560(__this, ___index, ___item, method) (( void (*) (List_1_t5947 *, int32_t, WeakReference_t2171 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30561(__this, ___collection, method) (( void (*) (List_1_t5947 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30562(__this, ___index, ___collection, method) (( void (*) (List_1_t5947 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30563(__this, ___index, ___collection, method) (( void (*) (List_1_t5947 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30564(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5947 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(T)
#define List_1_Remove_m30565(__this, ___item, method) (( bool (*) (List_1_t5947 *, WeakReference_t2171 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30566(__this, ___match, method) (( int32_t (*) (List_1_t5947 *, Predicate_1_t5949 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30567(__this, ___index, method) (( void (*) (List_1_t5947 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30568(__this, ___index, ___count, method) (( void (*) (List_1_t5947 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Reverse()
#define List_1_Reverse_m30569(__this, method) (( void (*) (List_1_t5947 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort()
#define List_1_Sort_m30570(__this, method) (( void (*) (List_1_t5947 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30571(__this, ___comparer, method) (( void (*) (List_1_t5947 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30572(__this, ___comparison, method) (( void (*) (List_1_t5947 *, Comparison_1_t5951 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.WeakReference>::ToArray()
#define List_1_ToArray_m30573(__this, method) (( WeakReferenceU5BU5D_t5946* (*) (List_1_t5947 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::TrimExcess()
#define List_1_TrimExcess_m30574(__this, method) (( void (*) (List_1_t5947 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Capacity()
#define List_1_get_Capacity_m30575(__this, method) (( int32_t (*) (List_1_t5947 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30576(__this, ___value, method) (( void (*) (List_1_t5947 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Count()
#define List_1_get_Count_m30577(__this, method) (( int32_t (*) (List_1_t5947 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.WeakReference>::get_Item(System.Int32)
#define List_1_get_Item_m30578(__this, ___index, method) (( WeakReference_t2171 * (*) (List_1_t5947 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Item(System.Int32,T)
#define List_1_set_Item_m30579(__this, ___index, ___value, method) (( void (*) (List_1_t5947 *, int32_t, WeakReference_t2171 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)

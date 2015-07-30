#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t2900;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1326;
// System.Type[]
struct TypeU5BU5D_t1148;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t9005;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t9000;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t8464;
// System.Predicate`1<System.Type>
struct Predicate_1_t8465;
// System.Collections.Generic.IComparer`1<System.Type>
struct IComparer_1_t9576;
// System.Comparison`1<System.Type>
struct Comparison_1_t8467;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_101.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9897(__this, method) (( void (*) (List_1_t2900 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m61685(__this, ___collection, method) (( void (*) (List_1_t2900 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m61686(__this, ___capacity, method) (( void (*) (List_1_t2900 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(T[],System.Int32)
#define List_1__ctor_m61687(__this, ___data, ___size, method) (( void (*) (List_1_t2900 *, TypeU5BU5D_t1148*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m61688(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61689(__this, method) (( Object_t* (*) (List_1_t2900 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m61690(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2900 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m61691(__this, method) (( Object_t * (*) (List_1_t2900 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m61692(__this, ___item, method) (( int32_t (*) (List_1_t2900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m61693(__this, ___item, method) (( bool (*) (List_1_t2900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m61694(__this, ___item, method) (( int32_t (*) (List_1_t2900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m61695(__this, ___index, ___item, method) (( void (*) (List_1_t2900 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m61696(__this, ___item, method) (( void (*) (List_1_t2900 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61697(__this, method) (( bool (*) (List_1_t2900 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m61698(__this, method) (( bool (*) (List_1_t2900 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m61699(__this, method) (( Object_t * (*) (List_1_t2900 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m61700(__this, method) (( bool (*) (List_1_t2900 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m61701(__this, method) (( bool (*) (List_1_t2900 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m61702(__this, ___index, method) (( Object_t * (*) (List_1_t2900 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m61703(__this, ___index, ___value, method) (( void (*) (List_1_t2900 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m61704(__this, ___item, method) (( void (*) (List_1_t2900 *, Type_t *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m61705(__this, ___newCount, method) (( void (*) (List_1_t2900 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m61706(__this, ___idx, ___count, method) (( void (*) (List_1_t2900 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m61707(__this, ___collection, method) (( void (*) (List_1_t2900 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m61708(__this, ___enumerable, method) (( void (*) (List_1_t2900 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m61709(__this, ___collection, method) (( void (*) (List_1_t2900 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m61710(__this, method) (( ReadOnlyCollection_1_t8464 * (*) (List_1_t2900 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m61711(__this, method) (( void (*) (List_1_t2900 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m61712(__this, ___item, method) (( bool (*) (List_1_t2900 *, Type_t *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m61713(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2900 *, TypeU5BU5D_t1148*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m61714(__this, ___match, method) (( Type_t * (*) (List_1_t2900 *, Predicate_1_t8465 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m61715(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8465 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m61716(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2900 *, int32_t, int32_t, Predicate_1_t8465 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m61717(__this, method) (( Enumerator_t8466  (*) (List_1_t2900 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Type>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m61718(__this, ___index, ___count, method) (( List_1_t2900 * (*) (List_1_t2900 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m61719(__this, ___item, method) (( int32_t (*) (List_1_t2900 *, Type_t *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m61720(__this, ___start, ___delta, method) (( void (*) (List_1_t2900 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m61721(__this, ___index, method) (( void (*) (List_1_t2900 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m61722(__this, ___index, ___item, method) (( void (*) (List_1_t2900 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m61723(__this, ___collection, method) (( void (*) (List_1_t2900 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m61724(__this, ___index, ___collection, method) (( void (*) (List_1_t2900 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m61725(__this, ___index, ___collection, method) (( void (*) (List_1_t2900 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m61726(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2900 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m61727(__this, ___item, method) (( bool (*) (List_1_t2900 *, Type_t *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m61728(__this, ___match, method) (( int32_t (*) (List_1_t2900 *, Predicate_1_t8465 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m61729(__this, ___index, method) (( void (*) (List_1_t2900 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m61730(__this, ___index, ___count, method) (( void (*) (List_1_t2900 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m61731(__this, method) (( void (*) (List_1_t2900 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m61732(__this, method) (( void (*) (List_1_t2900 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m61733(__this, ___comparer, method) (( void (*) (List_1_t2900 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m61734(__this, ___comparison, method) (( void (*) (List_1_t2900 *, Comparison_1_t8467 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m9898(__this, method) (( TypeU5BU5D_t1148* (*) (List_1_t2900 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m61735(__this, method) (( void (*) (List_1_t2900 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m61736(__this, method) (( int32_t (*) (List_1_t2900 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m61737(__this, ___value, method) (( void (*) (List_1_t2900 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m61738(__this, method) (( int32_t (*) (List_1_t2900 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m61739(__this, ___index, method) (( Type_t * (*) (List_1_t2900 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m61740(__this, ___index, ___value, method) (( void (*) (List_1_t2900 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)

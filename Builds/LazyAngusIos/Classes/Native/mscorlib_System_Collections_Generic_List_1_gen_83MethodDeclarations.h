#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseACL>
struct List_1_t6892;
// System.Object
struct Object_t;
// Parse.ParseACL
struct ParseACL_t1161;
// System.Collections.Generic.IEnumerable`1<Parse.ParseACL>
struct IEnumerable_1_t9170;
// Parse.ParseACL[]
struct ParseACLU5BU5D_t6891;
// System.Collections.Generic.IEnumerator`1<Parse.ParseACL>
struct IEnumerator_1_t9119;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseACL>
struct ICollection_1_t9171;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseACL>
struct ReadOnlyCollection_1_t6893;
// System.Predicate`1<Parse.ParseACL>
struct Predicate_1_t6894;
// System.Collections.Generic.IComparer`1<Parse.ParseACL>
struct IComparer_1_t9172;
// System.Comparison`1<Parse.ParseACL>
struct Comparison_1_t6896;
// System.Collections.Generic.List`1/Enumerator<Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_66.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m42748(__this, method) (( void (*) (List_1_t6892 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m42749(__this, ___collection, method) (( void (*) (List_1_t6892 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(System.Int32)
#define List_1__ctor_m42750(__this, ___capacity, method) (( void (*) (List_1_t6892 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(T[],System.Int32)
#define List_1__ctor_m42751(__this, ___data, ___size, method) (( void (*) (List_1_t6892 *, ParseACLU5BU5D_t6891*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.cctor()
#define List_1__cctor_m42752(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42753(__this, method) (( Object_t* (*) (List_1_t6892 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m42754(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6892 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42755(__this, method) (( Object_t * (*) (List_1_t6892 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m42756(__this, ___item, method) (( int32_t (*) (List_1_t6892 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m42757(__this, ___item, method) (( bool (*) (List_1_t6892 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m42758(__this, ___item, method) (( int32_t (*) (List_1_t6892 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m42759(__this, ___index, ___item, method) (( void (*) (List_1_t6892 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m42760(__this, ___item, method) (( void (*) (List_1_t6892 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42761(__this, method) (( bool (*) (List_1_t6892 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42762(__this, method) (( bool (*) (List_1_t6892 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m42763(__this, method) (( Object_t * (*) (List_1_t6892 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m42764(__this, method) (( bool (*) (List_1_t6892 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m42765(__this, method) (( bool (*) (List_1_t6892 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m42766(__this, ___index, method) (( Object_t * (*) (List_1_t6892 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m42767(__this, ___index, ___value, method) (( void (*) (List_1_t6892 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Add(T)
#define List_1_Add_m42768(__this, ___item, method) (( void (*) (List_1_t6892 *, ParseACL_t1161 *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m42769(__this, ___newCount, method) (( void (*) (List_1_t6892 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m42770(__this, ___idx, ___count, method) (( void (*) (List_1_t6892 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m42771(__this, ___collection, method) (( void (*) (List_1_t6892 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m42772(__this, ___enumerable, method) (( void (*) (List_1_t6892 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m42773(__this, ___collection, method) (( void (*) (List_1_t6892 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::AsReadOnly()
#define List_1_AsReadOnly_m42774(__this, method) (( ReadOnlyCollection_1_t6893 * (*) (List_1_t6892 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Clear()
#define List_1_Clear_m42775(__this, method) (( void (*) (List_1_t6892 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::Contains(T)
#define List_1_Contains_m42776(__this, ___item, method) (( bool (*) (List_1_t6892 *, ParseACL_t1161 *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m42777(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6892 *, ParseACLU5BU5D_t6891*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseACL>::Find(System.Predicate`1<T>)
#define List_1_Find_m42778(__this, ___match, method) (( ParseACL_t1161 * (*) (List_1_t6892 *, Predicate_1_t6894 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m42779(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6894 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m42780(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6892 *, int32_t, int32_t, Predicate_1_t6894 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseACL>::GetEnumerator()
#define List_1_GetEnumerator_m42781(__this, method) (( Enumerator_t6895  (*) (List_1_t6892 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m42782(__this, ___index, ___count, method) (( List_1_t6892 * (*) (List_1_t6892 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::IndexOf(T)
#define List_1_IndexOf_m42783(__this, ___item, method) (( int32_t (*) (List_1_t6892 *, ParseACL_t1161 *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m42784(__this, ___start, ___delta, method) (( void (*) (List_1_t6892 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m42785(__this, ___index, method) (( void (*) (List_1_t6892 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Insert(System.Int32,T)
#define List_1_Insert_m42786(__this, ___index, ___item, method) (( void (*) (List_1_t6892 *, int32_t, ParseACL_t1161 *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m42787(__this, ___collection, method) (( void (*) (List_1_t6892 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m42788(__this, ___index, ___collection, method) (( void (*) (List_1_t6892 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m42789(__this, ___index, ___collection, method) (( void (*) (List_1_t6892 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m42790(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6892 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::Remove(T)
#define List_1_Remove_m42791(__this, ___item, method) (( bool (*) (List_1_t6892 *, ParseACL_t1161 *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m42792(__this, ___match, method) (( int32_t (*) (List_1_t6892 *, Predicate_1_t6894 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m42793(__this, ___index, method) (( void (*) (List_1_t6892 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m42794(__this, ___index, ___count, method) (( void (*) (List_1_t6892 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Reverse()
#define List_1_Reverse_m42795(__this, method) (( void (*) (List_1_t6892 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort()
#define List_1_Sort_m42796(__this, method) (( void (*) (List_1_t6892 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m42797(__this, ___comparer, method) (( void (*) (List_1_t6892 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m42798(__this, ___comparison, method) (( void (*) (List_1_t6892 *, Comparison_1_t6896 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseACL>::ToArray()
#define List_1_ToArray_m42799(__this, method) (( ParseACLU5BU5D_t6891* (*) (List_1_t6892 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::TrimExcess()
#define List_1_TrimExcess_m42800(__this, method) (( void (*) (List_1_t6892 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::get_Capacity()
#define List_1_get_Capacity_m42801(__this, method) (( int32_t (*) (List_1_t6892 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m42802(__this, ___value, method) (( void (*) (List_1_t6892 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::get_Count()
#define List_1_get_Count_m42803(__this, method) (( int32_t (*) (List_1_t6892 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseACL>::get_Item(System.Int32)
#define List_1_get_Item_m42804(__this, ___index, method) (( ParseACL_t1161 * (*) (List_1_t6892 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::set_Item(System.Int32,T)
#define List_1_set_Item_m42805(__this, ___index, ___value, method) (( void (*) (List_1_t6892 *, int32_t, ParseACL_t1161 *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)

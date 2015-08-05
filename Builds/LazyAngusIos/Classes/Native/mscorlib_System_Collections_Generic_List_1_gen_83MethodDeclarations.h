#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseACL>
struct List_1_t6896;
// System.Object
struct Object_t;
// Parse.ParseACL
struct ParseACL_t1165;
// System.Collections.Generic.IEnumerable`1<Parse.ParseACL>
struct IEnumerable_1_t9174;
// Parse.ParseACL[]
struct ParseACLU5BU5D_t6895;
// System.Collections.Generic.IEnumerator`1<Parse.ParseACL>
struct IEnumerator_1_t9123;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseACL>
struct ICollection_1_t9175;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseACL>
struct ReadOnlyCollection_1_t6897;
// System.Predicate`1<Parse.ParseACL>
struct Predicate_1_t6898;
// System.Collections.Generic.IComparer`1<Parse.ParseACL>
struct IComparer_1_t9176;
// System.Comparison`1<Parse.ParseACL>
struct Comparison_1_t6900;
// System.Collections.Generic.List`1/Enumerator<Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_66.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m42779(__this, method) (( void (*) (List_1_t6896 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m42780(__this, ___collection, method) (( void (*) (List_1_t6896 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(System.Int32)
#define List_1__ctor_m42781(__this, ___capacity, method) (( void (*) (List_1_t6896 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(T[],System.Int32)
#define List_1__ctor_m42782(__this, ___data, ___size, method) (( void (*) (List_1_t6896 *, ParseACLU5BU5D_t6895*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.cctor()
#define List_1__cctor_m42783(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42784(__this, method) (( Object_t* (*) (List_1_t6896 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m42785(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6896 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42786(__this, method) (( Object_t * (*) (List_1_t6896 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m42787(__this, ___item, method) (( int32_t (*) (List_1_t6896 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m42788(__this, ___item, method) (( bool (*) (List_1_t6896 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m42789(__this, ___item, method) (( int32_t (*) (List_1_t6896 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m42790(__this, ___index, ___item, method) (( void (*) (List_1_t6896 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m42791(__this, ___item, method) (( void (*) (List_1_t6896 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42792(__this, method) (( bool (*) (List_1_t6896 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42793(__this, method) (( bool (*) (List_1_t6896 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m42794(__this, method) (( Object_t * (*) (List_1_t6896 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m42795(__this, method) (( bool (*) (List_1_t6896 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m42796(__this, method) (( bool (*) (List_1_t6896 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m42797(__this, ___index, method) (( Object_t * (*) (List_1_t6896 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m42798(__this, ___index, ___value, method) (( void (*) (List_1_t6896 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Add(T)
#define List_1_Add_m42799(__this, ___item, method) (( void (*) (List_1_t6896 *, ParseACL_t1165 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m42800(__this, ___newCount, method) (( void (*) (List_1_t6896 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m42801(__this, ___idx, ___count, method) (( void (*) (List_1_t6896 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m42802(__this, ___collection, method) (( void (*) (List_1_t6896 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m42803(__this, ___enumerable, method) (( void (*) (List_1_t6896 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m42804(__this, ___collection, method) (( void (*) (List_1_t6896 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::AsReadOnly()
#define List_1_AsReadOnly_m42805(__this, method) (( ReadOnlyCollection_1_t6897 * (*) (List_1_t6896 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Clear()
#define List_1_Clear_m42806(__this, method) (( void (*) (List_1_t6896 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::Contains(T)
#define List_1_Contains_m42807(__this, ___item, method) (( bool (*) (List_1_t6896 *, ParseACL_t1165 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m42808(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6896 *, ParseACLU5BU5D_t6895*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseACL>::Find(System.Predicate`1<T>)
#define List_1_Find_m42809(__this, ___match, method) (( ParseACL_t1165 * (*) (List_1_t6896 *, Predicate_1_t6898 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m42810(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6898 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m42811(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6896 *, int32_t, int32_t, Predicate_1_t6898 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseACL>::GetEnumerator()
#define List_1_GetEnumerator_m42812(__this, method) (( Enumerator_t6899  (*) (List_1_t6896 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m42813(__this, ___index, ___count, method) (( List_1_t6896 * (*) (List_1_t6896 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::IndexOf(T)
#define List_1_IndexOf_m42814(__this, ___item, method) (( int32_t (*) (List_1_t6896 *, ParseACL_t1165 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m42815(__this, ___start, ___delta, method) (( void (*) (List_1_t6896 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m42816(__this, ___index, method) (( void (*) (List_1_t6896 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Insert(System.Int32,T)
#define List_1_Insert_m42817(__this, ___index, ___item, method) (( void (*) (List_1_t6896 *, int32_t, ParseACL_t1165 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m42818(__this, ___collection, method) (( void (*) (List_1_t6896 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m42819(__this, ___index, ___collection, method) (( void (*) (List_1_t6896 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m42820(__this, ___index, ___collection, method) (( void (*) (List_1_t6896 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m42821(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6896 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::Remove(T)
#define List_1_Remove_m42822(__this, ___item, method) (( bool (*) (List_1_t6896 *, ParseACL_t1165 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m42823(__this, ___match, method) (( int32_t (*) (List_1_t6896 *, Predicate_1_t6898 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m42824(__this, ___index, method) (( void (*) (List_1_t6896 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m42825(__this, ___index, ___count, method) (( void (*) (List_1_t6896 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Reverse()
#define List_1_Reverse_m42826(__this, method) (( void (*) (List_1_t6896 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort()
#define List_1_Sort_m42827(__this, method) (( void (*) (List_1_t6896 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m42828(__this, ___comparer, method) (( void (*) (List_1_t6896 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m42829(__this, ___comparison, method) (( void (*) (List_1_t6896 *, Comparison_1_t6900 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseACL>::ToArray()
#define List_1_ToArray_m42830(__this, method) (( ParseACLU5BU5D_t6895* (*) (List_1_t6896 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::TrimExcess()
#define List_1_TrimExcess_m42831(__this, method) (( void (*) (List_1_t6896 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::get_Capacity()
#define List_1_get_Capacity_m42832(__this, method) (( int32_t (*) (List_1_t6896 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m42833(__this, ___value, method) (( void (*) (List_1_t6896 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::get_Count()
#define List_1_get_Count_m42834(__this, method) (( int32_t (*) (List_1_t6896 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseACL>::get_Item(System.Int32)
#define List_1_get_Item_m42835(__this, ___index, method) (( ParseACL_t1165 * (*) (List_1_t6896 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::set_Item(System.Int32,T)
#define List_1_set_Item_m42836(__this, ___index, ___value, method) (( void (*) (List_1_t6896 *, int32_t, ParseACL_t1165 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

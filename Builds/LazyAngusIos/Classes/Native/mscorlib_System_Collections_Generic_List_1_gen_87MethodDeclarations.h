#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseACL>
struct List_1_t6970;
// System.Object
struct Object_t;
// Parse.ParseACL
struct ParseACL_t1214;
// System.Collections.Generic.IEnumerable`1<Parse.ParseACL>
struct IEnumerable_1_t9271;
// Parse.ParseACL[]
struct ParseACLU5BU5D_t6969;
// System.Collections.Generic.IEnumerator`1<Parse.ParseACL>
struct IEnumerator_1_t9220;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseACL>
struct ICollection_1_t9272;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseACL>
struct ReadOnlyCollection_1_t6971;
// System.Predicate`1<Parse.ParseACL>
struct Predicate_1_t6972;
// System.Collections.Generic.IComparer`1<Parse.ParseACL>
struct IComparer_1_t9273;
// System.Comparison`1<Parse.ParseACL>
struct Comparison_1_t6974;
// System.Collections.Generic.List`1/Enumerator<Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_70.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m43536(__this, method) (( void (*) (List_1_t6970 *, const MethodInfo*))List_1__ctor_m3698_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m43537(__this, ___collection, method) (( void (*) (List_1_t6970 *, Object_t*, const MethodInfo*))List_1__ctor_m7458_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(System.Int32)
#define List_1__ctor_m43538(__this, ___capacity, method) (( void (*) (List_1_t6970 *, int32_t, const MethodInfo*))List_1__ctor_m21556_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.ctor(T[],System.Int32)
#define List_1__ctor_m43539(__this, ___data, ___size, method) (( void (*) (List_1_t6970 *, ParseACLU5BU5D_t6969*, int32_t, const MethodInfo*))List_1__ctor_m21558_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::.cctor()
#define List_1__cctor_m43540(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21560_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43541(__this, method) (( Object_t* (*) (List_1_t6970 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10351_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m43542(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6970 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10334_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m43543(__this, method) (( Object_t * (*) (List_1_t6970 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10330_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m43544(__this, ___item, method) (( int32_t (*) (List_1_t6970 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10339_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m43545(__this, ___item, method) (( bool (*) (List_1_t6970 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10341_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m43546(__this, ___item, method) (( int32_t (*) (List_1_t6970 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m43547(__this, ___index, ___item, method) (( void (*) (List_1_t6970 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m43548(__this, ___item, method) (( void (*) (List_1_t6970 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43549(__this, method) (( bool (*) (List_1_t6970 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m43550(__this, method) (( bool (*) (List_1_t6970 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10332_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m43551(__this, method) (( Object_t * (*) (List_1_t6970 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10333_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m43552(__this, method) (( bool (*) (List_1_t6970 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m43553(__this, method) (( bool (*) (List_1_t6970 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10336_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m43554(__this, ___index, method) (( Object_t * (*) (List_1_t6970 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10337_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m43555(__this, ___index, ___value, method) (( void (*) (List_1_t6970 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10338_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Add(T)
#define List_1_Add_m43556(__this, ___item, method) (( void (*) (List_1_t6970 *, ParseACL_t1214 *, const MethodInfo*))List_1_Add_m10347_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m43557(__this, ___newCount, method) (( void (*) (List_1_t6970 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21578_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m43558(__this, ___idx, ___count, method) (( void (*) (List_1_t6970 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21580_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m43559(__this, ___collection, method) (( void (*) (List_1_t6970 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21582_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m43560(__this, ___enumerable, method) (( void (*) (List_1_t6970 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21584_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m43561(__this, ___collection, method) (( void (*) (List_1_t6970 *, Object_t*, const MethodInfo*))List_1_AddRange_m21586_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::AsReadOnly()
#define List_1_AsReadOnly_m43562(__this, method) (( ReadOnlyCollection_1_t6971 * (*) (List_1_t6970 *, const MethodInfo*))List_1_AsReadOnly_m21588_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Clear()
#define List_1_Clear_m43563(__this, method) (( void (*) (List_1_t6970 *, const MethodInfo*))List_1_Clear_m10340_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::Contains(T)
#define List_1_Contains_m43564(__this, ___item, method) (( bool (*) (List_1_t6970 *, ParseACL_t1214 *, const MethodInfo*))List_1_Contains_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m43565(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6970 *, ParseACLU5BU5D_t6969*, int32_t, const MethodInfo*))List_1_CopyTo_m10349_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseACL>::Find(System.Predicate`1<T>)
#define List_1_Find_m43566(__this, ___match, method) (( ParseACL_t1214 * (*) (List_1_t6970 *, Predicate_1_t6972 *, const MethodInfo*))List_1_Find_m21593_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m43567(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6972 *, const MethodInfo*))List_1_CheckMatch_m21595_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m43568(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6970 *, int32_t, int32_t, Predicate_1_t6972 *, const MethodInfo*))List_1_GetIndex_m21597_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseACL>::GetEnumerator()
#define List_1_GetEnumerator_m43569(__this, method) (( Enumerator_t6973  (*) (List_1_t6970 *, const MethodInfo*))List_1_GetEnumerator_m3854_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseACL>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m43570(__this, ___index, ___count, method) (( List_1_t6970 * (*) (List_1_t6970 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21599_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::IndexOf(T)
#define List_1_IndexOf_m43571(__this, ___item, method) (( int32_t (*) (List_1_t6970 *, ParseACL_t1214 *, const MethodInfo*))List_1_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m43572(__this, ___start, ___delta, method) (( void (*) (List_1_t6970 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21602_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m43573(__this, ___index, method) (( void (*) (List_1_t6970 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21604_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Insert(System.Int32,T)
#define List_1_Insert_m43574(__this, ___index, ___item, method) (( void (*) (List_1_t6970 *, int32_t, ParseACL_t1214 *, const MethodInfo*))List_1_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m43575(__this, ___collection, method) (( void (*) (List_1_t6970 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21607_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m43576(__this, ___index, ___collection, method) (( void (*) (List_1_t6970 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21609_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m43577(__this, ___index, ___collection, method) (( void (*) (List_1_t6970 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21611_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m43578(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6970 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21613_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseACL>::Remove(T)
#define List_1_Remove_m43579(__this, ___item, method) (( bool (*) (List_1_t6970 *, ParseACL_t1214 *, const MethodInfo*))List_1_Remove_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m43580(__this, ___match, method) (( int32_t (*) (List_1_t6970 *, Predicate_1_t6972 *, const MethodInfo*))List_1_RemoveAll_m21616_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m43581(__this, ___index, method) (( void (*) (List_1_t6970 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10345_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m43582(__this, ___index, ___count, method) (( void (*) (List_1_t6970 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21619_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Reverse()
#define List_1_Reverse_m43583(__this, method) (( void (*) (List_1_t6970 *, const MethodInfo*))List_1_Reverse_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort()
#define List_1_Sort_m43584(__this, method) (( void (*) (List_1_t6970 *, const MethodInfo*))List_1_Sort_m21623_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m43585(__this, ___comparer, method) (( void (*) (List_1_t6970 *, Object_t*, const MethodInfo*))List_1_Sort_m21625_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m43586(__this, ___comparison, method) (( void (*) (List_1_t6970 *, Comparison_1_t6974 *, const MethodInfo*))List_1_Sort_m21627_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseACL>::ToArray()
#define List_1_ToArray_m43587(__this, method) (( ParseACLU5BU5D_t6969* (*) (List_1_t6970 *, const MethodInfo*))List_1_ToArray_m21629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::TrimExcess()
#define List_1_TrimExcess_m43588(__this, method) (( void (*) (List_1_t6970 *, const MethodInfo*))List_1_TrimExcess_m21631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::get_Capacity()
#define List_1_get_Capacity_m43589(__this, method) (( int32_t (*) (List_1_t6970 *, const MethodInfo*))List_1_get_Capacity_m21633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m43590(__this, ___value, method) (( void (*) (List_1_t6970 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21635_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseACL>::get_Count()
#define List_1_get_Count_m43591(__this, method) (( int32_t (*) (List_1_t6970 *, const MethodInfo*))List_1_get_Count_m10331_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseACL>::get_Item(System.Int32)
#define List_1_get_Item_m43592(__this, ___index, method) (( ParseACL_t1214 * (*) (List_1_t6970 *, int32_t, const MethodInfo*))List_1_get_Item_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseACL>::set_Item(System.Int32,T)
#define List_1_set_Item_m43593(__this, ___index, ___value, method) (( void (*) (List_1_t6970 *, int32_t, ParseACL_t1214 *, const MethodInfo*))List_1_set_Item_m10355_gshared)(__this, ___index, ___value, method)

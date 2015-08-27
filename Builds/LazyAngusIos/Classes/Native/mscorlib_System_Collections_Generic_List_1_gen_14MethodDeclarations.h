#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<TwitterUserInfo>
struct List_1_t321;
// System.Object
struct Object_t;
// TwitterUserInfo
struct TwitterUserInfo_t308;
// System.Collections.Generic.IEnumerable`1<TwitterUserInfo>
struct IEnumerable_1_t8895;
// TwitterUserInfo[]
struct TwitterUserInfoU5BU5D_t5621;
// System.Collections.Generic.IEnumerator`1<TwitterUserInfo>
struct IEnumerator_1_t8891;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<TwitterUserInfo>
struct ICollection_1_t8886;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TwitterUserInfo>
struct ReadOnlyCollection_1_t5633;
// System.Predicate`1<TwitterUserInfo>
struct Predicate_1_t5634;
// System.Collections.Generic.IComparer`1<TwitterUserInfo>
struct IComparer_1_t8896;
// System.Comparison`1<TwitterUserInfo>
struct Comparison_1_t5636;
// System.Collections.Generic.List`1/Enumerator<TwitterUserInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22.h"

// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3939(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25671(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor(System.Int32)
#define List_1__ctor_m25672(__this, ___capacity, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m25673(__this, ___data, ___size, method) (( void (*) (List_1_t321 *, TwitterUserInfoU5BU5D_t5621*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.cctor()
#define List_1__cctor_m25674(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25675(__this, method) (( Object_t* (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25676(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t321 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25677(__this, method) (( Object_t * (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25678(__this, ___item, method) (( int32_t (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25679(__this, ___item, method) (( bool (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25680(__this, ___item, method) (( int32_t (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25681(__this, ___index, ___item, method) (( void (*) (List_1_t321 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25682(__this, ___item, method) (( void (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25683(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25684(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25685(__this, method) (( Object_t * (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25686(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25687(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25688(__this, ___index, method) (( Object_t * (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25689(__this, ___index, ___value, method) (( void (*) (List_1_t321 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Add(T)
#define List_1_Add_m25690(__this, ___item, method) (( void (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25691(__this, ___newCount, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25692(__this, ___idx, ___count, method) (( void (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25693(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25694(__this, ___enumerable, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25695(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<TwitterUserInfo>::AsReadOnly()
#define List_1_AsReadOnly_m25696(__this, method) (( ReadOnlyCollection_1_t5633 * (*) (List_1_t321 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Clear()
#define List_1_Clear_m25697(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::Contains(T)
#define List_1_Contains_m25698(__this, ___item, method) (( bool (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25699(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t321 *, TwitterUserInfoU5BU5D_t5621*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<TwitterUserInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m25700(__this, ___match, method) (( TwitterUserInfo_t308 * (*) (List_1_t321 *, Predicate_1_t5634 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25701(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5634 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25702(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t321 *, int32_t, int32_t, Predicate_1_t5634 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TwitterUserInfo>::GetEnumerator()
#define List_1_GetEnumerator_m25703(__this, method) (( Enumerator_t5635  (*) (List_1_t321 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<TwitterUserInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m25704(__this, ___index, ___count, method) (( List_1_t321 * (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::IndexOf(T)
#define List_1_IndexOf_m25705(__this, ___item, method) (( int32_t (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25706(__this, ___start, ___delta, method) (( void (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25707(__this, ___index, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Insert(System.Int32,T)
#define List_1_Insert_m25708(__this, ___index, ___item, method) (( void (*) (List_1_t321 *, int32_t, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25709(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m25710(__this, ___index, ___collection, method) (( void (*) (List_1_t321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25711(__this, ___index, ___collection, method) (( void (*) (List_1_t321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25712(__this, ___index, ___enumerable, method) (( void (*) (List_1_t321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::Remove(T)
#define List_1_Remove_m25713(__this, ___item, method) (( bool (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25714(__this, ___match, method) (( int32_t (*) (List_1_t321 *, Predicate_1_t5634 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25715(__this, ___index, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m25716(__this, ___index, ___count, method) (( void (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Reverse()
#define List_1_Reverse_m25717(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Sort()
#define List_1_Sort_m25718(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25719(__this, ___comparer, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25720(__this, ___comparison, method) (( void (*) (List_1_t321 *, Comparison_1_t5636 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<TwitterUserInfo>::ToArray()
#define List_1_ToArray_m25721(__this, method) (( TwitterUserInfoU5BU5D_t5621* (*) (List_1_t321 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::TrimExcess()
#define List_1_TrimExcess_m25722(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::get_Capacity()
#define List_1_get_Capacity_m25723(__this, method) (( int32_t (*) (List_1_t321 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25724(__this, ___value, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::get_Count()
#define List_1_get_Count_m25725(__this, method) (( int32_t (*) (List_1_t321 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<TwitterUserInfo>::get_Item(System.Int32)
#define List_1_get_Item_m25726(__this, ___index, method) (( TwitterUserInfo_t308 * (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m25727(__this, ___index, ___value, method) (( void (*) (List_1_t321 *, int32_t, TwitterUserInfo_t308 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

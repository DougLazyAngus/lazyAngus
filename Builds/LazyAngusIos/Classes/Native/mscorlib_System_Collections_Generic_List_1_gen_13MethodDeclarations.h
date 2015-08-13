#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<TweetTemplate>
struct List_1_t320;
// System.Object
struct Object_t;
// TweetTemplate
struct TweetTemplate_t323;
// System.Collections.Generic.IEnumerable`1<TweetTemplate>
struct IEnumerable_1_t8886;
// TweetTemplate[]
struct TweetTemplateU5BU5D_t5614;
// System.Collections.Generic.IEnumerator`1<TweetTemplate>
struct IEnumerator_1_t8877;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<TweetTemplate>
struct ICollection_1_t8872;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TweetTemplate>
struct ReadOnlyCollection_1_t5627;
// System.Predicate`1<TweetTemplate>
struct Predicate_1_t5628;
// System.Collections.Generic.IComparer`1<TweetTemplate>
struct IComparer_1_t8887;
// System.Comparison`1<TweetTemplate>
struct Comparison_1_t5630;
// System.Collections.Generic.List`1/Enumerator<TweetTemplate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3923(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25550(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1__ctor_m7471_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(System.Int32)
#define List_1__ctor_m25551(__this, ___capacity, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1__ctor_m21570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.ctor(T[],System.Int32)
#define List_1__ctor_m25552(__this, ___data, ___size, method) (( void (*) (List_1_t320 *, TweetTemplateU5BU5D_t5614*, int32_t, const MethodInfo*))List_1__ctor_m21572_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::.cctor()
#define List_1__cctor_m25553(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<TweetTemplate>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25554(__this, method) (( Object_t* (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25555(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25556(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25557(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25558(__this, ___item, method) (( bool (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25559(__this, ___item, method) (( int32_t (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25560(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25561(__this, ___item, method) (( void (*) (List_1_t320 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25562(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25563(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TweetTemplate>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25564(__this, method) (( Object_t * (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25565(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25566(__this, method) (( bool (*) (List_1_t320 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25567(__this, ___index, method) (( Object_t * (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25568(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Add(T)
#define List_1_Add_m25569(__this, ___item, method) (( void (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Add_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25570(__this, ___newCount, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25571(__this, ___idx, ___count, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21594_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25572(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25573(__this, ___enumerable, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25574(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_AddRange_m21600_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<TweetTemplate>::AsReadOnly()
#define List_1_AsReadOnly_m25575(__this, method) (( ReadOnlyCollection_1_t5627 * (*) (List_1_t320 *, const MethodInfo*))List_1_AsReadOnly_m21602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Clear()
#define List_1_Clear_m25576(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Clear_m10350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::Contains(T)
#define List_1_Contains_m25577(__this, ___item, method) (( bool (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Contains_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25578(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t320 *, TweetTemplateU5BU5D_t5614*, int32_t, const MethodInfo*))List_1_CopyTo_m10359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<TweetTemplate>::Find(System.Predicate`1<T>)
#define List_1_Find_m25579(__this, ___match, method) (( TweetTemplate_t323 * (*) (List_1_t320 *, Predicate_1_t5628 *, const MethodInfo*))List_1_Find_m21607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25580(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5628 *, const MethodInfo*))List_1_CheckMatch_m21609_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25581(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t320 *, int32_t, int32_t, Predicate_1_t5628 *, const MethodInfo*))List_1_GetIndex_m21611_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TweetTemplate>::GetEnumerator()
#define List_1_GetEnumerator_m25582(__this, method) (( Enumerator_t5629  (*) (List_1_t320 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<TweetTemplate>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m25583(__this, ___index, ___count, method) (( List_1_t320 * (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21613_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::IndexOf(T)
#define List_1_IndexOf_m25584(__this, ___item, method) (( int32_t (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_IndexOf_m10362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25585(__this, ___start, ___delta, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25586(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Insert(System.Int32,T)
#define List_1_Insert_m25587(__this, ___index, ___item, method) (( void (*) (List_1_t320 *, int32_t, TweetTemplate_t323 *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25588(__this, ___collection, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m25589(__this, ___index, ___collection, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21623_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25590(__this, ___index, ___collection, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21625_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25591(__this, ___index, ___enumerable, method) (( void (*) (List_1_t320 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21627_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<TweetTemplate>::Remove(T)
#define List_1_Remove_m25592(__this, ___item, method) (( bool (*) (List_1_t320 *, TweetTemplate_t323 *, const MethodInfo*))List_1_Remove_m10360_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25593(__this, ___match, method) (( int32_t (*) (List_1_t320 *, Predicate_1_t5628 *, const MethodInfo*))List_1_RemoveAll_m21630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25594(__this, ___index, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m25595(__this, ___index, ___count, method) (( void (*) (List_1_t320 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21633_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Reverse()
#define List_1_Reverse_m25596(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Reverse_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort()
#define List_1_Sort_m25597(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_Sort_m21637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25598(__this, ___comparer, method) (( void (*) (List_1_t320 *, Object_t*, const MethodInfo*))List_1_Sort_m21639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25599(__this, ___comparison, method) (( void (*) (List_1_t320 *, Comparison_1_t5630 *, const MethodInfo*))List_1_Sort_m21641_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<TweetTemplate>::ToArray()
#define List_1_ToArray_m25600(__this, method) (( TweetTemplateU5BU5D_t5614* (*) (List_1_t320 *, const MethodInfo*))List_1_ToArray_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::TrimExcess()
#define List_1_TrimExcess_m25601(__this, method) (( void (*) (List_1_t320 *, const MethodInfo*))List_1_TrimExcess_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::get_Capacity()
#define List_1_get_Capacity_m25602(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Capacity_m21647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25603(__this, ___value, method) (( void (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21649_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<TweetTemplate>::get_Count()
#define List_1_get_Count_m25604(__this, method) (( int32_t (*) (List_1_t320 *, const MethodInfo*))List_1_get_Count_m10341_gshared)(__this, method)
// T System.Collections.Generic.List`1<TweetTemplate>::get_Item(System.Int32)
#define List_1_get_Item_m25605(__this, ___index, method) (( TweetTemplate_t323 * (*) (List_1_t320 *, int32_t, const MethodInfo*))List_1_get_Item_m10364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TweetTemplate>::set_Item(System.Int32,T)
#define List_1_set_Item_m25606(__this, ___index, ___value, method) (( void (*) (List_1_t320 *, int32_t, TweetTemplate_t323 *, const MethodInfo*))List_1_set_Item_m10365_gshared)(__this, ___index, ___value, method)

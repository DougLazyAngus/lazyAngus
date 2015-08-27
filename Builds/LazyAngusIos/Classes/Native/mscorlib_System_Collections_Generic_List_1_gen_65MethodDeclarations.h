#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t4021;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t4019;
// System.Collections.Generic.IEnumerable`1<System.Net.Cookie>
struct IEnumerable_1_t9723;
// System.Net.Cookie[]
struct CookieU5BU5D_t8644;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t9724;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Net.Cookie>
struct ICollection_1_t9725;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Net.Cookie>
struct ReadOnlyCollection_1_t8645;
// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t8646;
// System.Collections.Generic.IComparer`1<System.Net.Cookie>
struct IComparer_1_t4323;
// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t8647;
// System.Collections.Generic.List`1/Enumerator<System.Net.Cookie>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m15124(__this, method) (( void (*) (List_1_t4021 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m63801(__this, ___collection, method) (( void (*) (List_1_t4021 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Int32)
#define List_1__ctor_m63802(__this, ___capacity, method) (( void (*) (List_1_t4021 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(T[],System.Int32)
#define List_1__ctor_m63803(__this, ___data, ___size, method) (( void (*) (List_1_t4021 *, CookieU5BU5D_t8644*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.cctor()
#define List_1__cctor_m63804(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63805(__this, method) (( Object_t* (*) (List_1_t4021 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m63806(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4021 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m63807(__this, method) (( Object_t * (*) (List_1_t4021 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m63808(__this, ___item, method) (( int32_t (*) (List_1_t4021 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m63809(__this, ___item, method) (( bool (*) (List_1_t4021 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m63810(__this, ___item, method) (( int32_t (*) (List_1_t4021 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m63811(__this, ___index, ___item, method) (( void (*) (List_1_t4021 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m63812(__this, ___item, method) (( void (*) (List_1_t4021 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63813(__this, method) (( bool (*) (List_1_t4021 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m63814(__this, method) (( bool (*) (List_1_t4021 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m63815(__this, method) (( Object_t * (*) (List_1_t4021 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m63816(__this, method) (( bool (*) (List_1_t4021 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m63817(__this, method) (( bool (*) (List_1_t4021 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m63818(__this, ___index, method) (( Object_t * (*) (List_1_t4021 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m63819(__this, ___index, ___value, method) (( void (*) (List_1_t4021 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Add(T)
#define List_1_Add_m63820(__this, ___item, method) (( void (*) (List_1_t4021 *, Cookie_t4019 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m63821(__this, ___newCount, method) (( void (*) (List_1_t4021 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m63822(__this, ___idx, ___count, method) (( void (*) (List_1_t4021 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m63823(__this, ___collection, method) (( void (*) (List_1_t4021 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m63824(__this, ___enumerable, method) (( void (*) (List_1_t4021 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m63825(__this, ___collection, method) (( void (*) (List_1_t4021 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::AsReadOnly()
#define List_1_AsReadOnly_m63826(__this, method) (( ReadOnlyCollection_1_t8645 * (*) (List_1_t4021 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Clear()
#define List_1_Clear_m63827(__this, method) (( void (*) (List_1_t4021 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Contains(T)
#define List_1_Contains_m63828(__this, ___item, method) (( bool (*) (List_1_t4021 *, Cookie_t4019 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m63829(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4021 *, CookieU5BU5D_t8644*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::Find(System.Predicate`1<T>)
#define List_1_Find_m63830(__this, ___match, method) (( Cookie_t4019 * (*) (List_1_t4021 *, Predicate_1_t8646 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m63831(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8646 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m63832(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4021 *, int32_t, int32_t, Predicate_1_t8646 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetEnumerator()
#define List_1_GetEnumerator_m15125(__this, method) (( Enumerator_t4199  (*) (List_1_t4021 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m63833(__this, ___index, ___count, method) (( List_1_t4021 * (*) (List_1_t4021 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::IndexOf(T)
#define List_1_IndexOf_m63834(__this, ___item, method) (( int32_t (*) (List_1_t4021 *, Cookie_t4019 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m63835(__this, ___start, ___delta, method) (( void (*) (List_1_t4021 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m63836(__this, ___index, method) (( void (*) (List_1_t4021 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Insert(System.Int32,T)
#define List_1_Insert_m63837(__this, ___index, ___item, method) (( void (*) (List_1_t4021 *, int32_t, Cookie_t4019 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m63838(__this, ___collection, method) (( void (*) (List_1_t4021 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m63839(__this, ___index, ___collection, method) (( void (*) (List_1_t4021 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m63840(__this, ___index, ___collection, method) (( void (*) (List_1_t4021 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m63841(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4021 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Remove(T)
#define List_1_Remove_m63842(__this, ___item, method) (( bool (*) (List_1_t4021 *, Cookie_t4019 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m63843(__this, ___match, method) (( int32_t (*) (List_1_t4021 *, Predicate_1_t8646 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m63844(__this, ___index, method) (( void (*) (List_1_t4021 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m63845(__this, ___index, ___count, method) (( void (*) (List_1_t4021 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Reverse()
#define List_1_Reverse_m63846(__this, method) (( void (*) (List_1_t4021 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort()
#define List_1_Sort_m63847(__this, method) (( void (*) (List_1_t4021 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m15126(__this, ___comparer, method) (( void (*) (List_1_t4021 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m63848(__this, ___comparison, method) (( void (*) (List_1_t4021 *, Comparison_1_t8647 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Net.Cookie>::ToArray()
#define List_1_ToArray_m63849(__this, method) (( CookieU5BU5D_t8644* (*) (List_1_t4021 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::TrimExcess()
#define List_1_TrimExcess_m63850(__this, method) (( void (*) (List_1_t4021 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Capacity()
#define List_1_get_Capacity_m63851(__this, method) (( int32_t (*) (List_1_t4021 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m63852(__this, ___value, method) (( void (*) (List_1_t4021 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Count()
#define List_1_get_Count_m63853(__this, method) (( int32_t (*) (List_1_t4021 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::get_Item(System.Int32)
#define List_1_get_Item_m63854(__this, ___index, method) (( Cookie_t4019 * (*) (List_1_t4021 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define List_1_set_Item_m63855(__this, ___index, ___value, method) (( void (*) (List_1_t4021 *, int32_t, Cookie_t4019 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

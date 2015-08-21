#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t4018;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t4016;
// System.Collections.Generic.IEnumerable`1<System.Net.Cookie>
struct IEnumerable_1_t9720;
// System.Net.Cookie[]
struct CookieU5BU5D_t8641;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t9721;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Net.Cookie>
struct ICollection_1_t9722;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Net.Cookie>
struct ReadOnlyCollection_1_t8642;
// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t8643;
// System.Collections.Generic.IComparer`1<System.Net.Cookie>
struct IComparer_1_t4320;
// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t8644;
// System.Collections.Generic.List`1/Enumerator<System.Net.Cookie>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m15092(__this, method) (( void (*) (List_1_t4018 *, const MethodInfo*))List_1__ctor_m3699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m63769(__this, ___collection, method) (( void (*) (List_1_t4018 *, Object_t*, const MethodInfo*))List_1__ctor_m7459_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Int32)
#define List_1__ctor_m63770(__this, ___capacity, method) (( void (*) (List_1_t4018 *, int32_t, const MethodInfo*))List_1__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(T[],System.Int32)
#define List_1__ctor_m63771(__this, ___data, ___size, method) (( void (*) (List_1_t4018 *, CookieU5BU5D_t8641*, int32_t, const MethodInfo*))List_1__ctor_m21559_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.cctor()
#define List_1__cctor_m63772(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21561_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63773(__this, method) (( Object_t* (*) (List_1_t4018 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m63774(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4018 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10335_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m63775(__this, method) (( Object_t * (*) (List_1_t4018 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m63776(__this, ___item, method) (( int32_t (*) (List_1_t4018 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10340_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m63777(__this, ___item, method) (( bool (*) (List_1_t4018 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10342_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m63778(__this, ___item, method) (( int32_t (*) (List_1_t4018 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10343_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m63779(__this, ___index, ___item, method) (( void (*) (List_1_t4018 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10344_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m63780(__this, ___item, method) (( void (*) (List_1_t4018 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10345_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63781(__this, method) (( bool (*) (List_1_t4018 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m63782(__this, method) (( bool (*) (List_1_t4018 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10333_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m63783(__this, method) (( Object_t * (*) (List_1_t4018 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m63784(__this, method) (( bool (*) (List_1_t4018 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10336_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m63785(__this, method) (( bool (*) (List_1_t4018 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10337_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m63786(__this, ___index, method) (( Object_t * (*) (List_1_t4018 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10338_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m63787(__this, ___index, ___value, method) (( void (*) (List_1_t4018 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10339_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Add(T)
#define List_1_Add_m63788(__this, ___item, method) (( void (*) (List_1_t4018 *, Cookie_t4016 *, const MethodInfo*))List_1_Add_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m63789(__this, ___newCount, method) (( void (*) (List_1_t4018 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21579_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m63790(__this, ___idx, ___count, method) (( void (*) (List_1_t4018 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21581_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m63791(__this, ___collection, method) (( void (*) (List_1_t4018 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21583_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m63792(__this, ___enumerable, method) (( void (*) (List_1_t4018 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21585_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m63793(__this, ___collection, method) (( void (*) (List_1_t4018 *, Object_t*, const MethodInfo*))List_1_AddRange_m21587_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::AsReadOnly()
#define List_1_AsReadOnly_m63794(__this, method) (( ReadOnlyCollection_1_t8642 * (*) (List_1_t4018 *, const MethodInfo*))List_1_AsReadOnly_m21589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Clear()
#define List_1_Clear_m63795(__this, method) (( void (*) (List_1_t4018 *, const MethodInfo*))List_1_Clear_m10341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Contains(T)
#define List_1_Contains_m63796(__this, ___item, method) (( bool (*) (List_1_t4018 *, Cookie_t4016 *, const MethodInfo*))List_1_Contains_m10349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m63797(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4018 *, CookieU5BU5D_t8641*, int32_t, const MethodInfo*))List_1_CopyTo_m10350_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::Find(System.Predicate`1<T>)
#define List_1_Find_m63798(__this, ___match, method) (( Cookie_t4016 * (*) (List_1_t4018 *, Predicate_1_t8643 *, const MethodInfo*))List_1_Find_m21594_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m63799(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8643 *, const MethodInfo*))List_1_CheckMatch_m21596_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m63800(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4018 *, int32_t, int32_t, Predicate_1_t8643 *, const MethodInfo*))List_1_GetIndex_m21598_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetEnumerator()
#define List_1_GetEnumerator_m15093(__this, method) (( Enumerator_t4196  (*) (List_1_t4018 *, const MethodInfo*))List_1_GetEnumerator_m3855_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m63801(__this, ___index, ___count, method) (( List_1_t4018 * (*) (List_1_t4018 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21600_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::IndexOf(T)
#define List_1_IndexOf_m63802(__this, ___item, method) (( int32_t (*) (List_1_t4018 *, Cookie_t4016 *, const MethodInfo*))List_1_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m63803(__this, ___start, ___delta, method) (( void (*) (List_1_t4018 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21603_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m63804(__this, ___index, method) (( void (*) (List_1_t4018 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21605_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Insert(System.Int32,T)
#define List_1_Insert_m63805(__this, ___index, ___item, method) (( void (*) (List_1_t4018 *, int32_t, Cookie_t4016 *, const MethodInfo*))List_1_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m63806(__this, ___collection, method) (( void (*) (List_1_t4018 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21608_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m63807(__this, ___index, ___collection, method) (( void (*) (List_1_t4018 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21610_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m63808(__this, ___index, ___collection, method) (( void (*) (List_1_t4018 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21612_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m63809(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4018 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21614_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Remove(T)
#define List_1_Remove_m63810(__this, ___item, method) (( bool (*) (List_1_t4018 *, Cookie_t4016 *, const MethodInfo*))List_1_Remove_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m63811(__this, ___match, method) (( int32_t (*) (List_1_t4018 *, Predicate_1_t8643 *, const MethodInfo*))List_1_RemoveAll_m21617_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m63812(__this, ___index, method) (( void (*) (List_1_t4018 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m63813(__this, ___index, ___count, method) (( void (*) (List_1_t4018 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21620_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Reverse()
#define List_1_Reverse_m63814(__this, method) (( void (*) (List_1_t4018 *, const MethodInfo*))List_1_Reverse_m21622_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort()
#define List_1_Sort_m63815(__this, method) (( void (*) (List_1_t4018 *, const MethodInfo*))List_1_Sort_m21624_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m15094(__this, ___comparer, method) (( void (*) (List_1_t4018 *, Object_t*, const MethodInfo*))List_1_Sort_m21626_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m63816(__this, ___comparison, method) (( void (*) (List_1_t4018 *, Comparison_1_t8644 *, const MethodInfo*))List_1_Sort_m21628_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Net.Cookie>::ToArray()
#define List_1_ToArray_m63817(__this, method) (( CookieU5BU5D_t8641* (*) (List_1_t4018 *, const MethodInfo*))List_1_ToArray_m21630_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::TrimExcess()
#define List_1_TrimExcess_m63818(__this, method) (( void (*) (List_1_t4018 *, const MethodInfo*))List_1_TrimExcess_m21632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Capacity()
#define List_1_get_Capacity_m63819(__this, method) (( int32_t (*) (List_1_t4018 *, const MethodInfo*))List_1_get_Capacity_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m63820(__this, ___value, method) (( void (*) (List_1_t4018 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21636_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Count()
#define List_1_get_Count_m63821(__this, method) (( int32_t (*) (List_1_t4018 *, const MethodInfo*))List_1_get_Count_m10332_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::get_Item(System.Int32)
#define List_1_get_Item_m63822(__this, ___index, method) (( Cookie_t4016 * (*) (List_1_t4018 *, int32_t, const MethodInfo*))List_1_get_Item_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define List_1_set_Item_m63823(__this, ___index, ___value, method) (( void (*) (List_1_t4018 *, int32_t, Cookie_t4016 *, const MethodInfo*))List_1_set_Item_m10356_gshared)(__this, ___index, ___value, method)

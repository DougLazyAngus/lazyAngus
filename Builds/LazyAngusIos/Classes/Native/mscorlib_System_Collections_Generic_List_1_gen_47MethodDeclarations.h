#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t1486;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t1484;
// System.Collections.Generic.IEnumerable`1<System.Net.Cookie>
struct IEnumerable_1_t4575;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t4576;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Net.Cookie>
struct ICollection_1_t4577;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Net.Cookie>
struct ReadOnlyCollection_1_t4004;
// System.Net.Cookie[]
struct CookieU5BU5D_t4003;
// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t4005;
// System.Collections.Generic.IComparer`1<System.Net.Cookie>
struct IComparer_1_t1848;
// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t4006;
// System.Collections.Generic.List`1/Enumerator<System.Net.Cookie>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m8582(__this, method) (( void (*) (List_1_t1486 *, const MethodInfo*))List_1__ctor_m2481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27142(__this, ___collection, method) (( void (*) (List_1_t1486 *, Object_t*, const MethodInfo*))List_1__ctor_m16636_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Int32)
#define List_1__ctor_m27143(__this, ___capacity, method) (( void (*) (List_1_t1486 *, int32_t, const MethodInfo*))List_1__ctor_m16638_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.cctor()
#define List_1__cctor_m27144(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16640_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27145(__this, method) (( Object_t* (*) (List_1_t1486 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27146(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1486 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27147(__this, method) (( Object_t * (*) (List_1_t1486 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27148(__this, ___item, method) (( int32_t (*) (List_1_t1486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6646_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27149(__this, ___item, method) (( bool (*) (List_1_t1486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6648_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27150(__this, ___item, method) (( int32_t (*) (List_1_t1486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6649_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27151(__this, ___index, ___item, method) (( void (*) (List_1_t1486 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6650_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27152(__this, ___item, method) (( void (*) (List_1_t1486 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6651_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27153(__this, method) (( bool (*) (List_1_t1486 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27154(__this, method) (( bool (*) (List_1_t1486 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6639_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27155(__this, method) (( Object_t * (*) (List_1_t1486 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27156(__this, method) (( bool (*) (List_1_t1486 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27157(__this, method) (( bool (*) (List_1_t1486 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27158(__this, ___index, method) (( Object_t * (*) (List_1_t1486 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6644_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27159(__this, ___index, ___value, method) (( void (*) (List_1_t1486 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6645_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Add(T)
#define List_1_Add_m27160(__this, ___item, method) (( void (*) (List_1_t1486 *, Cookie_t1484 *, const MethodInfo*))List_1_Add_m6654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27161(__this, ___newCount, method) (( void (*) (List_1_t1486 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16658_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27162(__this, ___collection, method) (( void (*) (List_1_t1486 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16660_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27163(__this, ___enumerable, method) (( void (*) (List_1_t1486 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16662_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27164(__this, ___collection, method) (( void (*) (List_1_t1486 *, Object_t*, const MethodInfo*))List_1_AddRange_m16664_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::AsReadOnly()
#define List_1_AsReadOnly_m27165(__this, method) (( ReadOnlyCollection_1_t4004 * (*) (List_1_t1486 *, const MethodInfo*))List_1_AsReadOnly_m16666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Clear()
#define List_1_Clear_m27166(__this, method) (( void (*) (List_1_t1486 *, const MethodInfo*))List_1_Clear_m6647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Contains(T)
#define List_1_Contains_m27167(__this, ___item, method) (( bool (*) (List_1_t1486 *, Cookie_t1484 *, const MethodInfo*))List_1_Contains_m6655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27168(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1486 *, CookieU5BU5D_t4003*, int32_t, const MethodInfo*))List_1_CopyTo_m6656_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::Find(System.Predicate`1<T>)
#define List_1_Find_m27169(__this, ___match, method) (( Cookie_t1484 * (*) (List_1_t1486 *, Predicate_1_t4005 *, const MethodInfo*))List_1_Find_m16671_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27170(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4005 *, const MethodInfo*))List_1_CheckMatch_m16673_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27171(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1486 *, int32_t, int32_t, Predicate_1_t4005 *, const MethodInfo*))List_1_GetIndex_m16675_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetEnumerator()
#define List_1_GetEnumerator_m8583(__this, method) (( Enumerator_t1716  (*) (List_1_t1486 *, const MethodInfo*))List_1_GetEnumerator_m2584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::IndexOf(T)
#define List_1_IndexOf_m27172(__this, ___item, method) (( int32_t (*) (List_1_t1486 *, Cookie_t1484 *, const MethodInfo*))List_1_IndexOf_m6659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27173(__this, ___start, ___delta, method) (( void (*) (List_1_t1486 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16678_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27174(__this, ___index, method) (( void (*) (List_1_t1486 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Insert(System.Int32,T)
#define List_1_Insert_m27175(__this, ___index, ___item, method) (( void (*) (List_1_t1486 *, int32_t, Cookie_t1484 *, const MethodInfo*))List_1_Insert_m6660_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27176(__this, ___collection, method) (( void (*) (List_1_t1486 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16683_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Remove(T)
#define List_1_Remove_m27177(__this, ___item, method) (( bool (*) (List_1_t1486 *, Cookie_t1484 *, const MethodInfo*))List_1_Remove_m6657_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27178(__this, ___match, method) (( int32_t (*) (List_1_t1486 *, Predicate_1_t4005 *, const MethodInfo*))List_1_RemoveAll_m16686_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27179(__this, ___index, method) (( void (*) (List_1_t1486 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6652_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Reverse()
#define List_1_Reverse_m27180(__this, method) (( void (*) (List_1_t1486 *, const MethodInfo*))List_1_Reverse_m16689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort()
#define List_1_Sort_m27181(__this, method) (( void (*) (List_1_t1486 *, const MethodInfo*))List_1_Sort_m16691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m8584(__this, ___comparer, method) (( void (*) (List_1_t1486 *, Object_t*, const MethodInfo*))List_1_Sort_m16693_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27182(__this, ___comparison, method) (( void (*) (List_1_t1486 *, Comparison_1_t4006 *, const MethodInfo*))List_1_Sort_m16695_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Net.Cookie>::ToArray()
#define List_1_ToArray_m27183(__this, method) (( CookieU5BU5D_t4003* (*) (List_1_t1486 *, const MethodInfo*))List_1_ToArray_m16697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::TrimExcess()
#define List_1_TrimExcess_m27184(__this, method) (( void (*) (List_1_t1486 *, const MethodInfo*))List_1_TrimExcess_m16699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Capacity()
#define List_1_get_Capacity_m27185(__this, method) (( int32_t (*) (List_1_t1486 *, const MethodInfo*))List_1_get_Capacity_m16701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27186(__this, ___value, method) (( void (*) (List_1_t1486 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16703_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Count()
#define List_1_get_Count_m27187(__this, method) (( int32_t (*) (List_1_t1486 *, const MethodInfo*))List_1_get_Count_m6638_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::get_Item(System.Int32)
#define List_1_get_Item_m27188(__this, ___index, method) (( Cookie_t1484 * (*) (List_1_t1486 *, int32_t, const MethodInfo*))List_1_get_Item_m6661_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define List_1_set_Item_m27189(__this, ___index, ___value, method) (( void (*) (List_1_t1486 *, int32_t, Cookie_t1484 *, const MethodInfo*))List_1_set_Item_m6662_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t2006;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t2004;
// System.Collections.Generic.IEnumerable`1<System.Net.Cookie>
struct IEnumerable_1_t4687;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t4688;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Net.Cookie>
struct ICollection_1_t4689;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Net.Cookie>
struct ReadOnlyCollection_1_t4126;
// System.Net.Cookie[]
struct CookieU5BU5D_t4125;
// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t4127;
// System.Collections.Generic.IComparer`1<System.Net.Cookie>
struct IComparer_1_t2293;
// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t4128;
// System.Collections.Generic.List`1/Enumerator<System.Net.Cookie>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m11553(__this, method) (( void (*) (List_1_t2006 *, const MethodInfo*))List_1__ctor_m3119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28554(__this, ___collection, method) (( void (*) (List_1_t2006 *, Object_t*, const MethodInfo*))List_1__ctor_m17400_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Int32)
#define List_1__ctor_m28555(__this, ___capacity, method) (( void (*) (List_1_t2006 *, int32_t, const MethodInfo*))List_1__ctor_m17402_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.cctor()
#define List_1__cctor_m28556(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17404_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28557(__this, method) (( Object_t* (*) (List_1_t2006 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28558(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2006 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7409_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28559(__this, method) (( Object_t * (*) (List_1_t2006 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7405_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28560(__this, ___item, method) (( int32_t (*) (List_1_t2006 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7414_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28561(__this, ___item, method) (( bool (*) (List_1_t2006 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7416_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28562(__this, ___item, method) (( int32_t (*) (List_1_t2006 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7417_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28563(__this, ___index, ___item, method) (( void (*) (List_1_t2006 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7418_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28564(__this, ___item, method) (( void (*) (List_1_t2006 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7419_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28565(__this, method) (( bool (*) (List_1_t2006 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7421_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28566(__this, method) (( bool (*) (List_1_t2006 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7407_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28567(__this, method) (( Object_t * (*) (List_1_t2006 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7408_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28568(__this, method) (( bool (*) (List_1_t2006 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28569(__this, method) (( bool (*) (List_1_t2006 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28570(__this, ___index, method) (( Object_t * (*) (List_1_t2006 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7412_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28571(__this, ___index, ___value, method) (( void (*) (List_1_t2006 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Add(T)
#define List_1_Add_m28572(__this, ___item, method) (( void (*) (List_1_t2006 *, Cookie_t2004 *, const MethodInfo*))List_1_Add_m7422_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28573(__this, ___newCount, method) (( void (*) (List_1_t2006 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17422_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28574(__this, ___collection, method) (( void (*) (List_1_t2006 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28575(__this, ___enumerable, method) (( void (*) (List_1_t2006 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17426_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28576(__this, ___collection, method) (( void (*) (List_1_t2006 *, Object_t*, const MethodInfo*))List_1_AddRange_m17428_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::AsReadOnly()
#define List_1_AsReadOnly_m28577(__this, method) (( ReadOnlyCollection_1_t4126 * (*) (List_1_t2006 *, const MethodInfo*))List_1_AsReadOnly_m17430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Clear()
#define List_1_Clear_m28578(__this, method) (( void (*) (List_1_t2006 *, const MethodInfo*))List_1_Clear_m7415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Contains(T)
#define List_1_Contains_m28579(__this, ___item, method) (( bool (*) (List_1_t2006 *, Cookie_t2004 *, const MethodInfo*))List_1_Contains_m7423_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28580(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2006 *, CookieU5BU5D_t4125*, int32_t, const MethodInfo*))List_1_CopyTo_m7424_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::Find(System.Predicate`1<T>)
#define List_1_Find_m28581(__this, ___match, method) (( Cookie_t2004 * (*) (List_1_t2006 *, Predicate_1_t4127 *, const MethodInfo*))List_1_Find_m17435_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28582(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4127 *, const MethodInfo*))List_1_CheckMatch_m17437_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28583(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2006 *, int32_t, int32_t, Predicate_1_t4127 *, const MethodInfo*))List_1_GetIndex_m17439_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetEnumerator()
#define List_1_GetEnumerator_m11554(__this, method) (( Enumerator_t2193  (*) (List_1_t2006 *, const MethodInfo*))List_1_GetEnumerator_m3277_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::IndexOf(T)
#define List_1_IndexOf_m28584(__this, ___item, method) (( int32_t (*) (List_1_t2006 *, Cookie_t2004 *, const MethodInfo*))List_1_IndexOf_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28585(__this, ___start, ___delta, method) (( void (*) (List_1_t2006 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17442_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28586(__this, ___index, method) (( void (*) (List_1_t2006 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17444_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Insert(System.Int32,T)
#define List_1_Insert_m28587(__this, ___index, ___item, method) (( void (*) (List_1_t2006 *, int32_t, Cookie_t2004 *, const MethodInfo*))List_1_Insert_m7428_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28588(__this, ___collection, method) (( void (*) (List_1_t2006 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17447_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Remove(T)
#define List_1_Remove_m28589(__this, ___item, method) (( bool (*) (List_1_t2006 *, Cookie_t2004 *, const MethodInfo*))List_1_Remove_m7425_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28590(__this, ___match, method) (( int32_t (*) (List_1_t2006 *, Predicate_1_t4127 *, const MethodInfo*))List_1_RemoveAll_m17450_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28591(__this, ___index, method) (( void (*) (List_1_t2006 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7420_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Reverse()
#define List_1_Reverse_m28592(__this, method) (( void (*) (List_1_t2006 *, const MethodInfo*))List_1_Reverse_m17453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort()
#define List_1_Sort_m28593(__this, method) (( void (*) (List_1_t2006 *, const MethodInfo*))List_1_Sort_m17455_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m11555(__this, ___comparer, method) (( void (*) (List_1_t2006 *, Object_t*, const MethodInfo*))List_1_Sort_m17457_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28594(__this, ___comparison, method) (( void (*) (List_1_t2006 *, Comparison_1_t4128 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Net.Cookie>::ToArray()
#define List_1_ToArray_m28595(__this, method) (( CookieU5BU5D_t4125* (*) (List_1_t2006 *, const MethodInfo*))List_1_ToArray_m17461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::TrimExcess()
#define List_1_TrimExcess_m28596(__this, method) (( void (*) (List_1_t2006 *, const MethodInfo*))List_1_TrimExcess_m17463_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Capacity()
#define List_1_get_Capacity_m28597(__this, method) (( int32_t (*) (List_1_t2006 *, const MethodInfo*))List_1_get_Capacity_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28598(__this, ___value, method) (( void (*) (List_1_t2006 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17467_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Count()
#define List_1_get_Count_m28599(__this, method) (( int32_t (*) (List_1_t2006 *, const MethodInfo*))List_1_get_Count_m7406_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::get_Item(System.Int32)
#define List_1_get_Item_m28600(__this, ___index, method) (( Cookie_t2004 * (*) (List_1_t2006 *, int32_t, const MethodInfo*))List_1_get_Item_m7429_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define List_1_set_Item_m28601(__this, ___index, ___value, method) (( void (*) (List_1_t2006 *, int32_t, Cookie_t2004 *, const MethodInfo*))List_1_set_Item_m7430_gshared)(__this, ___index, ___value, method)

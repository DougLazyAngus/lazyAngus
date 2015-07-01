#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t1464;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t1462;
// System.Collections.Generic.IEnumerable`1<System.Net.Cookie>
struct IEnumerable_1_t4551;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t4552;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Net.Cookie>
struct ICollection_1_t4553;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Net.Cookie>
struct ReadOnlyCollection_1_t3980;
// System.Net.Cookie[]
struct CookieU5BU5D_t3979;
// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t3981;
// System.Collections.Generic.IComparer`1<System.Net.Cookie>
struct IComparer_1_t1826;
// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t3982;
// System.Collections.Generic.List`1/Enumerator<System.Net.Cookie>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m8434(__this, method) (( void (*) (List_1_t1464 *, const MethodInfo*))List_1__ctor_m2341_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26984(__this, ___collection, method) (( void (*) (List_1_t1464 *, Object_t*, const MethodInfo*))List_1__ctor_m16488_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Int32)
#define List_1__ctor_m26985(__this, ___capacity, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1__ctor_m16490_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.cctor()
#define List_1__cctor_m26986(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16492_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26987(__this, method) (( Object_t* (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26988(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1464 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26989(__this, method) (( Object_t * (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6489_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26990(__this, ___item, method) (( int32_t (*) (List_1_t1464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6498_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26991(__this, ___item, method) (( bool (*) (List_1_t1464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6500_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26992(__this, ___item, method) (( int32_t (*) (List_1_t1464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26993(__this, ___index, ___item, method) (( void (*) (List_1_t1464 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6502_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26994(__this, ___item, method) (( void (*) (List_1_t1464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6503_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26995(__this, method) (( bool (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26996(__this, method) (( bool (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6491_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26997(__this, method) (( Object_t * (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26998(__this, method) (( bool (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26999(__this, method) (( bool (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6495_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27000(__this, ___index, method) (( Object_t * (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27001(__this, ___index, ___value, method) (( void (*) (List_1_t1464 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6497_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Add(T)
#define List_1_Add_m27002(__this, ___item, method) (( void (*) (List_1_t1464 *, Cookie_t1462 *, const MethodInfo*))List_1_Add_m6506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27003(__this, ___newCount, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16510_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27004(__this, ___collection, method) (( void (*) (List_1_t1464 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16512_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27005(__this, ___enumerable, method) (( void (*) (List_1_t1464 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16514_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27006(__this, ___collection, method) (( void (*) (List_1_t1464 *, Object_t*, const MethodInfo*))List_1_AddRange_m16516_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::AsReadOnly()
#define List_1_AsReadOnly_m27007(__this, method) (( ReadOnlyCollection_1_t3980 * (*) (List_1_t1464 *, const MethodInfo*))List_1_AsReadOnly_m16518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Clear()
#define List_1_Clear_m27008(__this, method) (( void (*) (List_1_t1464 *, const MethodInfo*))List_1_Clear_m6499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Contains(T)
#define List_1_Contains_m27009(__this, ___item, method) (( bool (*) (List_1_t1464 *, Cookie_t1462 *, const MethodInfo*))List_1_Contains_m6507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27010(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1464 *, CookieU5BU5D_t3979*, int32_t, const MethodInfo*))List_1_CopyTo_m6508_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::Find(System.Predicate`1<T>)
#define List_1_Find_m27011(__this, ___match, method) (( Cookie_t1462 * (*) (List_1_t1464 *, Predicate_1_t3981 *, const MethodInfo*))List_1_Find_m16523_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27012(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3981 *, const MethodInfo*))List_1_CheckMatch_m16525_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27013(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1464 *, int32_t, int32_t, Predicate_1_t3981 *, const MethodInfo*))List_1_GetIndex_m16527_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetEnumerator()
#define List_1_GetEnumerator_m8435(__this, method) (( Enumerator_t1694  (*) (List_1_t1464 *, const MethodInfo*))List_1_GetEnumerator_m2444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::IndexOf(T)
#define List_1_IndexOf_m27014(__this, ___item, method) (( int32_t (*) (List_1_t1464 *, Cookie_t1462 *, const MethodInfo*))List_1_IndexOf_m6511_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27015(__this, ___start, ___delta, method) (( void (*) (List_1_t1464 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16530_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27016(__this, ___index, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Insert(System.Int32,T)
#define List_1_Insert_m27017(__this, ___index, ___item, method) (( void (*) (List_1_t1464 *, int32_t, Cookie_t1462 *, const MethodInfo*))List_1_Insert_m6512_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27018(__this, ___collection, method) (( void (*) (List_1_t1464 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16535_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Remove(T)
#define List_1_Remove_m27019(__this, ___item, method) (( bool (*) (List_1_t1464 *, Cookie_t1462 *, const MethodInfo*))List_1_Remove_m6509_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27020(__this, ___match, method) (( int32_t (*) (List_1_t1464 *, Predicate_1_t3981 *, const MethodInfo*))List_1_RemoveAll_m16538_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27021(__this, ___index, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6504_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Reverse()
#define List_1_Reverse_m27022(__this, method) (( void (*) (List_1_t1464 *, const MethodInfo*))List_1_Reverse_m16541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort()
#define List_1_Sort_m27023(__this, method) (( void (*) (List_1_t1464 *, const MethodInfo*))List_1_Sort_m16543_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m8436(__this, ___comparer, method) (( void (*) (List_1_t1464 *, Object_t*, const MethodInfo*))List_1_Sort_m16545_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27024(__this, ___comparison, method) (( void (*) (List_1_t1464 *, Comparison_1_t3982 *, const MethodInfo*))List_1_Sort_m16547_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Net.Cookie>::ToArray()
#define List_1_ToArray_m27025(__this, method) (( CookieU5BU5D_t3979* (*) (List_1_t1464 *, const MethodInfo*))List_1_ToArray_m16549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::TrimExcess()
#define List_1_TrimExcess_m27026(__this, method) (( void (*) (List_1_t1464 *, const MethodInfo*))List_1_TrimExcess_m16551_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Capacity()
#define List_1_get_Capacity_m27027(__this, method) (( int32_t (*) (List_1_t1464 *, const MethodInfo*))List_1_get_Capacity_m16553_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27028(__this, ___value, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16555_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Count()
#define List_1_get_Count_m27029(__this, method) (( int32_t (*) (List_1_t1464 *, const MethodInfo*))List_1_get_Count_m6490_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::get_Item(System.Int32)
#define List_1_get_Item_m27030(__this, ___index, method) (( Cookie_t1462 * (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_get_Item_m6513_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define List_1_set_Item_m27031(__this, ___index, ___value, method) (( void (*) (List_1_t1464 *, int32_t, Cookie_t1462 *, const MethodInfo*))List_1_set_Item_m6514_gshared)(__this, ___index, ___value, method)

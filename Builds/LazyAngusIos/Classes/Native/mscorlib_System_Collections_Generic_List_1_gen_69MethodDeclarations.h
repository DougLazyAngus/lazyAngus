#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct List_1_t6060;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerable_1_t9019;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>[]
struct IDictionary_2U5BU5D_t6059;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerator_1_t9020;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ICollection_1_t9021;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ReadOnlyCollection_1_t6062;
// System.Predicate`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Predicate_1_t6063;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IComparer_1_t9022;
// System.Comparison`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Comparison_1_t6065;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m32053(__this, method) (( void (*) (List_1_t6060 *, const MethodInfo*))List_1__ctor_m3471_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m32054(__this, ___collection, method) (( void (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1__ctor_m7211_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m32055(__this, ___capacity, method) (( void (*) (List_1_t6060 *, int32_t, const MethodInfo*))List_1__ctor_m21311_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m32056(__this, ___data, ___size, method) (( void (*) (List_1_t6060 *, IDictionary_2U5BU5D_t6059*, int32_t, const MethodInfo*))List_1__ctor_m21313_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.cctor()
#define List_1__cctor_m32057(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21315_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32058(__this, method) (( Object_t* (*) (List_1_t6060 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10104_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m32059(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6060 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10087_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32060(__this, method) (( Object_t * (*) (List_1_t6060 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10083_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m32061(__this, ___item, method) (( int32_t (*) (List_1_t6060 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10092_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m32062(__this, ___item, method) (( bool (*) (List_1_t6060 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10094_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m32063(__this, ___item, method) (( int32_t (*) (List_1_t6060 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10095_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m32064(__this, ___index, ___item, method) (( void (*) (List_1_t6060 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10096_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m32065(__this, ___item, method) (( void (*) (List_1_t6060 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10097_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32066(__this, method) (( bool (*) (List_1_t6060 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32067(__this, method) (( bool (*) (List_1_t6060 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10085_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m32068(__this, method) (( Object_t * (*) (List_1_t6060 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m32069(__this, method) (( bool (*) (List_1_t6060 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m32070(__this, method) (( bool (*) (List_1_t6060 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10089_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m32071(__this, ___index, method) (( Object_t * (*) (List_1_t6060 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10090_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m32072(__this, ___index, ___value, method) (( void (*) (List_1_t6060 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10091_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Add(T)
#define List_1_Add_m32073(__this, ___item, method) (( void (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1_Add_m10100_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m32074(__this, ___newCount, method) (( void (*) (List_1_t6060 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21333_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m32075(__this, ___idx, ___count, method) (( void (*) (List_1_t6060 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21335_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m32076(__this, ___collection, method) (( void (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21337_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m32077(__this, ___enumerable, method) (( void (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21339_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m32078(__this, ___collection, method) (( void (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1_AddRange_m21341_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m32079(__this, method) (( ReadOnlyCollection_1_t6062 * (*) (List_1_t6060 *, const MethodInfo*))List_1_AsReadOnly_m21343_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Clear()
#define List_1_Clear_m32080(__this, method) (( void (*) (List_1_t6060 *, const MethodInfo*))List_1_Clear_m10093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Contains(T)
#define List_1_Contains_m32081(__this, ___item, method) (( bool (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1_Contains_m10101_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m32082(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6060 *, IDictionary_2U5BU5D_t6059*, int32_t, const MethodInfo*))List_1_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m32083(__this, ___match, method) (( Object_t* (*) (List_1_t6060 *, Predicate_1_t6063 *, const MethodInfo*))List_1_Find_m21348_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m32084(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6063 *, const MethodInfo*))List_1_CheckMatch_m21350_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m32085(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6060 *, int32_t, int32_t, Predicate_1_t6063 *, const MethodInfo*))List_1_GetIndex_m21352_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define List_1_GetEnumerator_m32086(__this, method) (( Enumerator_t6064  (*) (List_1_t6060 *, const MethodInfo*))List_1_GetEnumerator_m3627_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m32087(__this, ___index, ___count, method) (( List_1_t6060 * (*) (List_1_t6060 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21354_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::IndexOf(T)
#define List_1_IndexOf_m32088(__this, ___item, method) (( int32_t (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1_IndexOf_m10105_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m32089(__this, ___start, ___delta, method) (( void (*) (List_1_t6060 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21357_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m32090(__this, ___index, method) (( void (*) (List_1_t6060 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21359_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m32091(__this, ___index, ___item, method) (( void (*) (List_1_t6060 *, int32_t, Object_t*, const MethodInfo*))List_1_Insert_m10106_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m32092(__this, ___collection, method) (( void (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21362_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m32093(__this, ___index, ___collection, method) (( void (*) (List_1_t6060 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21364_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m32094(__this, ___index, ___collection, method) (( void (*) (List_1_t6060 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21366_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m32095(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6060 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21368_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Remove(T)
#define List_1_Remove_m32096(__this, ___item, method) (( bool (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1_Remove_m10103_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m32097(__this, ___match, method) (( int32_t (*) (List_1_t6060 *, Predicate_1_t6063 *, const MethodInfo*))List_1_RemoveAll_m21371_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m32098(__this, ___index, method) (( void (*) (List_1_t6060 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10098_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m32099(__this, ___index, ___count, method) (( void (*) (List_1_t6060 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21374_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Reverse()
#define List_1_Reverse_m32100(__this, method) (( void (*) (List_1_t6060 *, const MethodInfo*))List_1_Reverse_m21376_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort()
#define List_1_Sort_m32101(__this, method) (( void (*) (List_1_t6060 *, const MethodInfo*))List_1_Sort_m21378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m32102(__this, ___comparer, method) (( void (*) (List_1_t6060 *, Object_t*, const MethodInfo*))List_1_Sort_m21380_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m32103(__this, ___comparison, method) (( void (*) (List_1_t6060 *, Comparison_1_t6065 *, const MethodInfo*))List_1_Sort_m21382_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ToArray()
#define List_1_ToArray_m32104(__this, method) (( IDictionary_2U5BU5D_t6059* (*) (List_1_t6060 *, const MethodInfo*))List_1_ToArray_m21384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrimExcess()
#define List_1_TrimExcess_m32105(__this, method) (( void (*) (List_1_t6060 *, const MethodInfo*))List_1_TrimExcess_m21386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Capacity()
#define List_1_get_Capacity_m32106(__this, method) (( int32_t (*) (List_1_t6060 *, const MethodInfo*))List_1_get_Capacity_m21388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m32107(__this, ___value, method) (( void (*) (List_1_t6060 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21390_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define List_1_get_Count_m32108(__this, method) (( int32_t (*) (List_1_t6060 *, const MethodInfo*))List_1_get_Count_m10084_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m32109(__this, ___index, method) (( Object_t* (*) (List_1_t6060 *, int32_t, const MethodInfo*))List_1_get_Item_m10107_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m32110(__this, ___index, ___value, method) (( void (*) (List_1_t6060 *, int32_t, Object_t*, const MethodInfo*))List_1_set_Item_m10108_gshared)(__this, ___index, ___value, method)

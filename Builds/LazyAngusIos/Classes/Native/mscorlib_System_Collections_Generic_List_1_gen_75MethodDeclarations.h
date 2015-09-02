#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct List_1_t6169;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerable_1_t9158;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>[]
struct IDictionary_2U5BU5D_t6168;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerator_1_t9159;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ICollection_1_t9160;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ReadOnlyCollection_1_t6171;
// System.Predicate`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Predicate_1_t6172;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IComparer_1_t9161;
// System.Comparison`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Comparison_1_t6174;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_57.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m33197(__this, method) (( void (*) (List_1_t6169 *, const MethodInfo*))List_1__ctor_m3858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m33198(__this, ___collection, method) (( void (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1__ctor_m7623_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m33199(__this, ___capacity, method) (( void (*) (List_1_t6169 *, int32_t, const MethodInfo*))List_1__ctor_m21718_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m33200(__this, ___data, ___size, method) (( void (*) (List_1_t6169 *, IDictionary_2U5BU5D_t6168*, int32_t, const MethodInfo*))List_1__ctor_m21720_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.cctor()
#define List_1__cctor_m33201(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21722_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33202(__this, method) (( Object_t* (*) (List_1_t6169 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m33203(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6169 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10496_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33204(__this, method) (( Object_t * (*) (List_1_t6169 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m33205(__this, ___item, method) (( int32_t (*) (List_1_t6169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m33206(__this, ___item, method) (( bool (*) (List_1_t6169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10503_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m33207(__this, ___item, method) (( int32_t (*) (List_1_t6169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10504_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m33208(__this, ___index, ___item, method) (( void (*) (List_1_t6169 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10505_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m33209(__this, ___item, method) (( void (*) (List_1_t6169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10506_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33210(__this, method) (( bool (*) (List_1_t6169 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33211(__this, method) (( bool (*) (List_1_t6169 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10494_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m33212(__this, method) (( Object_t * (*) (List_1_t6169 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m33213(__this, method) (( bool (*) (List_1_t6169 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m33214(__this, method) (( bool (*) (List_1_t6169 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10498_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m33215(__this, ___index, method) (( Object_t * (*) (List_1_t6169 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m33216(__this, ___index, ___value, method) (( void (*) (List_1_t6169 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10500_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Add(T)
#define List_1_Add_m33217(__this, ___item, method) (( void (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1_Add_m10509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m33218(__this, ___newCount, method) (( void (*) (List_1_t6169 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21740_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m33219(__this, ___idx, ___count, method) (( void (*) (List_1_t6169 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21742_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m33220(__this, ___collection, method) (( void (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21744_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m33221(__this, ___enumerable, method) (( void (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21746_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m33222(__this, ___collection, method) (( void (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1_AddRange_m21748_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m33223(__this, method) (( ReadOnlyCollection_1_t6171 * (*) (List_1_t6169 *, const MethodInfo*))List_1_AsReadOnly_m21750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Clear()
#define List_1_Clear_m33224(__this, method) (( void (*) (List_1_t6169 *, const MethodInfo*))List_1_Clear_m10502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Contains(T)
#define List_1_Contains_m33225(__this, ___item, method) (( bool (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1_Contains_m10510_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m33226(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6169 *, IDictionary_2U5BU5D_t6168*, int32_t, const MethodInfo*))List_1_CopyTo_m10511_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m33227(__this, ___match, method) (( Object_t* (*) (List_1_t6169 *, Predicate_1_t6172 *, const MethodInfo*))List_1_Find_m21755_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m33228(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6172 *, const MethodInfo*))List_1_CheckMatch_m21757_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m33229(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6169 *, int32_t, int32_t, Predicate_1_t6172 *, const MethodInfo*))List_1_GetIndex_m21759_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define List_1_GetEnumerator_m33230(__this, method) (( Enumerator_t6173  (*) (List_1_t6169 *, const MethodInfo*))List_1_GetEnumerator_m4014_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m33231(__this, ___index, ___count, method) (( List_1_t6169 * (*) (List_1_t6169 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21761_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::IndexOf(T)
#define List_1_IndexOf_m33232(__this, ___item, method) (( int32_t (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1_IndexOf_m10514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m33233(__this, ___start, ___delta, method) (( void (*) (List_1_t6169 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21764_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m33234(__this, ___index, method) (( void (*) (List_1_t6169 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m33235(__this, ___index, ___item, method) (( void (*) (List_1_t6169 *, int32_t, Object_t*, const MethodInfo*))List_1_Insert_m10515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m33236(__this, ___collection, method) (( void (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21769_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m33237(__this, ___index, ___collection, method) (( void (*) (List_1_t6169 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m33238(__this, ___index, ___collection, method) (( void (*) (List_1_t6169 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21773_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m33239(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6169 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21775_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Remove(T)
#define List_1_Remove_m33240(__this, ___item, method) (( bool (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1_Remove_m10512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m33241(__this, ___match, method) (( int32_t (*) (List_1_t6169 *, Predicate_1_t6172 *, const MethodInfo*))List_1_RemoveAll_m21778_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m33242(__this, ___index, method) (( void (*) (List_1_t6169 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m33243(__this, ___index, ___count, method) (( void (*) (List_1_t6169 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21781_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Reverse()
#define List_1_Reverse_m33244(__this, method) (( void (*) (List_1_t6169 *, const MethodInfo*))List_1_Reverse_m21783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort()
#define List_1_Sort_m33245(__this, method) (( void (*) (List_1_t6169 *, const MethodInfo*))List_1_Sort_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m33246(__this, ___comparer, method) (( void (*) (List_1_t6169 *, Object_t*, const MethodInfo*))List_1_Sort_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m33247(__this, ___comparison, method) (( void (*) (List_1_t6169 *, Comparison_1_t6174 *, const MethodInfo*))List_1_Sort_m21789_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ToArray()
#define List_1_ToArray_m33248(__this, method) (( IDictionary_2U5BU5D_t6168* (*) (List_1_t6169 *, const MethodInfo*))List_1_ToArray_m21791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrimExcess()
#define List_1_TrimExcess_m33249(__this, method) (( void (*) (List_1_t6169 *, const MethodInfo*))List_1_TrimExcess_m21793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Capacity()
#define List_1_get_Capacity_m33250(__this, method) (( int32_t (*) (List_1_t6169 *, const MethodInfo*))List_1_get_Capacity_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m33251(__this, ___value, method) (( void (*) (List_1_t6169 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21797_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define List_1_get_Count_m33252(__this, method) (( int32_t (*) (List_1_t6169 *, const MethodInfo*))List_1_get_Count_m10493_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m33253(__this, ___index, method) (( Object_t* (*) (List_1_t6169 *, int32_t, const MethodInfo*))List_1_get_Item_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m33254(__this, ___index, ___value, method) (( void (*) (List_1_t6169 *, int32_t, Object_t*, const MethodInfo*))List_1_set_Item_m10517_gshared)(__this, ___index, ___value, method)

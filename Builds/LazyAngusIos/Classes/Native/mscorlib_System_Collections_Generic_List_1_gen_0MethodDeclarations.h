#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t535;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t556;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1238;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t3321;
// System.Object[]
struct ObjectU5BU5D_t533;
// System.Predicate`1<System.Object>
struct Predicate_1_t3323;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3550;
// System.Comparison`1<System.Object>
struct Comparison_1_t3330;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m2609_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1__ctor_m2609(__this, method) (( void (*) (List_1_t535 *, const MethodInfo*))List_1__ctor_m2609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16816_gshared (List_1_t535 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16816(__this, ___collection, method) (( void (*) (List_1_t535 *, Object_t*, const MethodInfo*))List_1__ctor_m16816_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m16818_gshared (List_1_t535 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m16818(__this, ___capacity, method) (( void (*) (List_1_t535 *, int32_t, const MethodInfo*))List_1__ctor_m16818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m16820_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16820(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838(__this, method) (( Object_t* (*) (List_1_t535 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m6821_gshared (List_1_t535 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m6821(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t535 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6821_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m6817(__this, method) (( Object_t * (*) (List_1_t535 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m6826_gshared (List_1_t535 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m6826(__this, ___item, method) (( int32_t (*) (List_1_t535 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m6828_gshared (List_1_t535 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m6828(__this, ___item, method) (( bool (*) (List_1_t535 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6828_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m6829_gshared (List_1_t535 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m6829(__this, ___item, method) (( int32_t (*) (List_1_t535 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m6830_gshared (List_1_t535 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m6830(__this, ___index, ___item, method) (( void (*) (List_1_t535 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m6831_gshared (List_1_t535 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m6831(__this, ___item, method) (( void (*) (List_1_t535 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6831_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833(__this, method) (( bool (*) (List_1_t535 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m6819(__this, method) (( bool (*) (List_1_t535 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m6820(__this, method) (( Object_t * (*) (List_1_t535 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m6822(__this, method) (( bool (*) (List_1_t535 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m6823(__this, method) (( bool (*) (List_1_t535 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6823_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m6824_gshared (List_1_t535 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m6824(__this, ___index, method) (( Object_t * (*) (List_1_t535 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6824_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m6825_gshared (List_1_t535 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m6825(__this, ___index, ___value, method) (( void (*) (List_1_t535 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6825_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m6834_gshared (List_1_t535 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m6834(__this, ___item, method) (( void (*) (List_1_t535 *, Object_t *, const MethodInfo*))List_1_Add_m6834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16838_gshared (List_1_t535 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16838(__this, ___newCount, method) (( void (*) (List_1_t535 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16838_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16840_gshared (List_1_t535 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16840(__this, ___collection, method) (( void (*) (List_1_t535 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16840_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16842_gshared (List_1_t535 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16842(__this, ___enumerable, method) (( void (*) (List_1_t535 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16844_gshared (List_1_t535 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16844(__this, ___collection, method) (( void (*) (List_1_t535 *, Object_t*, const MethodInfo*))List_1_AddRange_m16844_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3321 * List_1_AsReadOnly_m16846_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16846(__this, method) (( ReadOnlyCollection_1_t3321 * (*) (List_1_t535 *, const MethodInfo*))List_1_AsReadOnly_m16846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m6827_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_Clear_m6827(__this, method) (( void (*) (List_1_t535 *, const MethodInfo*))List_1_Clear_m6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m6835_gshared (List_1_t535 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m6835(__this, ___item, method) (( bool (*) (List_1_t535 *, Object_t *, const MethodInfo*))List_1_Contains_m6835_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m6836_gshared (List_1_t535 * __this, ObjectU5BU5D_t533* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m6836(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t535 *, ObjectU5BU5D_t533*, int32_t, const MethodInfo*))List_1_CopyTo_m6836_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m16851_gshared (List_1_t535 * __this, Predicate_1_t3323 * ___match, const MethodInfo* method);
#define List_1_Find_m16851(__this, ___match, method) (( Object_t * (*) (List_1_t535 *, Predicate_1_t3323 *, const MethodInfo*))List_1_Find_m16851_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16853_gshared (Object_t * __this /* static, unused */, Predicate_1_t3323 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16853(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3323 *, const MethodInfo*))List_1_CheckMatch_m16853_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16855_gshared (List_1_t535 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3323 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16855(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t535 *, int32_t, int32_t, Predicate_1_t3323 *, const MethodInfo*))List_1_GetIndex_m16855_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t584  List_1_GetEnumerator_m2712_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2712(__this, method) (( Enumerator_t584  (*) (List_1_t535 *, const MethodInfo*))List_1_GetEnumerator_m2712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m6839_gshared (List_1_t535 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m6839(__this, ___item, method) (( int32_t (*) (List_1_t535 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16858_gshared (List_1_t535 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16858(__this, ___start, ___delta, method) (( void (*) (List_1_t535 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16858_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16860_gshared (List_1_t535 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16860(__this, ___index, method) (( void (*) (List_1_t535 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m6840_gshared (List_1_t535 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m6840(__this, ___index, ___item, method) (( void (*) (List_1_t535 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16863_gshared (List_1_t535 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16863(__this, ___collection, method) (( void (*) (List_1_t535 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16863_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m6837_gshared (List_1_t535 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m6837(__this, ___item, method) (( bool (*) (List_1_t535 *, Object_t *, const MethodInfo*))List_1_Remove_m6837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16866_gshared (List_1_t535 * __this, Predicate_1_t3323 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16866(__this, ___match, method) (( int32_t (*) (List_1_t535 *, Predicate_1_t3323 *, const MethodInfo*))List_1_RemoveAll_m16866_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m6832_gshared (List_1_t535 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m6832(__this, ___index, method) (( void (*) (List_1_t535 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6832_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m16869_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_Reverse_m16869(__this, method) (( void (*) (List_1_t535 *, const MethodInfo*))List_1_Reverse_m16869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m16871_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_Sort_m16871(__this, method) (( void (*) (List_1_t535 *, const MethodInfo*))List_1_Sort_m16871_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m16873_gshared (List_1_t535 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m16873(__this, ___comparer, method) (( void (*) (List_1_t535 *, Object_t*, const MethodInfo*))List_1_Sort_m16873_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16875_gshared (List_1_t535 * __this, Comparison_1_t3330 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16875(__this, ___comparison, method) (( void (*) (List_1_t535 *, Comparison_1_t3330 *, const MethodInfo*))List_1_Sort_m16875_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t533* List_1_ToArray_m16877_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_ToArray_m16877(__this, method) (( ObjectU5BU5D_t533* (*) (List_1_t535 *, const MethodInfo*))List_1_ToArray_m16877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m16879_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16879(__this, method) (( void (*) (List_1_t535 *, const MethodInfo*))List_1_TrimExcess_m16879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16881_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16881(__this, method) (( int32_t (*) (List_1_t535 *, const MethodInfo*))List_1_get_Capacity_m16881_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16883_gshared (List_1_t535 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16883(__this, ___value, method) (( void (*) (List_1_t535 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16883_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m6818_gshared (List_1_t535 * __this, const MethodInfo* method);
#define List_1_get_Count_m6818(__this, method) (( int32_t (*) (List_1_t535 *, const MethodInfo*))List_1_get_Count_m6818_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m6841_gshared (List_1_t535 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m6841(__this, ___index, method) (( Object_t * (*) (List_1_t535 *, int32_t, const MethodInfo*))List_1_get_Item_m6841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m6842_gshared (List_1_t535 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m6842(__this, ___index, ___value, method) (( void (*) (List_1_t535 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6842_gshared)(__this, ___index, ___value, method)

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_t6846;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.DateTime>
struct IEnumerable_1_t6840;
// System.DateTime[]
struct DateTimeU5BU5D_t4896;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t6841;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9218;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTime>
struct ReadOnlyCollection_1_t6848;
// System.Predicate`1<System.DateTime>
struct Predicate_1_t6852;
// System.Collections.Generic.IComparer`1<System.DateTime>
struct IComparer_1_t9219;
// System.Comparison`1<System.DateTime>
struct Comparison_1_t6855;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.List`1/Enumerator<System.DateTime>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_66.h"

// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor()
extern "C" void List_1__ctor_m41804_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1__ctor_m41804(__this, method) (( void (*) (List_1_t6846 *, const MethodInfo*))List_1__ctor_m41804_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41805_gshared (List_1_t6846 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41805(__this, ___collection, method) (( void (*) (List_1_t6846 *, Object_t*, const MethodInfo*))List_1__ctor_m41805_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41806_gshared (List_1_t6846 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41806(__this, ___capacity, method) (( void (*) (List_1_t6846 *, int32_t, const MethodInfo*))List_1__ctor_m41806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41807_gshared (List_1_t6846 * __this, DateTimeU5BU5D_t4896* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41807(__this, ___data, ___size, method) (( void (*) (List_1_t6846 *, DateTimeU5BU5D_t4896*, int32_t, const MethodInfo*))List_1__ctor_m41807_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.cctor()
extern "C" void List_1__cctor_m41808_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41808(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41809_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41809(__this, method) (( Object_t* (*) (List_1_t6846 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41809_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41810_gshared (List_1_t6846 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41810(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6846 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41810_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41811_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41811(__this, method) (( Object_t * (*) (List_1_t6846 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41811_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41812_gshared (List_1_t6846 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41812(__this, ___item, method) (( int32_t (*) (List_1_t6846 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41812_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41813_gshared (List_1_t6846 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41813(__this, ___item, method) (( bool (*) (List_1_t6846 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41814_gshared (List_1_t6846 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41814(__this, ___item, method) (( int32_t (*) (List_1_t6846 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41815_gshared (List_1_t6846 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41815(__this, ___index, ___item, method) (( void (*) (List_1_t6846 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41815_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41816_gshared (List_1_t6846 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41816(__this, ___item, method) (( void (*) (List_1_t6846 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41816_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41817_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41817(__this, method) (( bool (*) (List_1_t6846 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41818_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41818(__this, method) (( bool (*) (List_1_t6846 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41818_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41819_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41819(__this, method) (( Object_t * (*) (List_1_t6846 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41820_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41820(__this, method) (( bool (*) (List_1_t6846 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41821_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41821(__this, method) (( bool (*) (List_1_t6846 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41821_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41822_gshared (List_1_t6846 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41822(__this, ___index, method) (( Object_t * (*) (List_1_t6846 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41822_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41823_gshared (List_1_t6846 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41823(__this, ___index, ___value, method) (( void (*) (List_1_t6846 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41823_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(T)
extern "C" void List_1_Add_m41824_gshared (List_1_t6846 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Add_m41824(__this, ___item, method) (( void (*) (List_1_t6846 *, DateTime_t287 , const MethodInfo*))List_1_Add_m41824_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41825_gshared (List_1_t6846 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41825(__this, ___newCount, method) (( void (*) (List_1_t6846 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41825_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41826_gshared (List_1_t6846 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41826(__this, ___idx, ___count, method) (( void (*) (List_1_t6846 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41826_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41827_gshared (List_1_t6846 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41827(__this, ___collection, method) (( void (*) (List_1_t6846 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41827_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41828_gshared (List_1_t6846 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41828(__this, ___enumerable, method) (( void (*) (List_1_t6846 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41828_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41829_gshared (List_1_t6846 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41829(__this, ___collection, method) (( void (*) (List_1_t6846 *, Object_t*, const MethodInfo*))List_1_AddRange_m41829_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.DateTime>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6848 * List_1_AsReadOnly_m41830_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41830(__this, method) (( ReadOnlyCollection_1_t6848 * (*) (List_1_t6846 *, const MethodInfo*))List_1_AsReadOnly_m41830_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Clear()
extern "C" void List_1_Clear_m41831_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_Clear_m41831(__this, method) (( void (*) (List_1_t6846 *, const MethodInfo*))List_1_Clear_m41831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Contains(T)
extern "C" bool List_1_Contains_m41832_gshared (List_1_t6846 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Contains_m41832(__this, ___item, method) (( bool (*) (List_1_t6846 *, DateTime_t287 , const MethodInfo*))List_1_Contains_m41832_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41833_gshared (List_1_t6846 * __this, DateTimeU5BU5D_t4896* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41833(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6846 *, DateTimeU5BU5D_t4896*, int32_t, const MethodInfo*))List_1_CopyTo_m41833_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.DateTime>::Find(System.Predicate`1<T>)
extern "C" DateTime_t287  List_1_Find_m41834_gshared (List_1_t6846 * __this, Predicate_1_t6852 * ___match, const MethodInfo* method);
#define List_1_Find_m41834(__this, ___match, method) (( DateTime_t287  (*) (List_1_t6846 *, Predicate_1_t6852 *, const MethodInfo*))List_1_Find_m41834_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41835_gshared (Object_t * __this /* static, unused */, Predicate_1_t6852 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41835(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6852 *, const MethodInfo*))List_1_CheckMatch_m41835_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41836_gshared (List_1_t6846 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6852 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41836(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6846 *, int32_t, int32_t, Predicate_1_t6852 *, const MethodInfo*))List_1_GetIndex_m41836_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.DateTime>::GetEnumerator()
extern "C" Enumerator_t6847  List_1_GetEnumerator_m41837_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41837(__this, method) (( Enumerator_t6847  (*) (List_1_t6846 *, const MethodInfo*))List_1_GetEnumerator_m41837_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.DateTime>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6846 * List_1_GetRange_m41838_gshared (List_1_t6846 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41838(__this, ___index, ___count, method) (( List_1_t6846 * (*) (List_1_t6846 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41838_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41839_gshared (List_1_t6846 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_IndexOf_m41839(__this, ___item, method) (( int32_t (*) (List_1_t6846 *, DateTime_t287 , const MethodInfo*))List_1_IndexOf_m41839_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41840_gshared (List_1_t6846 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41840(__this, ___start, ___delta, method) (( void (*) (List_1_t6846 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41840_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41841_gshared (List_1_t6846 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41841(__this, ___index, method) (( void (*) (List_1_t6846 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41841_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41842_gshared (List_1_t6846 * __this, int32_t ___index, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Insert_m41842(__this, ___index, ___item, method) (( void (*) (List_1_t6846 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_Insert_m41842_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41843_gshared (List_1_t6846 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41843(__this, ___collection, method) (( void (*) (List_1_t6846 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41843_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41844_gshared (List_1_t6846 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41844(__this, ___index, ___collection, method) (( void (*) (List_1_t6846 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41844_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41845_gshared (List_1_t6846 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41845(__this, ___index, ___collection, method) (( void (*) (List_1_t6846 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41845_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41846_gshared (List_1_t6846 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41846(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6846 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41846_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Remove(T)
extern "C" bool List_1_Remove_m41847_gshared (List_1_t6846 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Remove_m41847(__this, ___item, method) (( bool (*) (List_1_t6846 *, DateTime_t287 , const MethodInfo*))List_1_Remove_m41847_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41848_gshared (List_1_t6846 * __this, Predicate_1_t6852 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41848(__this, ___match, method) (( int32_t (*) (List_1_t6846 *, Predicate_1_t6852 *, const MethodInfo*))List_1_RemoveAll_m41848_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41849_gshared (List_1_t6846 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41849(__this, ___index, method) (( void (*) (List_1_t6846 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41849_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41850_gshared (List_1_t6846 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41850(__this, ___index, ___count, method) (( void (*) (List_1_t6846 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41850_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Reverse()
extern "C" void List_1_Reverse_m41851_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_Reverse_m41851(__this, method) (( void (*) (List_1_t6846 *, const MethodInfo*))List_1_Reverse_m41851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort()
extern "C" void List_1_Sort_m41852_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_Sort_m41852(__this, method) (( void (*) (List_1_t6846 *, const MethodInfo*))List_1_Sort_m41852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41853_gshared (List_1_t6846 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41853(__this, ___comparer, method) (( void (*) (List_1_t6846 *, Object_t*, const MethodInfo*))List_1_Sort_m41853_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41854_gshared (List_1_t6846 * __this, Comparison_1_t6855 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41854(__this, ___comparison, method) (( void (*) (List_1_t6846 *, Comparison_1_t6855 *, const MethodInfo*))List_1_Sort_m41854_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.DateTime>::ToArray()
extern "C" DateTimeU5BU5D_t4896* List_1_ToArray_m41855_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_ToArray_m41855(__this, method) (( DateTimeU5BU5D_t4896* (*) (List_1_t6846 *, const MethodInfo*))List_1_ToArray_m41855_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::TrimExcess()
extern "C" void List_1_TrimExcess_m41856_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41856(__this, method) (( void (*) (List_1_t6846 *, const MethodInfo*))List_1_TrimExcess_m41856_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41857_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41857(__this, method) (( int32_t (*) (List_1_t6846 *, const MethodInfo*))List_1_get_Capacity_m41857_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41858_gshared (List_1_t6846 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41858(__this, ___value, method) (( void (*) (List_1_t6846 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41858_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Count()
extern "C" int32_t List_1_get_Count_m41859_gshared (List_1_t6846 * __this, const MethodInfo* method);
#define List_1_get_Count_m41859(__this, method) (( int32_t (*) (List_1_t6846 *, const MethodInfo*))List_1_get_Count_m41859_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.DateTime>::get_Item(System.Int32)
extern "C" DateTime_t287  List_1_get_Item_m41860_gshared (List_1_t6846 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41860(__this, ___index, method) (( DateTime_t287  (*) (List_1_t6846 *, int32_t, const MethodInfo*))List_1_get_Item_m41860_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41861_gshared (List_1_t6846 * __this, int32_t ___index, DateTime_t287  ___value, const MethodInfo* method);
#define List_1_set_Item_m41861(__this, ___index, ___value, method) (( void (*) (List_1_t6846 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_set_Item_m41861_gshared)(__this, ___index, ___value, method)

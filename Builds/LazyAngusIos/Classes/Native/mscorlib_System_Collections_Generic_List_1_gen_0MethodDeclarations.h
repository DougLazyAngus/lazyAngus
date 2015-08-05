#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t639;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t661;
// System.Object[]
struct ObjectU5BU5D_t637;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1134;
// System.Predicate`1<System.Object>
struct Predicate_1_t5383;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5606;
// System.Comparison`1<System.Object>
struct Comparison_1_t5389;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3485_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1__ctor_m3485(__this, method) (( void (*) (List_1_t639 *, const MethodInfo*))List_1__ctor_m3485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7223_gshared (List_1_t639 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7223(__this, ___collection, method) (( void (*) (List_1_t639 *, Object_t*, const MethodInfo*))List_1__ctor_m7223_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21323_gshared (List_1_t639 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21323(__this, ___capacity, method) (( void (*) (List_1_t639 *, int32_t, const MethodInfo*))List_1__ctor_m21323_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m21325_gshared (List_1_t639 * __this, ObjectU5BU5D_t637* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m21325(__this, ___data, ___size, method) (( void (*) (List_1_t639 *, ObjectU5BU5D_t637*, int32_t, const MethodInfo*))List_1__ctor_m21325_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21327_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21327(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21327_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10116_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10116(__this, method) (( Object_t* (*) (List_1_t639 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10099_gshared (List_1_t639 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10099(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t639 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10099_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10095_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10095(__this, method) (( Object_t * (*) (List_1_t639 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10095_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10104_gshared (List_1_t639 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10104(__this, ___item, method) (( int32_t (*) (List_1_t639 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10106_gshared (List_1_t639 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10106(__this, ___item, method) (( bool (*) (List_1_t639 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10106_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10107_gshared (List_1_t639 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10107(__this, ___item, method) (( int32_t (*) (List_1_t639 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10108_gshared (List_1_t639 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10108(__this, ___index, ___item, method) (( void (*) (List_1_t639 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10108_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10109_gshared (List_1_t639 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10109(__this, ___item, method) (( void (*) (List_1_t639 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10109_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10111_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10111(__this, method) (( bool (*) (List_1_t639 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10111_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10097_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10097(__this, method) (( bool (*) (List_1_t639 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10097_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10098_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10098(__this, method) (( Object_t * (*) (List_1_t639 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10098_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10100_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10100(__this, method) (( bool (*) (List_1_t639 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10101_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10101(__this, method) (( bool (*) (List_1_t639 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10101_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10102_gshared (List_1_t639 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10102(__this, ___index, method) (( Object_t * (*) (List_1_t639 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10102_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10103_gshared (List_1_t639 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10103(__this, ___index, ___value, method) (( void (*) (List_1_t639 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10103_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10112_gshared (List_1_t639 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10112(__this, ___item, method) (( void (*) (List_1_t639 *, Object_t *, const MethodInfo*))List_1_Add_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21345_gshared (List_1_t639 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21345(__this, ___newCount, method) (( void (*) (List_1_t639 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21345_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m21347_gshared (List_1_t639 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m21347(__this, ___idx, ___count, method) (( void (*) (List_1_t639 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21347_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21349_gshared (List_1_t639 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21349(__this, ___collection, method) (( void (*) (List_1_t639 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21349_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21351_gshared (List_1_t639 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21351(__this, ___enumerable, method) (( void (*) (List_1_t639 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21351_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21353_gshared (List_1_t639 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21353(__this, ___collection, method) (( void (*) (List_1_t639 *, Object_t*, const MethodInfo*))List_1_AddRange_m21353_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1134 * List_1_AsReadOnly_m21355_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21355(__this, method) (( ReadOnlyCollection_1_t1134 * (*) (List_1_t639 *, const MethodInfo*))List_1_AsReadOnly_m21355_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10105_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_Clear_m10105(__this, method) (( void (*) (List_1_t639 *, const MethodInfo*))List_1_Clear_m10105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10113_gshared (List_1_t639 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10113(__this, ___item, method) (( bool (*) (List_1_t639 *, Object_t *, const MethodInfo*))List_1_Contains_m10113_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10114_gshared (List_1_t639 * __this, ObjectU5BU5D_t637* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10114(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t639 *, ObjectU5BU5D_t637*, int32_t, const MethodInfo*))List_1_CopyTo_m10114_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m21360_gshared (List_1_t639 * __this, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define List_1_Find_m21360(__this, ___match, method) (( Object_t * (*) (List_1_t639 *, Predicate_1_t5383 *, const MethodInfo*))List_1_Find_m21360_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21362_gshared (Object_t * __this /* static, unused */, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21362(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5383 *, const MethodInfo*))List_1_CheckMatch_m21362_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21364_gshared (List_1_t639 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21364(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t639 *, int32_t, int32_t, Predicate_1_t5383 *, const MethodInfo*))List_1_GetIndex_m21364_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t698  List_1_GetEnumerator_m3641_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3641(__this, method) (( Enumerator_t698  (*) (List_1_t639 *, const MethodInfo*))List_1_GetEnumerator_m3641_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t639 * List_1_GetRange_m21366_gshared (List_1_t639 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m21366(__this, ___index, ___count, method) (( List_1_t639 * (*) (List_1_t639 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21366_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10117_gshared (List_1_t639 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10117(__this, ___item, method) (( int32_t (*) (List_1_t639 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21369_gshared (List_1_t639 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21369(__this, ___start, ___delta, method) (( void (*) (List_1_t639 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21369_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21371_gshared (List_1_t639 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21371(__this, ___index, method) (( void (*) (List_1_t639 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21371_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10118_gshared (List_1_t639 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10118(__this, ___index, ___item, method) (( void (*) (List_1_t639 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21374_gshared (List_1_t639 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21374(__this, ___collection, method) (( void (*) (List_1_t639 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21374_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m21376_gshared (List_1_t639 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m21376(__this, ___index, ___collection, method) (( void (*) (List_1_t639 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21376_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m21378_gshared (List_1_t639 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m21378(__this, ___index, ___collection, method) (( void (*) (List_1_t639 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21378_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m21380_gshared (List_1_t639 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m21380(__this, ___index, ___enumerable, method) (( void (*) (List_1_t639 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21380_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10115_gshared (List_1_t639 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10115(__this, ___item, method) (( bool (*) (List_1_t639 *, Object_t *, const MethodInfo*))List_1_Remove_m10115_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21383_gshared (List_1_t639 * __this, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21383(__this, ___match, method) (( int32_t (*) (List_1_t639 *, Predicate_1_t5383 *, const MethodInfo*))List_1_RemoveAll_m21383_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10110_gshared (List_1_t639 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10110(__this, ___index, method) (( void (*) (List_1_t639 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10110_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m21386_gshared (List_1_t639 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m21386(__this, ___index, ___count, method) (( void (*) (List_1_t639 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21386_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m21388_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_Reverse_m21388(__this, method) (( void (*) (List_1_t639 *, const MethodInfo*))List_1_Reverse_m21388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m21390_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_Sort_m21390(__this, method) (( void (*) (List_1_t639 *, const MethodInfo*))List_1_Sort_m21390_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21392_gshared (List_1_t639 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21392(__this, ___comparer, method) (( void (*) (List_1_t639 *, Object_t*, const MethodInfo*))List_1_Sort_m21392_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21394_gshared (List_1_t639 * __this, Comparison_1_t5389 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21394(__this, ___comparison, method) (( void (*) (List_1_t639 *, Comparison_1_t5389 *, const MethodInfo*))List_1_Sort_m21394_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t637* List_1_ToArray_m21396_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_ToArray_m21396(__this, method) (( ObjectU5BU5D_t637* (*) (List_1_t639 *, const MethodInfo*))List_1_ToArray_m21396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m21398_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21398(__this, method) (( void (*) (List_1_t639 *, const MethodInfo*))List_1_TrimExcess_m21398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21400_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21400(__this, method) (( int32_t (*) (List_1_t639 *, const MethodInfo*))List_1_get_Capacity_m21400_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21402_gshared (List_1_t639 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21402(__this, ___value, method) (( void (*) (List_1_t639 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21402_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10096_gshared (List_1_t639 * __this, const MethodInfo* method);
#define List_1_get_Count_m10096(__this, method) (( int32_t (*) (List_1_t639 *, const MethodInfo*))List_1_get_Count_m10096_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10119_gshared (List_1_t639 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10119(__this, ___index, method) (( Object_t * (*) (List_1_t639 *, int32_t, const MethodInfo*))List_1_get_Item_m10119_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10120_gshared (List_1_t639 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10120(__this, ___index, ___value, method) (( void (*) (List_1_t639 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10120_gshared)(__this, ___index, ___value, method)

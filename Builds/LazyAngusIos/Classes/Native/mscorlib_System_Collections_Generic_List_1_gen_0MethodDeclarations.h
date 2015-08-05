#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t638;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t660;
// System.Object[]
struct ObjectU5BU5D_t636;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1133;
// System.Predicate`1<System.Object>
struct Predicate_1_t5382;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5605;
// System.Comparison`1<System.Object>
struct Comparison_1_t5388;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3481_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1__ctor_m3481(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1__ctor_m3481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7218_gshared (List_1_t638 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7218(__this, ___collection, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1__ctor_m7218_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21318_gshared (List_1_t638 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21318(__this, ___capacity, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1__ctor_m21318_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m21320_gshared (List_1_t638 * __this, ObjectU5BU5D_t636* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m21320(__this, ___data, ___size, method) (( void (*) (List_1_t638 *, ObjectU5BU5D_t636*, int32_t, const MethodInfo*))List_1__ctor_m21320_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21322_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21322(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21322_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10111_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10111(__this, method) (( Object_t* (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10094_gshared (List_1_t638 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10094(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t638 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10094_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10090_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10090(__this, method) (( Object_t * (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10090_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10099_gshared (List_1_t638 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10099(__this, ___item, method) (( int32_t (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10099_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10101_gshared (List_1_t638 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10101(__this, ___item, method) (( bool (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10101_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10102_gshared (List_1_t638 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10102(__this, ___item, method) (( int32_t (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10103_gshared (List_1_t638 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10103(__this, ___index, ___item, method) (( void (*) (List_1_t638 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10103_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10104_gshared (List_1_t638 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10104(__this, ___item, method) (( void (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10106_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10106(__this, method) (( bool (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10092_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10092(__this, method) (( bool (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10092_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10093_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10093(__this, method) (( Object_t * (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10095_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10095(__this, method) (( bool (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10096_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10096(__this, method) (( bool (*) (List_1_t638 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10096_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10097_gshared (List_1_t638 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10097(__this, ___index, method) (( Object_t * (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10097_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10098_gshared (List_1_t638 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10098(__this, ___index, ___value, method) (( void (*) (List_1_t638 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10098_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10107_gshared (List_1_t638 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10107(__this, ___item, method) (( void (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_Add_m10107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21340_gshared (List_1_t638 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21340(__this, ___newCount, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21340_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m21342_gshared (List_1_t638 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m21342(__this, ___idx, ___count, method) (( void (*) (List_1_t638 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21342_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21344_gshared (List_1_t638 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21344(__this, ___collection, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21346_gshared (List_1_t638 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21346(__this, ___enumerable, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21346_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21348_gshared (List_1_t638 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21348(__this, ___collection, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_AddRange_m21348_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1133 * List_1_AsReadOnly_m21350_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21350(__this, method) (( ReadOnlyCollection_1_t1133 * (*) (List_1_t638 *, const MethodInfo*))List_1_AsReadOnly_m21350_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10100_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_Clear_m10100(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1_Clear_m10100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10108_gshared (List_1_t638 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10108(__this, ___item, method) (( bool (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_Contains_m10108_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10109_gshared (List_1_t638 * __this, ObjectU5BU5D_t636* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10109(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t638 *, ObjectU5BU5D_t636*, int32_t, const MethodInfo*))List_1_CopyTo_m10109_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m21355_gshared (List_1_t638 * __this, Predicate_1_t5382 * ___match, const MethodInfo* method);
#define List_1_Find_m21355(__this, ___match, method) (( Object_t * (*) (List_1_t638 *, Predicate_1_t5382 *, const MethodInfo*))List_1_Find_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21357_gshared (Object_t * __this /* static, unused */, Predicate_1_t5382 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21357(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5382 *, const MethodInfo*))List_1_CheckMatch_m21357_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21359_gshared (List_1_t638 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5382 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21359(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t638 *, int32_t, int32_t, Predicate_1_t5382 *, const MethodInfo*))List_1_GetIndex_m21359_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t697  List_1_GetEnumerator_m3637_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3637(__this, method) (( Enumerator_t697  (*) (List_1_t638 *, const MethodInfo*))List_1_GetEnumerator_m3637_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t638 * List_1_GetRange_m21361_gshared (List_1_t638 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m21361(__this, ___index, ___count, method) (( List_1_t638 * (*) (List_1_t638 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21361_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10112_gshared (List_1_t638 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10112(__this, ___item, method) (( int32_t (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21364_gshared (List_1_t638 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21364(__this, ___start, ___delta, method) (( void (*) (List_1_t638 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21364_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21366_gshared (List_1_t638 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21366(__this, ___index, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21366_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10113_gshared (List_1_t638 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10113(__this, ___index, ___item, method) (( void (*) (List_1_t638 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10113_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21369_gshared (List_1_t638 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21369(__this, ___collection, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21369_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m21371_gshared (List_1_t638 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m21371(__this, ___index, ___collection, method) (( void (*) (List_1_t638 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21371_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m21373_gshared (List_1_t638 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m21373(__this, ___index, ___collection, method) (( void (*) (List_1_t638 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21373_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m21375_gshared (List_1_t638 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m21375(__this, ___index, ___enumerable, method) (( void (*) (List_1_t638 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21375_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10110_gshared (List_1_t638 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10110(__this, ___item, method) (( bool (*) (List_1_t638 *, Object_t *, const MethodInfo*))List_1_Remove_m10110_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21378_gshared (List_1_t638 * __this, Predicate_1_t5382 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21378(__this, ___match, method) (( int32_t (*) (List_1_t638 *, Predicate_1_t5382 *, const MethodInfo*))List_1_RemoveAll_m21378_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10105_gshared (List_1_t638 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10105(__this, ___index, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m21381_gshared (List_1_t638 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m21381(__this, ___index, ___count, method) (( void (*) (List_1_t638 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21381_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m21383_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_Reverse_m21383(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1_Reverse_m21383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m21385_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_Sort_m21385(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1_Sort_m21385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21387_gshared (List_1_t638 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21387(__this, ___comparer, method) (( void (*) (List_1_t638 *, Object_t*, const MethodInfo*))List_1_Sort_m21387_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21389_gshared (List_1_t638 * __this, Comparison_1_t5388 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21389(__this, ___comparison, method) (( void (*) (List_1_t638 *, Comparison_1_t5388 *, const MethodInfo*))List_1_Sort_m21389_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t636* List_1_ToArray_m21391_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_ToArray_m21391(__this, method) (( ObjectU5BU5D_t636* (*) (List_1_t638 *, const MethodInfo*))List_1_ToArray_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m21393_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21393(__this, method) (( void (*) (List_1_t638 *, const MethodInfo*))List_1_TrimExcess_m21393_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21395_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21395(__this, method) (( int32_t (*) (List_1_t638 *, const MethodInfo*))List_1_get_Capacity_m21395_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21397_gshared (List_1_t638 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21397(__this, ___value, method) (( void (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21397_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10091_gshared (List_1_t638 * __this, const MethodInfo* method);
#define List_1_get_Count_m10091(__this, method) (( int32_t (*) (List_1_t638 *, const MethodInfo*))List_1_get_Count_m10091_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10114_gshared (List_1_t638 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10114(__this, ___index, method) (( Object_t * (*) (List_1_t638 *, int32_t, const MethodInfo*))List_1_get_Item_m10114_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10115_gshared (List_1_t638 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10115(__this, ___index, ___value, method) (( void (*) (List_1_t638 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10115_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t3555;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t4292;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t4293;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t4294;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t3558;
// System.Single[]
struct SingleU5BU5D_t434;
// System.Predicate`1<System.Single>
struct Predicate_1_t3563;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t4295;
// System.Comparison`1<System.Single>
struct Comparison_1_t3567;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m21089_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1__ctor_m21089(__this, method) (( void (*) (List_1_t3555 *, const MethodInfo*))List_1__ctor_m21089_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m21090_gshared (List_1_t3555 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m21090(__this, ___collection, method) (( void (*) (List_1_t3555 *, Object_t*, const MethodInfo*))List_1__ctor_m21090_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21091_gshared (List_1_t3555 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21091(__this, ___capacity, method) (( void (*) (List_1_t3555 *, int32_t, const MethodInfo*))List_1__ctor_m21091_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m21092_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21092(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21092_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21093_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21093(__this, method) (( Object_t* (*) (List_1_t3555 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21093_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21094_gshared (List_1_t3555 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m21094(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3555 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21094_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21095_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21095(__this, method) (( Object_t * (*) (List_1_t3555 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21095_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21096_gshared (List_1_t3555 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21096(__this, ___item, method) (( int32_t (*) (List_1_t3555 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21096_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21097_gshared (List_1_t3555 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21097(__this, ___item, method) (( bool (*) (List_1_t3555 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21097_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21098_gshared (List_1_t3555 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21098(__this, ___item, method) (( int32_t (*) (List_1_t3555 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21098_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21099_gshared (List_1_t3555 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21099(__this, ___index, ___item, method) (( void (*) (List_1_t3555 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21099_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21100_gshared (List_1_t3555 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21100(__this, ___item, method) (( void (*) (List_1_t3555 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21100_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21101_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21101(__this, method) (( bool (*) (List_1_t3555 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m21102_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21102(__this, method) (( bool (*) (List_1_t3555 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21102_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21103_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m21103(__this, method) (( Object_t * (*) (List_1_t3555 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m21104_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m21104(__this, method) (( bool (*) (List_1_t3555 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21104_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m21105_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m21105(__this, method) (( bool (*) (List_1_t3555 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21105_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21106_gshared (List_1_t3555 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21106(__this, ___index, method) (( Object_t * (*) (List_1_t3555 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21106_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21107_gshared (List_1_t3555 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21107(__this, ___index, ___value, method) (( void (*) (List_1_t3555 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21107_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m21108_gshared (List_1_t3555 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m21108(__this, ___item, method) (( void (*) (List_1_t3555 *, float, const MethodInfo*))List_1_Add_m21108_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21109_gshared (List_1_t3555 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21109(__this, ___newCount, method) (( void (*) (List_1_t3555 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21109_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21110_gshared (List_1_t3555 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21110(__this, ___collection, method) (( void (*) (List_1_t3555 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21110_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21111_gshared (List_1_t3555 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21111(__this, ___enumerable, method) (( void (*) (List_1_t3555 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21111_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21112_gshared (List_1_t3555 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21112(__this, ___collection, method) (( void (*) (List_1_t3555 *, Object_t*, const MethodInfo*))List_1_AddRange_m21112_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3558 * List_1_AsReadOnly_m21113_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21113(__this, method) (( ReadOnlyCollection_1_t3558 * (*) (List_1_t3555 *, const MethodInfo*))List_1_AsReadOnly_m21113_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m21114_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_Clear_m21114(__this, method) (( void (*) (List_1_t3555 *, const MethodInfo*))List_1_Clear_m21114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m21115_gshared (List_1_t3555 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m21115(__this, ___item, method) (( bool (*) (List_1_t3555 *, float, const MethodInfo*))List_1_Contains_m21115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21116_gshared (List_1_t3555 * __this, SingleU5BU5D_t434* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m21116(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3555 *, SingleU5BU5D_t434*, int32_t, const MethodInfo*))List_1_CopyTo_m21116_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m21117_gshared (List_1_t3555 * __this, Predicate_1_t3563 * ___match, const MethodInfo* method);
#define List_1_Find_m21117(__this, ___match, method) (( float (*) (List_1_t3555 *, Predicate_1_t3563 *, const MethodInfo*))List_1_Find_m21117_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21118_gshared (Object_t * __this /* static, unused */, Predicate_1_t3563 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21118(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3563 *, const MethodInfo*))List_1_CheckMatch_m21118_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21119_gshared (List_1_t3555 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3563 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21119(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3555 *, int32_t, int32_t, Predicate_1_t3563 *, const MethodInfo*))List_1_GetIndex_m21119_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t3556  List_1_GetEnumerator_m21120_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21120(__this, method) (( Enumerator_t3556  (*) (List_1_t3555 *, const MethodInfo*))List_1_GetEnumerator_m21120_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21121_gshared (List_1_t3555 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m21121(__this, ___item, method) (( int32_t (*) (List_1_t3555 *, float, const MethodInfo*))List_1_IndexOf_m21121_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21122_gshared (List_1_t3555 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21122(__this, ___start, ___delta, method) (( void (*) (List_1_t3555 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21122_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21123_gshared (List_1_t3555 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21123(__this, ___index, method) (( void (*) (List_1_t3555 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21123_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21124_gshared (List_1_t3555 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m21124(__this, ___index, ___item, method) (( void (*) (List_1_t3555 *, int32_t, float, const MethodInfo*))List_1_Insert_m21124_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21125_gshared (List_1_t3555 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21125(__this, ___collection, method) (( void (*) (List_1_t3555 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21125_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m21126_gshared (List_1_t3555 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m21126(__this, ___item, method) (( bool (*) (List_1_t3555 *, float, const MethodInfo*))List_1_Remove_m21126_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21127_gshared (List_1_t3555 * __this, Predicate_1_t3563 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21127(__this, ___match, method) (( int32_t (*) (List_1_t3555 *, Predicate_1_t3563 *, const MethodInfo*))List_1_RemoveAll_m21127_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m21128_gshared (List_1_t3555 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21128(__this, ___index, method) (( void (*) (List_1_t3555 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m21129_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_Reverse_m21129(__this, method) (( void (*) (List_1_t3555 *, const MethodInfo*))List_1_Reverse_m21129_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m21130_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_Sort_m21130(__this, method) (( void (*) (List_1_t3555 *, const MethodInfo*))List_1_Sort_m21130_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21131_gshared (List_1_t3555 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21131(__this, ___comparer, method) (( void (*) (List_1_t3555 *, Object_t*, const MethodInfo*))List_1_Sort_m21131_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21132_gshared (List_1_t3555 * __this, Comparison_1_t3567 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21132(__this, ___comparison, method) (( void (*) (List_1_t3555 *, Comparison_1_t3567 *, const MethodInfo*))List_1_Sort_m21132_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t434* List_1_ToArray_m21133_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_ToArray_m21133(__this, method) (( SingleU5BU5D_t434* (*) (List_1_t3555 *, const MethodInfo*))List_1_ToArray_m21133_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m21134_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21134(__this, method) (( void (*) (List_1_t3555 *, const MethodInfo*))List_1_TrimExcess_m21134_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21135_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21135(__this, method) (( int32_t (*) (List_1_t3555 *, const MethodInfo*))List_1_get_Capacity_m21135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21136_gshared (List_1_t3555 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21136(__this, ___value, method) (( void (*) (List_1_t3555 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21136_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m21137_gshared (List_1_t3555 * __this, const MethodInfo* method);
#define List_1_get_Count_m21137(__this, method) (( int32_t (*) (List_1_t3555 *, const MethodInfo*))List_1_get_Count_m21137_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m21138_gshared (List_1_t3555 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21138(__this, ___index, method) (( float (*) (List_1_t3555 *, int32_t, const MethodInfo*))List_1_get_Item_m21138_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21139_gshared (List_1_t3555 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m21139(__this, ___index, ___value, method) (( void (*) (List_1_t3555 *, int32_t, float, const MethodInfo*))List_1_set_Item_m21139_gshared)(__this, ___index, ___value, method)

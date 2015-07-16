#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t644;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4331;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4194;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4186;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t3589;
// System.Int32[]
struct Int32U5BU5D_t455;
// System.Predicate`1<System.Int32>
struct Predicate_1_t3591;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3296;
// System.Comparison`1<System.Int32>
struct Comparison_1_t3595;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m3115_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1__ctor_m3115(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1__ctor_m3115_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m21113_gshared (List_1_t644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m21113(__this, ___collection, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1__ctor_m21113_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21114_gshared (List_1_t644 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21114(__this, ___capacity, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1__ctor_m21114_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m21115_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21115(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21115_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21116_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21116(__this, method) (( Object_t* (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21117_gshared (List_1_t644 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m21117(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t644 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21117_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21118_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21118(__this, method) (( Object_t * (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21118_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21119_gshared (List_1_t644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21119(__this, ___item, method) (( int32_t (*) (List_1_t644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21120_gshared (List_1_t644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21120(__this, ___item, method) (( bool (*) (List_1_t644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21120_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21121_gshared (List_1_t644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21121(__this, ___item, method) (( int32_t (*) (List_1_t644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21121_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21122_gshared (List_1_t644 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21122(__this, ___index, ___item, method) (( void (*) (List_1_t644 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21122_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21123_gshared (List_1_t644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21123(__this, ___item, method) (( void (*) (List_1_t644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21123_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21124_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21124(__this, method) (( bool (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21124_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m21125_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21125(__this, method) (( bool (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21125_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21126_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m21126(__this, method) (( Object_t * (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21126_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m21127_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m21127(__this, method) (( bool (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21127_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m21128_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m21128(__this, method) (( bool (*) (List_1_t644 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21128_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21129_gshared (List_1_t644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21129(__this, ___index, method) (( Object_t * (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21129_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21130_gshared (List_1_t644 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21130(__this, ___index, ___value, method) (( void (*) (List_1_t644 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21130_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m21131_gshared (List_1_t644 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m21131(__this, ___item, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_Add_m21131_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21132_gshared (List_1_t644 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21132(__this, ___newCount, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21132_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21133_gshared (List_1_t644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21133(__this, ___collection, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21133_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21134_gshared (List_1_t644 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21134(__this, ___enumerable, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21134_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21135_gshared (List_1_t644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21135(__this, ___collection, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1_AddRange_m21135_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3589 * List_1_AsReadOnly_m21136_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21136(__this, method) (( ReadOnlyCollection_1_t3589 * (*) (List_1_t644 *, const MethodInfo*))List_1_AsReadOnly_m21136_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m21137_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_Clear_m21137(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1_Clear_m21137_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m21138_gshared (List_1_t644 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m21138(__this, ___item, method) (( bool (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_Contains_m21138_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21139_gshared (List_1_t644 * __this, Int32U5BU5D_t455* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m21139(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t644 *, Int32U5BU5D_t455*, int32_t, const MethodInfo*))List_1_CopyTo_m21139_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m21140_gshared (List_1_t644 * __this, Predicate_1_t3591 * ___match, const MethodInfo* method);
#define List_1_Find_m21140(__this, ___match, method) (( int32_t (*) (List_1_t644 *, Predicate_1_t3591 *, const MethodInfo*))List_1_Find_m21140_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21141_gshared (Object_t * __this /* static, unused */, Predicate_1_t3591 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21141(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3591 *, const MethodInfo*))List_1_CheckMatch_m21141_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21142_gshared (List_1_t644 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3591 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21142(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t644 *, int32_t, int32_t, Predicate_1_t3591 *, const MethodInfo*))List_1_GetIndex_m21142_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t3587  List_1_GetEnumerator_m21143_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21143(__this, method) (( Enumerator_t3587  (*) (List_1_t644 *, const MethodInfo*))List_1_GetEnumerator_m21143_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21144_gshared (List_1_t644 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m21144(__this, ___item, method) (( int32_t (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_IndexOf_m21144_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21145_gshared (List_1_t644 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21145(__this, ___start, ___delta, method) (( void (*) (List_1_t644 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21145_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21146_gshared (List_1_t644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21146(__this, ___index, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21146_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21147_gshared (List_1_t644 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m21147(__this, ___index, ___item, method) (( void (*) (List_1_t644 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m21147_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21148_gshared (List_1_t644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21148(__this, ___collection, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21148_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m21149_gshared (List_1_t644 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m21149(__this, ___item, method) (( bool (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_Remove_m21149_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21150_gshared (List_1_t644 * __this, Predicate_1_t3591 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21150(__this, ___match, method) (( int32_t (*) (List_1_t644 *, Predicate_1_t3591 *, const MethodInfo*))List_1_RemoveAll_m21150_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m21151_gshared (List_1_t644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21151(__this, ___index, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21151_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m21152_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_Reverse_m21152(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1_Reverse_m21152_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m21153_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_Sort_m21153(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1_Sort_m21153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21154_gshared (List_1_t644 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21154(__this, ___comparer, method) (( void (*) (List_1_t644 *, Object_t*, const MethodInfo*))List_1_Sort_m21154_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21155_gshared (List_1_t644 * __this, Comparison_1_t3595 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21155(__this, ___comparison, method) (( void (*) (List_1_t644 *, Comparison_1_t3595 *, const MethodInfo*))List_1_Sort_m21155_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t455* List_1_ToArray_m21156_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_ToArray_m21156(__this, method) (( Int32U5BU5D_t455* (*) (List_1_t644 *, const MethodInfo*))List_1_ToArray_m21156_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m21157_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21157(__this, method) (( void (*) (List_1_t644 *, const MethodInfo*))List_1_TrimExcess_m21157_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21158_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21158(__this, method) (( int32_t (*) (List_1_t644 *, const MethodInfo*))List_1_get_Capacity_m21158_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21159_gshared (List_1_t644 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21159(__this, ___value, method) (( void (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21159_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m21160_gshared (List_1_t644 * __this, const MethodInfo* method);
#define List_1_get_Count_m21160(__this, method) (( int32_t (*) (List_1_t644 *, const MethodInfo*))List_1_get_Count_m21160_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m21161_gshared (List_1_t644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21161(__this, ___index, method) (( int32_t (*) (List_1_t644 *, int32_t, const MethodInfo*))List_1_get_Item_m21161_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21162_gshared (List_1_t644 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m21162(__this, ___index, ___value, method) (( void (*) (List_1_t644 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m21162_gshared)(__this, ___index, ___value, method)

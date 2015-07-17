#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t694;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4426;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4259;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4251;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t3654;
// System.Int32[]
struct Int32U5BU5D_t493;
// System.Predicate`1<System.Int32>
struct Predicate_1_t3656;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3340;
// System.Comparison`1<System.Int32>
struct Comparison_1_t3660;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_23.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m3646_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1__ctor_m3646(__this, method) (( void (*) (List_1_t694 *, const MethodInfo*))List_1__ctor_m3646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m22135_gshared (List_1_t694 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m22135(__this, ___collection, method) (( void (*) (List_1_t694 *, Object_t*, const MethodInfo*))List_1__ctor_m22135_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m22136_gshared (List_1_t694 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m22136(__this, ___capacity, method) (( void (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1__ctor_m22136_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m22137_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m22137(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22137_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22138_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22138(__this, method) (( Object_t* (*) (List_1_t694 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22138_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m22139_gshared (List_1_t694 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m22139(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t694 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m22139_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m22140_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22140(__this, method) (( Object_t * (*) (List_1_t694 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m22140_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m22141_gshared (List_1_t694 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m22141(__this, ___item, method) (( int32_t (*) (List_1_t694 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m22141_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m22142_gshared (List_1_t694 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m22142(__this, ___item, method) (( bool (*) (List_1_t694 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m22142_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m22143_gshared (List_1_t694 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m22143(__this, ___item, method) (( int32_t (*) (List_1_t694 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m22143_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m22144_gshared (List_1_t694 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m22144(__this, ___index, ___item, method) (( void (*) (List_1_t694 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m22144_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m22145_gshared (List_1_t694 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m22145(__this, ___item, method) (( void (*) (List_1_t694 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m22145_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22146_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22146(__this, method) (( bool (*) (List_1_t694 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22146_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m22147_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22147(__this, method) (( bool (*) (List_1_t694 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m22147_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m22148_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m22148(__this, method) (( Object_t * (*) (List_1_t694 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m22148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m22149_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m22149(__this, method) (( bool (*) (List_1_t694 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m22149_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m22150_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m22150(__this, method) (( bool (*) (List_1_t694 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m22150_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m22151_gshared (List_1_t694 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m22151(__this, ___index, method) (( Object_t * (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m22151_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m22152_gshared (List_1_t694 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m22152(__this, ___index, ___value, method) (( void (*) (List_1_t694 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m22152_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m22153_gshared (List_1_t694 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m22153(__this, ___item, method) (( void (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_Add_m22153_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m22154_gshared (List_1_t694 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m22154(__this, ___newCount, method) (( void (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22154_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m22155_gshared (List_1_t694 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m22155(__this, ___collection, method) (( void (*) (List_1_t694 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22155_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m22156_gshared (List_1_t694 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m22156(__this, ___enumerable, method) (( void (*) (List_1_t694 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22156_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m22157_gshared (List_1_t694 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m22157(__this, ___collection, method) (( void (*) (List_1_t694 *, Object_t*, const MethodInfo*))List_1_AddRange_m22157_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3654 * List_1_AsReadOnly_m22158_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m22158(__this, method) (( ReadOnlyCollection_1_t3654 * (*) (List_1_t694 *, const MethodInfo*))List_1_AsReadOnly_m22158_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m22159_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_Clear_m22159(__this, method) (( void (*) (List_1_t694 *, const MethodInfo*))List_1_Clear_m22159_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m22160_gshared (List_1_t694 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m22160(__this, ___item, method) (( bool (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_Contains_m22160_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m22161_gshared (List_1_t694 * __this, Int32U5BU5D_t493* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m22161(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t694 *, Int32U5BU5D_t493*, int32_t, const MethodInfo*))List_1_CopyTo_m22161_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m22162_gshared (List_1_t694 * __this, Predicate_1_t3656 * ___match, const MethodInfo* method);
#define List_1_Find_m22162(__this, ___match, method) (( int32_t (*) (List_1_t694 *, Predicate_1_t3656 *, const MethodInfo*))List_1_Find_m22162_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m22163_gshared (Object_t * __this /* static, unused */, Predicate_1_t3656 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m22163(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3656 *, const MethodInfo*))List_1_CheckMatch_m22163_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m22164_gshared (List_1_t694 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3656 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m22164(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t694 *, int32_t, int32_t, Predicate_1_t3656 *, const MethodInfo*))List_1_GetIndex_m22164_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t3652  List_1_GetEnumerator_m22165_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m22165(__this, method) (( Enumerator_t3652  (*) (List_1_t694 *, const MethodInfo*))List_1_GetEnumerator_m22165_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m22166_gshared (List_1_t694 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m22166(__this, ___item, method) (( int32_t (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_IndexOf_m22166_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m22167_gshared (List_1_t694 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m22167(__this, ___start, ___delta, method) (( void (*) (List_1_t694 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22167_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m22168_gshared (List_1_t694 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m22168(__this, ___index, method) (( void (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22168_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m22169_gshared (List_1_t694 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m22169(__this, ___index, ___item, method) (( void (*) (List_1_t694 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m22169_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m22170_gshared (List_1_t694 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m22170(__this, ___collection, method) (( void (*) (List_1_t694 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22170_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m22171_gshared (List_1_t694 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m22171(__this, ___item, method) (( bool (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_Remove_m22171_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m22172_gshared (List_1_t694 * __this, Predicate_1_t3656 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m22172(__this, ___match, method) (( int32_t (*) (List_1_t694 *, Predicate_1_t3656 *, const MethodInfo*))List_1_RemoveAll_m22172_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m22173_gshared (List_1_t694 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m22173(__this, ___index, method) (( void (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_RemoveAt_m22173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m22174_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_Reverse_m22174(__this, method) (( void (*) (List_1_t694 *, const MethodInfo*))List_1_Reverse_m22174_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m22175_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_Sort_m22175(__this, method) (( void (*) (List_1_t694 *, const MethodInfo*))List_1_Sort_m22175_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m22176_gshared (List_1_t694 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m22176(__this, ___comparer, method) (( void (*) (List_1_t694 *, Object_t*, const MethodInfo*))List_1_Sort_m22176_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m22177_gshared (List_1_t694 * __this, Comparison_1_t3660 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m22177(__this, ___comparison, method) (( void (*) (List_1_t694 *, Comparison_1_t3660 *, const MethodInfo*))List_1_Sort_m22177_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t493* List_1_ToArray_m22178_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_ToArray_m22178(__this, method) (( Int32U5BU5D_t493* (*) (List_1_t694 *, const MethodInfo*))List_1_ToArray_m22178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m22179_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m22179(__this, method) (( void (*) (List_1_t694 *, const MethodInfo*))List_1_TrimExcess_m22179_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m22180_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m22180(__this, method) (( int32_t (*) (List_1_t694 *, const MethodInfo*))List_1_get_Capacity_m22180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m22181_gshared (List_1_t694 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m22181(__this, ___value, method) (( void (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22181_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m22182_gshared (List_1_t694 * __this, const MethodInfo* method);
#define List_1_get_Count_m22182(__this, method) (( int32_t (*) (List_1_t694 *, const MethodInfo*))List_1_get_Count_m22182_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m22183_gshared (List_1_t694 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m22183(__this, ___index, method) (( int32_t (*) (List_1_t694 *, int32_t, const MethodInfo*))List_1_get_Item_m22183_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m22184_gshared (List_1_t694 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m22184(__this, ___index, ___value, method) (( void (*) (List_1_t694 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m22184_gshared)(__this, ___index, ___value, method)

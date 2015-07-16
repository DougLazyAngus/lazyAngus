#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t543;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t564;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1246;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t3329;
// System.Object[]
struct ObjectU5BU5D_t541;
// System.Predicate`1<System.Object>
struct Predicate_1_t3331;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3558;
// System.Comparison`1<System.Object>
struct Comparison_1_t3338;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m2643_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1__ctor_m2643(__this, method) (( void (*) (List_1_t543 *, const MethodInfo*))List_1__ctor_m2643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16852_gshared (List_1_t543 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16852(__this, ___collection, method) (( void (*) (List_1_t543 *, Object_t*, const MethodInfo*))List_1__ctor_m16852_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m16854_gshared (List_1_t543 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m16854(__this, ___capacity, method) (( void (*) (List_1_t543 *, int32_t, const MethodInfo*))List_1__ctor_m16854_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m16856_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16856(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16856_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6876_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6876(__this, method) (( Object_t* (*) (List_1_t543 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6876_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m6859_gshared (List_1_t543 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m6859(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t543 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6859_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m6855_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m6855(__this, method) (( Object_t * (*) (List_1_t543 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m6864_gshared (List_1_t543 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m6864(__this, ___item, method) (( int32_t (*) (List_1_t543 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6864_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m6866_gshared (List_1_t543 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m6866(__this, ___item, method) (( bool (*) (List_1_t543 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m6867_gshared (List_1_t543 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m6867(__this, ___item, method) (( int32_t (*) (List_1_t543 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6867_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m6868_gshared (List_1_t543 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m6868(__this, ___index, ___item, method) (( void (*) (List_1_t543 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m6869_gshared (List_1_t543 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m6869(__this, ___item, method) (( void (*) (List_1_t543 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6869_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6871_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6871(__this, method) (( bool (*) (List_1_t543 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m6857_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m6857(__this, method) (( bool (*) (List_1_t543 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6857_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m6858_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m6858(__this, method) (( Object_t * (*) (List_1_t543 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m6860_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m6860(__this, method) (( bool (*) (List_1_t543 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m6861_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m6861(__this, method) (( bool (*) (List_1_t543 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6861_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m6862_gshared (List_1_t543 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m6862(__this, ___index, method) (( Object_t * (*) (List_1_t543 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6862_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m6863_gshared (List_1_t543 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m6863(__this, ___index, ___value, method) (( void (*) (List_1_t543 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6863_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m6872_gshared (List_1_t543 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m6872(__this, ___item, method) (( void (*) (List_1_t543 *, Object_t *, const MethodInfo*))List_1_Add_m6872_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16874_gshared (List_1_t543 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16874(__this, ___newCount, method) (( void (*) (List_1_t543 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16874_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16876_gshared (List_1_t543 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16876(__this, ___collection, method) (( void (*) (List_1_t543 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16878_gshared (List_1_t543 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16878(__this, ___enumerable, method) (( void (*) (List_1_t543 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16878_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16880_gshared (List_1_t543 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16880(__this, ___collection, method) (( void (*) (List_1_t543 *, Object_t*, const MethodInfo*))List_1_AddRange_m16880_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3329 * List_1_AsReadOnly_m16882_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16882(__this, method) (( ReadOnlyCollection_1_t3329 * (*) (List_1_t543 *, const MethodInfo*))List_1_AsReadOnly_m16882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m6865_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_Clear_m6865(__this, method) (( void (*) (List_1_t543 *, const MethodInfo*))List_1_Clear_m6865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m6873_gshared (List_1_t543 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m6873(__this, ___item, method) (( bool (*) (List_1_t543 *, Object_t *, const MethodInfo*))List_1_Contains_m6873_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m6874_gshared (List_1_t543 * __this, ObjectU5BU5D_t541* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m6874(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t543 *, ObjectU5BU5D_t541*, int32_t, const MethodInfo*))List_1_CopyTo_m6874_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m16887_gshared (List_1_t543 * __this, Predicate_1_t3331 * ___match, const MethodInfo* method);
#define List_1_Find_m16887(__this, ___match, method) (( Object_t * (*) (List_1_t543 *, Predicate_1_t3331 *, const MethodInfo*))List_1_Find_m16887_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16889_gshared (Object_t * __this /* static, unused */, Predicate_1_t3331 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16889(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3331 *, const MethodInfo*))List_1_CheckMatch_m16889_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16891_gshared (List_1_t543 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3331 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16891(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t543 *, int32_t, int32_t, Predicate_1_t3331 *, const MethodInfo*))List_1_GetIndex_m16891_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t592  List_1_GetEnumerator_m2746_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m2746(__this, method) (( Enumerator_t592  (*) (List_1_t543 *, const MethodInfo*))List_1_GetEnumerator_m2746_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m6877_gshared (List_1_t543 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m6877(__this, ___item, method) (( int32_t (*) (List_1_t543 *, Object_t *, const MethodInfo*))List_1_IndexOf_m6877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16894_gshared (List_1_t543 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16894(__this, ___start, ___delta, method) (( void (*) (List_1_t543 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16894_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16896_gshared (List_1_t543 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16896(__this, ___index, method) (( void (*) (List_1_t543 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16896_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m6878_gshared (List_1_t543 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m6878(__this, ___index, ___item, method) (( void (*) (List_1_t543 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m6878_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16899_gshared (List_1_t543 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16899(__this, ___collection, method) (( void (*) (List_1_t543 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16899_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m6875_gshared (List_1_t543 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m6875(__this, ___item, method) (( bool (*) (List_1_t543 *, Object_t *, const MethodInfo*))List_1_Remove_m6875_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16902_gshared (List_1_t543 * __this, Predicate_1_t3331 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16902(__this, ___match, method) (( int32_t (*) (List_1_t543 *, Predicate_1_t3331 *, const MethodInfo*))List_1_RemoveAll_m16902_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m6870_gshared (List_1_t543 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m6870(__this, ___index, method) (( void (*) (List_1_t543 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6870_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m16905_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_Reverse_m16905(__this, method) (( void (*) (List_1_t543 *, const MethodInfo*))List_1_Reverse_m16905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m16907_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_Sort_m16907(__this, method) (( void (*) (List_1_t543 *, const MethodInfo*))List_1_Sort_m16907_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m16909_gshared (List_1_t543 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m16909(__this, ___comparer, method) (( void (*) (List_1_t543 *, Object_t*, const MethodInfo*))List_1_Sort_m16909_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16911_gshared (List_1_t543 * __this, Comparison_1_t3338 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16911(__this, ___comparison, method) (( void (*) (List_1_t543 *, Comparison_1_t3338 *, const MethodInfo*))List_1_Sort_m16911_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t541* List_1_ToArray_m16913_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_ToArray_m16913(__this, method) (( ObjectU5BU5D_t541* (*) (List_1_t543 *, const MethodInfo*))List_1_ToArray_m16913_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m16915_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16915(__this, method) (( void (*) (List_1_t543 *, const MethodInfo*))List_1_TrimExcess_m16915_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16917_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16917(__this, method) (( int32_t (*) (List_1_t543 *, const MethodInfo*))List_1_get_Capacity_m16917_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16919_gshared (List_1_t543 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16919(__this, ___value, method) (( void (*) (List_1_t543 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16919_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m6856_gshared (List_1_t543 * __this, const MethodInfo* method);
#define List_1_get_Count_m6856(__this, method) (( int32_t (*) (List_1_t543 *, const MethodInfo*))List_1_get_Count_m6856_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m6879_gshared (List_1_t543 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m6879(__this, ___index, method) (( Object_t * (*) (List_1_t543 *, int32_t, const MethodInfo*))List_1_get_Item_m6879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m6880_gshared (List_1_t543 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m6880(__this, ___index, ___value, method) (( void (*) (List_1_t543 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m6880_gshared)(__this, ___index, ___value, method)

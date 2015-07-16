#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t443;
// System.Object
struct Object_t;
// ExplicitMouseDesc
struct ExplicitMouseDesc_t412;
// System.Collections.Generic.IEnumerable`1<ExplicitMouseDesc>
struct IEnumerable_1_t4332;
// System.Collections.Generic.IEnumerator`1<ExplicitMouseDesc>
struct IEnumerator_1_t4333;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<ExplicitMouseDesc>
struct ICollection_1_t4334;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ExplicitMouseDesc>
struct ReadOnlyCollection_1_t3600;
// ExplicitMouseDesc[]
struct ExplicitMouseDescU5BU5D_t3598;
// System.Predicate`1<ExplicitMouseDesc>
struct Predicate_1_t3601;
// System.Collections.Generic.IComparer`1<ExplicitMouseDesc>
struct IComparer_1_t4335;
// System.Comparison`1<ExplicitMouseDesc>
struct Comparison_1_t3603;
// System.Collections.Generic.List`1/Enumerator<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_23.h"

// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3082(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1__ctor_m2643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21268(__this, ___collection, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1__ctor_m16852_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.ctor(System.Int32)
#define List_1__ctor_m21269(__this, ___capacity, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1__ctor_m16854_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::.cctor()
#define List_1__cctor_m21270(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16856_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21271(__this, method) (( Object_t* (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6876_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21272(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t443 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6859_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21273(__this, method) (( Object_t * (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21274(__this, ___item, method) (( int32_t (*) (List_1_t443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6864_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21275(__this, ___item, method) (( bool (*) (List_1_t443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21276(__this, ___item, method) (( int32_t (*) (List_1_t443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6867_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21277(__this, ___index, ___item, method) (( void (*) (List_1_t443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21278(__this, ___item, method) (( void (*) (List_1_t443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6869_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21279(__this, method) (( bool (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21280(__this, method) (( bool (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6857_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21281(__this, method) (( Object_t * (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21282(__this, method) (( bool (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21283(__this, method) (( bool (*) (List_1_t443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6861_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21284(__this, ___index, method) (( Object_t * (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6862_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21285(__this, ___index, ___value, method) (( void (*) (List_1_t443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6863_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Add(T)
#define List_1_Add_m21286(__this, ___item, method) (( void (*) (List_1_t443 *, ExplicitMouseDesc_t412 *, const MethodInfo*))List_1_Add_m6872_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21287(__this, ___newCount, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16874_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21288(__this, ___collection, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21289(__this, ___enumerable, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16878_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3109(__this, ___collection, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_AddRange_m16880_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::AsReadOnly()
#define List_1_AsReadOnly_m21290(__this, method) (( ReadOnlyCollection_1_t3600 * (*) (List_1_t443 *, const MethodInfo*))List_1_AsReadOnly_m16882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Clear()
#define List_1_Clear_m21291(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1_Clear_m6865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Contains(T)
#define List_1_Contains_m21292(__this, ___item, method) (( bool (*) (List_1_t443 *, ExplicitMouseDesc_t412 *, const MethodInfo*))List_1_Contains_m6873_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21293(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t443 *, ExplicitMouseDescU5BU5D_t3598*, int32_t, const MethodInfo*))List_1_CopyTo_m6874_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::Find(System.Predicate`1<T>)
#define List_1_Find_m21294(__this, ___match, method) (( ExplicitMouseDesc_t412 * (*) (List_1_t443 *, Predicate_1_t3601 *, const MethodInfo*))List_1_Find_m16887_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21295(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3601 *, const MethodInfo*))List_1_CheckMatch_m16889_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21296(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t443 *, int32_t, int32_t, Predicate_1_t3601 *, const MethodInfo*))List_1_GetIndex_m16891_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ExplicitMouseDesc>::GetEnumerator()
#define List_1_GetEnumerator_m21297(__this, method) (( Enumerator_t3602  (*) (List_1_t443 *, const MethodInfo*))List_1_GetEnumerator_m2746_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::IndexOf(T)
#define List_1_IndexOf_m21298(__this, ___item, method) (( int32_t (*) (List_1_t443 *, ExplicitMouseDesc_t412 *, const MethodInfo*))List_1_IndexOf_m6877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21299(__this, ___start, ___delta, method) (( void (*) (List_1_t443 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16894_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21300(__this, ___index, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16896_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Insert(System.Int32,T)
#define List_1_Insert_m21301(__this, ___index, ___item, method) (( void (*) (List_1_t443 *, int32_t, ExplicitMouseDesc_t412 *, const MethodInfo*))List_1_Insert_m6878_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21302(__this, ___collection, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16899_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<ExplicitMouseDesc>::Remove(T)
#define List_1_Remove_m21303(__this, ___item, method) (( bool (*) (List_1_t443 *, ExplicitMouseDesc_t412 *, const MethodInfo*))List_1_Remove_m6875_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21304(__this, ___match, method) (( int32_t (*) (List_1_t443 *, Predicate_1_t3601 *, const MethodInfo*))List_1_RemoveAll_m16902_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21305(__this, ___index, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6870_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Reverse()
#define List_1_Reverse_m21306(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1_Reverse_m16905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort()
#define List_1_Sort_m21307(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1_Sort_m16907_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21308(__this, ___comparer, method) (( void (*) (List_1_t443 *, Object_t*, const MethodInfo*))List_1_Sort_m16909_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21309(__this, ___comparison, method) (( void (*) (List_1_t443 *, Comparison_1_t3603 *, const MethodInfo*))List_1_Sort_m16911_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ExplicitMouseDesc>::ToArray()
#define List_1_ToArray_m21310(__this, method) (( ExplicitMouseDescU5BU5D_t3598* (*) (List_1_t443 *, const MethodInfo*))List_1_ToArray_m16913_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::TrimExcess()
#define List_1_TrimExcess_m21311(__this, method) (( void (*) (List_1_t443 *, const MethodInfo*))List_1_TrimExcess_m16915_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Capacity()
#define List_1_get_Capacity_m21312(__this, method) (( int32_t (*) (List_1_t443 *, const MethodInfo*))List_1_get_Capacity_m16917_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21313(__this, ___value, method) (( void (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16919_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Count()
#define List_1_get_Count_m21314(__this, method) (( int32_t (*) (List_1_t443 *, const MethodInfo*))List_1_get_Count_m6856_gshared)(__this, method)
// T System.Collections.Generic.List`1<ExplicitMouseDesc>::get_Item(System.Int32)
#define List_1_get_Item_m21315(__this, ___index, method) (( ExplicitMouseDesc_t412 * (*) (List_1_t443 *, int32_t, const MethodInfo*))List_1_get_Item_m6879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ExplicitMouseDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m21316(__this, ___index, ___value, method) (( void (*) (List_1_t443 *, int32_t, ExplicitMouseDesc_t412 *, const MethodInfo*))List_1_set_Item_m6880_gshared)(__this, ___index, ___value, method)

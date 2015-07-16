#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1074;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t4486;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t4487;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Byte[]>
struct ICollection_1_t4488;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
struct ReadOnlyCollection_1_t3843;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t2253;
// System.Predicate`1<System.Byte[]>
struct Predicate_1_t3844;
// System.Collections.Generic.IComparer`1<System.Byte[]>
struct IComparer_1_t4489;
// System.Comparison`1<System.Byte[]>
struct Comparison_1_t3846;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6610(__this, method) (( void (*) (List_1_t1074 *, const MethodInfo*))List_1__ctor_m2643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24902(__this, ___collection, method) (( void (*) (List_1_t1074 *, Object_t*, const MethodInfo*))List_1__ctor_m16852_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m24903(__this, ___capacity, method) (( void (*) (List_1_t1074 *, int32_t, const MethodInfo*))List_1__ctor_m16854_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m24904(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16856_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24905(__this, method) (( Object_t* (*) (List_1_t1074 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6876_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24906(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1074 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6859_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24907(__this, method) (( Object_t * (*) (List_1_t1074 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24908(__this, ___item, method) (( int32_t (*) (List_1_t1074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6864_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24909(__this, ___item, method) (( bool (*) (List_1_t1074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24910(__this, ___item, method) (( int32_t (*) (List_1_t1074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6867_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24911(__this, ___index, ___item, method) (( void (*) (List_1_t1074 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24912(__this, ___item, method) (( void (*) (List_1_t1074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6869_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24913(__this, method) (( bool (*) (List_1_t1074 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24914(__this, method) (( bool (*) (List_1_t1074 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6857_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24915(__this, method) (( Object_t * (*) (List_1_t1074 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24916(__this, method) (( bool (*) (List_1_t1074 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24917(__this, method) (( bool (*) (List_1_t1074 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6861_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24918(__this, ___index, method) (( Object_t * (*) (List_1_t1074 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6862_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24919(__this, ___index, ___value, method) (( void (*) (List_1_t1074 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6863_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m24920(__this, ___item, method) (( void (*) (List_1_t1074 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Add_m6872_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24921(__this, ___newCount, method) (( void (*) (List_1_t1074 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16874_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24922(__this, ___collection, method) (( void (*) (List_1_t1074 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24923(__this, ___enumerable, method) (( void (*) (List_1_t1074 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16878_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24924(__this, ___collection, method) (( void (*) (List_1_t1074 *, Object_t*, const MethodInfo*))List_1_AddRange_m16880_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte[]>::AsReadOnly()
#define List_1_AsReadOnly_m24925(__this, method) (( ReadOnlyCollection_1_t3843 * (*) (List_1_t1074 *, const MethodInfo*))List_1_AsReadOnly_m16882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m24926(__this, method) (( void (*) (List_1_t1074 *, const MethodInfo*))List_1_Clear_m6865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m24927(__this, ___item, method) (( bool (*) (List_1_t1074 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Contains_m6873_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24928(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1074 *, ByteU5BU5DU5BU5D_t2253*, int32_t, const MethodInfo*))List_1_CopyTo_m6874_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte[]>::Find(System.Predicate`1<T>)
#define List_1_Find_m24929(__this, ___match, method) (( ByteU5BU5D_t36* (*) (List_1_t1074 *, Predicate_1_t3844 *, const MethodInfo*))List_1_Find_m16887_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24930(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3844 *, const MethodInfo*))List_1_CheckMatch_m16889_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24931(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1074 *, int32_t, int32_t, Predicate_1_t3844 *, const MethodInfo*))List_1_GetIndex_m16891_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m24932(__this, method) (( Enumerator_t3845  (*) (List_1_t1074 *, const MethodInfo*))List_1_GetEnumerator_m2746_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m24933(__this, ___item, method) (( int32_t (*) (List_1_t1074 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_IndexOf_m6877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24934(__this, ___start, ___delta, method) (( void (*) (List_1_t1074 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16894_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24935(__this, ___index, method) (( void (*) (List_1_t1074 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16896_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m24936(__this, ___index, ___item, method) (( void (*) (List_1_t1074 *, int32_t, ByteU5BU5D_t36*, const MethodInfo*))List_1_Insert_m6878_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24937(__this, ___collection, method) (( void (*) (List_1_t1074 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16899_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m24938(__this, ___item, method) (( bool (*) (List_1_t1074 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Remove_m6875_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24939(__this, ___match, method) (( int32_t (*) (List_1_t1074 *, Predicate_1_t3844 *, const MethodInfo*))List_1_RemoveAll_m16902_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24940(__this, ___index, method) (( void (*) (List_1_t1074 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6870_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Reverse()
#define List_1_Reverse_m24941(__this, method) (( void (*) (List_1_t1074 *, const MethodInfo*))List_1_Reverse_m16905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort()
#define List_1_Sort_m24942(__this, method) (( void (*) (List_1_t1074 *, const MethodInfo*))List_1_Sort_m16907_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24943(__this, ___comparer, method) (( void (*) (List_1_t1074 *, Object_t*, const MethodInfo*))List_1_Sort_m16909_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24944(__this, ___comparison, method) (( void (*) (List_1_t1074 *, Comparison_1_t3846 *, const MethodInfo*))List_1_Sort_m16911_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m24945(__this, method) (( ByteU5BU5DU5BU5D_t2253* (*) (List_1_t1074 *, const MethodInfo*))List_1_ToArray_m16913_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::TrimExcess()
#define List_1_TrimExcess_m24946(__this, method) (( void (*) (List_1_t1074 *, const MethodInfo*))List_1_TrimExcess_m16915_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m24947(__this, method) (( int32_t (*) (List_1_t1074 *, const MethodInfo*))List_1_get_Capacity_m16917_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24948(__this, ___value, method) (( void (*) (List_1_t1074 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16919_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m24949(__this, method) (( int32_t (*) (List_1_t1074 *, const MethodInfo*))List_1_get_Count_m6856_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m24950(__this, ___index, method) (( ByteU5BU5D_t36* (*) (List_1_t1074 *, int32_t, const MethodInfo*))List_1_get_Item_m6879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m24951(__this, ___index, ___value, method) (( void (*) (List_1_t1074 *, int32_t, ByteU5BU5D_t36*, const MethodInfo*))List_1_set_Item_m6880_gshared)(__this, ___index, ___value, method)

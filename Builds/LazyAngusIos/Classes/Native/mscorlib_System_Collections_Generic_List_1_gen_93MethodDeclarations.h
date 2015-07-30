#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct List_1_t7430;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerable_1_t9277;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7429;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7147;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ICollection_1_t9278;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ReadOnlyCollection_1_t7432;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Predicate_1_t7433;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IComparer_1_t9279;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Comparison_1_t7435;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_92MethodDeclarations.h"
#define List_1__ctor_m49026(__this, method) (( void (*) (List_1_t7430 *, const MethodInfo*))List_1__ctor_m48873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m49027(__this, ___collection, method) (( void (*) (List_1_t7430 *, Object_t*, const MethodInfo*))List_1__ctor_m48874_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Int32)
#define List_1__ctor_m49028(__this, ___capacity, method) (( void (*) (List_1_t7430 *, int32_t, const MethodInfo*))List_1__ctor_m48875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m49029(__this, ___data, ___size, method) (( void (*) (List_1_t7430 *, KeyValuePair_2U5BU5D_t7429*, int32_t, const MethodInfo*))List_1__ctor_m48876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.cctor()
#define List_1__cctor_m49030(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49031(__this, method) (( Object_t* (*) (List_1_t7430 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48878_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m49032(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7430 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48879_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49033(__this, method) (( Object_t * (*) (List_1_t7430 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48880_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m49034(__this, ___item, method) (( int32_t (*) (List_1_t7430 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48881_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m49035(__this, ___item, method) (( bool (*) (List_1_t7430 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48882_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m49036(__this, ___item, method) (( int32_t (*) (List_1_t7430 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48883_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m49037(__this, ___index, ___item, method) (( void (*) (List_1_t7430 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48884_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m49038(__this, ___item, method) (( void (*) (List_1_t7430 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48885_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49039(__this, method) (( bool (*) (List_1_t7430 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48886_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49040(__this, method) (( bool (*) (List_1_t7430 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48887_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m49041(__this, method) (( Object_t * (*) (List_1_t7430 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48888_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m49042(__this, method) (( bool (*) (List_1_t7430 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48889_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m49043(__this, method) (( bool (*) (List_1_t7430 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48890_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m49044(__this, ___index, method) (( Object_t * (*) (List_1_t7430 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48891_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m49045(__this, ___index, ___value, method) (( void (*) (List_1_t7430 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48892_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Add(T)
#define List_1_Add_m49046(__this, ___item, method) (( void (*) (List_1_t7430 *, KeyValuePair_2_t7142 , const MethodInfo*))List_1_Add_m48893_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m49047(__this, ___newCount, method) (( void (*) (List_1_t7430 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48894_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m49048(__this, ___idx, ___count, method) (( void (*) (List_1_t7430 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48895_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m49049(__this, ___collection, method) (( void (*) (List_1_t7430 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48896_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m49050(__this, ___enumerable, method) (( void (*) (List_1_t7430 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48897_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m49051(__this, ___collection, method) (( void (*) (List_1_t7430 *, Object_t*, const MethodInfo*))List_1_AddRange_m48898_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AsReadOnly()
#define List_1_AsReadOnly_m49052(__this, method) (( ReadOnlyCollection_1_t7432 * (*) (List_1_t7430 *, const MethodInfo*))List_1_AsReadOnly_m48899_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Clear()
#define List_1_Clear_m49053(__this, method) (( void (*) (List_1_t7430 *, const MethodInfo*))List_1_Clear_m48900_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Contains(T)
#define List_1_Contains_m49054(__this, ___item, method) (( bool (*) (List_1_t7430 *, KeyValuePair_2_t7142 , const MethodInfo*))List_1_Contains_m48901_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m49055(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7430 *, KeyValuePair_2U5BU5D_t7429*, int32_t, const MethodInfo*))List_1_CopyTo_m48902_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m49056(__this, ___match, method) (( KeyValuePair_2_t7142  (*) (List_1_t7430 *, Predicate_1_t7433 *, const MethodInfo*))List_1_Find_m48903_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m49057(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7433 *, const MethodInfo*))List_1_CheckMatch_m48904_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m49058(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7430 *, int32_t, int32_t, Predicate_1_t7433 *, const MethodInfo*))List_1_GetIndex_m48905_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetEnumerator()
#define List_1_GetEnumerator_m49059(__this, method) (( Enumerator_t7434  (*) (List_1_t7430 *, const MethodInfo*))List_1_GetEnumerator_m48906_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m49060(__this, ___index, ___count, method) (( List_1_t7430 * (*) (List_1_t7430 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48907_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::IndexOf(T)
#define List_1_IndexOf_m49061(__this, ___item, method) (( int32_t (*) (List_1_t7430 *, KeyValuePair_2_t7142 , const MethodInfo*))List_1_IndexOf_m48908_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m49062(__this, ___start, ___delta, method) (( void (*) (List_1_t7430 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48909_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m49063(__this, ___index, method) (( void (*) (List_1_t7430 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48910_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Insert(System.Int32,T)
#define List_1_Insert_m49064(__this, ___index, ___item, method) (( void (*) (List_1_t7430 *, int32_t, KeyValuePair_2_t7142 , const MethodInfo*))List_1_Insert_m48911_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m49065(__this, ___collection, method) (( void (*) (List_1_t7430 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48912_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m49066(__this, ___index, ___collection, method) (( void (*) (List_1_t7430 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48913_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m49067(__this, ___index, ___collection, method) (( void (*) (List_1_t7430 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48914_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m49068(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7430 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48915_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Remove(T)
#define List_1_Remove_m49069(__this, ___item, method) (( bool (*) (List_1_t7430 *, KeyValuePair_2_t7142 , const MethodInfo*))List_1_Remove_m48916_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m49070(__this, ___match, method) (( int32_t (*) (List_1_t7430 *, Predicate_1_t7433 *, const MethodInfo*))List_1_RemoveAll_m48917_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m49071(__this, ___index, method) (( void (*) (List_1_t7430 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48918_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m49072(__this, ___index, ___count, method) (( void (*) (List_1_t7430 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48919_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Reverse()
#define List_1_Reverse_m49073(__this, method) (( void (*) (List_1_t7430 *, const MethodInfo*))List_1_Reverse_m48920_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort()
#define List_1_Sort_m49074(__this, method) (( void (*) (List_1_t7430 *, const MethodInfo*))List_1_Sort_m48921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m49075(__this, ___comparer, method) (( void (*) (List_1_t7430 *, Object_t*, const MethodInfo*))List_1_Sort_m48922_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m49076(__this, ___comparison, method) (( void (*) (List_1_t7430 *, Comparison_1_t7435 *, const MethodInfo*))List_1_Sort_m48923_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::ToArray()
#define List_1_ToArray_m49077(__this, method) (( KeyValuePair_2U5BU5D_t7429* (*) (List_1_t7430 *, const MethodInfo*))List_1_ToArray_m48924_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::TrimExcess()
#define List_1_TrimExcess_m49078(__this, method) (( void (*) (List_1_t7430 *, const MethodInfo*))List_1_TrimExcess_m48925_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Capacity()
#define List_1_get_Capacity_m49079(__this, method) (( int32_t (*) (List_1_t7430 *, const MethodInfo*))List_1_get_Capacity_m48926_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m49080(__this, ___value, method) (( void (*) (List_1_t7430 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48927_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Count()
#define List_1_get_Count_m49081(__this, method) (( int32_t (*) (List_1_t7430 *, const MethodInfo*))List_1_get_Count_m48928_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Item(System.Int32)
#define List_1_get_Item_m49082(__this, ___index, method) (( KeyValuePair_2_t7142  (*) (List_1_t7430 *, int32_t, const MethodInfo*))List_1_get_Item_m48929_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m49083(__this, ___index, ___value, method) (( void (*) (List_1_t7430 *, int32_t, KeyValuePair_2_t7142 , const MethodInfo*))List_1_set_Item_m48930_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct List_1_t7443;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerable_1_t9373;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7442;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7214;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ICollection_1_t9374;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ReadOnlyCollection_1_t7445;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Predicate_1_t7446;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IComparer_1_t9375;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Comparison_1_t7448;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_78.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_94MethodDeclarations.h"
#define List_1__ctor_m49037(__this, method) (( void (*) (List_1_t7443 *, const MethodInfo*))List_1__ctor_m48884_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m49038(__this, ___collection, method) (( void (*) (List_1_t7443 *, Object_t*, const MethodInfo*))List_1__ctor_m48885_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Int32)
#define List_1__ctor_m49039(__this, ___capacity, method) (( void (*) (List_1_t7443 *, int32_t, const MethodInfo*))List_1__ctor_m48886_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m49040(__this, ___data, ___size, method) (( void (*) (List_1_t7443 *, KeyValuePair_2U5BU5D_t7442*, int32_t, const MethodInfo*))List_1__ctor_m48887_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.cctor()
#define List_1__cctor_m49041(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48888_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49042(__this, method) (( Object_t* (*) (List_1_t7443 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m49043(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7443 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48890_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49044(__this, method) (( Object_t * (*) (List_1_t7443 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48891_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m49045(__this, ___item, method) (( int32_t (*) (List_1_t7443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48892_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m49046(__this, ___item, method) (( bool (*) (List_1_t7443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48893_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m49047(__this, ___item, method) (( int32_t (*) (List_1_t7443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48894_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m49048(__this, ___index, ___item, method) (( void (*) (List_1_t7443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48895_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m49049(__this, ___item, method) (( void (*) (List_1_t7443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48896_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49050(__this, method) (( bool (*) (List_1_t7443 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48897_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49051(__this, method) (( bool (*) (List_1_t7443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48898_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m49052(__this, method) (( Object_t * (*) (List_1_t7443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m49053(__this, method) (( bool (*) (List_1_t7443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48900_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m49054(__this, method) (( bool (*) (List_1_t7443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48901_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m49055(__this, ___index, method) (( Object_t * (*) (List_1_t7443 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48902_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m49056(__this, ___index, ___value, method) (( void (*) (List_1_t7443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48903_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Add(T)
#define List_1_Add_m49057(__this, ___item, method) (( void (*) (List_1_t7443 *, KeyValuePair_2_t7209 , const MethodInfo*))List_1_Add_m48904_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m49058(__this, ___newCount, method) (( void (*) (List_1_t7443 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48905_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m49059(__this, ___idx, ___count, method) (( void (*) (List_1_t7443 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48906_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m49060(__this, ___collection, method) (( void (*) (List_1_t7443 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48907_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m49061(__this, ___enumerable, method) (( void (*) (List_1_t7443 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48908_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m49062(__this, ___collection, method) (( void (*) (List_1_t7443 *, Object_t*, const MethodInfo*))List_1_AddRange_m48909_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AsReadOnly()
#define List_1_AsReadOnly_m49063(__this, method) (( ReadOnlyCollection_1_t7445 * (*) (List_1_t7443 *, const MethodInfo*))List_1_AsReadOnly_m48910_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Clear()
#define List_1_Clear_m49064(__this, method) (( void (*) (List_1_t7443 *, const MethodInfo*))List_1_Clear_m48911_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Contains(T)
#define List_1_Contains_m49065(__this, ___item, method) (( bool (*) (List_1_t7443 *, KeyValuePair_2_t7209 , const MethodInfo*))List_1_Contains_m48912_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m49066(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7443 *, KeyValuePair_2U5BU5D_t7442*, int32_t, const MethodInfo*))List_1_CopyTo_m48913_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m49067(__this, ___match, method) (( KeyValuePair_2_t7209  (*) (List_1_t7443 *, Predicate_1_t7446 *, const MethodInfo*))List_1_Find_m48914_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m49068(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7446 *, const MethodInfo*))List_1_CheckMatch_m48915_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m49069(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7443 *, int32_t, int32_t, Predicate_1_t7446 *, const MethodInfo*))List_1_GetIndex_m48916_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetEnumerator()
#define List_1_GetEnumerator_m49070(__this, method) (( Enumerator_t7447  (*) (List_1_t7443 *, const MethodInfo*))List_1_GetEnumerator_m48917_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m49071(__this, ___index, ___count, method) (( List_1_t7443 * (*) (List_1_t7443 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48918_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::IndexOf(T)
#define List_1_IndexOf_m49072(__this, ___item, method) (( int32_t (*) (List_1_t7443 *, KeyValuePair_2_t7209 , const MethodInfo*))List_1_IndexOf_m48919_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m49073(__this, ___start, ___delta, method) (( void (*) (List_1_t7443 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48920_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m49074(__this, ___index, method) (( void (*) (List_1_t7443 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48921_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Insert(System.Int32,T)
#define List_1_Insert_m49075(__this, ___index, ___item, method) (( void (*) (List_1_t7443 *, int32_t, KeyValuePair_2_t7209 , const MethodInfo*))List_1_Insert_m48922_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m49076(__this, ___collection, method) (( void (*) (List_1_t7443 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48923_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m49077(__this, ___index, ___collection, method) (( void (*) (List_1_t7443 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48924_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m49078(__this, ___index, ___collection, method) (( void (*) (List_1_t7443 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48925_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m49079(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7443 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48926_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Remove(T)
#define List_1_Remove_m49080(__this, ___item, method) (( bool (*) (List_1_t7443 *, KeyValuePair_2_t7209 , const MethodInfo*))List_1_Remove_m48927_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m49081(__this, ___match, method) (( int32_t (*) (List_1_t7443 *, Predicate_1_t7446 *, const MethodInfo*))List_1_RemoveAll_m48928_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m49082(__this, ___index, method) (( void (*) (List_1_t7443 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48929_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m49083(__this, ___index, ___count, method) (( void (*) (List_1_t7443 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48930_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Reverse()
#define List_1_Reverse_m49084(__this, method) (( void (*) (List_1_t7443 *, const MethodInfo*))List_1_Reverse_m48931_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort()
#define List_1_Sort_m49085(__this, method) (( void (*) (List_1_t7443 *, const MethodInfo*))List_1_Sort_m48932_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m49086(__this, ___comparer, method) (( void (*) (List_1_t7443 *, Object_t*, const MethodInfo*))List_1_Sort_m48933_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m49087(__this, ___comparison, method) (( void (*) (List_1_t7443 *, Comparison_1_t7448 *, const MethodInfo*))List_1_Sort_m48934_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::ToArray()
#define List_1_ToArray_m49088(__this, method) (( KeyValuePair_2U5BU5D_t7442* (*) (List_1_t7443 *, const MethodInfo*))List_1_ToArray_m48935_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::TrimExcess()
#define List_1_TrimExcess_m49089(__this, method) (( void (*) (List_1_t7443 *, const MethodInfo*))List_1_TrimExcess_m48936_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Capacity()
#define List_1_get_Capacity_m49090(__this, method) (( int32_t (*) (List_1_t7443 *, const MethodInfo*))List_1_get_Capacity_m48937_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m49091(__this, ___value, method) (( void (*) (List_1_t7443 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48938_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Count()
#define List_1_get_Count_m49092(__this, method) (( int32_t (*) (List_1_t7443 *, const MethodInfo*))List_1_get_Count_m48939_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Item(System.Int32)
#define List_1_get_Item_m49093(__this, ___index, method) (( KeyValuePair_2_t7209  (*) (List_1_t7443 *, int32_t, const MethodInfo*))List_1_get_Item_m48940_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m49094(__this, ___index, ___value, method) (( void (*) (List_1_t7443 *, int32_t, KeyValuePair_2_t7209 , const MethodInfo*))List_1_set_Item_m48941_gshared)(__this, ___index, ___value, method)

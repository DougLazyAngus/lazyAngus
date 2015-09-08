#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct List_1_t8016;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerable_1_t10006;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8015;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7787;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ICollection_1_t10007;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct ReadOnlyCollection_1_t8018;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Predicate_1_t8019;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IComparer_1_t10008;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Comparison_1_t8021;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_81.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_97MethodDeclarations.h"
#define List_1__ctor_m53689(__this, method) (( void (*) (List_1_t8016 *, const MethodInfo*))List_1__ctor_m53536_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m53690(__this, ___collection, method) (( void (*) (List_1_t8016 *, Object_t*, const MethodInfo*))List_1__ctor_m53537_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Int32)
#define List_1__ctor_m53691(__this, ___capacity, method) (( void (*) (List_1_t8016 *, int32_t, const MethodInfo*))List_1__ctor_m53538_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m53692(__this, ___data, ___size, method) (( void (*) (List_1_t8016 *, KeyValuePair_2U5BU5D_t8015*, int32_t, const MethodInfo*))List_1__ctor_m53539_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.cctor()
#define List_1__cctor_m53693(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53540_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53694(__this, method) (( Object_t* (*) (List_1_t8016 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m53695(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8016 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53542_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53696(__this, method) (( Object_t * (*) (List_1_t8016 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53543_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m53697(__this, ___item, method) (( int32_t (*) (List_1_t8016 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m53698(__this, ___item, method) (( bool (*) (List_1_t8016 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53545_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m53699(__this, ___item, method) (( int32_t (*) (List_1_t8016 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53546_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m53700(__this, ___index, ___item, method) (( void (*) (List_1_t8016 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53547_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m53701(__this, ___item, method) (( void (*) (List_1_t8016 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53548_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53702(__this, method) (( bool (*) (List_1_t8016 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53549_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53703(__this, method) (( bool (*) (List_1_t8016 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53550_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m53704(__this, method) (( Object_t * (*) (List_1_t8016 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m53705(__this, method) (( bool (*) (List_1_t8016 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53552_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m53706(__this, method) (( bool (*) (List_1_t8016 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53553_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m53707(__this, ___index, method) (( Object_t * (*) (List_1_t8016 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53554_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m53708(__this, ___index, ___value, method) (( void (*) (List_1_t8016 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53555_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Add(T)
#define List_1_Add_m53709(__this, ___item, method) (( void (*) (List_1_t8016 *, KeyValuePair_2_t7782 , const MethodInfo*))List_1_Add_m53556_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m53710(__this, ___newCount, method) (( void (*) (List_1_t8016 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53557_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m53711(__this, ___idx, ___count, method) (( void (*) (List_1_t8016 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53558_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m53712(__this, ___collection, method) (( void (*) (List_1_t8016 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53559_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m53713(__this, ___enumerable, method) (( void (*) (List_1_t8016 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53560_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m53714(__this, ___collection, method) (( void (*) (List_1_t8016 *, Object_t*, const MethodInfo*))List_1_AddRange_m53561_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::AsReadOnly()
#define List_1_AsReadOnly_m53715(__this, method) (( ReadOnlyCollection_1_t8018 * (*) (List_1_t8016 *, const MethodInfo*))List_1_AsReadOnly_m53562_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Clear()
#define List_1_Clear_m53716(__this, method) (( void (*) (List_1_t8016 *, const MethodInfo*))List_1_Clear_m53563_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Contains(T)
#define List_1_Contains_m53717(__this, ___item, method) (( bool (*) (List_1_t8016 *, KeyValuePair_2_t7782 , const MethodInfo*))List_1_Contains_m53564_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m53718(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8016 *, KeyValuePair_2U5BU5D_t8015*, int32_t, const MethodInfo*))List_1_CopyTo_m53565_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m53719(__this, ___match, method) (( KeyValuePair_2_t7782  (*) (List_1_t8016 *, Predicate_1_t8019 *, const MethodInfo*))List_1_Find_m53566_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m53720(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8019 *, const MethodInfo*))List_1_CheckMatch_m53567_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m53721(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8016 *, int32_t, int32_t, Predicate_1_t8019 *, const MethodInfo*))List_1_GetIndex_m53568_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetEnumerator()
#define List_1_GetEnumerator_m53722(__this, method) (( Enumerator_t8020  (*) (List_1_t8016 *, const MethodInfo*))List_1_GetEnumerator_m53569_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m53723(__this, ___index, ___count, method) (( List_1_t8016 * (*) (List_1_t8016 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53570_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::IndexOf(T)
#define List_1_IndexOf_m53724(__this, ___item, method) (( int32_t (*) (List_1_t8016 *, KeyValuePair_2_t7782 , const MethodInfo*))List_1_IndexOf_m53571_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m53725(__this, ___start, ___delta, method) (( void (*) (List_1_t8016 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53572_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m53726(__this, ___index, method) (( void (*) (List_1_t8016 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53573_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Insert(System.Int32,T)
#define List_1_Insert_m53727(__this, ___index, ___item, method) (( void (*) (List_1_t8016 *, int32_t, KeyValuePair_2_t7782 , const MethodInfo*))List_1_Insert_m53574_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m53728(__this, ___collection, method) (( void (*) (List_1_t8016 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53575_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m53729(__this, ___index, ___collection, method) (( void (*) (List_1_t8016 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53576_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m53730(__this, ___index, ___collection, method) (( void (*) (List_1_t8016 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53577_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m53731(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8016 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53578_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Remove(T)
#define List_1_Remove_m53732(__this, ___item, method) (( bool (*) (List_1_t8016 *, KeyValuePair_2_t7782 , const MethodInfo*))List_1_Remove_m53579_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m53733(__this, ___match, method) (( int32_t (*) (List_1_t8016 *, Predicate_1_t8019 *, const MethodInfo*))List_1_RemoveAll_m53580_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m53734(__this, ___index, method) (( void (*) (List_1_t8016 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53581_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m53735(__this, ___index, ___count, method) (( void (*) (List_1_t8016 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53582_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Reverse()
#define List_1_Reverse_m53736(__this, method) (( void (*) (List_1_t8016 *, const MethodInfo*))List_1_Reverse_m53583_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort()
#define List_1_Sort_m53737(__this, method) (( void (*) (List_1_t8016 *, const MethodInfo*))List_1_Sort_m53584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m53738(__this, ___comparer, method) (( void (*) (List_1_t8016 *, Object_t*, const MethodInfo*))List_1_Sort_m53585_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m53739(__this, ___comparison, method) (( void (*) (List_1_t8016 *, Comparison_1_t8021 *, const MethodInfo*))List_1_Sort_m53586_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::ToArray()
#define List_1_ToArray_m53740(__this, method) (( KeyValuePair_2U5BU5D_t8015* (*) (List_1_t8016 *, const MethodInfo*))List_1_ToArray_m53587_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::TrimExcess()
#define List_1_TrimExcess_m53741(__this, method) (( void (*) (List_1_t8016 *, const MethodInfo*))List_1_TrimExcess_m53588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Capacity()
#define List_1_get_Capacity_m53742(__this, method) (( int32_t (*) (List_1_t8016 *, const MethodInfo*))List_1_get_Capacity_m53589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m53743(__this, ___value, method) (( void (*) (List_1_t8016 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53590_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Count()
#define List_1_get_Count_m53744(__this, method) (( int32_t (*) (List_1_t8016 *, const MethodInfo*))List_1_get_Count_m53591_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::get_Item(System.Int32)
#define List_1_get_Item_m53745(__this, ___index, method) (( KeyValuePair_2_t7782  (*) (List_1_t8016 *, int32_t, const MethodInfo*))List_1_get_Item_m53592_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m53746(__this, ___index, ___value, method) (( void (*) (List_1_t8016 *, int32_t, KeyValuePair_2_t7782 , const MethodInfo*))List_1_set_Item_m53593_gshared)(__this, ___index, ___value, method)

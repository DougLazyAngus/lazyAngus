#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct List_1_t7410;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerable_1_t9408;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7409;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7235;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ICollection_1_t9409;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ReadOnlyCollection_1_t7412;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Predicate_1_t7413;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IComparer_1_t9410;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t7415;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_78.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_94MethodDeclarations.h"
#define List_1__ctor_m48625(__this, method) (( void (*) (List_1_t7410 *, const MethodInfo*))List_1__ctor_m48472_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m48626(__this, ___collection, method) (( void (*) (List_1_t7410 *, Object_t*, const MethodInfo*))List_1__ctor_m48473_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Int32)
#define List_1__ctor_m48627(__this, ___capacity, method) (( void (*) (List_1_t7410 *, int32_t, const MethodInfo*))List_1__ctor_m48474_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m48628(__this, ___data, ___size, method) (( void (*) (List_1_t7410 *, KeyValuePair_2U5BU5D_t7409*, int32_t, const MethodInfo*))List_1__ctor_m48475_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.cctor()
#define List_1__cctor_m48629(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48476_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48630(__this, method) (( Object_t* (*) (List_1_t7410 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48477_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m48631(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7410 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48478_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48632(__this, method) (( Object_t * (*) (List_1_t7410 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48479_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m48633(__this, ___item, method) (( int32_t (*) (List_1_t7410 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48480_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m48634(__this, ___item, method) (( bool (*) (List_1_t7410 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48481_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m48635(__this, ___item, method) (( int32_t (*) (List_1_t7410 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m48636(__this, ___index, ___item, method) (( void (*) (List_1_t7410 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48483_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m48637(__this, ___item, method) (( void (*) (List_1_t7410 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48484_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48638(__this, method) (( bool (*) (List_1_t7410 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48485_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48639(__this, method) (( bool (*) (List_1_t7410 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48486_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m48640(__this, method) (( Object_t * (*) (List_1_t7410 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48487_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m48641(__this, method) (( bool (*) (List_1_t7410 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m48642(__this, method) (( bool (*) (List_1_t7410 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48489_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m48643(__this, ___index, method) (( Object_t * (*) (List_1_t7410 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48490_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m48644(__this, ___index, ___value, method) (( void (*) (List_1_t7410 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48491_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Add(T)
#define List_1_Add_m48645(__this, ___item, method) (( void (*) (List_1_t7410 *, KeyValuePair_2_t7230 , const MethodInfo*))List_1_Add_m48492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m48646(__this, ___newCount, method) (( void (*) (List_1_t7410 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48493_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m48647(__this, ___idx, ___count, method) (( void (*) (List_1_t7410 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48494_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m48648(__this, ___collection, method) (( void (*) (List_1_t7410 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48495_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m48649(__this, ___enumerable, method) (( void (*) (List_1_t7410 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48496_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m48650(__this, ___collection, method) (( void (*) (List_1_t7410 *, Object_t*, const MethodInfo*))List_1_AddRange_m48497_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AsReadOnly()
#define List_1_AsReadOnly_m48651(__this, method) (( ReadOnlyCollection_1_t7412 * (*) (List_1_t7410 *, const MethodInfo*))List_1_AsReadOnly_m48498_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Clear()
#define List_1_Clear_m48652(__this, method) (( void (*) (List_1_t7410 *, const MethodInfo*))List_1_Clear_m48499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Contains(T)
#define List_1_Contains_m48653(__this, ___item, method) (( bool (*) (List_1_t7410 *, KeyValuePair_2_t7230 , const MethodInfo*))List_1_Contains_m48500_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m48654(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7410 *, KeyValuePair_2U5BU5D_t7409*, int32_t, const MethodInfo*))List_1_CopyTo_m48501_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m48655(__this, ___match, method) (( KeyValuePair_2_t7230  (*) (List_1_t7410 *, Predicate_1_t7413 *, const MethodInfo*))List_1_Find_m48502_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m48656(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7413 *, const MethodInfo*))List_1_CheckMatch_m48503_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m48657(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7410 *, int32_t, int32_t, Predicate_1_t7413 *, const MethodInfo*))List_1_GetIndex_m48504_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetEnumerator()
#define List_1_GetEnumerator_m48658(__this, method) (( Enumerator_t7414  (*) (List_1_t7410 *, const MethodInfo*))List_1_GetEnumerator_m48505_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m48659(__this, ___index, ___count, method) (( List_1_t7410 * (*) (List_1_t7410 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48506_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::IndexOf(T)
#define List_1_IndexOf_m48660(__this, ___item, method) (( int32_t (*) (List_1_t7410 *, KeyValuePair_2_t7230 , const MethodInfo*))List_1_IndexOf_m48507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m48661(__this, ___start, ___delta, method) (( void (*) (List_1_t7410 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48508_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m48662(__this, ___index, method) (( void (*) (List_1_t7410 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48509_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Insert(System.Int32,T)
#define List_1_Insert_m48663(__this, ___index, ___item, method) (( void (*) (List_1_t7410 *, int32_t, KeyValuePair_2_t7230 , const MethodInfo*))List_1_Insert_m48510_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m48664(__this, ___collection, method) (( void (*) (List_1_t7410 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48511_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m48665(__this, ___index, ___collection, method) (( void (*) (List_1_t7410 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48512_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m48666(__this, ___index, ___collection, method) (( void (*) (List_1_t7410 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48513_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m48667(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7410 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48514_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Remove(T)
#define List_1_Remove_m48668(__this, ___item, method) (( bool (*) (List_1_t7410 *, KeyValuePair_2_t7230 , const MethodInfo*))List_1_Remove_m48515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m48669(__this, ___match, method) (( int32_t (*) (List_1_t7410 *, Predicate_1_t7413 *, const MethodInfo*))List_1_RemoveAll_m48516_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m48670(__this, ___index, method) (( void (*) (List_1_t7410 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48517_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m48671(__this, ___index, ___count, method) (( void (*) (List_1_t7410 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48518_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Reverse()
#define List_1_Reverse_m48672(__this, method) (( void (*) (List_1_t7410 *, const MethodInfo*))List_1_Reverse_m48519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort()
#define List_1_Sort_m48673(__this, method) (( void (*) (List_1_t7410 *, const MethodInfo*))List_1_Sort_m48520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m48674(__this, ___comparer, method) (( void (*) (List_1_t7410 *, Object_t*, const MethodInfo*))List_1_Sort_m48521_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m48675(__this, ___comparison, method) (( void (*) (List_1_t7410 *, Comparison_1_t7415 *, const MethodInfo*))List_1_Sort_m48522_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::ToArray()
#define List_1_ToArray_m48676(__this, method) (( KeyValuePair_2U5BU5D_t7409* (*) (List_1_t7410 *, const MethodInfo*))List_1_ToArray_m48523_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::TrimExcess()
#define List_1_TrimExcess_m48677(__this, method) (( void (*) (List_1_t7410 *, const MethodInfo*))List_1_TrimExcess_m48524_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Capacity()
#define List_1_get_Capacity_m48678(__this, method) (( int32_t (*) (List_1_t7410 *, const MethodInfo*))List_1_get_Capacity_m48525_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m48679(__this, ___value, method) (( void (*) (List_1_t7410 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48526_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Count()
#define List_1_get_Count_m48680(__this, method) (( int32_t (*) (List_1_t7410 *, const MethodInfo*))List_1_get_Count_m48527_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Item(System.Int32)
#define List_1_get_Item_m48681(__this, ___index, method) (( KeyValuePair_2_t7230  (*) (List_1_t7410 *, int32_t, const MethodInfo*))List_1_get_Item_m48528_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m48682(__this, ___index, ___value, method) (( void (*) (List_1_t7410 *, int32_t, KeyValuePair_2_t7230 , const MethodInfo*))List_1_set_Item_m48529_gshared)(__this, ___index, ___value, method)

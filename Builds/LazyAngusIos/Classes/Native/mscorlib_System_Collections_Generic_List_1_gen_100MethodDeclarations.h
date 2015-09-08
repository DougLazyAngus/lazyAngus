#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct List_1_t8076;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerable_1_t10006;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8075;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7793;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ICollection_1_t10007;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ReadOnlyCollection_1_t8078;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Predicate_1_t8079;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IComparer_1_t10008;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Comparison_1_t8081;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_83.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_99MethodDeclarations.h"
#define List_1__ctor_m54454(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1__ctor_m54301_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m54455(__this, ___collection, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1__ctor_m54302_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Int32)
#define List_1__ctor_m54456(__this, ___capacity, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1__ctor_m54303_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m54457(__this, ___data, ___size, method) (( void (*) (List_1_t8076 *, KeyValuePair_2U5BU5D_t8075*, int32_t, const MethodInfo*))List_1__ctor_m54304_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.cctor()
#define List_1__cctor_m54458(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54305_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54459(__this, method) (( Object_t* (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54306_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m54460(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8076 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54307_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54461(__this, method) (( Object_t * (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54308_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m54462(__this, ___item, method) (( int32_t (*) (List_1_t8076 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54309_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m54463(__this, ___item, method) (( bool (*) (List_1_t8076 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54310_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m54464(__this, ___item, method) (( int32_t (*) (List_1_t8076 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54311_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m54465(__this, ___index, ___item, method) (( void (*) (List_1_t8076 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54312_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m54466(__this, ___item, method) (( void (*) (List_1_t8076 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54313_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54467(__this, method) (( bool (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54314_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54468(__this, method) (( bool (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54315_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m54469(__this, method) (( Object_t * (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54316_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m54470(__this, method) (( bool (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54317_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m54471(__this, method) (( bool (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54318_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m54472(__this, ___index, method) (( Object_t * (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54319_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m54473(__this, ___index, ___value, method) (( void (*) (List_1_t8076 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54320_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Add(T)
#define List_1_Add_m54474(__this, ___item, method) (( void (*) (List_1_t8076 *, KeyValuePair_2_t7788 , const MethodInfo*))List_1_Add_m54321_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m54475(__this, ___newCount, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54322_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m54476(__this, ___idx, ___count, method) (( void (*) (List_1_t8076 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54323_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m54477(__this, ___collection, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54324_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m54478(__this, ___enumerable, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54325_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m54479(__this, ___collection, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_AddRange_m54326_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AsReadOnly()
#define List_1_AsReadOnly_m54480(__this, method) (( ReadOnlyCollection_1_t8078 * (*) (List_1_t8076 *, const MethodInfo*))List_1_AsReadOnly_m54327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Clear()
#define List_1_Clear_m54481(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1_Clear_m54328_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Contains(T)
#define List_1_Contains_m54482(__this, ___item, method) (( bool (*) (List_1_t8076 *, KeyValuePair_2_t7788 , const MethodInfo*))List_1_Contains_m54329_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m54483(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8076 *, KeyValuePair_2U5BU5D_t8075*, int32_t, const MethodInfo*))List_1_CopyTo_m54330_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m54484(__this, ___match, method) (( KeyValuePair_2_t7788  (*) (List_1_t8076 *, Predicate_1_t8079 *, const MethodInfo*))List_1_Find_m54331_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m54485(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8079 *, const MethodInfo*))List_1_CheckMatch_m54332_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m54486(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8076 *, int32_t, int32_t, Predicate_1_t8079 *, const MethodInfo*))List_1_GetIndex_m54333_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetEnumerator()
#define List_1_GetEnumerator_m54487(__this, method) (( Enumerator_t8080  (*) (List_1_t8076 *, const MethodInfo*))List_1_GetEnumerator_m54334_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m54488(__this, ___index, ___count, method) (( List_1_t8076 * (*) (List_1_t8076 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54335_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::IndexOf(T)
#define List_1_IndexOf_m54489(__this, ___item, method) (( int32_t (*) (List_1_t8076 *, KeyValuePair_2_t7788 , const MethodInfo*))List_1_IndexOf_m54336_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m54490(__this, ___start, ___delta, method) (( void (*) (List_1_t8076 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54337_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m54491(__this, ___index, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54338_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Insert(System.Int32,T)
#define List_1_Insert_m54492(__this, ___index, ___item, method) (( void (*) (List_1_t8076 *, int32_t, KeyValuePair_2_t7788 , const MethodInfo*))List_1_Insert_m54339_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m54493(__this, ___collection, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54340_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m54494(__this, ___index, ___collection, method) (( void (*) (List_1_t8076 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54341_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m54495(__this, ___index, ___collection, method) (( void (*) (List_1_t8076 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54342_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m54496(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8076 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54343_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Remove(T)
#define List_1_Remove_m54497(__this, ___item, method) (( bool (*) (List_1_t8076 *, KeyValuePair_2_t7788 , const MethodInfo*))List_1_Remove_m54344_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m54498(__this, ___match, method) (( int32_t (*) (List_1_t8076 *, Predicate_1_t8079 *, const MethodInfo*))List_1_RemoveAll_m54345_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m54499(__this, ___index, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m54500(__this, ___index, ___count, method) (( void (*) (List_1_t8076 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54347_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Reverse()
#define List_1_Reverse_m54501(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1_Reverse_m54348_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort()
#define List_1_Sort_m54502(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1_Sort_m54349_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m54503(__this, ___comparer, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_Sort_m54350_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m54504(__this, ___comparison, method) (( void (*) (List_1_t8076 *, Comparison_1_t8081 *, const MethodInfo*))List_1_Sort_m54351_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::ToArray()
#define List_1_ToArray_m54505(__this, method) (( KeyValuePair_2U5BU5D_t8075* (*) (List_1_t8076 *, const MethodInfo*))List_1_ToArray_m54352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::TrimExcess()
#define List_1_TrimExcess_m54506(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1_TrimExcess_m54353_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Capacity()
#define List_1_get_Capacity_m54507(__this, method) (( int32_t (*) (List_1_t8076 *, const MethodInfo*))List_1_get_Capacity_m54354_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m54508(__this, ___value, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54355_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Count()
#define List_1_get_Count_m54509(__this, method) (( int32_t (*) (List_1_t8076 *, const MethodInfo*))List_1_get_Count_m54356_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Item(System.Int32)
#define List_1_get_Item_m54510(__this, ___index, method) (( KeyValuePair_2_t7788  (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_get_Item_m54357_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m54511(__this, ___index, ___value, method) (( void (*) (List_1_t8076 *, int32_t, KeyValuePair_2_t7788 , const MethodInfo*))List_1_set_Item_m54358_gshared)(__this, ___index, ___value, method)

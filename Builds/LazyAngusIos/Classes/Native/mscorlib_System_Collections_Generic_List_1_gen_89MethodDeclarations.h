#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct List_1_t7292;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerable_1_t9259;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7291;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7117;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ICollection_1_t9260;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ReadOnlyCollection_1_t7294;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Predicate_1_t7295;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IComparer_1_t9261;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t7297;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_72.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_88MethodDeclarations.h"
#define List_1__ctor_m47425(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1__ctor_m47272_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47426(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1__ctor_m47273_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Int32)
#define List_1__ctor_m47427(__this, ___capacity, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1__ctor_m47274_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m47428(__this, ___data, ___size, method) (( void (*) (List_1_t7292 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))List_1__ctor_m47275_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.cctor()
#define List_1__cctor_m47429(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47276_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47430(__this, method) (( Object_t* (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47277_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47431(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7292 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47278_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47432(__this, method) (( Object_t * (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47279_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47433(__this, ___item, method) (( int32_t (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47280_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47434(__this, ___item, method) (( bool (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47281_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47435(__this, ___item, method) (( int32_t (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47282_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47436(__this, ___index, ___item, method) (( void (*) (List_1_t7292 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47283_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47437(__this, ___item, method) (( void (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47284_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47438(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47285_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47439(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47286_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47440(__this, method) (( Object_t * (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47441(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47442(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47289_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47443(__this, ___index, method) (( Object_t * (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47290_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47444(__this, ___index, ___value, method) (( void (*) (List_1_t7292 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47291_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Add(T)
#define List_1_Add_m47445(__this, ___item, method) (( void (*) (List_1_t7292 *, KeyValuePair_2_t7112 , const MethodInfo*))List_1_Add_m47292_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47446(__this, ___newCount, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47293_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47447(__this, ___idx, ___count, method) (( void (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47294_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47448(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47295_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47449(__this, ___enumerable, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47296_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47450(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_AddRange_m47297_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AsReadOnly()
#define List_1_AsReadOnly_m47451(__this, method) (( ReadOnlyCollection_1_t7294 * (*) (List_1_t7292 *, const MethodInfo*))List_1_AsReadOnly_m47298_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Clear()
#define List_1_Clear_m47452(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_Clear_m47299_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Contains(T)
#define List_1_Contains_m47453(__this, ___item, method) (( bool (*) (List_1_t7292 *, KeyValuePair_2_t7112 , const MethodInfo*))List_1_Contains_m47300_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47454(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7292 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))List_1_CopyTo_m47301_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m47455(__this, ___match, method) (( KeyValuePair_2_t7112  (*) (List_1_t7292 *, Predicate_1_t7295 *, const MethodInfo*))List_1_Find_m47302_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47456(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7295 *, const MethodInfo*))List_1_CheckMatch_m47303_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47457(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7292 *, int32_t, int32_t, Predicate_1_t7295 *, const MethodInfo*))List_1_GetIndex_m47304_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetEnumerator()
#define List_1_GetEnumerator_m47458(__this, method) (( Enumerator_t7296  (*) (List_1_t7292 *, const MethodInfo*))List_1_GetEnumerator_m47305_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47459(__this, ___index, ___count, method) (( List_1_t7292 * (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47306_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::IndexOf(T)
#define List_1_IndexOf_m47460(__this, ___item, method) (( int32_t (*) (List_1_t7292 *, KeyValuePair_2_t7112 , const MethodInfo*))List_1_IndexOf_m47307_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47461(__this, ___start, ___delta, method) (( void (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47308_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47462(__this, ___index, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Insert(System.Int32,T)
#define List_1_Insert_m47463(__this, ___index, ___item, method) (( void (*) (List_1_t7292 *, int32_t, KeyValuePair_2_t7112 , const MethodInfo*))List_1_Insert_m47310_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47464(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47465(__this, ___index, ___collection, method) (( void (*) (List_1_t7292 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47466(__this, ___index, ___collection, method) (( void (*) (List_1_t7292 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47467(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7292 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Remove(T)
#define List_1_Remove_m47468(__this, ___item, method) (( bool (*) (List_1_t7292 *, KeyValuePair_2_t7112 , const MethodInfo*))List_1_Remove_m47315_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47469(__this, ___match, method) (( int32_t (*) (List_1_t7292 *, Predicate_1_t7295 *, const MethodInfo*))List_1_RemoveAll_m47316_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47470(__this, ___index, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47317_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47471(__this, ___index, ___count, method) (( void (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47318_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Reverse()
#define List_1_Reverse_m47472(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_Reverse_m47319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort()
#define List_1_Sort_m47473(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_Sort_m47320_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m47474(__this, ___comparer, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_Sort_m47321_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47475(__this, ___comparison, method) (( void (*) (List_1_t7292 *, Comparison_1_t7297 *, const MethodInfo*))List_1_Sort_m47322_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::ToArray()
#define List_1_ToArray_m47476(__this, method) (( KeyValuePair_2U5BU5D_t7291* (*) (List_1_t7292 *, const MethodInfo*))List_1_ToArray_m47323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::TrimExcess()
#define List_1_TrimExcess_m47477(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_TrimExcess_m47324_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Capacity()
#define List_1_get_Capacity_m47478(__this, method) (( int32_t (*) (List_1_t7292 *, const MethodInfo*))List_1_get_Capacity_m47325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47479(__this, ___value, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47326_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Count()
#define List_1_get_Count_m47480(__this, method) (( int32_t (*) (List_1_t7292 *, const MethodInfo*))List_1_get_Count_m47327_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Item(System.Int32)
#define List_1_get_Item_m47481(__this, ___index, method) (( KeyValuePair_2_t7112  (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_get_Item_m47328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m47482(__this, ___index, ___value, method) (( void (*) (List_1_t7292 *, int32_t, KeyValuePair_2_t7112 , const MethodInfo*))List_1_set_Item_m47329_gshared)(__this, ___index, ___value, method)

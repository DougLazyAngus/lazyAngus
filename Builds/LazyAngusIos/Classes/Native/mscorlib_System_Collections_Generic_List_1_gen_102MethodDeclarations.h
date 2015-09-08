#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct List_1_t8146;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerable_1_t10016;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7805;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ICollection_1_t10017;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ReadOnlyCollection_1_t8148;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t8149;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IComparer_1_t10018;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t8151;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_85.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_101MethodDeclarations.h"
#define List_1__ctor_m55243(__this, method) (( void (*) (List_1_t8146 *, const MethodInfo*))List_1__ctor_m55090_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m55244(__this, ___collection, method) (( void (*) (List_1_t8146 *, Object_t*, const MethodInfo*))List_1__ctor_m55091_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Int32)
#define List_1__ctor_m55245(__this, ___capacity, method) (( void (*) (List_1_t8146 *, int32_t, const MethodInfo*))List_1__ctor_m55092_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m55246(__this, ___data, ___size, method) (( void (*) (List_1_t8146 *, KeyValuePair_2U5BU5D_t8145*, int32_t, const MethodInfo*))List_1__ctor_m55093_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.cctor()
#define List_1__cctor_m55247(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55094_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55248(__this, method) (( Object_t* (*) (List_1_t8146 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55095_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m55249(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8146 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55096_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55250(__this, method) (( Object_t * (*) (List_1_t8146 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55097_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m55251(__this, ___item, method) (( int32_t (*) (List_1_t8146 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55098_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m55252(__this, ___item, method) (( bool (*) (List_1_t8146 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55099_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m55253(__this, ___item, method) (( int32_t (*) (List_1_t8146 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55100_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m55254(__this, ___index, ___item, method) (( void (*) (List_1_t8146 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55101_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m55255(__this, ___item, method) (( void (*) (List_1_t8146 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55102_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55256(__this, method) (( bool (*) (List_1_t8146 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55257(__this, method) (( bool (*) (List_1_t8146 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m55258(__this, method) (( Object_t * (*) (List_1_t8146 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m55259(__this, method) (( bool (*) (List_1_t8146 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m55260(__this, method) (( bool (*) (List_1_t8146 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m55261(__this, ___index, method) (( Object_t * (*) (List_1_t8146 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m55262(__this, ___index, ___value, method) (( void (*) (List_1_t8146 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55109_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
#define List_1_Add_m55263(__this, ___item, method) (( void (*) (List_1_t8146 *, KeyValuePair_2_t6097 , const MethodInfo*))List_1_Add_m55110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m55264(__this, ___newCount, method) (( void (*) (List_1_t8146 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55111_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m55265(__this, ___idx, ___count, method) (( void (*) (List_1_t8146 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55112_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m55266(__this, ___collection, method) (( void (*) (List_1_t8146 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55113_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m55267(__this, ___enumerable, method) (( void (*) (List_1_t8146 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55114_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m55268(__this, ___collection, method) (( void (*) (List_1_t8146 *, Object_t*, const MethodInfo*))List_1_AddRange_m55115_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AsReadOnly()
#define List_1_AsReadOnly_m55269(__this, method) (( ReadOnlyCollection_1_t8148 * (*) (List_1_t8146 *, const MethodInfo*))List_1_AsReadOnly_m55116_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
#define List_1_Clear_m55270(__this, method) (( void (*) (List_1_t8146 *, const MethodInfo*))List_1_Clear_m55117_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
#define List_1_Contains_m55271(__this, ___item, method) (( bool (*) (List_1_t8146 *, KeyValuePair_2_t6097 , const MethodInfo*))List_1_Contains_m55118_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m55272(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8146 *, KeyValuePair_2U5BU5D_t8145*, int32_t, const MethodInfo*))List_1_CopyTo_m55119_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m55273(__this, ___match, method) (( KeyValuePair_2_t6097  (*) (List_1_t8146 *, Predicate_1_t8149 *, const MethodInfo*))List_1_Find_m55120_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m55274(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8149 *, const MethodInfo*))List_1_CheckMatch_m55121_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m55275(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8146 *, int32_t, int32_t, Predicate_1_t8149 *, const MethodInfo*))List_1_GetIndex_m55122_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m55276(__this, method) (( Enumerator_t8150  (*) (List_1_t8146 *, const MethodInfo*))List_1_GetEnumerator_m55123_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m55277(__this, ___index, ___count, method) (( List_1_t8146 * (*) (List_1_t8146 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55124_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
#define List_1_IndexOf_m55278(__this, ___item, method) (( int32_t (*) (List_1_t8146 *, KeyValuePair_2_t6097 , const MethodInfo*))List_1_IndexOf_m55125_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m55279(__this, ___start, ___delta, method) (( void (*) (List_1_t8146 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55126_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m55280(__this, ___index, method) (( void (*) (List_1_t8146 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
#define List_1_Insert_m55281(__this, ___index, ___item, method) (( void (*) (List_1_t8146 *, int32_t, KeyValuePair_2_t6097 , const MethodInfo*))List_1_Insert_m55128_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m55282(__this, ___collection, method) (( void (*) (List_1_t8146 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55129_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m55283(__this, ___index, ___collection, method) (( void (*) (List_1_t8146 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55130_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m55284(__this, ___index, ___collection, method) (( void (*) (List_1_t8146 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55131_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m55285(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8146 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55132_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#define List_1_Remove_m55286(__this, ___item, method) (( bool (*) (List_1_t8146 *, KeyValuePair_2_t6097 , const MethodInfo*))List_1_Remove_m55133_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m55287(__this, ___match, method) (( int32_t (*) (List_1_t8146 *, Predicate_1_t8149 *, const MethodInfo*))List_1_RemoveAll_m55134_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m55288(__this, ___index, method) (( void (*) (List_1_t8146 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55135_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m55289(__this, ___index, ___count, method) (( void (*) (List_1_t8146 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55136_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Reverse()
#define List_1_Reverse_m55290(__this, method) (( void (*) (List_1_t8146 *, const MethodInfo*))List_1_Reverse_m55137_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort()
#define List_1_Sort_m55291(__this, method) (( void (*) (List_1_t8146 *, const MethodInfo*))List_1_Sort_m55138_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m55292(__this, ___comparer, method) (( void (*) (List_1_t8146 *, Object_t*, const MethodInfo*))List_1_Sort_m55139_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m55293(__this, ___comparison, method) (( void (*) (List_1_t8146 *, Comparison_1_t8151 *, const MethodInfo*))List_1_Sort_m55140_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::ToArray()
#define List_1_ToArray_m55294(__this, method) (( KeyValuePair_2U5BU5D_t8145* (*) (List_1_t8146 *, const MethodInfo*))List_1_ToArray_m55141_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::TrimExcess()
#define List_1_TrimExcess_m55295(__this, method) (( void (*) (List_1_t8146 *, const MethodInfo*))List_1_TrimExcess_m55142_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Capacity()
#define List_1_get_Capacity_m55296(__this, method) (( int32_t (*) (List_1_t8146 *, const MethodInfo*))List_1_get_Capacity_m55143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m55297(__this, ___value, method) (( void (*) (List_1_t8146 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55144_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
#define List_1_get_Count_m55298(__this, method) (( int32_t (*) (List_1_t8146 *, const MethodInfo*))List_1_get_Count_m55145_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
#define List_1_get_Item_m55299(__this, ___index, method) (( KeyValuePair_2_t6097  (*) (List_1_t8146 *, int32_t, const MethodInfo*))List_1_get_Item_m55146_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m55300(__this, ___index, ___value, method) (( void (*) (List_1_t8146 *, int32_t, KeyValuePair_2_t6097 , const MethodInfo*))List_1_set_Item_m55147_gshared)(__this, ___index, ___value, method)

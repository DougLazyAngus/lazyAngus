#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct List_1_t7226;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerable_1_t9265;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7225;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7117;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ICollection_1_t9266;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ReadOnlyCollection_1_t7228;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7229;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IComparer_1_t9267;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7231;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_70.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_86MethodDeclarations.h"
#define List_1__ctor_m46426(__this, method) (( void (*) (List_1_t7226 *, const MethodInfo*))List_1__ctor_m46273_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m46427(__this, ___collection, method) (( void (*) (List_1_t7226 *, Object_t*, const MethodInfo*))List_1__ctor_m46274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Int32)
#define List_1__ctor_m46428(__this, ___capacity, method) (( void (*) (List_1_t7226 *, int32_t, const MethodInfo*))List_1__ctor_m46275_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m46429(__this, ___data, ___size, method) (( void (*) (List_1_t7226 *, KeyValuePair_2U5BU5D_t7225*, int32_t, const MethodInfo*))List_1__ctor_m46276_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.cctor()
#define List_1__cctor_m46430(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46277_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46431(__this, method) (( Object_t* (*) (List_1_t7226 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m46432(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7226 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46279_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46433(__this, method) (( Object_t * (*) (List_1_t7226 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46280_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m46434(__this, ___item, method) (( int32_t (*) (List_1_t7226 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46281_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m46435(__this, ___item, method) (( bool (*) (List_1_t7226 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46282_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m46436(__this, ___item, method) (( int32_t (*) (List_1_t7226 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46283_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m46437(__this, ___index, ___item, method) (( void (*) (List_1_t7226 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46284_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m46438(__this, ___item, method) (( void (*) (List_1_t7226 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46285_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46439(__this, method) (( bool (*) (List_1_t7226 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46286_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46440(__this, method) (( bool (*) (List_1_t7226 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46287_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m46441(__this, method) (( Object_t * (*) (List_1_t7226 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m46442(__this, method) (( bool (*) (List_1_t7226 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46289_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m46443(__this, method) (( bool (*) (List_1_t7226 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46290_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m46444(__this, ___index, method) (( Object_t * (*) (List_1_t7226 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46291_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m46445(__this, ___index, ___value, method) (( void (*) (List_1_t7226 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46292_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Add(T)
#define List_1_Add_m46446(__this, ___item, method) (( void (*) (List_1_t7226 *, KeyValuePair_2_t7112 , const MethodInfo*))List_1_Add_m46293_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m46447(__this, ___newCount, method) (( void (*) (List_1_t7226 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46294_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m46448(__this, ___idx, ___count, method) (( void (*) (List_1_t7226 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46295_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m46449(__this, ___collection, method) (( void (*) (List_1_t7226 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46296_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m46450(__this, ___enumerable, method) (( void (*) (List_1_t7226 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46297_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m46451(__this, ___collection, method) (( void (*) (List_1_t7226 *, Object_t*, const MethodInfo*))List_1_AddRange_m46298_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AsReadOnly()
#define List_1_AsReadOnly_m46452(__this, method) (( ReadOnlyCollection_1_t7228 * (*) (List_1_t7226 *, const MethodInfo*))List_1_AsReadOnly_m46299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Clear()
#define List_1_Clear_m46453(__this, method) (( void (*) (List_1_t7226 *, const MethodInfo*))List_1_Clear_m46300_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Contains(T)
#define List_1_Contains_m46454(__this, ___item, method) (( bool (*) (List_1_t7226 *, KeyValuePair_2_t7112 , const MethodInfo*))List_1_Contains_m46301_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m46455(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7226 *, KeyValuePair_2U5BU5D_t7225*, int32_t, const MethodInfo*))List_1_CopyTo_m46302_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m46456(__this, ___match, method) (( KeyValuePair_2_t7112  (*) (List_1_t7226 *, Predicate_1_t7229 *, const MethodInfo*))List_1_Find_m46303_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m46457(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7229 *, const MethodInfo*))List_1_CheckMatch_m46304_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m46458(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7226 *, int32_t, int32_t, Predicate_1_t7229 *, const MethodInfo*))List_1_GetIndex_m46305_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m46459(__this, method) (( Enumerator_t7230  (*) (List_1_t7226 *, const MethodInfo*))List_1_GetEnumerator_m46306_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m46460(__this, ___index, ___count, method) (( List_1_t7226 * (*) (List_1_t7226 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46307_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::IndexOf(T)
#define List_1_IndexOf_m46461(__this, ___item, method) (( int32_t (*) (List_1_t7226 *, KeyValuePair_2_t7112 , const MethodInfo*))List_1_IndexOf_m46308_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m46462(__this, ___start, ___delta, method) (( void (*) (List_1_t7226 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m46463(__this, ___index, method) (( void (*) (List_1_t7226 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Insert(System.Int32,T)
#define List_1_Insert_m46464(__this, ___index, ___item, method) (( void (*) (List_1_t7226 *, int32_t, KeyValuePair_2_t7112 , const MethodInfo*))List_1_Insert_m46311_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m46465(__this, ___collection, method) (( void (*) (List_1_t7226 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46312_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m46466(__this, ___index, ___collection, method) (( void (*) (List_1_t7226 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m46467(__this, ___index, ___collection, method) (( void (*) (List_1_t7226 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46314_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m46468(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7226 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46315_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Remove(T)
#define List_1_Remove_m46469(__this, ___item, method) (( bool (*) (List_1_t7226 *, KeyValuePair_2_t7112 , const MethodInfo*))List_1_Remove_m46316_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m46470(__this, ___match, method) (( int32_t (*) (List_1_t7226 *, Predicate_1_t7229 *, const MethodInfo*))List_1_RemoveAll_m46317_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m46471(__this, ___index, method) (( void (*) (List_1_t7226 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46318_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m46472(__this, ___index, ___count, method) (( void (*) (List_1_t7226 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46319_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Reverse()
#define List_1_Reverse_m46473(__this, method) (( void (*) (List_1_t7226 *, const MethodInfo*))List_1_Reverse_m46320_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort()
#define List_1_Sort_m46474(__this, method) (( void (*) (List_1_t7226 *, const MethodInfo*))List_1_Sort_m46321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m46475(__this, ___comparer, method) (( void (*) (List_1_t7226 *, Object_t*, const MethodInfo*))List_1_Sort_m46322_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m46476(__this, ___comparison, method) (( void (*) (List_1_t7226 *, Comparison_1_t7231 *, const MethodInfo*))List_1_Sort_m46323_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::ToArray()
#define List_1_ToArray_m46477(__this, method) (( KeyValuePair_2U5BU5D_t7225* (*) (List_1_t7226 *, const MethodInfo*))List_1_ToArray_m46324_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::TrimExcess()
#define List_1_TrimExcess_m46478(__this, method) (( void (*) (List_1_t7226 *, const MethodInfo*))List_1_TrimExcess_m46325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Capacity()
#define List_1_get_Capacity_m46479(__this, method) (( int32_t (*) (List_1_t7226 *, const MethodInfo*))List_1_get_Capacity_m46326_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m46480(__this, ___value, method) (( void (*) (List_1_t7226 *, int32_t, const MethodInfo*))List_1_set_Capacity_m46327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Count()
#define List_1_get_Count_m46481(__this, method) (( int32_t (*) (List_1_t7226 *, const MethodInfo*))List_1_get_Count_m46328_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Item(System.Int32)
#define List_1_get_Item_m46482(__this, ___index, method) (( KeyValuePair_2_t7112  (*) (List_1_t7226 *, int32_t, const MethodInfo*))List_1_get_Item_m46329_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m46483(__this, ___index, ___value, method) (( void (*) (List_1_t7226 *, int32_t, KeyValuePair_2_t7112 , const MethodInfo*))List_1_set_Item_m46330_gshared)(__this, ___index, ___value, method)

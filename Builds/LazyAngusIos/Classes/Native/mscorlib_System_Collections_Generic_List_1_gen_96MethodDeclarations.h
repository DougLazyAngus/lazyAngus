#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct List_1_t7958;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerable_1_t10008;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7957;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7783;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ICollection_1_t10009;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ReadOnlyCollection_1_t7960;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Predicate_1_t7961;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IComparer_1_t10010;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t7963;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_79.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_95MethodDeclarations.h"
#define List_1__ctor_m52969(__this, method) (( void (*) (List_1_t7958 *, const MethodInfo*))List_1__ctor_m52816_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52970(__this, ___collection, method) (( void (*) (List_1_t7958 *, Object_t*, const MethodInfo*))List_1__ctor_m52817_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Int32)
#define List_1__ctor_m52971(__this, ___capacity, method) (( void (*) (List_1_t7958 *, int32_t, const MethodInfo*))List_1__ctor_m52818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52972(__this, ___data, ___size, method) (( void (*) (List_1_t7958 *, KeyValuePair_2U5BU5D_t7957*, int32_t, const MethodInfo*))List_1__ctor_m52819_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.cctor()
#define List_1__cctor_m52973(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52974(__this, method) (( Object_t* (*) (List_1_t7958 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52975(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7958 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52822_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52976(__this, method) (( Object_t * (*) (List_1_t7958 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52823_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52977(__this, ___item, method) (( int32_t (*) (List_1_t7958 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52824_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52978(__this, ___item, method) (( bool (*) (List_1_t7958 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52825_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52979(__this, ___item, method) (( int32_t (*) (List_1_t7958 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52826_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52980(__this, ___index, ___item, method) (( void (*) (List_1_t7958 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52827_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52981(__this, ___item, method) (( void (*) (List_1_t7958 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52828_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52982(__this, method) (( bool (*) (List_1_t7958 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52829_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52983(__this, method) (( bool (*) (List_1_t7958 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52830_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52984(__this, method) (( Object_t * (*) (List_1_t7958 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52985(__this, method) (( bool (*) (List_1_t7958 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52832_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52986(__this, method) (( bool (*) (List_1_t7958 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52833_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52987(__this, ___index, method) (( Object_t * (*) (List_1_t7958 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52834_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52988(__this, ___index, ___value, method) (( void (*) (List_1_t7958 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52835_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Add(T)
#define List_1_Add_m52989(__this, ___item, method) (( void (*) (List_1_t7958 *, KeyValuePair_2_t7778 , const MethodInfo*))List_1_Add_m52836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52990(__this, ___newCount, method) (( void (*) (List_1_t7958 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52837_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52991(__this, ___idx, ___count, method) (( void (*) (List_1_t7958 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52838_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52992(__this, ___collection, method) (( void (*) (List_1_t7958 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52839_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52993(__this, ___enumerable, method) (( void (*) (List_1_t7958 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52840_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52994(__this, ___collection, method) (( void (*) (List_1_t7958 *, Object_t*, const MethodInfo*))List_1_AddRange_m52841_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AsReadOnly()
#define List_1_AsReadOnly_m52995(__this, method) (( ReadOnlyCollection_1_t7960 * (*) (List_1_t7958 *, const MethodInfo*))List_1_AsReadOnly_m52842_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Clear()
#define List_1_Clear_m52996(__this, method) (( void (*) (List_1_t7958 *, const MethodInfo*))List_1_Clear_m52843_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Contains(T)
#define List_1_Contains_m52997(__this, ___item, method) (( bool (*) (List_1_t7958 *, KeyValuePair_2_t7778 , const MethodInfo*))List_1_Contains_m52844_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52998(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7958 *, KeyValuePair_2U5BU5D_t7957*, int32_t, const MethodInfo*))List_1_CopyTo_m52845_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52999(__this, ___match, method) (( KeyValuePair_2_t7778  (*) (List_1_t7958 *, Predicate_1_t7961 *, const MethodInfo*))List_1_Find_m52846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m53000(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7961 *, const MethodInfo*))List_1_CheckMatch_m52847_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m53001(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7958 *, int32_t, int32_t, Predicate_1_t7961 *, const MethodInfo*))List_1_GetIndex_m52848_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetEnumerator()
#define List_1_GetEnumerator_m53002(__this, method) (( Enumerator_t7962  (*) (List_1_t7958 *, const MethodInfo*))List_1_GetEnumerator_m52849_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m53003(__this, ___index, ___count, method) (( List_1_t7958 * (*) (List_1_t7958 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52850_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::IndexOf(T)
#define List_1_IndexOf_m53004(__this, ___item, method) (( int32_t (*) (List_1_t7958 *, KeyValuePair_2_t7778 , const MethodInfo*))List_1_IndexOf_m52851_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m53005(__this, ___start, ___delta, method) (( void (*) (List_1_t7958 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52852_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m53006(__this, ___index, method) (( void (*) (List_1_t7958 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52853_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Insert(System.Int32,T)
#define List_1_Insert_m53007(__this, ___index, ___item, method) (( void (*) (List_1_t7958 *, int32_t, KeyValuePair_2_t7778 , const MethodInfo*))List_1_Insert_m52854_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m53008(__this, ___collection, method) (( void (*) (List_1_t7958 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52855_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m53009(__this, ___index, ___collection, method) (( void (*) (List_1_t7958 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52856_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m53010(__this, ___index, ___collection, method) (( void (*) (List_1_t7958 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52857_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m53011(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7958 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52858_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Remove(T)
#define List_1_Remove_m53012(__this, ___item, method) (( bool (*) (List_1_t7958 *, KeyValuePair_2_t7778 , const MethodInfo*))List_1_Remove_m52859_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m53013(__this, ___match, method) (( int32_t (*) (List_1_t7958 *, Predicate_1_t7961 *, const MethodInfo*))List_1_RemoveAll_m52860_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m53014(__this, ___index, method) (( void (*) (List_1_t7958 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52861_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m53015(__this, ___index, ___count, method) (( void (*) (List_1_t7958 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52862_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Reverse()
#define List_1_Reverse_m53016(__this, method) (( void (*) (List_1_t7958 *, const MethodInfo*))List_1_Reverse_m52863_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort()
#define List_1_Sort_m53017(__this, method) (( void (*) (List_1_t7958 *, const MethodInfo*))List_1_Sort_m52864_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m53018(__this, ___comparer, method) (( void (*) (List_1_t7958 *, Object_t*, const MethodInfo*))List_1_Sort_m52865_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m53019(__this, ___comparison, method) (( void (*) (List_1_t7958 *, Comparison_1_t7963 *, const MethodInfo*))List_1_Sort_m52866_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::ToArray()
#define List_1_ToArray_m53020(__this, method) (( KeyValuePair_2U5BU5D_t7957* (*) (List_1_t7958 *, const MethodInfo*))List_1_ToArray_m52867_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::TrimExcess()
#define List_1_TrimExcess_m53021(__this, method) (( void (*) (List_1_t7958 *, const MethodInfo*))List_1_TrimExcess_m52868_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Capacity()
#define List_1_get_Capacity_m53022(__this, method) (( int32_t (*) (List_1_t7958 *, const MethodInfo*))List_1_get_Capacity_m52869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m53023(__this, ___value, method) (( void (*) (List_1_t7958 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52870_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Count()
#define List_1_get_Count_m53024(__this, method) (( int32_t (*) (List_1_t7958 *, const MethodInfo*))List_1_get_Count_m52871_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Item(System.Int32)
#define List_1_get_Item_m53025(__this, ___index, method) (( KeyValuePair_2_t7778  (*) (List_1_t7958 *, int32_t, const MethodInfo*))List_1_get_Item_m52872_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m53026(__this, ___index, ___value, method) (( void (*) (List_1_t7958 *, int32_t, KeyValuePair_2_t7778 , const MethodInfo*))List_1_set_Item_m52873_gshared)(__this, ___index, ___value, method)

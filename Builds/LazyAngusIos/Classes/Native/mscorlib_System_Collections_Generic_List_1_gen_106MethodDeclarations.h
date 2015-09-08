#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct List_1_t8271;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerable_1_t10021;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8270;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7822;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ICollection_1_t10022;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct ReadOnlyCollection_1_t8273;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t8274;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IComparer_1_t10023;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Comparison_1_t8276;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_89.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_105MethodDeclarations.h"
#define List_1__ctor_m56785(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1__ctor_m56632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m56786(__this, ___collection, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1__ctor_m56633_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Int32)
#define List_1__ctor_m56787(__this, ___capacity, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1__ctor_m56634_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m56788(__this, ___data, ___size, method) (( void (*) (List_1_t8271 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))List_1__ctor_m56635_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.cctor()
#define List_1__cctor_m56789(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m56636_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56790(__this, method) (( Object_t* (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m56791(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8271 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m56638_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m56792(__this, method) (( Object_t * (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m56639_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m56793(__this, ___item, method) (( int32_t (*) (List_1_t8271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m56640_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m56794(__this, ___item, method) (( bool (*) (List_1_t8271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m56641_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m56795(__this, ___item, method) (( int32_t (*) (List_1_t8271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m56642_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m56796(__this, ___index, ___item, method) (( void (*) (List_1_t8271 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m56643_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m56797(__this, ___item, method) (( void (*) (List_1_t8271 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m56644_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56798(__this, method) (( bool (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56645_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m56799(__this, method) (( bool (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m56646_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m56800(__this, method) (( Object_t * (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m56647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m56801(__this, method) (( bool (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m56648_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m56802(__this, method) (( bool (*) (List_1_t8271 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m56649_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m56803(__this, ___index, method) (( Object_t * (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m56650_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m56804(__this, ___index, ___value, method) (( void (*) (List_1_t8271 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m56651_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
#define List_1_Add_m56805(__this, ___item, method) (( void (*) (List_1_t8271 *, KeyValuePair_2_t7817 , const MethodInfo*))List_1_Add_m56652_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m56806(__this, ___newCount, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m56653_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m56807(__this, ___idx, ___count, method) (( void (*) (List_1_t8271 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m56654_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m56808(__this, ___collection, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_AddCollection_m56655_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m56809(__this, ___enumerable, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m56656_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m56810(__this, ___collection, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_AddRange_m56657_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::AsReadOnly()
#define List_1_AsReadOnly_m56811(__this, method) (( ReadOnlyCollection_1_t8273 * (*) (List_1_t8271 *, const MethodInfo*))List_1_AsReadOnly_m56658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
#define List_1_Clear_m56812(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1_Clear_m56659_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
#define List_1_Contains_m56813(__this, ___item, method) (( bool (*) (List_1_t8271 *, KeyValuePair_2_t7817 , const MethodInfo*))List_1_Contains_m56660_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m56814(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8271 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))List_1_CopyTo_m56661_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m56815(__this, ___match, method) (( KeyValuePair_2_t7817  (*) (List_1_t8271 *, Predicate_1_t8274 *, const MethodInfo*))List_1_Find_m56662_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m56816(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8274 *, const MethodInfo*))List_1_CheckMatch_m56663_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m56817(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8271 *, int32_t, int32_t, Predicate_1_t8274 *, const MethodInfo*))List_1_GetIndex_m56664_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#define List_1_GetEnumerator_m56818(__this, method) (( Enumerator_t8275  (*) (List_1_t8271 *, const MethodInfo*))List_1_GetEnumerator_m56665_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m56819(__this, ___index, ___count, method) (( List_1_t8271 * (*) (List_1_t8271 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m56666_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
#define List_1_IndexOf_m56820(__this, ___item, method) (( int32_t (*) (List_1_t8271 *, KeyValuePair_2_t7817 , const MethodInfo*))List_1_IndexOf_m56667_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m56821(__this, ___start, ___delta, method) (( void (*) (List_1_t8271 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m56668_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m56822(__this, ___index, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_CheckIndex_m56669_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
#define List_1_Insert_m56823(__this, ___index, ___item, method) (( void (*) (List_1_t8271 *, int32_t, KeyValuePair_2_t7817 , const MethodInfo*))List_1_Insert_m56670_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m56824(__this, ___collection, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m56671_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m56825(__this, ___index, ___collection, method) (( void (*) (List_1_t8271 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m56672_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m56826(__this, ___index, ___collection, method) (( void (*) (List_1_t8271 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m56673_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m56827(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8271 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m56674_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#define List_1_Remove_m56828(__this, ___item, method) (( bool (*) (List_1_t8271 *, KeyValuePair_2_t7817 , const MethodInfo*))List_1_Remove_m56675_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m56829(__this, ___match, method) (( int32_t (*) (List_1_t8271 *, Predicate_1_t8274 *, const MethodInfo*))List_1_RemoveAll_m56676_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m56830(__this, ___index, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_RemoveAt_m56677_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m56831(__this, ___index, ___count, method) (( void (*) (List_1_t8271 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m56678_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Reverse()
#define List_1_Reverse_m56832(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1_Reverse_m56679_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort()
#define List_1_Sort_m56833(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1_Sort_m56680_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m56834(__this, ___comparer, method) (( void (*) (List_1_t8271 *, Object_t*, const MethodInfo*))List_1_Sort_m56681_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m56835(__this, ___comparison, method) (( void (*) (List_1_t8271 *, Comparison_1_t8276 *, const MethodInfo*))List_1_Sort_m56682_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::ToArray()
#define List_1_ToArray_m56836(__this, method) (( KeyValuePair_2U5BU5D_t8270* (*) (List_1_t8271 *, const MethodInfo*))List_1_ToArray_m56683_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::TrimExcess()
#define List_1_TrimExcess_m56837(__this, method) (( void (*) (List_1_t8271 *, const MethodInfo*))List_1_TrimExcess_m56684_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Capacity()
#define List_1_get_Capacity_m56838(__this, method) (( int32_t (*) (List_1_t8271 *, const MethodInfo*))List_1_get_Capacity_m56685_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m56839(__this, ___value, method) (( void (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_set_Capacity_m56686_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
#define List_1_get_Count_m56840(__this, method) (( int32_t (*) (List_1_t8271 *, const MethodInfo*))List_1_get_Count_m56687_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
#define List_1_get_Item_m56841(__this, ___index, method) (( KeyValuePair_2_t7817  (*) (List_1_t8271 *, int32_t, const MethodInfo*))List_1_get_Item_m56688_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m56842(__this, ___index, ___value, method) (( void (*) (List_1_t8271 *, int32_t, KeyValuePair_2_t7817 , const MethodInfo*))List_1_set_Item_m56689_gshared)(__this, ___index, ___value, method)

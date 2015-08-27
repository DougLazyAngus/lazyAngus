#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct List_1_t7771;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerable_1_t9401;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7770;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7268;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ICollection_1_t9402;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ReadOnlyCollection_1_t7773;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t7774;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IComparer_1_t9403;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t7776;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_88.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_104MethodDeclarations.h"
#define List_1__ctor_m52955(__this, method) (( void (*) (List_1_t7771 *, const MethodInfo*))List_1__ctor_m52802_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52956(__this, ___collection, method) (( void (*) (List_1_t7771 *, Object_t*, const MethodInfo*))List_1__ctor_m52803_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Int32)
#define List_1__ctor_m52957(__this, ___capacity, method) (( void (*) (List_1_t7771 *, int32_t, const MethodInfo*))List_1__ctor_m52804_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52958(__this, ___data, ___size, method) (( void (*) (List_1_t7771 *, KeyValuePair_2U5BU5D_t7770*, int32_t, const MethodInfo*))List_1__ctor_m52805_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.cctor()
#define List_1__cctor_m52959(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52806_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52960(__this, method) (( Object_t* (*) (List_1_t7771 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52807_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52961(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7771 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52808_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52962(__this, method) (( Object_t * (*) (List_1_t7771 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52809_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52963(__this, ___item, method) (( int32_t (*) (List_1_t7771 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52810_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52964(__this, ___item, method) (( bool (*) (List_1_t7771 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52811_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52965(__this, ___item, method) (( int32_t (*) (List_1_t7771 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52812_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52966(__this, ___index, ___item, method) (( void (*) (List_1_t7771 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52813_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52967(__this, ___item, method) (( void (*) (List_1_t7771 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52814_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52968(__this, method) (( bool (*) (List_1_t7771 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52969(__this, method) (( bool (*) (List_1_t7771 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52970(__this, method) (( Object_t * (*) (List_1_t7771 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52971(__this, method) (( bool (*) (List_1_t7771 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52818_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52972(__this, method) (( bool (*) (List_1_t7771 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52819_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52973(__this, ___index, method) (( Object_t * (*) (List_1_t7771 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52820_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52974(__this, ___index, ___value, method) (( void (*) (List_1_t7771 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52821_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Add(T)
#define List_1_Add_m52975(__this, ___item, method) (( void (*) (List_1_t7771 *, KeyValuePair_2_t7263 , const MethodInfo*))List_1_Add_m52822_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52976(__this, ___newCount, method) (( void (*) (List_1_t7771 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52977(__this, ___idx, ___count, method) (( void (*) (List_1_t7771 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52824_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52978(__this, ___collection, method) (( void (*) (List_1_t7771 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52979(__this, ___enumerable, method) (( void (*) (List_1_t7771 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52826_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52980(__this, ___collection, method) (( void (*) (List_1_t7771 *, Object_t*, const MethodInfo*))List_1_AddRange_m52827_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AsReadOnly()
#define List_1_AsReadOnly_m52981(__this, method) (( ReadOnlyCollection_1_t7773 * (*) (List_1_t7771 *, const MethodInfo*))List_1_AsReadOnly_m52828_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Clear()
#define List_1_Clear_m52982(__this, method) (( void (*) (List_1_t7771 *, const MethodInfo*))List_1_Clear_m52829_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Contains(T)
#define List_1_Contains_m52983(__this, ___item, method) (( bool (*) (List_1_t7771 *, KeyValuePair_2_t7263 , const MethodInfo*))List_1_Contains_m52830_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52984(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7771 *, KeyValuePair_2U5BU5D_t7770*, int32_t, const MethodInfo*))List_1_CopyTo_m52831_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52985(__this, ___match, method) (( KeyValuePair_2_t7263  (*) (List_1_t7771 *, Predicate_1_t7774 *, const MethodInfo*))List_1_Find_m52832_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52986(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7774 *, const MethodInfo*))List_1_CheckMatch_m52833_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52987(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7771 *, int32_t, int32_t, Predicate_1_t7774 *, const MethodInfo*))List_1_GetIndex_m52834_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetEnumerator()
#define List_1_GetEnumerator_m52988(__this, method) (( Enumerator_t7775  (*) (List_1_t7771 *, const MethodInfo*))List_1_GetEnumerator_m52835_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52989(__this, ___index, ___count, method) (( List_1_t7771 * (*) (List_1_t7771 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52836_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::IndexOf(T)
#define List_1_IndexOf_m52990(__this, ___item, method) (( int32_t (*) (List_1_t7771 *, KeyValuePair_2_t7263 , const MethodInfo*))List_1_IndexOf_m52837_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52991(__this, ___start, ___delta, method) (( void (*) (List_1_t7771 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52838_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52992(__this, ___index, method) (( void (*) (List_1_t7771 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Insert(System.Int32,T)
#define List_1_Insert_m52993(__this, ___index, ___item, method) (( void (*) (List_1_t7771 *, int32_t, KeyValuePair_2_t7263 , const MethodInfo*))List_1_Insert_m52840_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52994(__this, ___collection, method) (( void (*) (List_1_t7771 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52841_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52995(__this, ___index, ___collection, method) (( void (*) (List_1_t7771 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52842_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52996(__this, ___index, ___collection, method) (( void (*) (List_1_t7771 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52843_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52997(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7771 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52844_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Remove(T)
#define List_1_Remove_m52998(__this, ___item, method) (( bool (*) (List_1_t7771 *, KeyValuePair_2_t7263 , const MethodInfo*))List_1_Remove_m52845_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52999(__this, ___match, method) (( int32_t (*) (List_1_t7771 *, Predicate_1_t7774 *, const MethodInfo*))List_1_RemoveAll_m52846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m53000(__this, ___index, method) (( void (*) (List_1_t7771 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52847_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m53001(__this, ___index, ___count, method) (( void (*) (List_1_t7771 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52848_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Reverse()
#define List_1_Reverse_m53002(__this, method) (( void (*) (List_1_t7771 *, const MethodInfo*))List_1_Reverse_m52849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort()
#define List_1_Sort_m53003(__this, method) (( void (*) (List_1_t7771 *, const MethodInfo*))List_1_Sort_m52850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m53004(__this, ___comparer, method) (( void (*) (List_1_t7771 *, Object_t*, const MethodInfo*))List_1_Sort_m52851_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m53005(__this, ___comparison, method) (( void (*) (List_1_t7771 *, Comparison_1_t7776 *, const MethodInfo*))List_1_Sort_m52852_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::ToArray()
#define List_1_ToArray_m53006(__this, method) (( KeyValuePair_2U5BU5D_t7770* (*) (List_1_t7771 *, const MethodInfo*))List_1_ToArray_m52853_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::TrimExcess()
#define List_1_TrimExcess_m53007(__this, method) (( void (*) (List_1_t7771 *, const MethodInfo*))List_1_TrimExcess_m52854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Capacity()
#define List_1_get_Capacity_m53008(__this, method) (( int32_t (*) (List_1_t7771 *, const MethodInfo*))List_1_get_Capacity_m52855_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m53009(__this, ___value, method) (( void (*) (List_1_t7771 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Count()
#define List_1_get_Count_m53010(__this, method) (( int32_t (*) (List_1_t7771 *, const MethodInfo*))List_1_get_Count_m52857_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Item(System.Int32)
#define List_1_get_Item_m53011(__this, ___index, method) (( KeyValuePair_2_t7263  (*) (List_1_t7771 *, int32_t, const MethodInfo*))List_1_get_Item_m52858_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m53012(__this, ___index, ___value, method) (( void (*) (List_1_t7771 *, int32_t, KeyValuePair_2_t7263 , const MethodInfo*))List_1_set_Item_m52859_gshared)(__this, ___index, ___value, method)

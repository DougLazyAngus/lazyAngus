#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct List_1_t7768;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerable_1_t9398;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7265;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ICollection_1_t9399;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ReadOnlyCollection_1_t7770;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t7771;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IComparer_1_t9400;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t7773;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_88.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_104MethodDeclarations.h"
#define List_1__ctor_m52922(__this, method) (( void (*) (List_1_t7768 *, const MethodInfo*))List_1__ctor_m52769_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52923(__this, ___collection, method) (( void (*) (List_1_t7768 *, Object_t*, const MethodInfo*))List_1__ctor_m52770_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Int32)
#define List_1__ctor_m52924(__this, ___capacity, method) (( void (*) (List_1_t7768 *, int32_t, const MethodInfo*))List_1__ctor_m52771_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52925(__this, ___data, ___size, method) (( void (*) (List_1_t7768 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))List_1__ctor_m52772_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.cctor()
#define List_1__cctor_m52926(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52773_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52927(__this, method) (( Object_t* (*) (List_1_t7768 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52774_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52928(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7768 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52775_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52929(__this, method) (( Object_t * (*) (List_1_t7768 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52776_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52930(__this, ___item, method) (( int32_t (*) (List_1_t7768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52777_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52931(__this, ___item, method) (( bool (*) (List_1_t7768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52778_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52932(__this, ___item, method) (( int32_t (*) (List_1_t7768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52779_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52933(__this, ___index, ___item, method) (( void (*) (List_1_t7768 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52780_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52934(__this, ___item, method) (( void (*) (List_1_t7768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52781_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52935(__this, method) (( bool (*) (List_1_t7768 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52782_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52936(__this, method) (( bool (*) (List_1_t7768 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52783_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52937(__this, method) (( Object_t * (*) (List_1_t7768 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52784_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52938(__this, method) (( bool (*) (List_1_t7768 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52939(__this, method) (( bool (*) (List_1_t7768 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52786_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52940(__this, ___index, method) (( Object_t * (*) (List_1_t7768 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52787_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52941(__this, ___index, ___value, method) (( void (*) (List_1_t7768 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52788_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Add(T)
#define List_1_Add_m52942(__this, ___item, method) (( void (*) (List_1_t7768 *, KeyValuePair_2_t7260 , const MethodInfo*))List_1_Add_m52789_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52943(__this, ___newCount, method) (( void (*) (List_1_t7768 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52790_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52944(__this, ___idx, ___count, method) (( void (*) (List_1_t7768 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52791_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52945(__this, ___collection, method) (( void (*) (List_1_t7768 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52792_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52946(__this, ___enumerable, method) (( void (*) (List_1_t7768 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52793_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52947(__this, ___collection, method) (( void (*) (List_1_t7768 *, Object_t*, const MethodInfo*))List_1_AddRange_m52794_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AsReadOnly()
#define List_1_AsReadOnly_m52948(__this, method) (( ReadOnlyCollection_1_t7770 * (*) (List_1_t7768 *, const MethodInfo*))List_1_AsReadOnly_m52795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Clear()
#define List_1_Clear_m52949(__this, method) (( void (*) (List_1_t7768 *, const MethodInfo*))List_1_Clear_m52796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Contains(T)
#define List_1_Contains_m52950(__this, ___item, method) (( bool (*) (List_1_t7768 *, KeyValuePair_2_t7260 , const MethodInfo*))List_1_Contains_m52797_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52951(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7768 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))List_1_CopyTo_m52798_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52952(__this, ___match, method) (( KeyValuePair_2_t7260  (*) (List_1_t7768 *, Predicate_1_t7771 *, const MethodInfo*))List_1_Find_m52799_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52953(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7771 *, const MethodInfo*))List_1_CheckMatch_m52800_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52954(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7768 *, int32_t, int32_t, Predicate_1_t7771 *, const MethodInfo*))List_1_GetIndex_m52801_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetEnumerator()
#define List_1_GetEnumerator_m52955(__this, method) (( Enumerator_t7772  (*) (List_1_t7768 *, const MethodInfo*))List_1_GetEnumerator_m52802_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52956(__this, ___index, ___count, method) (( List_1_t7768 * (*) (List_1_t7768 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52803_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::IndexOf(T)
#define List_1_IndexOf_m52957(__this, ___item, method) (( int32_t (*) (List_1_t7768 *, KeyValuePair_2_t7260 , const MethodInfo*))List_1_IndexOf_m52804_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52958(__this, ___start, ___delta, method) (( void (*) (List_1_t7768 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52805_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52959(__this, ___index, method) (( void (*) (List_1_t7768 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52806_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Insert(System.Int32,T)
#define List_1_Insert_m52960(__this, ___index, ___item, method) (( void (*) (List_1_t7768 *, int32_t, KeyValuePair_2_t7260 , const MethodInfo*))List_1_Insert_m52807_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52961(__this, ___collection, method) (( void (*) (List_1_t7768 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52808_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52962(__this, ___index, ___collection, method) (( void (*) (List_1_t7768 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52809_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52963(__this, ___index, ___collection, method) (( void (*) (List_1_t7768 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52810_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52964(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7768 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52811_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Remove(T)
#define List_1_Remove_m52965(__this, ___item, method) (( bool (*) (List_1_t7768 *, KeyValuePair_2_t7260 , const MethodInfo*))List_1_Remove_m52812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52966(__this, ___match, method) (( int32_t (*) (List_1_t7768 *, Predicate_1_t7771 *, const MethodInfo*))List_1_RemoveAll_m52813_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52967(__this, ___index, method) (( void (*) (List_1_t7768 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52814_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52968(__this, ___index, ___count, method) (( void (*) (List_1_t7768 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52815_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Reverse()
#define List_1_Reverse_m52969(__this, method) (( void (*) (List_1_t7768 *, const MethodInfo*))List_1_Reverse_m52816_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort()
#define List_1_Sort_m52970(__this, method) (( void (*) (List_1_t7768 *, const MethodInfo*))List_1_Sort_m52817_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52971(__this, ___comparer, method) (( void (*) (List_1_t7768 *, Object_t*, const MethodInfo*))List_1_Sort_m52818_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52972(__this, ___comparison, method) (( void (*) (List_1_t7768 *, Comparison_1_t7773 *, const MethodInfo*))List_1_Sort_m52819_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::ToArray()
#define List_1_ToArray_m52973(__this, method) (( KeyValuePair_2U5BU5D_t7767* (*) (List_1_t7768 *, const MethodInfo*))List_1_ToArray_m52820_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::TrimExcess()
#define List_1_TrimExcess_m52974(__this, method) (( void (*) (List_1_t7768 *, const MethodInfo*))List_1_TrimExcess_m52821_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Capacity()
#define List_1_get_Capacity_m52975(__this, method) (( int32_t (*) (List_1_t7768 *, const MethodInfo*))List_1_get_Capacity_m52822_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52976(__this, ___value, method) (( void (*) (List_1_t7768 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52823_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Count()
#define List_1_get_Count_m52977(__this, method) (( int32_t (*) (List_1_t7768 *, const MethodInfo*))List_1_get_Count_m52824_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Item(System.Int32)
#define List_1_get_Item_m52978(__this, ___index, method) (( KeyValuePair_2_t7260  (*) (List_1_t7768 *, int32_t, const MethodInfo*))List_1_get_Item_m52825_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52979(__this, ___index, ___value, method) (( void (*) (List_1_t7768 *, int32_t, KeyValuePair_2_t7260 , const MethodInfo*))List_1_set_Item_m52826_gshared)(__this, ___index, ___value, method)

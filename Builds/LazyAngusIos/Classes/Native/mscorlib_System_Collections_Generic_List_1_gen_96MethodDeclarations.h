#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct List_1_t7951;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerable_1_t10001;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7950;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7776;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ICollection_1_t10002;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct ReadOnlyCollection_1_t7953;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Predicate_1_t7954;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IComparer_1_t10003;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t7956;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_79.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_95MethodDeclarations.h"
#define List_1__ctor_m52912(__this, method) (( void (*) (List_1_t7951 *, const MethodInfo*))List_1__ctor_m52759_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m52913(__this, ___collection, method) (( void (*) (List_1_t7951 *, Object_t*, const MethodInfo*))List_1__ctor_m52760_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Int32)
#define List_1__ctor_m52914(__this, ___capacity, method) (( void (*) (List_1_t7951 *, int32_t, const MethodInfo*))List_1__ctor_m52761_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m52915(__this, ___data, ___size, method) (( void (*) (List_1_t7951 *, KeyValuePair_2U5BU5D_t7950*, int32_t, const MethodInfo*))List_1__ctor_m52762_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.cctor()
#define List_1__cctor_m52916(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52763_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52917(__this, method) (( Object_t* (*) (List_1_t7951 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52764_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m52918(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7951 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52765_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52919(__this, method) (( Object_t * (*) (List_1_t7951 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52766_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m52920(__this, ___item, method) (( int32_t (*) (List_1_t7951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52767_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m52921(__this, ___item, method) (( bool (*) (List_1_t7951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52768_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m52922(__this, ___item, method) (( int32_t (*) (List_1_t7951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52769_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m52923(__this, ___index, ___item, method) (( void (*) (List_1_t7951 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52770_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m52924(__this, ___item, method) (( void (*) (List_1_t7951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52771_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52925(__this, method) (( bool (*) (List_1_t7951 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52926(__this, method) (( bool (*) (List_1_t7951 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52773_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m52927(__this, method) (( Object_t * (*) (List_1_t7951 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m52928(__this, method) (( bool (*) (List_1_t7951 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52775_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m52929(__this, method) (( bool (*) (List_1_t7951 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52776_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m52930(__this, ___index, method) (( Object_t * (*) (List_1_t7951 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52777_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m52931(__this, ___index, ___value, method) (( void (*) (List_1_t7951 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52778_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Add(T)
#define List_1_Add_m52932(__this, ___item, method) (( void (*) (List_1_t7951 *, KeyValuePair_2_t7771 , const MethodInfo*))List_1_Add_m52779_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m52933(__this, ___newCount, method) (( void (*) (List_1_t7951 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52780_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m52934(__this, ___idx, ___count, method) (( void (*) (List_1_t7951 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52781_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m52935(__this, ___collection, method) (( void (*) (List_1_t7951 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52782_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m52936(__this, ___enumerable, method) (( void (*) (List_1_t7951 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52783_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m52937(__this, ___collection, method) (( void (*) (List_1_t7951 *, Object_t*, const MethodInfo*))List_1_AddRange_m52784_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::AsReadOnly()
#define List_1_AsReadOnly_m52938(__this, method) (( ReadOnlyCollection_1_t7953 * (*) (List_1_t7951 *, const MethodInfo*))List_1_AsReadOnly_m52785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Clear()
#define List_1_Clear_m52939(__this, method) (( void (*) (List_1_t7951 *, const MethodInfo*))List_1_Clear_m52786_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Contains(T)
#define List_1_Contains_m52940(__this, ___item, method) (( bool (*) (List_1_t7951 *, KeyValuePair_2_t7771 , const MethodInfo*))List_1_Contains_m52787_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m52941(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7951 *, KeyValuePair_2U5BU5D_t7950*, int32_t, const MethodInfo*))List_1_CopyTo_m52788_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m52942(__this, ___match, method) (( KeyValuePair_2_t7771  (*) (List_1_t7951 *, Predicate_1_t7954 *, const MethodInfo*))List_1_Find_m52789_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m52943(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7954 *, const MethodInfo*))List_1_CheckMatch_m52790_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m52944(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7951 *, int32_t, int32_t, Predicate_1_t7954 *, const MethodInfo*))List_1_GetIndex_m52791_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetEnumerator()
#define List_1_GetEnumerator_m52945(__this, method) (( Enumerator_t7955  (*) (List_1_t7951 *, const MethodInfo*))List_1_GetEnumerator_m52792_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m52946(__this, ___index, ___count, method) (( List_1_t7951 * (*) (List_1_t7951 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52793_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::IndexOf(T)
#define List_1_IndexOf_m52947(__this, ___item, method) (( int32_t (*) (List_1_t7951 *, KeyValuePair_2_t7771 , const MethodInfo*))List_1_IndexOf_m52794_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m52948(__this, ___start, ___delta, method) (( void (*) (List_1_t7951 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52795_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m52949(__this, ___index, method) (( void (*) (List_1_t7951 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52796_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Insert(System.Int32,T)
#define List_1_Insert_m52950(__this, ___index, ___item, method) (( void (*) (List_1_t7951 *, int32_t, KeyValuePair_2_t7771 , const MethodInfo*))List_1_Insert_m52797_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m52951(__this, ___collection, method) (( void (*) (List_1_t7951 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52798_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m52952(__this, ___index, ___collection, method) (( void (*) (List_1_t7951 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52799_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m52953(__this, ___index, ___collection, method) (( void (*) (List_1_t7951 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52800_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m52954(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7951 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52801_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Remove(T)
#define List_1_Remove_m52955(__this, ___item, method) (( bool (*) (List_1_t7951 *, KeyValuePair_2_t7771 , const MethodInfo*))List_1_Remove_m52802_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m52956(__this, ___match, method) (( int32_t (*) (List_1_t7951 *, Predicate_1_t7954 *, const MethodInfo*))List_1_RemoveAll_m52803_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m52957(__this, ___index, method) (( void (*) (List_1_t7951 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52804_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m52958(__this, ___index, ___count, method) (( void (*) (List_1_t7951 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52805_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Reverse()
#define List_1_Reverse_m52959(__this, method) (( void (*) (List_1_t7951 *, const MethodInfo*))List_1_Reverse_m52806_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort()
#define List_1_Sort_m52960(__this, method) (( void (*) (List_1_t7951 *, const MethodInfo*))List_1_Sort_m52807_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m52961(__this, ___comparer, method) (( void (*) (List_1_t7951 *, Object_t*, const MethodInfo*))List_1_Sort_m52808_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m52962(__this, ___comparison, method) (( void (*) (List_1_t7951 *, Comparison_1_t7956 *, const MethodInfo*))List_1_Sort_m52809_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::ToArray()
#define List_1_ToArray_m52963(__this, method) (( KeyValuePair_2U5BU5D_t7950* (*) (List_1_t7951 *, const MethodInfo*))List_1_ToArray_m52810_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::TrimExcess()
#define List_1_TrimExcess_m52964(__this, method) (( void (*) (List_1_t7951 *, const MethodInfo*))List_1_TrimExcess_m52811_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Capacity()
#define List_1_get_Capacity_m52965(__this, method) (( int32_t (*) (List_1_t7951 *, const MethodInfo*))List_1_get_Capacity_m52812_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m52966(__this, ___value, method) (( void (*) (List_1_t7951 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52813_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Count()
#define List_1_get_Count_m52967(__this, method) (( int32_t (*) (List_1_t7951 *, const MethodInfo*))List_1_get_Count_m52814_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::get_Item(System.Int32)
#define List_1_get_Item_m52968(__this, ___index, method) (( KeyValuePair_2_t7771  (*) (List_1_t7951 *, int32_t, const MethodInfo*))List_1_get_Item_m52815_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m52969(__this, ___index, ___value, method) (( void (*) (List_1_t7951 *, int32_t, KeyValuePair_2_t7771 , const MethodInfo*))List_1_set_Item_m52816_gshared)(__this, ___index, ___value, method)

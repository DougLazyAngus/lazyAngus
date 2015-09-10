#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct List_1_t7881;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerable_1_t10003;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7880;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7772;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ICollection_1_t10004;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ReadOnlyCollection_1_t7883;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7884;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IComparer_1_t10005;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7886;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_77.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_93MethodDeclarations.h"
#define List_1__ctor_m51900(__this, method) (( void (*) (List_1_t7881 *, const MethodInfo*))List_1__ctor_m51747_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m51901(__this, ___collection, method) (( void (*) (List_1_t7881 *, Object_t*, const MethodInfo*))List_1__ctor_m51748_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Int32)
#define List_1__ctor_m51902(__this, ___capacity, method) (( void (*) (List_1_t7881 *, int32_t, const MethodInfo*))List_1__ctor_m51749_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m51903(__this, ___data, ___size, method) (( void (*) (List_1_t7881 *, KeyValuePair_2U5BU5D_t7880*, int32_t, const MethodInfo*))List_1__ctor_m51750_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.cctor()
#define List_1__cctor_m51904(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51751_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51905(__this, method) (( Object_t* (*) (List_1_t7881 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m51906(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7881 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51753_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51907(__this, method) (( Object_t * (*) (List_1_t7881 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51754_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m51908(__this, ___item, method) (( int32_t (*) (List_1_t7881 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51755_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m51909(__this, ___item, method) (( bool (*) (List_1_t7881 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51756_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m51910(__this, ___item, method) (( int32_t (*) (List_1_t7881 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51757_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m51911(__this, ___index, ___item, method) (( void (*) (List_1_t7881 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51758_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m51912(__this, ___item, method) (( void (*) (List_1_t7881 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51759_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51913(__this, method) (( bool (*) (List_1_t7881 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51760_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51914(__this, method) (( bool (*) (List_1_t7881 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51761_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m51915(__this, method) (( Object_t * (*) (List_1_t7881 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51762_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m51916(__this, method) (( bool (*) (List_1_t7881 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m51917(__this, method) (( bool (*) (List_1_t7881 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51764_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m51918(__this, ___index, method) (( Object_t * (*) (List_1_t7881 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51765_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m51919(__this, ___index, ___value, method) (( void (*) (List_1_t7881 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51766_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Add(T)
#define List_1_Add_m51920(__this, ___item, method) (( void (*) (List_1_t7881 *, KeyValuePair_2_t7767 , const MethodInfo*))List_1_Add_m51767_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m51921(__this, ___newCount, method) (( void (*) (List_1_t7881 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51768_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m51922(__this, ___idx, ___count, method) (( void (*) (List_1_t7881 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51769_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m51923(__this, ___collection, method) (( void (*) (List_1_t7881 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51770_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m51924(__this, ___enumerable, method) (( void (*) (List_1_t7881 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51771_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m51925(__this, ___collection, method) (( void (*) (List_1_t7881 *, Object_t*, const MethodInfo*))List_1_AddRange_m51772_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AsReadOnly()
#define List_1_AsReadOnly_m51926(__this, method) (( ReadOnlyCollection_1_t7883 * (*) (List_1_t7881 *, const MethodInfo*))List_1_AsReadOnly_m51773_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Clear()
#define List_1_Clear_m51927(__this, method) (( void (*) (List_1_t7881 *, const MethodInfo*))List_1_Clear_m51774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Contains(T)
#define List_1_Contains_m51928(__this, ___item, method) (( bool (*) (List_1_t7881 *, KeyValuePair_2_t7767 , const MethodInfo*))List_1_Contains_m51775_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m51929(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7881 *, KeyValuePair_2U5BU5D_t7880*, int32_t, const MethodInfo*))List_1_CopyTo_m51776_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m51930(__this, ___match, method) (( KeyValuePair_2_t7767  (*) (List_1_t7881 *, Predicate_1_t7884 *, const MethodInfo*))List_1_Find_m51777_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m51931(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7884 *, const MethodInfo*))List_1_CheckMatch_m51778_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m51932(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7881 *, int32_t, int32_t, Predicate_1_t7884 *, const MethodInfo*))List_1_GetIndex_m51779_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m51933(__this, method) (( Enumerator_t7885  (*) (List_1_t7881 *, const MethodInfo*))List_1_GetEnumerator_m51780_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m51934(__this, ___index, ___count, method) (( List_1_t7881 * (*) (List_1_t7881 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51781_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::IndexOf(T)
#define List_1_IndexOf_m51935(__this, ___item, method) (( int32_t (*) (List_1_t7881 *, KeyValuePair_2_t7767 , const MethodInfo*))List_1_IndexOf_m51782_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m51936(__this, ___start, ___delta, method) (( void (*) (List_1_t7881 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51783_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m51937(__this, ___index, method) (( void (*) (List_1_t7881 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51784_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Insert(System.Int32,T)
#define List_1_Insert_m51938(__this, ___index, ___item, method) (( void (*) (List_1_t7881 *, int32_t, KeyValuePair_2_t7767 , const MethodInfo*))List_1_Insert_m51785_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m51939(__this, ___collection, method) (( void (*) (List_1_t7881 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51786_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m51940(__this, ___index, ___collection, method) (( void (*) (List_1_t7881 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51787_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m51941(__this, ___index, ___collection, method) (( void (*) (List_1_t7881 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51788_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m51942(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7881 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51789_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Remove(T)
#define List_1_Remove_m51943(__this, ___item, method) (( bool (*) (List_1_t7881 *, KeyValuePair_2_t7767 , const MethodInfo*))List_1_Remove_m51790_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m51944(__this, ___match, method) (( int32_t (*) (List_1_t7881 *, Predicate_1_t7884 *, const MethodInfo*))List_1_RemoveAll_m51791_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m51945(__this, ___index, method) (( void (*) (List_1_t7881 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51792_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m51946(__this, ___index, ___count, method) (( void (*) (List_1_t7881 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51793_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Reverse()
#define List_1_Reverse_m51947(__this, method) (( void (*) (List_1_t7881 *, const MethodInfo*))List_1_Reverse_m51794_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort()
#define List_1_Sort_m51948(__this, method) (( void (*) (List_1_t7881 *, const MethodInfo*))List_1_Sort_m51795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m51949(__this, ___comparer, method) (( void (*) (List_1_t7881 *, Object_t*, const MethodInfo*))List_1_Sort_m51796_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m51950(__this, ___comparison, method) (( void (*) (List_1_t7881 *, Comparison_1_t7886 *, const MethodInfo*))List_1_Sort_m51797_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::ToArray()
#define List_1_ToArray_m51951(__this, method) (( KeyValuePair_2U5BU5D_t7880* (*) (List_1_t7881 *, const MethodInfo*))List_1_ToArray_m51798_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::TrimExcess()
#define List_1_TrimExcess_m51952(__this, method) (( void (*) (List_1_t7881 *, const MethodInfo*))List_1_TrimExcess_m51799_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Capacity()
#define List_1_get_Capacity_m51953(__this, method) (( int32_t (*) (List_1_t7881 *, const MethodInfo*))List_1_get_Capacity_m51800_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m51954(__this, ___value, method) (( void (*) (List_1_t7881 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51801_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Count()
#define List_1_get_Count_m51955(__this, method) (( int32_t (*) (List_1_t7881 *, const MethodInfo*))List_1_get_Count_m51802_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Item(System.Int32)
#define List_1_get_Item_m51956(__this, ___index, method) (( KeyValuePair_2_t7767  (*) (List_1_t7881 *, int32_t, const MethodInfo*))List_1_get_Item_m51803_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m51957(__this, ___index, ___value, method) (( void (*) (List_1_t7881 *, int32_t, KeyValuePair_2_t7767 , const MethodInfo*))List_1_set_Item_m51804_gshared)(__this, ___index, ___value, method)

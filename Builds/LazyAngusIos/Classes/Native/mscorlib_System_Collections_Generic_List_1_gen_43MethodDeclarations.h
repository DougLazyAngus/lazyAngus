#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Exception>
struct List_1_t2098;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t1364;
// System.Exception[]
struct ExceptionU5BU5D_t8262;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t2099;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Exception>
struct ICollection_1_t9481;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t1288;
// System.Predicate`1<System.Exception>
struct Predicate_1_t8263;
// System.Collections.Generic.IComparer`1<System.Exception>
struct IComparer_1_t9482;
// System.Comparison`1<System.Exception>
struct Comparison_1_t8265;
// System.Collections.Generic.List`1/Enumerator<System.Exception>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_93.h"

// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7549(__this, method) (( void (*) (List_1_t2098 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m58904(__this, ___collection, method) (( void (*) (List_1_t2098 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
#define List_1__ctor_m58905(__this, ___capacity, method) (( void (*) (List_1_t2098 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(T[],System.Int32)
#define List_1__ctor_m58906(__this, ___data, ___size, method) (( void (*) (List_1_t2098 *, ExceptionU5BU5D_t8262*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.cctor()
#define List_1__cctor_m58907(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58908(__this, method) (( Object_t* (*) (List_1_t2098 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m58909(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2098 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Exception>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m58910(__this, method) (( Object_t * (*) (List_1_t2098 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m58911(__this, ___item, method) (( int32_t (*) (List_1_t2098 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m58912(__this, ___item, method) (( bool (*) (List_1_t2098 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m58913(__this, ___item, method) (( int32_t (*) (List_1_t2098 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m58914(__this, ___index, ___item, method) (( void (*) (List_1_t2098 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m58915(__this, ___item, method) (( void (*) (List_1_t2098 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58916(__this, method) (( bool (*) (List_1_t2098 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m58917(__this, method) (( bool (*) (List_1_t2098 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m58918(__this, method) (( Object_t * (*) (List_1_t2098 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m58919(__this, method) (( bool (*) (List_1_t2098 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m58920(__this, method) (( bool (*) (List_1_t2098 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m58921(__this, ___index, method) (( Object_t * (*) (List_1_t2098 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m58922(__this, ___index, ___value, method) (( void (*) (List_1_t2098 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
#define List_1_Add_m58923(__this, ___item, method) (( void (*) (List_1_t2098 *, Exception_t57 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m58924(__this, ___newCount, method) (( void (*) (List_1_t2098 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m58925(__this, ___idx, ___count, method) (( void (*) (List_1_t2098 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m58926(__this, ___collection, method) (( void (*) (List_1_t2098 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m58927(__this, ___enumerable, method) (( void (*) (List_1_t2098 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m7550(__this, ___collection, method) (( void (*) (List_1_t2098 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Exception>::AsReadOnly()
#define List_1_AsReadOnly_m58928(__this, method) (( ReadOnlyCollection_1_t1288 * (*) (List_1_t2098 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
#define List_1_Clear_m58929(__this, method) (( void (*) (List_1_t2098 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Contains(T)
#define List_1_Contains_m58930(__this, ___item, method) (( bool (*) (List_1_t2098 *, Exception_t57 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m58931(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2098 *, ExceptionU5BU5D_t8262*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Exception>::Find(System.Predicate`1<T>)
#define List_1_Find_m58932(__this, ___match, method) (( Exception_t57 * (*) (List_1_t2098 *, Predicate_1_t8263 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m58933(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8263 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m58934(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2098 *, int32_t, int32_t, Predicate_1_t8263 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Exception>::GetEnumerator()
#define List_1_GetEnumerator_m58935(__this, method) (( Enumerator_t8264  (*) (List_1_t2098 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m58936(__this, ___index, ___count, method) (( List_1_t2098 * (*) (List_1_t2098 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::IndexOf(T)
#define List_1_IndexOf_m58937(__this, ___item, method) (( int32_t (*) (List_1_t2098 *, Exception_t57 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m58938(__this, ___start, ___delta, method) (( void (*) (List_1_t2098 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m58939(__this, ___index, method) (( void (*) (List_1_t2098 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Insert(System.Int32,T)
#define List_1_Insert_m58940(__this, ___index, ___item, method) (( void (*) (List_1_t2098 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m58941(__this, ___collection, method) (( void (*) (List_1_t2098 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m58942(__this, ___index, ___collection, method) (( void (*) (List_1_t2098 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m58943(__this, ___index, ___collection, method) (( void (*) (List_1_t2098 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m58944(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2098 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Remove(T)
#define List_1_Remove_m58945(__this, ___item, method) (( bool (*) (List_1_t2098 *, Exception_t57 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m58946(__this, ___match, method) (( int32_t (*) (List_1_t2098 *, Predicate_1_t8263 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m58947(__this, ___index, method) (( void (*) (List_1_t2098 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m58948(__this, ___index, ___count, method) (( void (*) (List_1_t2098 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Reverse()
#define List_1_Reverse_m58949(__this, method) (( void (*) (List_1_t2098 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort()
#define List_1_Sort_m58950(__this, method) (( void (*) (List_1_t2098 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m58951(__this, ___comparer, method) (( void (*) (List_1_t2098 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m58952(__this, ___comparison, method) (( void (*) (List_1_t2098 *, Comparison_1_t8265 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
#define List_1_ToArray_m58953(__this, method) (( ExceptionU5BU5D_t8262* (*) (List_1_t2098 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::TrimExcess()
#define List_1_TrimExcess_m58954(__this, method) (( void (*) (List_1_t2098 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Capacity()
#define List_1_get_Capacity_m58955(__this, method) (( int32_t (*) (List_1_t2098 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m58956(__this, ___value, method) (( void (*) (List_1_t2098 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
#define List_1_get_Count_m58957(__this, method) (( int32_t (*) (List_1_t2098 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
#define List_1_get_Item_m58958(__this, ___index, method) (( Exception_t57 * (*) (List_1_t2098 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Item(System.Int32,T)
#define List_1_set_Item_m58959(__this, ___index, ___value, method) (( void (*) (List_1_t2098 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

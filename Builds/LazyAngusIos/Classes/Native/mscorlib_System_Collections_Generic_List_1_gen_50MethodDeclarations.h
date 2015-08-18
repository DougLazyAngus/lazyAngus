#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2744;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t9599;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t3929;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t9600;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Byte[]>
struct ICollection_1_t9601;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
struct ReadOnlyCollection_1_t8410;
// System.Predicate`1<System.Byte[]>
struct Predicate_1_t8411;
// System.Collections.Generic.IComparer`1<System.Byte[]>
struct IComparer_1_t9602;
// System.Comparison`1<System.Byte[]>
struct Comparison_1_t8413;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_98.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m10111(__this, method) (( void (*) (List_1_t2744 *, const MethodInfo*))List_1__ctor_m3710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m60492(__this, ___collection, method) (( void (*) (List_1_t2744 *, Object_t*, const MethodInfo*))List_1__ctor_m7469_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m60493(__this, ___capacity, method) (( void (*) (List_1_t2744 *, int32_t, const MethodInfo*))List_1__ctor_m21567_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(T[],System.Int32)
#define List_1__ctor_m60494(__this, ___data, ___size, method) (( void (*) (List_1_t2744 *, ByteU5BU5DU5BU5D_t3929*, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m60495(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21571_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60496(__this, method) (( Object_t* (*) (List_1_t2744 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m60497(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2744 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60498(__this, method) (( Object_t * (*) (List_1_t2744 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m60499(__this, ___item, method) (( int32_t (*) (List_1_t2744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10350_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m60500(__this, ___item, method) (( bool (*) (List_1_t2744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10352_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m60501(__this, ___item, method) (( int32_t (*) (List_1_t2744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m60502(__this, ___index, ___item, method) (( void (*) (List_1_t2744 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m60503(__this, ___item, method) (( void (*) (List_1_t2744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10355_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60504(__this, method) (( bool (*) (List_1_t2744 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60505(__this, method) (( bool (*) (List_1_t2744 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10343_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m60506(__this, method) (( Object_t * (*) (List_1_t2744 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m60507(__this, method) (( bool (*) (List_1_t2744 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m60508(__this, method) (( bool (*) (List_1_t2744 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m60509(__this, ___index, method) (( Object_t * (*) (List_1_t2744 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10348_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m60510(__this, ___index, ___value, method) (( void (*) (List_1_t2744 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10349_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m60511(__this, ___item, method) (( void (*) (List_1_t2744 *, ByteU5BU5D_t66*, const MethodInfo*))List_1_Add_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m60512(__this, ___newCount, method) (( void (*) (List_1_t2744 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21589_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m60513(__this, ___idx, ___count, method) (( void (*) (List_1_t2744 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21591_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m60514(__this, ___collection, method) (( void (*) (List_1_t2744 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m60515(__this, ___enumerable, method) (( void (*) (List_1_t2744 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21595_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m60516(__this, ___collection, method) (( void (*) (List_1_t2744 *, Object_t*, const MethodInfo*))List_1_AddRange_m21597_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte[]>::AsReadOnly()
#define List_1_AsReadOnly_m60517(__this, method) (( ReadOnlyCollection_1_t8410 * (*) (List_1_t2744 *, const MethodInfo*))List_1_AsReadOnly_m21599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m60518(__this, method) (( void (*) (List_1_t2744 *, const MethodInfo*))List_1_Clear_m10351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m60519(__this, ___item, method) (( bool (*) (List_1_t2744 *, ByteU5BU5D_t66*, const MethodInfo*))List_1_Contains_m10359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m60520(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2744 *, ByteU5BU5DU5BU5D_t3929*, int32_t, const MethodInfo*))List_1_CopyTo_m10360_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte[]>::Find(System.Predicate`1<T>)
#define List_1_Find_m60521(__this, ___match, method) (( ByteU5BU5D_t66* (*) (List_1_t2744 *, Predicate_1_t8411 *, const MethodInfo*))List_1_Find_m21604_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m60522(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8411 *, const MethodInfo*))List_1_CheckMatch_m21606_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m60523(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2744 *, int32_t, int32_t, Predicate_1_t8411 *, const MethodInfo*))List_1_GetIndex_m21608_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m60524(__this, method) (( Enumerator_t8412  (*) (List_1_t2744 *, const MethodInfo*))List_1_GetEnumerator_m3866_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte[]>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m60525(__this, ___index, ___count, method) (( List_1_t2744 * (*) (List_1_t2744 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21610_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m60526(__this, ___item, method) (( int32_t (*) (List_1_t2744 *, ByteU5BU5D_t66*, const MethodInfo*))List_1_IndexOf_m10363_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m60527(__this, ___start, ___delta, method) (( void (*) (List_1_t2744 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21613_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m60528(__this, ___index, method) (( void (*) (List_1_t2744 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21615_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m60529(__this, ___index, ___item, method) (( void (*) (List_1_t2744 *, int32_t, ByteU5BU5D_t66*, const MethodInfo*))List_1_Insert_m10364_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m60530(__this, ___collection, method) (( void (*) (List_1_t2744 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21618_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m60531(__this, ___index, ___collection, method) (( void (*) (List_1_t2744 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21620_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m60532(__this, ___index, ___collection, method) (( void (*) (List_1_t2744 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m60533(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2744 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21624_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m60534(__this, ___item, method) (( bool (*) (List_1_t2744 *, ByteU5BU5D_t66*, const MethodInfo*))List_1_Remove_m10361_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m60535(__this, ___match, method) (( int32_t (*) (List_1_t2744 *, Predicate_1_t8411 *, const MethodInfo*))List_1_RemoveAll_m21627_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m60536(__this, ___index, method) (( void (*) (List_1_t2744 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m60537(__this, ___index, ___count, method) (( void (*) (List_1_t2744 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21630_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Reverse()
#define List_1_Reverse_m60538(__this, method) (( void (*) (List_1_t2744 *, const MethodInfo*))List_1_Reverse_m21632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort()
#define List_1_Sort_m60539(__this, method) (( void (*) (List_1_t2744 *, const MethodInfo*))List_1_Sort_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m60540(__this, ___comparer, method) (( void (*) (List_1_t2744 *, Object_t*, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m60541(__this, ___comparison, method) (( void (*) (List_1_t2744 *, Comparison_1_t8413 *, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m60542(__this, method) (( ByteU5BU5DU5BU5D_t3929* (*) (List_1_t2744 *, const MethodInfo*))List_1_ToArray_m21640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::TrimExcess()
#define List_1_TrimExcess_m60543(__this, method) (( void (*) (List_1_t2744 *, const MethodInfo*))List_1_TrimExcess_m21642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m60544(__this, method) (( int32_t (*) (List_1_t2744 *, const MethodInfo*))List_1_get_Capacity_m21644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m60545(__this, ___value, method) (( void (*) (List_1_t2744 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21646_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m60546(__this, method) (( int32_t (*) (List_1_t2744 *, const MethodInfo*))List_1_get_Count_m10342_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m60547(__this, ___index, method) (( ByteU5BU5D_t66* (*) (List_1_t2744 *, int32_t, const MethodInfo*))List_1_get_Item_m10365_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m60548(__this, ___index, ___value, method) (( void (*) (List_1_t2744 *, int32_t, ByteU5BU5D_t66*, const MethodInfo*))List_1_set_Item_m10366_gshared)(__this, ___index, ___value, method)

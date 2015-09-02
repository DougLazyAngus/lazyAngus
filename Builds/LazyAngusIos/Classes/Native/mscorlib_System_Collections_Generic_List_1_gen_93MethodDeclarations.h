#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct List_1_t7333;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerable_1_t9403;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7332;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7224;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ICollection_1_t9404;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ReadOnlyCollection_1_t7335;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7336;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IComparer_1_t9405;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7338;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_92MethodDeclarations.h"
#define List_1__ctor_m47556(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1__ctor_m47403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47557(__this, ___collection, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1__ctor_m47404_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Int32)
#define List_1__ctor_m47558(__this, ___capacity, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1__ctor_m47405_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m47559(__this, ___data, ___size, method) (( void (*) (List_1_t7333 *, KeyValuePair_2U5BU5D_t7332*, int32_t, const MethodInfo*))List_1__ctor_m47406_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.cctor()
#define List_1__cctor_m47560(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47407_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47561(__this, method) (( Object_t* (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47408_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47562(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7333 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47409_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47563(__this, method) (( Object_t * (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47410_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47564(__this, ___item, method) (( int32_t (*) (List_1_t7333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47411_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47565(__this, ___item, method) (( bool (*) (List_1_t7333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47412_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47566(__this, ___item, method) (( int32_t (*) (List_1_t7333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47413_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47567(__this, ___index, ___item, method) (( void (*) (List_1_t7333 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47414_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47568(__this, ___item, method) (( void (*) (List_1_t7333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47415_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47569(__this, method) (( bool (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47416_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47570(__this, method) (( bool (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47417_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47571(__this, method) (( Object_t * (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47572(__this, method) (( bool (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47573(__this, method) (( bool (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47420_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47574(__this, ___index, method) (( Object_t * (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47421_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47575(__this, ___index, ___value, method) (( void (*) (List_1_t7333 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47422_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Add(T)
#define List_1_Add_m47576(__this, ___item, method) (( void (*) (List_1_t7333 *, KeyValuePair_2_t7219 , const MethodInfo*))List_1_Add_m47423_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47577(__this, ___newCount, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47424_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47578(__this, ___idx, ___count, method) (( void (*) (List_1_t7333 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47425_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47579(__this, ___collection, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47426_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47580(__this, ___enumerable, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47427_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47581(__this, ___collection, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_AddRange_m47428_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AsReadOnly()
#define List_1_AsReadOnly_m47582(__this, method) (( ReadOnlyCollection_1_t7335 * (*) (List_1_t7333 *, const MethodInfo*))List_1_AsReadOnly_m47429_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Clear()
#define List_1_Clear_m47583(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1_Clear_m47430_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Contains(T)
#define List_1_Contains_m47584(__this, ___item, method) (( bool (*) (List_1_t7333 *, KeyValuePair_2_t7219 , const MethodInfo*))List_1_Contains_m47431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47585(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7333 *, KeyValuePair_2U5BU5D_t7332*, int32_t, const MethodInfo*))List_1_CopyTo_m47432_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m47586(__this, ___match, method) (( KeyValuePair_2_t7219  (*) (List_1_t7333 *, Predicate_1_t7336 *, const MethodInfo*))List_1_Find_m47433_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47587(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7336 *, const MethodInfo*))List_1_CheckMatch_m47434_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47588(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7333 *, int32_t, int32_t, Predicate_1_t7336 *, const MethodInfo*))List_1_GetIndex_m47435_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m47589(__this, method) (( Enumerator_t7337  (*) (List_1_t7333 *, const MethodInfo*))List_1_GetEnumerator_m47436_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47590(__this, ___index, ___count, method) (( List_1_t7333 * (*) (List_1_t7333 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47437_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::IndexOf(T)
#define List_1_IndexOf_m47591(__this, ___item, method) (( int32_t (*) (List_1_t7333 *, KeyValuePair_2_t7219 , const MethodInfo*))List_1_IndexOf_m47438_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47592(__this, ___start, ___delta, method) (( void (*) (List_1_t7333 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47439_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47593(__this, ___index, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47440_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Insert(System.Int32,T)
#define List_1_Insert_m47594(__this, ___index, ___item, method) (( void (*) (List_1_t7333 *, int32_t, KeyValuePair_2_t7219 , const MethodInfo*))List_1_Insert_m47441_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47595(__this, ___collection, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47442_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47596(__this, ___index, ___collection, method) (( void (*) (List_1_t7333 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47443_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47597(__this, ___index, ___collection, method) (( void (*) (List_1_t7333 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47444_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47598(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7333 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47445_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Remove(T)
#define List_1_Remove_m47599(__this, ___item, method) (( bool (*) (List_1_t7333 *, KeyValuePair_2_t7219 , const MethodInfo*))List_1_Remove_m47446_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47600(__this, ___match, method) (( int32_t (*) (List_1_t7333 *, Predicate_1_t7336 *, const MethodInfo*))List_1_RemoveAll_m47447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47601(__this, ___index, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47602(__this, ___index, ___count, method) (( void (*) (List_1_t7333 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47449_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Reverse()
#define List_1_Reverse_m47603(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1_Reverse_m47450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort()
#define List_1_Sort_m47604(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1_Sort_m47451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m47605(__this, ___comparer, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_Sort_m47452_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47606(__this, ___comparison, method) (( void (*) (List_1_t7333 *, Comparison_1_t7338 *, const MethodInfo*))List_1_Sort_m47453_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::ToArray()
#define List_1_ToArray_m47607(__this, method) (( KeyValuePair_2U5BU5D_t7332* (*) (List_1_t7333 *, const MethodInfo*))List_1_ToArray_m47454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::TrimExcess()
#define List_1_TrimExcess_m47608(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1_TrimExcess_m47455_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Capacity()
#define List_1_get_Capacity_m47609(__this, method) (( int32_t (*) (List_1_t7333 *, const MethodInfo*))List_1_get_Capacity_m47456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47610(__this, ___value, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47457_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Count()
#define List_1_get_Count_m47611(__this, method) (( int32_t (*) (List_1_t7333 *, const MethodInfo*))List_1_get_Count_m47458_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Item(System.Int32)
#define List_1_get_Item_m47612(__this, ___index, method) (( KeyValuePair_2_t7219  (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_get_Item_m47459_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m47613(__this, ___index, ___value, method) (( void (*) (List_1_t7333 *, int32_t, KeyValuePair_2_t7219 , const MethodInfo*))List_1_set_Item_m47460_gshared)(__this, ___index, ___value, method)

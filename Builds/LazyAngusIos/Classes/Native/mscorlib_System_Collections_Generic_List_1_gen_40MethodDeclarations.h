#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1121;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t4583;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t4584;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Byte[]>
struct ICollection_1_t4585;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
struct ReadOnlyCollection_1_t3910;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t1878;
// System.Predicate`1<System.Byte[]>
struct Predicate_1_t3911;
// System.Collections.Generic.IComparer`1<System.Byte[]>
struct IComparer_1_t4586;
// System.Comparison`1<System.Byte[]>
struct Comparison_1_t3913;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7165(__this, method) (( void (*) (List_1_t1121 *, const MethodInfo*))List_1__ctor_m3123_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25939(__this, ___collection, method) (( void (*) (List_1_t1121 *, Object_t*, const MethodInfo*))List_1__ctor_m17404_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m25940(__this, ___capacity, method) (( void (*) (List_1_t1121 *, int32_t, const MethodInfo*))List_1__ctor_m17406_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m25941(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17408_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25942(__this, method) (( Object_t* (*) (List_1_t1121 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7430_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25943(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1121 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25944(__this, method) (( Object_t * (*) (List_1_t1121 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25945(__this, ___item, method) (( int32_t (*) (List_1_t1121 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7418_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25946(__this, ___item, method) (( bool (*) (List_1_t1121 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7420_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25947(__this, ___item, method) (( int32_t (*) (List_1_t1121 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7421_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25948(__this, ___index, ___item, method) (( void (*) (List_1_t1121 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7422_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25949(__this, ___item, method) (( void (*) (List_1_t1121 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7423_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25950(__this, method) (( bool (*) (List_1_t1121 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25951(__this, method) (( bool (*) (List_1_t1121 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7411_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25952(__this, method) (( Object_t * (*) (List_1_t1121 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25953(__this, method) (( bool (*) (List_1_t1121 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25954(__this, method) (( bool (*) (List_1_t1121 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7415_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25955(__this, ___index, method) (( Object_t * (*) (List_1_t1121 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7416_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25956(__this, ___index, ___value, method) (( void (*) (List_1_t1121 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7417_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m25957(__this, ___item, method) (( void (*) (List_1_t1121 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Add_m7426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25958(__this, ___newCount, method) (( void (*) (List_1_t1121 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17426_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25959(__this, ___collection, method) (( void (*) (List_1_t1121 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25960(__this, ___enumerable, method) (( void (*) (List_1_t1121 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17430_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25961(__this, ___collection, method) (( void (*) (List_1_t1121 *, Object_t*, const MethodInfo*))List_1_AddRange_m17432_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte[]>::AsReadOnly()
#define List_1_AsReadOnly_m25962(__this, method) (( ReadOnlyCollection_1_t3910 * (*) (List_1_t1121 *, const MethodInfo*))List_1_AsReadOnly_m17434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m25963(__this, method) (( void (*) (List_1_t1121 *, const MethodInfo*))List_1_Clear_m7419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m25964(__this, ___item, method) (( bool (*) (List_1_t1121 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Contains_m7427_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25965(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1121 *, ByteU5BU5DU5BU5D_t1878*, int32_t, const MethodInfo*))List_1_CopyTo_m7428_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte[]>::Find(System.Predicate`1<T>)
#define List_1_Find_m25966(__this, ___match, method) (( ByteU5BU5D_t36* (*) (List_1_t1121 *, Predicate_1_t3911 *, const MethodInfo*))List_1_Find_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25967(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3911 *, const MethodInfo*))List_1_CheckMatch_m17441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25968(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1121 *, int32_t, int32_t, Predicate_1_t3911 *, const MethodInfo*))List_1_GetIndex_m17443_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m25969(__this, method) (( Enumerator_t3912  (*) (List_1_t1121 *, const MethodInfo*))List_1_GetEnumerator_m3281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m25970(__this, ___item, method) (( int32_t (*) (List_1_t1121 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_IndexOf_m7431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25971(__this, ___start, ___delta, method) (( void (*) (List_1_t1121 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17446_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25972(__this, ___index, method) (( void (*) (List_1_t1121 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m25973(__this, ___index, ___item, method) (( void (*) (List_1_t1121 *, int32_t, ByteU5BU5D_t36*, const MethodInfo*))List_1_Insert_m7432_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25974(__this, ___collection, method) (( void (*) (List_1_t1121 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17451_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m25975(__this, ___item, method) (( bool (*) (List_1_t1121 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Remove_m7429_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25976(__this, ___match, method) (( int32_t (*) (List_1_t1121 *, Predicate_1_t3911 *, const MethodInfo*))List_1_RemoveAll_m17454_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25977(__this, ___index, method) (( void (*) (List_1_t1121 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7424_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Reverse()
#define List_1_Reverse_m25978(__this, method) (( void (*) (List_1_t1121 *, const MethodInfo*))List_1_Reverse_m17457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort()
#define List_1_Sort_m25979(__this, method) (( void (*) (List_1_t1121 *, const MethodInfo*))List_1_Sort_m17459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25980(__this, ___comparer, method) (( void (*) (List_1_t1121 *, Object_t*, const MethodInfo*))List_1_Sort_m17461_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25981(__this, ___comparison, method) (( void (*) (List_1_t1121 *, Comparison_1_t3913 *, const MethodInfo*))List_1_Sort_m17463_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m25982(__this, method) (( ByteU5BU5DU5BU5D_t1878* (*) (List_1_t1121 *, const MethodInfo*))List_1_ToArray_m17465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::TrimExcess()
#define List_1_TrimExcess_m25983(__this, method) (( void (*) (List_1_t1121 *, const MethodInfo*))List_1_TrimExcess_m17467_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m25984(__this, method) (( int32_t (*) (List_1_t1121 *, const MethodInfo*))List_1_get_Capacity_m17469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25985(__this, ___value, method) (( void (*) (List_1_t1121 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17471_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m25986(__this, method) (( int32_t (*) (List_1_t1121 *, const MethodInfo*))List_1_get_Count_m7410_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m25987(__this, ___index, method) (( ByteU5BU5D_t36* (*) (List_1_t1121 *, int32_t, const MethodInfo*))List_1_get_Item_m7433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m25988(__this, ___index, ___value, method) (( void (*) (List_1_t1121 *, int32_t, ByteU5BU5D_t36*, const MethodInfo*))List_1_set_Item_m7434_gshared)(__this, ___index, ___value, method)

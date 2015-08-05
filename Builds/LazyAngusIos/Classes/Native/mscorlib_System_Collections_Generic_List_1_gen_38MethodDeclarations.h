#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>
struct List_1_t1392;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1391;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerable_1_t1393;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t5998;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerator_1_t8996;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t8992;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>
struct ReadOnlyCollection_1_t6007;
// System.Predicate`1<System.Tuple`2<System.Type,System.Type>>
struct Predicate_1_t6008;
// System.Collections.Generic.IComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IComparer_1_t9000;
// System.Comparison`1<System.Tuple`2<System.Type,System.Type>>
struct Comparison_1_t6009;
// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<System.Type,System.Type>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m31240(__this, method) (( void (*) (List_1_t1392 *, const MethodInfo*))List_1__ctor_m3481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31241(__this, ___collection, method) (( void (*) (List_1_t1392 *, Object_t*, const MethodInfo*))List_1__ctor_m7218_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Int32)
#define List_1__ctor_m31242(__this, ___capacity, method) (( void (*) (List_1_t1392 *, int32_t, const MethodInfo*))List_1__ctor_m21318_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(T[],System.Int32)
#define List_1__ctor_m31243(__this, ___data, ___size, method) (( void (*) (List_1_t1392 *, Tuple_2U5BU5D_t5998*, int32_t, const MethodInfo*))List_1__ctor_m21320_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.cctor()
#define List_1__cctor_m31244(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21322_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31245(__this, method) (( Object_t* (*) (List_1_t1392 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31246(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1392 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10094_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31247(__this, method) (( Object_t * (*) (List_1_t1392 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10090_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31248(__this, ___item, method) (( int32_t (*) (List_1_t1392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10099_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31249(__this, ___item, method) (( bool (*) (List_1_t1392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10101_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31250(__this, ___item, method) (( int32_t (*) (List_1_t1392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31251(__this, ___index, ___item, method) (( void (*) (List_1_t1392 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10103_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31252(__this, ___item, method) (( void (*) (List_1_t1392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31253(__this, method) (( bool (*) (List_1_t1392 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31254(__this, method) (( bool (*) (List_1_t1392 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10092_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31255(__this, method) (( Object_t * (*) (List_1_t1392 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31256(__this, method) (( bool (*) (List_1_t1392 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31257(__this, method) (( bool (*) (List_1_t1392 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10096_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31258(__this, ___index, method) (( Object_t * (*) (List_1_t1392 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10097_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31259(__this, ___index, ___value, method) (( void (*) (List_1_t1392 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10098_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Add(T)
#define List_1_Add_m31260(__this, ___item, method) (( void (*) (List_1_t1392 *, Tuple_2_t1391 *, const MethodInfo*))List_1_Add_m10107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31261(__this, ___newCount, method) (( void (*) (List_1_t1392 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21340_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31262(__this, ___idx, ___count, method) (( void (*) (List_1_t1392 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21342_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31263(__this, ___collection, method) (( void (*) (List_1_t1392 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31264(__this, ___enumerable, method) (( void (*) (List_1_t1392 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21346_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31265(__this, ___collection, method) (( void (*) (List_1_t1392 *, Object_t*, const MethodInfo*))List_1_AddRange_m21348_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AsReadOnly()
#define List_1_AsReadOnly_m31266(__this, method) (( ReadOnlyCollection_1_t6007 * (*) (List_1_t1392 *, const MethodInfo*))List_1_AsReadOnly_m21350_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Clear()
#define List_1_Clear_m31267(__this, method) (( void (*) (List_1_t1392 *, const MethodInfo*))List_1_Clear_m10100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Contains(T)
#define List_1_Contains_m31268(__this, ___item, method) (( bool (*) (List_1_t1392 *, Tuple_2_t1391 *, const MethodInfo*))List_1_Contains_m10108_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31269(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1392 *, Tuple_2U5BU5D_t5998*, int32_t, const MethodInfo*))List_1_CopyTo_m10109_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Find(System.Predicate`1<T>)
#define List_1_Find_m31270(__this, ___match, method) (( Tuple_2_t1391 * (*) (List_1_t1392 *, Predicate_1_t6008 *, const MethodInfo*))List_1_Find_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31271(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6008 *, const MethodInfo*))List_1_CheckMatch_m21357_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31272(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1392 *, int32_t, int32_t, Predicate_1_t6008 *, const MethodInfo*))List_1_GetIndex_m21359_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetEnumerator()
#define List_1_GetEnumerator_m7130(__this, method) (( Enumerator_t1395  (*) (List_1_t1392 *, const MethodInfo*))List_1_GetEnumerator_m3637_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31273(__this, ___index, ___count, method) (( List_1_t1392 * (*) (List_1_t1392 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21361_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::IndexOf(T)
#define List_1_IndexOf_m31274(__this, ___item, method) (( int32_t (*) (List_1_t1392 *, Tuple_2_t1391 *, const MethodInfo*))List_1_IndexOf_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31275(__this, ___start, ___delta, method) (( void (*) (List_1_t1392 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21364_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31276(__this, ___index, method) (( void (*) (List_1_t1392 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21366_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Insert(System.Int32,T)
#define List_1_Insert_m31277(__this, ___index, ___item, method) (( void (*) (List_1_t1392 *, int32_t, Tuple_2_t1391 *, const MethodInfo*))List_1_Insert_m10113_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31278(__this, ___collection, method) (( void (*) (List_1_t1392 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21369_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31279(__this, ___index, ___collection, method) (( void (*) (List_1_t1392 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21371_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31280(__this, ___index, ___collection, method) (( void (*) (List_1_t1392 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21373_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31281(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1392 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21375_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Remove(T)
#define List_1_Remove_m31282(__this, ___item, method) (( bool (*) (List_1_t1392 *, Tuple_2_t1391 *, const MethodInfo*))List_1_Remove_m10110_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31283(__this, ___match, method) (( int32_t (*) (List_1_t1392 *, Predicate_1_t6008 *, const MethodInfo*))List_1_RemoveAll_m21378_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31284(__this, ___index, method) (( void (*) (List_1_t1392 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31285(__this, ___index, ___count, method) (( void (*) (List_1_t1392 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21381_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Reverse()
#define List_1_Reverse_m31286(__this, method) (( void (*) (List_1_t1392 *, const MethodInfo*))List_1_Reverse_m21383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort()
#define List_1_Sort_m31287(__this, method) (( void (*) (List_1_t1392 *, const MethodInfo*))List_1_Sort_m21385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31288(__this, ___comparer, method) (( void (*) (List_1_t1392 *, Object_t*, const MethodInfo*))List_1_Sort_m21387_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31289(__this, ___comparison, method) (( void (*) (List_1_t1392 *, Comparison_1_t6009 *, const MethodInfo*))List_1_Sort_m21389_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::ToArray()
#define List_1_ToArray_m31290(__this, method) (( Tuple_2U5BU5D_t5998* (*) (List_1_t1392 *, const MethodInfo*))List_1_ToArray_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::TrimExcess()
#define List_1_TrimExcess_m31291(__this, method) (( void (*) (List_1_t1392 *, const MethodInfo*))List_1_TrimExcess_m21393_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Capacity()
#define List_1_get_Capacity_m31292(__this, method) (( int32_t (*) (List_1_t1392 *, const MethodInfo*))List_1_get_Capacity_m21395_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31293(__this, ___value, method) (( void (*) (List_1_t1392 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21397_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Count()
#define List_1_get_Count_m31294(__this, method) (( int32_t (*) (List_1_t1392 *, const MethodInfo*))List_1_get_Count_m10091_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Item(System.Int32)
#define List_1_get_Item_m31295(__this, ___index, method) (( Tuple_2_t1391 * (*) (List_1_t1392 *, int32_t, const MethodInfo*))List_1_get_Item_m10114_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Item(System.Int32,T)
#define List_1_set_Item_m31296(__this, ___index, ___value, method) (( void (*) (List_1_t1392 *, int32_t, Tuple_2_t1391 *, const MethodInfo*))List_1_set_Item_m10115_gshared)(__this, ___index, ___value, method)

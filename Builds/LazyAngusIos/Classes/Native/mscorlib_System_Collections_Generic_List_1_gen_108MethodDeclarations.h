#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct List_1_t8335;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerable_1_t10025;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8334;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7832;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ICollection_1_t10026;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct ReadOnlyCollection_1_t8337;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t8338;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IComparer_1_t10027;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t8340;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_91.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_gen_107MethodDeclarations.h"
#define List_1__ctor_m57549(__this, method) (( void (*) (List_1_t8335 *, const MethodInfo*))List_1__ctor_m57396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m57550(__this, ___collection, method) (( void (*) (List_1_t8335 *, Object_t*, const MethodInfo*))List_1__ctor_m57397_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Int32)
#define List_1__ctor_m57551(__this, ___capacity, method) (( void (*) (List_1_t8335 *, int32_t, const MethodInfo*))List_1__ctor_m57398_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(T[],System.Int32)
#define List_1__ctor_m57552(__this, ___data, ___size, method) (( void (*) (List_1_t8335 *, KeyValuePair_2U5BU5D_t8334*, int32_t, const MethodInfo*))List_1__ctor_m57399_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.cctor()
#define List_1__cctor_m57553(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m57400_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57554(__this, method) (( Object_t* (*) (List_1_t8335 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m57555(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8335 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m57402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m57556(__this, method) (( Object_t * (*) (List_1_t8335 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m57403_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m57557(__this, ___item, method) (( int32_t (*) (List_1_t8335 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m57404_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m57558(__this, ___item, method) (( bool (*) (List_1_t8335 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m57405_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m57559(__this, ___item, method) (( int32_t (*) (List_1_t8335 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m57406_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m57560(__this, ___index, ___item, method) (( void (*) (List_1_t8335 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m57407_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m57561(__this, ___item, method) (( void (*) (List_1_t8335 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m57408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57562(__this, method) (( bool (*) (List_1_t8335 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57409_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m57563(__this, method) (( bool (*) (List_1_t8335 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m57410_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m57564(__this, method) (( Object_t * (*) (List_1_t8335 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m57411_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m57565(__this, method) (( bool (*) (List_1_t8335 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m57412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m57566(__this, method) (( bool (*) (List_1_t8335 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m57413_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m57567(__this, ___index, method) (( Object_t * (*) (List_1_t8335 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m57414_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m57568(__this, ___index, ___value, method) (( void (*) (List_1_t8335 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m57415_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Add(T)
#define List_1_Add_m57569(__this, ___item, method) (( void (*) (List_1_t8335 *, KeyValuePair_2_t7827 , const MethodInfo*))List_1_Add_m57416_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m57570(__this, ___newCount, method) (( void (*) (List_1_t8335 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m57417_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m57571(__this, ___idx, ___count, method) (( void (*) (List_1_t8335 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m57418_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m57572(__this, ___collection, method) (( void (*) (List_1_t8335 *, Object_t*, const MethodInfo*))List_1_AddCollection_m57419_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m57573(__this, ___enumerable, method) (( void (*) (List_1_t8335 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m57420_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m57574(__this, ___collection, method) (( void (*) (List_1_t8335 *, Object_t*, const MethodInfo*))List_1_AddRange_m57421_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::AsReadOnly()
#define List_1_AsReadOnly_m57575(__this, method) (( ReadOnlyCollection_1_t8337 * (*) (List_1_t8335 *, const MethodInfo*))List_1_AsReadOnly_m57422_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Clear()
#define List_1_Clear_m57576(__this, method) (( void (*) (List_1_t8335 *, const MethodInfo*))List_1_Clear_m57423_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Contains(T)
#define List_1_Contains_m57577(__this, ___item, method) (( bool (*) (List_1_t8335 *, KeyValuePair_2_t7827 , const MethodInfo*))List_1_Contains_m57424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m57578(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8335 *, KeyValuePair_2U5BU5D_t8334*, int32_t, const MethodInfo*))List_1_CopyTo_m57425_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Find(System.Predicate`1<T>)
#define List_1_Find_m57579(__this, ___match, method) (( KeyValuePair_2_t7827  (*) (List_1_t8335 *, Predicate_1_t8338 *, const MethodInfo*))List_1_Find_m57426_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m57580(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8338 *, const MethodInfo*))List_1_CheckMatch_m57427_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m57581(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8335 *, int32_t, int32_t, Predicate_1_t8338 *, const MethodInfo*))List_1_GetIndex_m57428_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetEnumerator()
#define List_1_GetEnumerator_m57582(__this, method) (( Enumerator_t8339  (*) (List_1_t8335 *, const MethodInfo*))List_1_GetEnumerator_m57429_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m57583(__this, ___index, ___count, method) (( List_1_t8335 * (*) (List_1_t8335 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m57430_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::IndexOf(T)
#define List_1_IndexOf_m57584(__this, ___item, method) (( int32_t (*) (List_1_t8335 *, KeyValuePair_2_t7827 , const MethodInfo*))List_1_IndexOf_m57431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m57585(__this, ___start, ___delta, method) (( void (*) (List_1_t8335 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m57432_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m57586(__this, ___index, method) (( void (*) (List_1_t8335 *, int32_t, const MethodInfo*))List_1_CheckIndex_m57433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Insert(System.Int32,T)
#define List_1_Insert_m57587(__this, ___index, ___item, method) (( void (*) (List_1_t8335 *, int32_t, KeyValuePair_2_t7827 , const MethodInfo*))List_1_Insert_m57434_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m57588(__this, ___collection, method) (( void (*) (List_1_t8335 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m57435_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m57589(__this, ___index, ___collection, method) (( void (*) (List_1_t8335 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m57436_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m57590(__this, ___index, ___collection, method) (( void (*) (List_1_t8335 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m57437_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m57591(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8335 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m57438_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Remove(T)
#define List_1_Remove_m57592(__this, ___item, method) (( bool (*) (List_1_t8335 *, KeyValuePair_2_t7827 , const MethodInfo*))List_1_Remove_m57439_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m57593(__this, ___match, method) (( int32_t (*) (List_1_t8335 *, Predicate_1_t8338 *, const MethodInfo*))List_1_RemoveAll_m57440_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m57594(__this, ___index, method) (( void (*) (List_1_t8335 *, int32_t, const MethodInfo*))List_1_RemoveAt_m57441_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m57595(__this, ___index, ___count, method) (( void (*) (List_1_t8335 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m57442_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Reverse()
#define List_1_Reverse_m57596(__this, method) (( void (*) (List_1_t8335 *, const MethodInfo*))List_1_Reverse_m57443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort()
#define List_1_Sort_m57597(__this, method) (( void (*) (List_1_t8335 *, const MethodInfo*))List_1_Sort_m57444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m57598(__this, ___comparer, method) (( void (*) (List_1_t8335 *, Object_t*, const MethodInfo*))List_1_Sort_m57445_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m57599(__this, ___comparison, method) (( void (*) (List_1_t8335 *, Comparison_1_t8340 *, const MethodInfo*))List_1_Sort_m57446_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::ToArray()
#define List_1_ToArray_m57600(__this, method) (( KeyValuePair_2U5BU5D_t8334* (*) (List_1_t8335 *, const MethodInfo*))List_1_ToArray_m57447_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::TrimExcess()
#define List_1_TrimExcess_m57601(__this, method) (( void (*) (List_1_t8335 *, const MethodInfo*))List_1_TrimExcess_m57448_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Capacity()
#define List_1_get_Capacity_m57602(__this, method) (( int32_t (*) (List_1_t8335 *, const MethodInfo*))List_1_get_Capacity_m57449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m57603(__this, ___value, method) (( void (*) (List_1_t8335 *, int32_t, const MethodInfo*))List_1_set_Capacity_m57450_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Count()
#define List_1_get_Count_m57604(__this, method) (( int32_t (*) (List_1_t8335 *, const MethodInfo*))List_1_get_Count_m57451_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::get_Item(System.Int32)
#define List_1_get_Item_m57605(__this, ___index, method) (( KeyValuePair_2_t7827  (*) (List_1_t8335 *, int32_t, const MethodInfo*))List_1_get_Item_m57452_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::set_Item(System.Int32,T)
#define List_1_set_Item_m57606(__this, ___index, ___value, method) (( void (*) (List_1_t8335 *, int32_t, KeyValuePair_2_t7827 , const MethodInfo*))List_1_set_Item_m57453_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct List_1_t7569;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerable_1_t9375;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7568;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7228;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ICollection_1_t9376;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct ReadOnlyCollection_1_t7571;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t7572;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IComparer_1_t9377;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t7574;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_81.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_gen_97MethodDeclarations.h"
#define List_1__ctor_m50503(__this, method) (( void (*) (List_1_t7569 *, const MethodInfo*))List_1__ctor_m50350_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m50504(__this, ___collection, method) (( void (*) (List_1_t7569 *, Object_t*, const MethodInfo*))List_1__ctor_m50351_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Int32)
#define List_1__ctor_m50505(__this, ___capacity, method) (( void (*) (List_1_t7569 *, int32_t, const MethodInfo*))List_1__ctor_m50352_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(T[],System.Int32)
#define List_1__ctor_m50506(__this, ___data, ___size, method) (( void (*) (List_1_t7569 *, KeyValuePair_2U5BU5D_t7568*, int32_t, const MethodInfo*))List_1__ctor_m50353_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.cctor()
#define List_1__cctor_m50507(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50354_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50508(__this, method) (( Object_t* (*) (List_1_t7569 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50355_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m50509(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7569 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50356_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50510(__this, method) (( Object_t * (*) (List_1_t7569 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50357_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m50511(__this, ___item, method) (( int32_t (*) (List_1_t7569 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50358_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m50512(__this, ___item, method) (( bool (*) (List_1_t7569 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50359_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m50513(__this, ___item, method) (( int32_t (*) (List_1_t7569 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50360_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m50514(__this, ___index, ___item, method) (( void (*) (List_1_t7569 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50361_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m50515(__this, ___item, method) (( void (*) (List_1_t7569 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50362_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50516(__this, method) (( bool (*) (List_1_t7569 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50363_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50517(__this, method) (( bool (*) (List_1_t7569 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50364_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m50518(__this, method) (( Object_t * (*) (List_1_t7569 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50365_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m50519(__this, method) (( bool (*) (List_1_t7569 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m50520(__this, method) (( bool (*) (List_1_t7569 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50367_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m50521(__this, ___index, method) (( Object_t * (*) (List_1_t7569 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50368_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m50522(__this, ___index, ___value, method) (( void (*) (List_1_t7569 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50369_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Add(T)
#define List_1_Add_m50523(__this, ___item, method) (( void (*) (List_1_t7569 *, KeyValuePair_2_t5543 , const MethodInfo*))List_1_Add_m50370_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m50524(__this, ___newCount, method) (( void (*) (List_1_t7569 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50371_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m50525(__this, ___idx, ___count, method) (( void (*) (List_1_t7569 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50372_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m50526(__this, ___collection, method) (( void (*) (List_1_t7569 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50373_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m50527(__this, ___enumerable, method) (( void (*) (List_1_t7569 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50374_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m50528(__this, ___collection, method) (( void (*) (List_1_t7569 *, Object_t*, const MethodInfo*))List_1_AddRange_m50375_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::AsReadOnly()
#define List_1_AsReadOnly_m50529(__this, method) (( ReadOnlyCollection_1_t7571 * (*) (List_1_t7569 *, const MethodInfo*))List_1_AsReadOnly_m50376_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear()
#define List_1_Clear_m50530(__this, method) (( void (*) (List_1_t7569 *, const MethodInfo*))List_1_Clear_m50377_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Contains(T)
#define List_1_Contains_m50531(__this, ___item, method) (( bool (*) (List_1_t7569 *, KeyValuePair_2_t5543 , const MethodInfo*))List_1_Contains_m50378_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m50532(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7569 *, KeyValuePair_2U5BU5D_t7568*, int32_t, const MethodInfo*))List_1_CopyTo_m50379_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Find(System.Predicate`1<T>)
#define List_1_Find_m50533(__this, ___match, method) (( KeyValuePair_2_t5543  (*) (List_1_t7569 *, Predicate_1_t7572 *, const MethodInfo*))List_1_Find_m50380_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m50534(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7572 *, const MethodInfo*))List_1_CheckMatch_m50381_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m50535(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7569 *, int32_t, int32_t, Predicate_1_t7572 *, const MethodInfo*))List_1_GetIndex_m50382_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetEnumerator()
#define List_1_GetEnumerator_m50536(__this, method) (( Enumerator_t7573  (*) (List_1_t7569 *, const MethodInfo*))List_1_GetEnumerator_m50383_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m50537(__this, ___index, ___count, method) (( List_1_t7569 * (*) (List_1_t7569 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50384_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::IndexOf(T)
#define List_1_IndexOf_m50538(__this, ___item, method) (( int32_t (*) (List_1_t7569 *, KeyValuePair_2_t5543 , const MethodInfo*))List_1_IndexOf_m50385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m50539(__this, ___start, ___delta, method) (( void (*) (List_1_t7569 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50386_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m50540(__this, ___index, method) (( void (*) (List_1_t7569 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Insert(System.Int32,T)
#define List_1_Insert_m50541(__this, ___index, ___item, method) (( void (*) (List_1_t7569 *, int32_t, KeyValuePair_2_t5543 , const MethodInfo*))List_1_Insert_m50388_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m50542(__this, ___collection, method) (( void (*) (List_1_t7569 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50389_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m50543(__this, ___index, ___collection, method) (( void (*) (List_1_t7569 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50390_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m50544(__this, ___index, ___collection, method) (( void (*) (List_1_t7569 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50391_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m50545(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7569 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50392_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Remove(T)
#define List_1_Remove_m50546(__this, ___item, method) (( bool (*) (List_1_t7569 *, KeyValuePair_2_t5543 , const MethodInfo*))List_1_Remove_m50393_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m50547(__this, ___match, method) (( int32_t (*) (List_1_t7569 *, Predicate_1_t7572 *, const MethodInfo*))List_1_RemoveAll_m50394_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m50548(__this, ___index, method) (( void (*) (List_1_t7569 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50395_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m50549(__this, ___index, ___count, method) (( void (*) (List_1_t7569 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50396_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Reverse()
#define List_1_Reverse_m50550(__this, method) (( void (*) (List_1_t7569 *, const MethodInfo*))List_1_Reverse_m50397_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort()
#define List_1_Sort_m50551(__this, method) (( void (*) (List_1_t7569 *, const MethodInfo*))List_1_Sort_m50398_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m50552(__this, ___comparer, method) (( void (*) (List_1_t7569 *, Object_t*, const MethodInfo*))List_1_Sort_m50399_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m50553(__this, ___comparison, method) (( void (*) (List_1_t7569 *, Comparison_1_t7574 *, const MethodInfo*))List_1_Sort_m50400_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::ToArray()
#define List_1_ToArray_m50554(__this, method) (( KeyValuePair_2U5BU5D_t7568* (*) (List_1_t7569 *, const MethodInfo*))List_1_ToArray_m50401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::TrimExcess()
#define List_1_TrimExcess_m50555(__this, method) (( void (*) (List_1_t7569 *, const MethodInfo*))List_1_TrimExcess_m50402_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Capacity()
#define List_1_get_Capacity_m50556(__this, method) (( int32_t (*) (List_1_t7569 *, const MethodInfo*))List_1_get_Capacity_m50403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m50557(__this, ___value, method) (( void (*) (List_1_t7569 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50404_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count()
#define List_1_get_Count_m50558(__this, method) (( int32_t (*) (List_1_t7569 *, const MethodInfo*))List_1_get_Count_m50405_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Item(System.Int32)
#define List_1_get_Item_m50559(__this, ___index, method) (( KeyValuePair_2_t5543  (*) (List_1_t7569 *, int32_t, const MethodInfo*))List_1_get_Item_m50406_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::set_Item(System.Int32,T)
#define List_1_set_Item_m50560(__this, ___index, ___value, method) (( void (*) (List_1_t7569 *, int32_t, KeyValuePair_2_t5543 , const MethodInfo*))List_1_set_Item_m50407_gshared)(__this, ___index, ___value, method)

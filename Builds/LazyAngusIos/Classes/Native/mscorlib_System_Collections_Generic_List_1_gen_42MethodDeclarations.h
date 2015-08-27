#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>
struct List_1_t1443;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1442;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerable_1_t1444;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t6077;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerator_1_t9097;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t9093;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>
struct ReadOnlyCollection_1_t6086;
// System.Predicate`1<System.Tuple`2<System.Type,System.Type>>
struct Predicate_1_t6087;
// System.Collections.Generic.IComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IComparer_1_t9101;
// System.Comparison`1<System.Tuple`2<System.Type,System.Type>>
struct Comparison_1_t6088;
// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<System.Type,System.Type>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m32045(__this, method) (( void (*) (List_1_t1443 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m32046(__this, ___collection, method) (( void (*) (List_1_t1443 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Int32)
#define List_1__ctor_m32047(__this, ___capacity, method) (( void (*) (List_1_t1443 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(T[],System.Int32)
#define List_1__ctor_m32048(__this, ___data, ___size, method) (( void (*) (List_1_t1443 *, Tuple_2U5BU5D_t6077*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.cctor()
#define List_1__cctor_m32049(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32050(__this, method) (( Object_t* (*) (List_1_t1443 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m32051(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1443 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32052(__this, method) (( Object_t * (*) (List_1_t1443 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m32053(__this, ___item, method) (( int32_t (*) (List_1_t1443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m32054(__this, ___item, method) (( bool (*) (List_1_t1443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m32055(__this, ___item, method) (( int32_t (*) (List_1_t1443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m32056(__this, ___index, ___item, method) (( void (*) (List_1_t1443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m32057(__this, ___item, method) (( void (*) (List_1_t1443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32058(__this, method) (( bool (*) (List_1_t1443 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32059(__this, method) (( bool (*) (List_1_t1443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m32060(__this, method) (( Object_t * (*) (List_1_t1443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m32061(__this, method) (( bool (*) (List_1_t1443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m32062(__this, method) (( bool (*) (List_1_t1443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m32063(__this, ___index, method) (( Object_t * (*) (List_1_t1443 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m32064(__this, ___index, ___value, method) (( void (*) (List_1_t1443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Add(T)
#define List_1_Add_m32065(__this, ___item, method) (( void (*) (List_1_t1443 *, Tuple_2_t1442 *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m32066(__this, ___newCount, method) (( void (*) (List_1_t1443 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m32067(__this, ___idx, ___count, method) (( void (*) (List_1_t1443 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m32068(__this, ___collection, method) (( void (*) (List_1_t1443 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m32069(__this, ___enumerable, method) (( void (*) (List_1_t1443 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m32070(__this, ___collection, method) (( void (*) (List_1_t1443 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AsReadOnly()
#define List_1_AsReadOnly_m32071(__this, method) (( ReadOnlyCollection_1_t6086 * (*) (List_1_t1443 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Clear()
#define List_1_Clear_m32072(__this, method) (( void (*) (List_1_t1443 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Contains(T)
#define List_1_Contains_m32073(__this, ___item, method) (( bool (*) (List_1_t1443 *, Tuple_2_t1442 *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m32074(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1443 *, Tuple_2U5BU5D_t6077*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Find(System.Predicate`1<T>)
#define List_1_Find_m32075(__this, ___match, method) (( Tuple_2_t1442 * (*) (List_1_t1443 *, Predicate_1_t6087 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m32076(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6087 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m32077(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1443 *, int32_t, int32_t, Predicate_1_t6087 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetEnumerator()
#define List_1_GetEnumerator_m7403(__this, method) (( Enumerator_t1446  (*) (List_1_t1443 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m32078(__this, ___index, ___count, method) (( List_1_t1443 * (*) (List_1_t1443 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::IndexOf(T)
#define List_1_IndexOf_m32079(__this, ___item, method) (( int32_t (*) (List_1_t1443 *, Tuple_2_t1442 *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m32080(__this, ___start, ___delta, method) (( void (*) (List_1_t1443 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m32081(__this, ___index, method) (( void (*) (List_1_t1443 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Insert(System.Int32,T)
#define List_1_Insert_m32082(__this, ___index, ___item, method) (( void (*) (List_1_t1443 *, int32_t, Tuple_2_t1442 *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m32083(__this, ___collection, method) (( void (*) (List_1_t1443 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m32084(__this, ___index, ___collection, method) (( void (*) (List_1_t1443 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m32085(__this, ___index, ___collection, method) (( void (*) (List_1_t1443 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m32086(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1443 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Remove(T)
#define List_1_Remove_m32087(__this, ___item, method) (( bool (*) (List_1_t1443 *, Tuple_2_t1442 *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m32088(__this, ___match, method) (( int32_t (*) (List_1_t1443 *, Predicate_1_t6087 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m32089(__this, ___index, method) (( void (*) (List_1_t1443 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m32090(__this, ___index, ___count, method) (( void (*) (List_1_t1443 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Reverse()
#define List_1_Reverse_m32091(__this, method) (( void (*) (List_1_t1443 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort()
#define List_1_Sort_m32092(__this, method) (( void (*) (List_1_t1443 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m32093(__this, ___comparer, method) (( void (*) (List_1_t1443 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m32094(__this, ___comparison, method) (( void (*) (List_1_t1443 *, Comparison_1_t6088 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::ToArray()
#define List_1_ToArray_m32095(__this, method) (( Tuple_2U5BU5D_t6077* (*) (List_1_t1443 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::TrimExcess()
#define List_1_TrimExcess_m32096(__this, method) (( void (*) (List_1_t1443 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Capacity()
#define List_1_get_Capacity_m32097(__this, method) (( int32_t (*) (List_1_t1443 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m32098(__this, ___value, method) (( void (*) (List_1_t1443 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Count()
#define List_1_get_Count_m32099(__this, method) (( int32_t (*) (List_1_t1443 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Item(System.Int32)
#define List_1_get_Item_m32100(__this, ___index, method) (( Tuple_2_t1442 * (*) (List_1_t1443 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Item(System.Int32,T)
#define List_1_set_Item_m32101(__this, ___index, ___value, method) (( void (*) (List_1_t1443 *, int32_t, Tuple_2_t1442 *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

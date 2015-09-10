#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct List_1_t8088;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerable_1_t10018;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8087;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7805;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ICollection_1_t10019;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ReadOnlyCollection_1_t8090;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Predicate_1_t8091;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IComparer_1_t10020;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Comparison_1_t8093;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_83.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_gen_99MethodDeclarations.h"
#define List_1__ctor_m54523(__this, method) (( void (*) (List_1_t8088 *, const MethodInfo*))List_1__ctor_m54370_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m54524(__this, ___collection, method) (( void (*) (List_1_t8088 *, Object_t*, const MethodInfo*))List_1__ctor_m54371_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Int32)
#define List_1__ctor_m54525(__this, ___capacity, method) (( void (*) (List_1_t8088 *, int32_t, const MethodInfo*))List_1__ctor_m54372_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(T[],System.Int32)
#define List_1__ctor_m54526(__this, ___data, ___size, method) (( void (*) (List_1_t8088 *, KeyValuePair_2U5BU5D_t8087*, int32_t, const MethodInfo*))List_1__ctor_m54373_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.cctor()
#define List_1__cctor_m54527(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54374_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54528(__this, method) (( Object_t* (*) (List_1_t8088 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54375_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m54529(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8088 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54376_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54530(__this, method) (( Object_t * (*) (List_1_t8088 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54377_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m54531(__this, ___item, method) (( int32_t (*) (List_1_t8088 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54378_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m54532(__this, ___item, method) (( bool (*) (List_1_t8088 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54379_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m54533(__this, ___item, method) (( int32_t (*) (List_1_t8088 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m54534(__this, ___index, ___item, method) (( void (*) (List_1_t8088 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54381_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m54535(__this, ___item, method) (( void (*) (List_1_t8088 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54382_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54536(__this, method) (( bool (*) (List_1_t8088 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54383_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54537(__this, method) (( bool (*) (List_1_t8088 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54384_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m54538(__this, method) (( Object_t * (*) (List_1_t8088 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54385_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m54539(__this, method) (( bool (*) (List_1_t8088 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54386_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m54540(__this, method) (( bool (*) (List_1_t8088 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54387_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m54541(__this, ___index, method) (( Object_t * (*) (List_1_t8088 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m54542(__this, ___index, ___value, method) (( void (*) (List_1_t8088 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54389_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Add(T)
#define List_1_Add_m54543(__this, ___item, method) (( void (*) (List_1_t8088 *, KeyValuePair_2_t7800 , const MethodInfo*))List_1_Add_m54390_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m54544(__this, ___newCount, method) (( void (*) (List_1_t8088 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54391_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m54545(__this, ___idx, ___count, method) (( void (*) (List_1_t8088 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54392_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m54546(__this, ___collection, method) (( void (*) (List_1_t8088 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54393_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m54547(__this, ___enumerable, method) (( void (*) (List_1_t8088 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54394_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m54548(__this, ___collection, method) (( void (*) (List_1_t8088 *, Object_t*, const MethodInfo*))List_1_AddRange_m54395_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::AsReadOnly()
#define List_1_AsReadOnly_m54549(__this, method) (( ReadOnlyCollection_1_t8090 * (*) (List_1_t8088 *, const MethodInfo*))List_1_AsReadOnly_m54396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Clear()
#define List_1_Clear_m54550(__this, method) (( void (*) (List_1_t8088 *, const MethodInfo*))List_1_Clear_m54397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Contains(T)
#define List_1_Contains_m54551(__this, ___item, method) (( bool (*) (List_1_t8088 *, KeyValuePair_2_t7800 , const MethodInfo*))List_1_Contains_m54398_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m54552(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8088 *, KeyValuePair_2U5BU5D_t8087*, int32_t, const MethodInfo*))List_1_CopyTo_m54399_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Find(System.Predicate`1<T>)
#define List_1_Find_m54553(__this, ___match, method) (( KeyValuePair_2_t7800  (*) (List_1_t8088 *, Predicate_1_t8091 *, const MethodInfo*))List_1_Find_m54400_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m54554(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8091 *, const MethodInfo*))List_1_CheckMatch_m54401_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m54555(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8088 *, int32_t, int32_t, Predicate_1_t8091 *, const MethodInfo*))List_1_GetIndex_m54402_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetEnumerator()
#define List_1_GetEnumerator_m54556(__this, method) (( Enumerator_t8092  (*) (List_1_t8088 *, const MethodInfo*))List_1_GetEnumerator_m54403_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m54557(__this, ___index, ___count, method) (( List_1_t8088 * (*) (List_1_t8088 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54404_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::IndexOf(T)
#define List_1_IndexOf_m54558(__this, ___item, method) (( int32_t (*) (List_1_t8088 *, KeyValuePair_2_t7800 , const MethodInfo*))List_1_IndexOf_m54405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m54559(__this, ___start, ___delta, method) (( void (*) (List_1_t8088 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54406_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m54560(__this, ___index, method) (( void (*) (List_1_t8088 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Insert(System.Int32,T)
#define List_1_Insert_m54561(__this, ___index, ___item, method) (( void (*) (List_1_t8088 *, int32_t, KeyValuePair_2_t7800 , const MethodInfo*))List_1_Insert_m54408_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m54562(__this, ___collection, method) (( void (*) (List_1_t8088 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54409_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m54563(__this, ___index, ___collection, method) (( void (*) (List_1_t8088 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54410_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m54564(__this, ___index, ___collection, method) (( void (*) (List_1_t8088 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54411_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m54565(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8088 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54412_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Remove(T)
#define List_1_Remove_m54566(__this, ___item, method) (( bool (*) (List_1_t8088 *, KeyValuePair_2_t7800 , const MethodInfo*))List_1_Remove_m54413_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m54567(__this, ___match, method) (( int32_t (*) (List_1_t8088 *, Predicate_1_t8091 *, const MethodInfo*))List_1_RemoveAll_m54414_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m54568(__this, ___index, method) (( void (*) (List_1_t8088 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54415_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m54569(__this, ___index, ___count, method) (( void (*) (List_1_t8088 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54416_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Reverse()
#define List_1_Reverse_m54570(__this, method) (( void (*) (List_1_t8088 *, const MethodInfo*))List_1_Reverse_m54417_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort()
#define List_1_Sort_m54571(__this, method) (( void (*) (List_1_t8088 *, const MethodInfo*))List_1_Sort_m54418_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m54572(__this, ___comparer, method) (( void (*) (List_1_t8088 *, Object_t*, const MethodInfo*))List_1_Sort_m54419_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m54573(__this, ___comparison, method) (( void (*) (List_1_t8088 *, Comparison_1_t8093 *, const MethodInfo*))List_1_Sort_m54420_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::ToArray()
#define List_1_ToArray_m54574(__this, method) (( KeyValuePair_2U5BU5D_t8087* (*) (List_1_t8088 *, const MethodInfo*))List_1_ToArray_m54421_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::TrimExcess()
#define List_1_TrimExcess_m54575(__this, method) (( void (*) (List_1_t8088 *, const MethodInfo*))List_1_TrimExcess_m54422_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Capacity()
#define List_1_get_Capacity_m54576(__this, method) (( int32_t (*) (List_1_t8088 *, const MethodInfo*))List_1_get_Capacity_m54423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m54577(__this, ___value, method) (( void (*) (List_1_t8088 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54424_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Count()
#define List_1_get_Count_m54578(__this, method) (( int32_t (*) (List_1_t8088 *, const MethodInfo*))List_1_get_Count_m54425_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Item(System.Int32)
#define List_1_get_Item_m54579(__this, ___index, method) (( KeyValuePair_2_t7800  (*) (List_1_t8088 *, int32_t, const MethodInfo*))List_1_get_Item_m54426_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::set_Item(System.Int32,T)
#define List_1_set_Item_m54580(__this, ___index, ___value, method) (( void (*) (List_1_t8088 *, int32_t, KeyValuePair_2_t7800 , const MethodInfo*))List_1_set_Item_m54427_gshared)(__this, ___index, ___value, method)

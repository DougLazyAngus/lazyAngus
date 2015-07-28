#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t2829;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2828;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>
struct IEnumerable_1_t9579;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t8483;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t9580;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>
struct ICollection_1_t9581;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
struct ReadOnlyCollection_1_t8485;
// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t8486;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.PersistentCall>
struct IComparer_1_t9582;
// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t8487;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9873(__this, method) (( void (*) (List_1_t2829 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m61899(__this, ___collection, method) (( void (*) (List_1_t2829 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m61900(__this, ___capacity, method) (( void (*) (List_1_t2829 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(T[],System.Int32)
#define List_1__ctor_m61901(__this, ___data, ___size, method) (( void (*) (List_1_t2829 *, PersistentCallU5BU5D_t8483*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m61902(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61903(__this, method) (( Object_t* (*) (List_1_t2829 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m61904(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2829 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m61905(__this, method) (( Object_t * (*) (List_1_t2829 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m61906(__this, ___item, method) (( int32_t (*) (List_1_t2829 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m61907(__this, ___item, method) (( bool (*) (List_1_t2829 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m61908(__this, ___item, method) (( int32_t (*) (List_1_t2829 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m61909(__this, ___index, ___item, method) (( void (*) (List_1_t2829 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m61910(__this, ___item, method) (( void (*) (List_1_t2829 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61911(__this, method) (( bool (*) (List_1_t2829 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m61912(__this, method) (( bool (*) (List_1_t2829 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m61913(__this, method) (( Object_t * (*) (List_1_t2829 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m61914(__this, method) (( bool (*) (List_1_t2829 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m61915(__this, method) (( bool (*) (List_1_t2829 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m61916(__this, ___index, method) (( Object_t * (*) (List_1_t2829 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m61917(__this, ___index, ___value, method) (( void (*) (List_1_t2829 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m61918(__this, ___item, method) (( void (*) (List_1_t2829 *, PersistentCall_t2828 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m61919(__this, ___newCount, method) (( void (*) (List_1_t2829 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m61920(__this, ___idx, ___count, method) (( void (*) (List_1_t2829 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m61921(__this, ___collection, method) (( void (*) (List_1_t2829 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m61922(__this, ___enumerable, method) (( void (*) (List_1_t2829 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m61923(__this, ___collection, method) (( void (*) (List_1_t2829 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AsReadOnly()
#define List_1_AsReadOnly_m61924(__this, method) (( ReadOnlyCollection_1_t8485 * (*) (List_1_t2829 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m61925(__this, method) (( void (*) (List_1_t2829 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m61926(__this, ___item, method) (( bool (*) (List_1_t2829 *, PersistentCall_t2828 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m61927(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2829 *, PersistentCallU5BU5D_t8483*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m61928(__this, ___match, method) (( PersistentCall_t2828 * (*) (List_1_t2829 *, Predicate_1_t8486 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m61929(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8486 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m61930(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2829 *, int32_t, int32_t, Predicate_1_t8486 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m9874(__this, method) (( Enumerator_t2903  (*) (List_1_t2829 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m61931(__this, ___index, ___count, method) (( List_1_t2829 * (*) (List_1_t2829 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m61932(__this, ___item, method) (( int32_t (*) (List_1_t2829 *, PersistentCall_t2828 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m61933(__this, ___start, ___delta, method) (( void (*) (List_1_t2829 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m61934(__this, ___index, method) (( void (*) (List_1_t2829 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m61935(__this, ___index, ___item, method) (( void (*) (List_1_t2829 *, int32_t, PersistentCall_t2828 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m61936(__this, ___collection, method) (( void (*) (List_1_t2829 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m61937(__this, ___index, ___collection, method) (( void (*) (List_1_t2829 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m61938(__this, ___index, ___collection, method) (( void (*) (List_1_t2829 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m61939(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2829 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m61940(__this, ___item, method) (( bool (*) (List_1_t2829 *, PersistentCall_t2828 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m61941(__this, ___match, method) (( int32_t (*) (List_1_t2829 *, Predicate_1_t8486 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m61942(__this, ___index, method) (( void (*) (List_1_t2829 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m61943(__this, ___index, ___count, method) (( void (*) (List_1_t2829 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Reverse()
#define List_1_Reverse_m61944(__this, method) (( void (*) (List_1_t2829 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort()
#define List_1_Sort_m61945(__this, method) (( void (*) (List_1_t2829 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m61946(__this, ___comparer, method) (( void (*) (List_1_t2829 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m61947(__this, ___comparison, method) (( void (*) (List_1_t2829 *, Comparison_1_t8487 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m61948(__this, method) (( PersistentCallU5BU5D_t8483* (*) (List_1_t2829 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::TrimExcess()
#define List_1_TrimExcess_m61949(__this, method) (( void (*) (List_1_t2829 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m61950(__this, method) (( int32_t (*) (List_1_t2829 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m61951(__this, ___value, method) (( void (*) (List_1_t2829 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m61952(__this, method) (( int32_t (*) (List_1_t2829 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m61953(__this, ___index, method) (( PersistentCall_t2828 * (*) (List_1_t2829 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m61954(__this, ___index, ___value, method) (( void (*) (List_1_t2829 *, int32_t, PersistentCall_t2828 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t5940;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2165;
// System.Collections.Generic.IEnumerable`1<System.WeakReference>
struct IEnumerable_1_t8975;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t5939;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t8976;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.WeakReference>
struct ICollection_1_t8977;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>
struct ReadOnlyCollection_1_t5941;
// System.Predicate`1<System.WeakReference>
struct Predicate_1_t5942;
// System.Collections.Generic.IComparer`1<System.WeakReference>
struct IComparer_1_t8978;
// System.Comparison`1<System.WeakReference>
struct Comparison_1_t5944;
// System.Collections.Generic.List`1/Enumerator<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m30475(__this, method) (( void (*) (List_1_t5940 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30476(__this, ___collection, method) (( void (*) (List_1_t5940 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Int32)
#define List_1__ctor_m30477(__this, ___capacity, method) (( void (*) (List_1_t5940 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(T[],System.Int32)
#define List_1__ctor_m30478(__this, ___data, ___size, method) (( void (*) (List_1_t5940 *, WeakReferenceU5BU5D_t5939*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.cctor()
#define List_1__cctor_m30479(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30480(__this, method) (( Object_t* (*) (List_1_t5940 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30481(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5940 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30482(__this, method) (( Object_t * (*) (List_1_t5940 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30483(__this, ___item, method) (( int32_t (*) (List_1_t5940 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30484(__this, ___item, method) (( bool (*) (List_1_t5940 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30485(__this, ___item, method) (( int32_t (*) (List_1_t5940 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30486(__this, ___index, ___item, method) (( void (*) (List_1_t5940 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30487(__this, ___item, method) (( void (*) (List_1_t5940 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30488(__this, method) (( bool (*) (List_1_t5940 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30489(__this, method) (( bool (*) (List_1_t5940 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30490(__this, method) (( Object_t * (*) (List_1_t5940 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30491(__this, method) (( bool (*) (List_1_t5940 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30492(__this, method) (( bool (*) (List_1_t5940 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30493(__this, ___index, method) (( Object_t * (*) (List_1_t5940 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30494(__this, ___index, ___value, method) (( void (*) (List_1_t5940 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(T)
#define List_1_Add_m30495(__this, ___item, method) (( void (*) (List_1_t5940 *, WeakReference_t2165 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30496(__this, ___newCount, method) (( void (*) (List_1_t5940 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30497(__this, ___idx, ___count, method) (( void (*) (List_1_t5940 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30498(__this, ___collection, method) (( void (*) (List_1_t5940 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30499(__this, ___enumerable, method) (( void (*) (List_1_t5940 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30500(__this, ___collection, method) (( void (*) (List_1_t5940 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.WeakReference>::AsReadOnly()
#define List_1_AsReadOnly_m30501(__this, method) (( ReadOnlyCollection_1_t5941 * (*) (List_1_t5940 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Clear()
#define List_1_Clear_m30502(__this, method) (( void (*) (List_1_t5940 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Contains(T)
#define List_1_Contains_m30503(__this, ___item, method) (( bool (*) (List_1_t5940 *, WeakReference_t2165 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30504(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5940 *, WeakReferenceU5BU5D_t5939*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.WeakReference>::Find(System.Predicate`1<T>)
#define List_1_Find_m30505(__this, ___match, method) (( WeakReference_t2165 * (*) (List_1_t5940 *, Predicate_1_t5942 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30506(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5942 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30507(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5940 *, int32_t, int32_t, Predicate_1_t5942 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
#define List_1_GetEnumerator_m30508(__this, method) (( Enumerator_t5943  (*) (List_1_t5940 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30509(__this, ___index, ___count, method) (( List_1_t5940 * (*) (List_1_t5940 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::IndexOf(T)
#define List_1_IndexOf_m30510(__this, ___item, method) (( int32_t (*) (List_1_t5940 *, WeakReference_t2165 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30511(__this, ___start, ___delta, method) (( void (*) (List_1_t5940 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30512(__this, ___index, method) (( void (*) (List_1_t5940 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Insert(System.Int32,T)
#define List_1_Insert_m30513(__this, ___index, ___item, method) (( void (*) (List_1_t5940 *, int32_t, WeakReference_t2165 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30514(__this, ___collection, method) (( void (*) (List_1_t5940 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30515(__this, ___index, ___collection, method) (( void (*) (List_1_t5940 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30516(__this, ___index, ___collection, method) (( void (*) (List_1_t5940 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30517(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5940 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(T)
#define List_1_Remove_m30518(__this, ___item, method) (( bool (*) (List_1_t5940 *, WeakReference_t2165 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30519(__this, ___match, method) (( int32_t (*) (List_1_t5940 *, Predicate_1_t5942 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30520(__this, ___index, method) (( void (*) (List_1_t5940 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30521(__this, ___index, ___count, method) (( void (*) (List_1_t5940 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Reverse()
#define List_1_Reverse_m30522(__this, method) (( void (*) (List_1_t5940 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort()
#define List_1_Sort_m30523(__this, method) (( void (*) (List_1_t5940 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30524(__this, ___comparer, method) (( void (*) (List_1_t5940 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30525(__this, ___comparison, method) (( void (*) (List_1_t5940 *, Comparison_1_t5944 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.WeakReference>::ToArray()
#define List_1_ToArray_m30526(__this, method) (( WeakReferenceU5BU5D_t5939* (*) (List_1_t5940 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::TrimExcess()
#define List_1_TrimExcess_m30527(__this, method) (( void (*) (List_1_t5940 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Capacity()
#define List_1_get_Capacity_m30528(__this, method) (( int32_t (*) (List_1_t5940 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30529(__this, ___value, method) (( void (*) (List_1_t5940 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Count()
#define List_1_get_Count_m30530(__this, method) (( int32_t (*) (List_1_t5940 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.WeakReference>::get_Item(System.Int32)
#define List_1_get_Item_m30531(__this, ___index, method) (( WeakReference_t2165 * (*) (List_1_t5940 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Item(System.Int32,T)
#define List_1_set_Item_m30532(__this, ___index, ___value, method) (( void (*) (List_1_t5940 *, int32_t, WeakReference_t2165 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

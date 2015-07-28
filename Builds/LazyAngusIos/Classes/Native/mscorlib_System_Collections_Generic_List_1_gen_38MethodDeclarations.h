#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>
struct List_1_t1382;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1381;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerable_1_t1383;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t5987;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerator_1_t8985;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t8981;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>
struct ReadOnlyCollection_1_t5996;
// System.Predicate`1<System.Tuple`2<System.Type,System.Type>>
struct Predicate_1_t5997;
// System.Collections.Generic.IComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IComparer_1_t8989;
// System.Comparison`1<System.Tuple`2<System.Type,System.Type>>
struct Comparison_1_t5998;
// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<System.Type,System.Type>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m31170(__this, method) (( void (*) (List_1_t1382 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31171(__this, ___collection, method) (( void (*) (List_1_t1382 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Int32)
#define List_1__ctor_m31172(__this, ___capacity, method) (( void (*) (List_1_t1382 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(T[],System.Int32)
#define List_1__ctor_m31173(__this, ___data, ___size, method) (( void (*) (List_1_t1382 *, Tuple_2U5BU5D_t5987*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.cctor()
#define List_1__cctor_m31174(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31175(__this, method) (( Object_t* (*) (List_1_t1382 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31176(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1382 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31177(__this, method) (( Object_t * (*) (List_1_t1382 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31178(__this, ___item, method) (( int32_t (*) (List_1_t1382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31179(__this, ___item, method) (( bool (*) (List_1_t1382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31180(__this, ___item, method) (( int32_t (*) (List_1_t1382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31181(__this, ___index, ___item, method) (( void (*) (List_1_t1382 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31182(__this, ___item, method) (( void (*) (List_1_t1382 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31183(__this, method) (( bool (*) (List_1_t1382 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31184(__this, method) (( bool (*) (List_1_t1382 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31185(__this, method) (( Object_t * (*) (List_1_t1382 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31186(__this, method) (( bool (*) (List_1_t1382 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31187(__this, method) (( bool (*) (List_1_t1382 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31188(__this, ___index, method) (( Object_t * (*) (List_1_t1382 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31189(__this, ___index, ___value, method) (( void (*) (List_1_t1382 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Add(T)
#define List_1_Add_m31190(__this, ___item, method) (( void (*) (List_1_t1382 *, Tuple_2_t1381 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31191(__this, ___newCount, method) (( void (*) (List_1_t1382 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31192(__this, ___idx, ___count, method) (( void (*) (List_1_t1382 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31193(__this, ___collection, method) (( void (*) (List_1_t1382 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31194(__this, ___enumerable, method) (( void (*) (List_1_t1382 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31195(__this, ___collection, method) (( void (*) (List_1_t1382 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AsReadOnly()
#define List_1_AsReadOnly_m31196(__this, method) (( ReadOnlyCollection_1_t5996 * (*) (List_1_t1382 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Clear()
#define List_1_Clear_m31197(__this, method) (( void (*) (List_1_t1382 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Contains(T)
#define List_1_Contains_m31198(__this, ___item, method) (( bool (*) (List_1_t1382 *, Tuple_2_t1381 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31199(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1382 *, Tuple_2U5BU5D_t5987*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Find(System.Predicate`1<T>)
#define List_1_Find_m31200(__this, ___match, method) (( Tuple_2_t1381 * (*) (List_1_t1382 *, Predicate_1_t5997 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31201(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5997 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31202(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1382 *, int32_t, int32_t, Predicate_1_t5997 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetEnumerator()
#define List_1_GetEnumerator_m7064(__this, method) (( Enumerator_t1385  (*) (List_1_t1382 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31203(__this, ___index, ___count, method) (( List_1_t1382 * (*) (List_1_t1382 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::IndexOf(T)
#define List_1_IndexOf_m31204(__this, ___item, method) (( int32_t (*) (List_1_t1382 *, Tuple_2_t1381 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31205(__this, ___start, ___delta, method) (( void (*) (List_1_t1382 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31206(__this, ___index, method) (( void (*) (List_1_t1382 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Insert(System.Int32,T)
#define List_1_Insert_m31207(__this, ___index, ___item, method) (( void (*) (List_1_t1382 *, int32_t, Tuple_2_t1381 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31208(__this, ___collection, method) (( void (*) (List_1_t1382 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31209(__this, ___index, ___collection, method) (( void (*) (List_1_t1382 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31210(__this, ___index, ___collection, method) (( void (*) (List_1_t1382 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31211(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1382 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Remove(T)
#define List_1_Remove_m31212(__this, ___item, method) (( bool (*) (List_1_t1382 *, Tuple_2_t1381 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31213(__this, ___match, method) (( int32_t (*) (List_1_t1382 *, Predicate_1_t5997 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31214(__this, ___index, method) (( void (*) (List_1_t1382 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31215(__this, ___index, ___count, method) (( void (*) (List_1_t1382 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Reverse()
#define List_1_Reverse_m31216(__this, method) (( void (*) (List_1_t1382 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort()
#define List_1_Sort_m31217(__this, method) (( void (*) (List_1_t1382 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31218(__this, ___comparer, method) (( void (*) (List_1_t1382 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31219(__this, ___comparison, method) (( void (*) (List_1_t1382 *, Comparison_1_t5998 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::ToArray()
#define List_1_ToArray_m31220(__this, method) (( Tuple_2U5BU5D_t5987* (*) (List_1_t1382 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::TrimExcess()
#define List_1_TrimExcess_m31221(__this, method) (( void (*) (List_1_t1382 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Capacity()
#define List_1_get_Capacity_m31222(__this, method) (( int32_t (*) (List_1_t1382 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31223(__this, ___value, method) (( void (*) (List_1_t1382 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Count()
#define List_1_get_Count_m31224(__this, method) (( int32_t (*) (List_1_t1382 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Item(System.Int32)
#define List_1_get_Item_m31225(__this, ___index, method) (( Tuple_2_t1381 * (*) (List_1_t1382 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Item(System.Int32,T)
#define List_1_set_Item_m31226(__this, ___index, ___value, method) (( void (*) (List_1_t1382 *, int32_t, Tuple_2_t1381 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

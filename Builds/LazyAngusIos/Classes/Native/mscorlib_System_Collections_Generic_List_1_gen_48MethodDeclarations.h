#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t2710;
// System.Object
struct Object_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t2711;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rigidbody2D>
struct IEnumerable_1_t9503;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t8338;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Rigidbody2D>
struct IEnumerator_1_t9504;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>
struct ICollection_1_t9505;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
struct ReadOnlyCollection_1_t8340;
// System.Predicate`1<UnityEngine.Rigidbody2D>
struct Predicate_1_t8341;
// System.Collections.Generic.IComparer`1<UnityEngine.Rigidbody2D>
struct IComparer_1_t9506;
// System.Comparison`1<UnityEngine.Rigidbody2D>
struct Comparison_1_t8343;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_96.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9796(__this, method) (( void (*) (List_1_t2710 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m59880(__this, ___collection, method) (( void (*) (List_1_t2710 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Int32)
#define List_1__ctor_m59881(__this, ___capacity, method) (( void (*) (List_1_t2710 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(T[],System.Int32)
#define List_1__ctor_m59882(__this, ___data, ___size, method) (( void (*) (List_1_t2710 *, Rigidbody2DU5BU5D_t8338*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.cctor()
#define List_1__cctor_m59883(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59884(__this, method) (( Object_t* (*) (List_1_t2710 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m59885(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2710 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59886(__this, method) (( Object_t * (*) (List_1_t2710 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m59887(__this, ___item, method) (( int32_t (*) (List_1_t2710 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m59888(__this, ___item, method) (( bool (*) (List_1_t2710 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m59889(__this, ___item, method) (( int32_t (*) (List_1_t2710 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m59890(__this, ___index, ___item, method) (( void (*) (List_1_t2710 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m59891(__this, ___item, method) (( void (*) (List_1_t2710 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59892(__this, method) (( bool (*) (List_1_t2710 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59893(__this, method) (( bool (*) (List_1_t2710 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m59894(__this, method) (( Object_t * (*) (List_1_t2710 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m59895(__this, method) (( bool (*) (List_1_t2710 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m59896(__this, method) (( bool (*) (List_1_t2710 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m59897(__this, ___index, method) (( Object_t * (*) (List_1_t2710 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m59898(__this, ___index, ___value, method) (( void (*) (List_1_t2710 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Add(T)
#define List_1_Add_m59899(__this, ___item, method) (( void (*) (List_1_t2710 *, Rigidbody2D_t2711 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m59900(__this, ___newCount, method) (( void (*) (List_1_t2710 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m59901(__this, ___idx, ___count, method) (( void (*) (List_1_t2710 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m59902(__this, ___collection, method) (( void (*) (List_1_t2710 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m59903(__this, ___enumerable, method) (( void (*) (List_1_t2710 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m59904(__this, ___collection, method) (( void (*) (List_1_t2710 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AsReadOnly()
#define List_1_AsReadOnly_m59905(__this, method) (( ReadOnlyCollection_1_t8340 * (*) (List_1_t2710 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Clear()
#define List_1_Clear_m59906(__this, method) (( void (*) (List_1_t2710 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Contains(T)
#define List_1_Contains_m59907(__this, ___item, method) (( bool (*) (List_1_t2710 *, Rigidbody2D_t2711 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m59908(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2710 *, Rigidbody2DU5BU5D_t8338*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Find(System.Predicate`1<T>)
#define List_1_Find_m59909(__this, ___match, method) (( Rigidbody2D_t2711 * (*) (List_1_t2710 *, Predicate_1_t8341 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m59910(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8341 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m59911(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2710 *, int32_t, int32_t, Predicate_1_t8341 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetEnumerator()
#define List_1_GetEnumerator_m59912(__this, method) (( Enumerator_t8342  (*) (List_1_t2710 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m59913(__this, ___index, ___count, method) (( List_1_t2710 * (*) (List_1_t2710 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::IndexOf(T)
#define List_1_IndexOf_m59914(__this, ___item, method) (( int32_t (*) (List_1_t2710 *, Rigidbody2D_t2711 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m59915(__this, ___start, ___delta, method) (( void (*) (List_1_t2710 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m59916(__this, ___index, method) (( void (*) (List_1_t2710 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
#define List_1_Insert_m59917(__this, ___index, ___item, method) (( void (*) (List_1_t2710 *, int32_t, Rigidbody2D_t2711 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m59918(__this, ___collection, method) (( void (*) (List_1_t2710 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m59919(__this, ___index, ___collection, method) (( void (*) (List_1_t2710 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m59920(__this, ___index, ___collection, method) (( void (*) (List_1_t2710 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m59921(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2710 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Remove(T)
#define List_1_Remove_m59922(__this, ___item, method) (( bool (*) (List_1_t2710 *, Rigidbody2D_t2711 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m59923(__this, ___match, method) (( int32_t (*) (List_1_t2710 *, Predicate_1_t8341 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m59924(__this, ___index, method) (( void (*) (List_1_t2710 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m59925(__this, ___index, ___count, method) (( void (*) (List_1_t2710 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Reverse()
#define List_1_Reverse_m59926(__this, method) (( void (*) (List_1_t2710 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort()
#define List_1_Sort_m59927(__this, method) (( void (*) (List_1_t2710 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m59928(__this, ___comparer, method) (( void (*) (List_1_t2710 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m59929(__this, ___comparison, method) (( void (*) (List_1_t2710 *, Comparison_1_t8343 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::ToArray()
#define List_1_ToArray_m59930(__this, method) (( Rigidbody2DU5BU5D_t8338* (*) (List_1_t2710 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::TrimExcess()
#define List_1_TrimExcess_m59931(__this, method) (( void (*) (List_1_t2710 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Capacity()
#define List_1_get_Capacity_m59932(__this, method) (( int32_t (*) (List_1_t2710 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m59933(__this, ___value, method) (( void (*) (List_1_t2710 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Count()
#define List_1_get_Count_m59934(__this, method) (( int32_t (*) (List_1_t2710 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
#define List_1_get_Item_m59935(__this, ___index, method) (( Rigidbody2D_t2711 * (*) (List_1_t2710 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
#define List_1_set_Item_m59936(__this, ___index, ___value, method) (( void (*) (List_1_t2710 *, int32_t, Rigidbody2D_t2711 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

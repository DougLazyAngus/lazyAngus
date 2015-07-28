#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t903;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t838;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t8932;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t5806;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t8933;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t8934;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t5808;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t5809;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Selectable>
struct IComparer_1_t8935;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t5811;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5792(__this, method) (( void (*) (List_1_t903 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28996(__this, ___collection, method) (( void (*) (List_1_t903 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m28997(__this, ___capacity, method) (( void (*) (List_1_t903 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(T[],System.Int32)
#define List_1__ctor_m28998(__this, ___data, ___size, method) (( void (*) (List_1_t903 *, SelectableU5BU5D_t5806*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m28999(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29000(__this, method) (( Object_t* (*) (List_1_t903 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29001(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t903 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29002(__this, method) (( Object_t * (*) (List_1_t903 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29003(__this, ___item, method) (( int32_t (*) (List_1_t903 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29004(__this, ___item, method) (( bool (*) (List_1_t903 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29005(__this, ___item, method) (( int32_t (*) (List_1_t903 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29006(__this, ___index, ___item, method) (( void (*) (List_1_t903 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29007(__this, ___item, method) (( void (*) (List_1_t903 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29008(__this, method) (( bool (*) (List_1_t903 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29009(__this, method) (( bool (*) (List_1_t903 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29010(__this, method) (( Object_t * (*) (List_1_t903 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29011(__this, method) (( bool (*) (List_1_t903 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29012(__this, method) (( bool (*) (List_1_t903 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29013(__this, ___index, method) (( Object_t * (*) (List_1_t903 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29014(__this, ___index, ___value, method) (( void (*) (List_1_t903 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m29015(__this, ___item, method) (( void (*) (List_1_t903 *, Selectable_t838 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29016(__this, ___newCount, method) (( void (*) (List_1_t903 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29017(__this, ___idx, ___count, method) (( void (*) (List_1_t903 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29018(__this, ___collection, method) (( void (*) (List_1_t903 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29019(__this, ___enumerable, method) (( void (*) (List_1_t903 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29020(__this, ___collection, method) (( void (*) (List_1_t903 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m29021(__this, method) (( ReadOnlyCollection_1_t5808 * (*) (List_1_t903 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m29022(__this, method) (( void (*) (List_1_t903 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m29023(__this, ___item, method) (( bool (*) (List_1_t903 *, Selectable_t838 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29024(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t903 *, SelectableU5BU5D_t5806*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m29025(__this, ___match, method) (( Selectable_t838 * (*) (List_1_t903 *, Predicate_1_t5809 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29026(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5809 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29027(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t903 *, int32_t, int32_t, Predicate_1_t5809 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m29028(__this, method) (( Enumerator_t5810  (*) (List_1_t903 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29029(__this, ___index, ___count, method) (( List_1_t903 * (*) (List_1_t903 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m29030(__this, ___item, method) (( int32_t (*) (List_1_t903 *, Selectable_t838 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29031(__this, ___start, ___delta, method) (( void (*) (List_1_t903 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29032(__this, ___index, method) (( void (*) (List_1_t903 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m29033(__this, ___index, ___item, method) (( void (*) (List_1_t903 *, int32_t, Selectable_t838 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29034(__this, ___collection, method) (( void (*) (List_1_t903 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29035(__this, ___index, ___collection, method) (( void (*) (List_1_t903 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29036(__this, ___index, ___collection, method) (( void (*) (List_1_t903 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29037(__this, ___index, ___enumerable, method) (( void (*) (List_1_t903 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m29038(__this, ___item, method) (( bool (*) (List_1_t903 *, Selectable_t838 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29039(__this, ___match, method) (( int32_t (*) (List_1_t903 *, Predicate_1_t5809 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29040(__this, ___index, method) (( void (*) (List_1_t903 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29041(__this, ___index, ___count, method) (( void (*) (List_1_t903 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m29042(__this, method) (( void (*) (List_1_t903 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m29043(__this, method) (( void (*) (List_1_t903 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29044(__this, ___comparer, method) (( void (*) (List_1_t903 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29045(__this, ___comparison, method) (( void (*) (List_1_t903 *, Comparison_1_t5811 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m29046(__this, method) (( SelectableU5BU5D_t5806* (*) (List_1_t903 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m29047(__this, method) (( void (*) (List_1_t903 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m29048(__this, method) (( int32_t (*) (List_1_t903 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29049(__this, ___value, method) (( void (*) (List_1_t903 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m29050(__this, method) (( int32_t (*) (List_1_t903 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m29051(__this, ___index, method) (( Selectable_t838 * (*) (List_1_t903 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m29052(__this, ___index, ___value, method) (( void (*) (List_1_t903 *, int32_t, Selectable_t838 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

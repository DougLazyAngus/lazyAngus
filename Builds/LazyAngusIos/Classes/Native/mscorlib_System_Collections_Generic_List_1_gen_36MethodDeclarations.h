﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t918;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t917;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t980;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t5828;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>
struct IEnumerator_1_t8944;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>
struct ICollection_1_t8945;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
struct ReadOnlyCollection_1_t5830;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t919;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Toggle>
struct IComparer_1_t8946;
// System.Comparison`1<UnityEngine.UI.Toggle>
struct Comparison_1_t5832;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5824(__this, method) (( void (*) (List_1_t918 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29324(__this, ___collection, method) (( void (*) (List_1_t918 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Int32)
#define List_1__ctor_m29325(__this, ___capacity, method) (( void (*) (List_1_t918 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(T[],System.Int32)
#define List_1__ctor_m29326(__this, ___data, ___size, method) (( void (*) (List_1_t918 *, ToggleU5BU5D_t5828*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.cctor()
#define List_1__cctor_m29327(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29328(__this, method) (( Object_t* (*) (List_1_t918 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29329(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t918 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29330(__this, method) (( Object_t * (*) (List_1_t918 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29331(__this, ___item, method) (( int32_t (*) (List_1_t918 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29332(__this, ___item, method) (( bool (*) (List_1_t918 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29333(__this, ___item, method) (( int32_t (*) (List_1_t918 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29334(__this, ___index, ___item, method) (( void (*) (List_1_t918 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29335(__this, ___item, method) (( void (*) (List_1_t918 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29336(__this, method) (( bool (*) (List_1_t918 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29337(__this, method) (( bool (*) (List_1_t918 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29338(__this, method) (( Object_t * (*) (List_1_t918 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29339(__this, method) (( bool (*) (List_1_t918 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29340(__this, method) (( bool (*) (List_1_t918 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29341(__this, ___index, method) (( Object_t * (*) (List_1_t918 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29342(__this, ___index, ___value, method) (( void (*) (List_1_t918 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
#define List_1_Add_m29343(__this, ___item, method) (( void (*) (List_1_t918 *, Toggle_t917 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29344(__this, ___newCount, method) (( void (*) (List_1_t918 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29345(__this, ___idx, ___count, method) (( void (*) (List_1_t918 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29346(__this, ___collection, method) (( void (*) (List_1_t918 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29347(__this, ___enumerable, method) (( void (*) (List_1_t918 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29348(__this, ___collection, method) (( void (*) (List_1_t918 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AsReadOnly()
#define List_1_AsReadOnly_m29349(__this, method) (( ReadOnlyCollection_1_t5830 * (*) (List_1_t918 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Clear()
#define List_1_Clear_m29350(__this, method) (( void (*) (List_1_t918 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(T)
#define List_1_Contains_m29351(__this, ___item, method) (( bool (*) (List_1_t918 *, Toggle_t917 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29352(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t918 *, ToggleU5BU5D_t5828*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<T>)
#define List_1_Find_m5826(__this, ___match, method) (( Toggle_t917 * (*) (List_1_t918 *, Predicate_1_t919 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29353(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t919 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29354(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t918 *, int32_t, int32_t, Predicate_1_t919 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
#define List_1_GetEnumerator_m29355(__this, method) (( Enumerator_t5831  (*) (List_1_t918 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29356(__this, ___index, ___count, method) (( List_1_t918 * (*) (List_1_t918 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::IndexOf(T)
#define List_1_IndexOf_m29357(__this, ___item, method) (( int32_t (*) (List_1_t918 *, Toggle_t917 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29358(__this, ___start, ___delta, method) (( void (*) (List_1_t918 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29359(__this, ___index, method) (( void (*) (List_1_t918 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
#define List_1_Insert_m29360(__this, ___index, ___item, method) (( void (*) (List_1_t918 *, int32_t, Toggle_t917 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29361(__this, ___collection, method) (( void (*) (List_1_t918 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29362(__this, ___index, ___collection, method) (( void (*) (List_1_t918 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29363(__this, ___index, ___collection, method) (( void (*) (List_1_t918 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29364(__this, ___index, ___enumerable, method) (( void (*) (List_1_t918 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
#define List_1_Remove_m29365(__this, ___item, method) (( bool (*) (List_1_t918 *, Toggle_t917 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29366(__this, ___match, method) (( int32_t (*) (List_1_t918 *, Predicate_1_t919 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29367(__this, ___index, method) (( void (*) (List_1_t918 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29368(__this, ___index, ___count, method) (( void (*) (List_1_t918 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Reverse()
#define List_1_Reverse_m29369(__this, method) (( void (*) (List_1_t918 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort()
#define List_1_Sort_m29370(__this, method) (( void (*) (List_1_t918 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29371(__this, ___comparer, method) (( void (*) (List_1_t918 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29372(__this, ___comparison, method) (( void (*) (List_1_t918 *, Comparison_1_t5832 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::ToArray()
#define List_1_ToArray_m29373(__this, method) (( ToggleU5BU5D_t5828* (*) (List_1_t918 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::TrimExcess()
#define List_1_TrimExcess_m29374(__this, method) (( void (*) (List_1_t918 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Capacity()
#define List_1_get_Capacity_m29375(__this, method) (( int32_t (*) (List_1_t918 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29376(__this, ___value, method) (( void (*) (List_1_t918 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
#define List_1_get_Count_m29377(__this, method) (( int32_t (*) (List_1_t918 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
#define List_1_get_Item_m29378(__this, ___index, method) (( Toggle_t917 * (*) (List_1_t918 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#define List_1_set_Item_m29379(__this, ___index, ___value, method) (( void (*) (List_1_t918 *, int32_t, Toggle_t917 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

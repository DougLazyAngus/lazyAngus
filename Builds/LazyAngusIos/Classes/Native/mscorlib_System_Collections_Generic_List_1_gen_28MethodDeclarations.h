#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t994;
// System.Object
struct Object_t;
// UnityEngine.UI.Text
struct Text_t465;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
struct IEnumerable_1_t8899;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t5749;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>
struct IEnumerator_1_t8898;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
struct ICollection_1_t8900;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
struct ReadOnlyCollection_1_t5751;
// System.Predicate`1<UnityEngine.UI.Text>
struct Predicate_1_t5752;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Text>
struct IComparer_1_t8901;
// System.Comparison`1<UnityEngine.UI.Text>
struct Comparison_1_t5754;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5567(__this, method) (( void (*) (List_1_t994 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28180(__this, ___collection, method) (( void (*) (List_1_t994 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Int32)
#define List_1__ctor_m28181(__this, ___capacity, method) (( void (*) (List_1_t994 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(T[],System.Int32)
#define List_1__ctor_m28182(__this, ___data, ___size, method) (( void (*) (List_1_t994 *, TextU5BU5D_t5749*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.cctor()
#define List_1__cctor_m28183(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28184(__this, method) (( Object_t* (*) (List_1_t994 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28185(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t994 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28186(__this, method) (( Object_t * (*) (List_1_t994 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28187(__this, ___item, method) (( int32_t (*) (List_1_t994 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28188(__this, ___item, method) (( bool (*) (List_1_t994 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28189(__this, ___item, method) (( int32_t (*) (List_1_t994 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28190(__this, ___index, ___item, method) (( void (*) (List_1_t994 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28191(__this, ___item, method) (( void (*) (List_1_t994 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28192(__this, method) (( bool (*) (List_1_t994 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28193(__this, method) (( bool (*) (List_1_t994 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28194(__this, method) (( Object_t * (*) (List_1_t994 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28195(__this, method) (( bool (*) (List_1_t994 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28196(__this, method) (( bool (*) (List_1_t994 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28197(__this, ___index, method) (( Object_t * (*) (List_1_t994 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28198(__this, ___index, ___value, method) (( void (*) (List_1_t994 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
#define List_1_Add_m28199(__this, ___item, method) (( void (*) (List_1_t994 *, Text_t465 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28200(__this, ___newCount, method) (( void (*) (List_1_t994 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28201(__this, ___idx, ___count, method) (( void (*) (List_1_t994 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28202(__this, ___collection, method) (( void (*) (List_1_t994 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28203(__this, ___enumerable, method) (( void (*) (List_1_t994 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28204(__this, ___collection, method) (( void (*) (List_1_t994 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::AsReadOnly()
#define List_1_AsReadOnly_m28205(__this, method) (( ReadOnlyCollection_1_t5751 * (*) (List_1_t994 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
#define List_1_Clear_m28206(__this, method) (( void (*) (List_1_t994 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Contains(T)
#define List_1_Contains_m28207(__this, ___item, method) (( bool (*) (List_1_t994 *, Text_t465 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28208(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t994 *, TextU5BU5D_t5749*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::Find(System.Predicate`1<T>)
#define List_1_Find_m28209(__this, ___match, method) (( Text_t465 * (*) (List_1_t994 *, Predicate_1_t5752 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28210(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5752 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28211(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t994 *, int32_t, int32_t, Predicate_1_t5752 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
#define List_1_GetEnumerator_m28212(__this, method) (( Enumerator_t5753  (*) (List_1_t994 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28213(__this, ___index, ___count, method) (( List_1_t994 * (*) (List_1_t994 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::IndexOf(T)
#define List_1_IndexOf_m28214(__this, ___item, method) (( int32_t (*) (List_1_t994 *, Text_t465 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28215(__this, ___start, ___delta, method) (( void (*) (List_1_t994 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28216(__this, ___index, method) (( void (*) (List_1_t994 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
#define List_1_Insert_m28217(__this, ___index, ___item, method) (( void (*) (List_1_t994 *, int32_t, Text_t465 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28218(__this, ___collection, method) (( void (*) (List_1_t994 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28219(__this, ___index, ___collection, method) (( void (*) (List_1_t994 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28220(__this, ___index, ___collection, method) (( void (*) (List_1_t994 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28221(__this, ___index, ___enumerable, method) (( void (*) (List_1_t994 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Remove(T)
#define List_1_Remove_m28222(__this, ___item, method) (( bool (*) (List_1_t994 *, Text_t465 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28223(__this, ___match, method) (( int32_t (*) (List_1_t994 *, Predicate_1_t5752 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28224(__this, ___index, method) (( void (*) (List_1_t994 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28225(__this, ___index, ___count, method) (( void (*) (List_1_t994 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Reverse()
#define List_1_Reverse_m28226(__this, method) (( void (*) (List_1_t994 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort()
#define List_1_Sort_m28227(__this, method) (( void (*) (List_1_t994 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28228(__this, ___comparer, method) (( void (*) (List_1_t994 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28229(__this, ___comparison, method) (( void (*) (List_1_t994 *, Comparison_1_t5754 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Text>::ToArray()
#define List_1_ToArray_m28230(__this, method) (( TextU5BU5D_t5749* (*) (List_1_t994 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::TrimExcess()
#define List_1_TrimExcess_m28231(__this, method) (( void (*) (List_1_t994 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Capacity()
#define List_1_get_Capacity_m28232(__this, method) (( int32_t (*) (List_1_t994 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28233(__this, ___value, method) (( void (*) (List_1_t994 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
#define List_1_get_Count_m28234(__this, method) (( int32_t (*) (List_1_t994 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
#define List_1_get_Item_m28235(__this, ___index, method) (( Text_t465 * (*) (List_1_t994 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#define List_1_set_Item_m28236(__this, ___index, ___value, method) (( void (*) (List_1_t994 *, int32_t, Text_t465 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

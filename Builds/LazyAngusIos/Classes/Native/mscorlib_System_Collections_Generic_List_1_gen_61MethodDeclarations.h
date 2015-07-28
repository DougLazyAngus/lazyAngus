#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t3964;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t3962;
// System.Collections.Generic.IEnumerable`1<System.Net.Cookie>
struct IEnumerable_1_t9612;
// System.Net.Cookie[]
struct CookieU5BU5D_t8556;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t9613;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Net.Cookie>
struct ICollection_1_t9614;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Net.Cookie>
struct ReadOnlyCollection_1_t8557;
// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t8558;
// System.Collections.Generic.IComparer`1<System.Net.Cookie>
struct IComparer_1_t4267;
// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t8559;
// System.Collections.Generic.List`1/Enumerator<System.Net.Cookie>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m14777(__this, method) (( void (*) (List_1_t3964 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m62933(__this, ___collection, method) (( void (*) (List_1_t3964 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Int32)
#define List_1__ctor_m62934(__this, ___capacity, method) (( void (*) (List_1_t3964 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(T[],System.Int32)
#define List_1__ctor_m62935(__this, ___data, ___size, method) (( void (*) (List_1_t3964 *, CookieU5BU5D_t8556*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.cctor()
#define List_1__cctor_m62936(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m62937(__this, method) (( Object_t* (*) (List_1_t3964 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m62938(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3964 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m62939(__this, method) (( Object_t * (*) (List_1_t3964 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m62940(__this, ___item, method) (( int32_t (*) (List_1_t3964 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m62941(__this, ___item, method) (( bool (*) (List_1_t3964 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m62942(__this, ___item, method) (( int32_t (*) (List_1_t3964 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m62943(__this, ___index, ___item, method) (( void (*) (List_1_t3964 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m62944(__this, ___item, method) (( void (*) (List_1_t3964 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62945(__this, method) (( bool (*) (List_1_t3964 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m62946(__this, method) (( bool (*) (List_1_t3964 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m62947(__this, method) (( Object_t * (*) (List_1_t3964 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m62948(__this, method) (( bool (*) (List_1_t3964 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m62949(__this, method) (( bool (*) (List_1_t3964 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m62950(__this, ___index, method) (( Object_t * (*) (List_1_t3964 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m62951(__this, ___index, ___value, method) (( void (*) (List_1_t3964 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Add(T)
#define List_1_Add_m62952(__this, ___item, method) (( void (*) (List_1_t3964 *, Cookie_t3962 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m62953(__this, ___newCount, method) (( void (*) (List_1_t3964 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m62954(__this, ___idx, ___count, method) (( void (*) (List_1_t3964 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m62955(__this, ___collection, method) (( void (*) (List_1_t3964 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m62956(__this, ___enumerable, method) (( void (*) (List_1_t3964 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m62957(__this, ___collection, method) (( void (*) (List_1_t3964 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::AsReadOnly()
#define List_1_AsReadOnly_m62958(__this, method) (( ReadOnlyCollection_1_t8557 * (*) (List_1_t3964 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Clear()
#define List_1_Clear_m62959(__this, method) (( void (*) (List_1_t3964 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Contains(T)
#define List_1_Contains_m62960(__this, ___item, method) (( bool (*) (List_1_t3964 *, Cookie_t3962 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m62961(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3964 *, CookieU5BU5D_t8556*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::Find(System.Predicate`1<T>)
#define List_1_Find_m62962(__this, ___match, method) (( Cookie_t3962 * (*) (List_1_t3964 *, Predicate_1_t8558 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m62963(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8558 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m62964(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3964 *, int32_t, int32_t, Predicate_1_t8558 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetEnumerator()
#define List_1_GetEnumerator_m14778(__this, method) (( Enumerator_t4143  (*) (List_1_t3964 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m62965(__this, ___index, ___count, method) (( List_1_t3964 * (*) (List_1_t3964 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::IndexOf(T)
#define List_1_IndexOf_m62966(__this, ___item, method) (( int32_t (*) (List_1_t3964 *, Cookie_t3962 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m62967(__this, ___start, ___delta, method) (( void (*) (List_1_t3964 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m62968(__this, ___index, method) (( void (*) (List_1_t3964 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Insert(System.Int32,T)
#define List_1_Insert_m62969(__this, ___index, ___item, method) (( void (*) (List_1_t3964 *, int32_t, Cookie_t3962 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m62970(__this, ___collection, method) (( void (*) (List_1_t3964 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m62971(__this, ___index, ___collection, method) (( void (*) (List_1_t3964 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m62972(__this, ___index, ___collection, method) (( void (*) (List_1_t3964 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m62973(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3964 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Remove(T)
#define List_1_Remove_m62974(__this, ___item, method) (( bool (*) (List_1_t3964 *, Cookie_t3962 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m62975(__this, ___match, method) (( int32_t (*) (List_1_t3964 *, Predicate_1_t8558 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m62976(__this, ___index, method) (( void (*) (List_1_t3964 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m62977(__this, ___index, ___count, method) (( void (*) (List_1_t3964 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Reverse()
#define List_1_Reverse_m62978(__this, method) (( void (*) (List_1_t3964 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort()
#define List_1_Sort_m62979(__this, method) (( void (*) (List_1_t3964 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m14779(__this, ___comparer, method) (( void (*) (List_1_t3964 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m62980(__this, ___comparison, method) (( void (*) (List_1_t3964 *, Comparison_1_t8559 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Net.Cookie>::ToArray()
#define List_1_ToArray_m62981(__this, method) (( CookieU5BU5D_t8556* (*) (List_1_t3964 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::TrimExcess()
#define List_1_TrimExcess_m62982(__this, method) (( void (*) (List_1_t3964 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Capacity()
#define List_1_get_Capacity_m62983(__this, method) (( int32_t (*) (List_1_t3964 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m62984(__this, ___value, method) (( void (*) (List_1_t3964 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Count()
#define List_1_get_Count_m62985(__this, method) (( int32_t (*) (List_1_t3964 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::get_Item(System.Int32)
#define List_1_get_Item_m62986(__this, ___index, method) (( Cookie_t3962 * (*) (List_1_t3964 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define List_1_set_Item_m62987(__this, ___index, ___value, method) (( void (*) (List_1_t3964 *, int32_t, Cookie_t3962 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

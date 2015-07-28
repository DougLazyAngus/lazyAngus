#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<TwitterUserInfo>
struct List_1_t321;
// System.Object
struct Object_t;
// TwitterUserInfo
struct TwitterUserInfo_t308;
// System.Collections.Generic.IEnumerable`1<TwitterUserInfo>
struct IEnumerable_1_t8807;
// TwitterUserInfo[]
struct TwitterUserInfoU5BU5D_t5565;
// System.Collections.Generic.IEnumerator`1<TwitterUserInfo>
struct IEnumerator_1_t8803;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<TwitterUserInfo>
struct ICollection_1_t8798;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TwitterUserInfo>
struct ReadOnlyCollection_1_t5577;
// System.Predicate`1<TwitterUserInfo>
struct Predicate_1_t5578;
// System.Collections.Generic.IComparer`1<TwitterUserInfo>
struct IComparer_1_t8808;
// System.Comparison`1<TwitterUserInfo>
struct Comparison_1_t5580;
// System.Collections.Generic.List`1/Enumerator<TwitterUserInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_22.h"

// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3630(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25330(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor(System.Int32)
#define List_1__ctor_m25331(__this, ___capacity, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m25332(__this, ___data, ___size, method) (( void (*) (List_1_t321 *, TwitterUserInfoU5BU5D_t5565*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::.cctor()
#define List_1__cctor_m25333(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25334(__this, method) (( Object_t* (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25335(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t321 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25336(__this, method) (( Object_t * (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25337(__this, ___item, method) (( int32_t (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25338(__this, ___item, method) (( bool (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25339(__this, ___item, method) (( int32_t (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25340(__this, ___index, ___item, method) (( void (*) (List_1_t321 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25341(__this, ___item, method) (( void (*) (List_1_t321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25342(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25343(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25344(__this, method) (( Object_t * (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25345(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25346(__this, method) (( bool (*) (List_1_t321 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25347(__this, ___index, method) (( Object_t * (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25348(__this, ___index, ___value, method) (( void (*) (List_1_t321 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Add(T)
#define List_1_Add_m25349(__this, ___item, method) (( void (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25350(__this, ___newCount, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25351(__this, ___idx, ___count, method) (( void (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25352(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25353(__this, ___enumerable, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25354(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<TwitterUserInfo>::AsReadOnly()
#define List_1_AsReadOnly_m25355(__this, method) (( ReadOnlyCollection_1_t5577 * (*) (List_1_t321 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Clear()
#define List_1_Clear_m25356(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::Contains(T)
#define List_1_Contains_m25357(__this, ___item, method) (( bool (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25358(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t321 *, TwitterUserInfoU5BU5D_t5565*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<TwitterUserInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m25359(__this, ___match, method) (( TwitterUserInfo_t308 * (*) (List_1_t321 *, Predicate_1_t5578 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25360(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5578 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25361(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t321 *, int32_t, int32_t, Predicate_1_t5578 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TwitterUserInfo>::GetEnumerator()
#define List_1_GetEnumerator_m25362(__this, method) (( Enumerator_t5579  (*) (List_1_t321 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<TwitterUserInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m25363(__this, ___index, ___count, method) (( List_1_t321 * (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::IndexOf(T)
#define List_1_IndexOf_m25364(__this, ___item, method) (( int32_t (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25365(__this, ___start, ___delta, method) (( void (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25366(__this, ___index, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Insert(System.Int32,T)
#define List_1_Insert_m25367(__this, ___index, ___item, method) (( void (*) (List_1_t321 *, int32_t, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25368(__this, ___collection, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m25369(__this, ___index, ___collection, method) (( void (*) (List_1_t321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25370(__this, ___index, ___collection, method) (( void (*) (List_1_t321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25371(__this, ___index, ___enumerable, method) (( void (*) (List_1_t321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<TwitterUserInfo>::Remove(T)
#define List_1_Remove_m25372(__this, ___item, method) (( bool (*) (List_1_t321 *, TwitterUserInfo_t308 *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25373(__this, ___match, method) (( int32_t (*) (List_1_t321 *, Predicate_1_t5578 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25374(__this, ___index, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m25375(__this, ___index, ___count, method) (( void (*) (List_1_t321 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Reverse()
#define List_1_Reverse_m25376(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Sort()
#define List_1_Sort_m25377(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25378(__this, ___comparer, method) (( void (*) (List_1_t321 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25379(__this, ___comparison, method) (( void (*) (List_1_t321 *, Comparison_1_t5580 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<TwitterUserInfo>::ToArray()
#define List_1_ToArray_m25380(__this, method) (( TwitterUserInfoU5BU5D_t5565* (*) (List_1_t321 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::TrimExcess()
#define List_1_TrimExcess_m25381(__this, method) (( void (*) (List_1_t321 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::get_Capacity()
#define List_1_get_Capacity_m25382(__this, method) (( int32_t (*) (List_1_t321 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25383(__this, ___value, method) (( void (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<TwitterUserInfo>::get_Count()
#define List_1_get_Count_m25384(__this, method) (( int32_t (*) (List_1_t321 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<TwitterUserInfo>::get_Item(System.Int32)
#define List_1_get_Item_m25385(__this, ___index, method) (( TwitterUserInfo_t308 * (*) (List_1_t321 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<TwitterUserInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m25386(__this, ___index, ___value, method) (( void (*) (List_1_t321 *, int32_t, TwitterUserInfo_t308 *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)

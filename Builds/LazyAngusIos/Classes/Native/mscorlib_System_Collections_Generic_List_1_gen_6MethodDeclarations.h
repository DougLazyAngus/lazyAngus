#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GoogleMobileAdBanner>
struct List_1_t695;
// System.Object
struct Object_t;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t140;
// System.Collections.Generic.IEnumerable`1<GoogleMobileAdBanner>
struct IEnumerable_1_t9402;
// GoogleMobileAdBanner[]
struct GoogleMobileAdBannerU5BU5D_t6050;
// System.Collections.Generic.IEnumerator`1<GoogleMobileAdBanner>
struct IEnumerator_1_t9396;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GoogleMobileAdBanner>
struct ICollection_1_t9391;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GoogleMobileAdBanner>
struct ReadOnlyCollection_1_t6063;
// System.Predicate`1<GoogleMobileAdBanner>
struct Predicate_1_t6064;
// System.Collections.Generic.IComparer`1<GoogleMobileAdBanner>
struct IComparer_1_t9403;
// System.Comparison`1<GoogleMobileAdBanner>
struct Comparison_1_t6066;
// System.Collections.Generic.List`1/Enumerator<GoogleMobileAdBanner>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3936(__this, method) (( void (*) (List_1_t695 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27705(__this, ___collection, method) (( void (*) (List_1_t695 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(System.Int32)
#define List_1__ctor_m27706(__this, ___capacity, method) (( void (*) (List_1_t695 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(T[],System.Int32)
#define List_1__ctor_m27707(__this, ___data, ___size, method) (( void (*) (List_1_t695 *, GoogleMobileAdBannerU5BU5D_t6050*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.cctor()
#define List_1__cctor_m27708(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27709(__this, method) (( Object_t* (*) (List_1_t695 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27710(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t695 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27711(__this, method) (( Object_t * (*) (List_1_t695 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27712(__this, ___item, method) (( int32_t (*) (List_1_t695 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27713(__this, ___item, method) (( bool (*) (List_1_t695 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27714(__this, ___item, method) (( int32_t (*) (List_1_t695 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27715(__this, ___index, ___item, method) (( void (*) (List_1_t695 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27716(__this, ___item, method) (( void (*) (List_1_t695 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27717(__this, method) (( bool (*) (List_1_t695 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27718(__this, method) (( bool (*) (List_1_t695 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27719(__this, method) (( Object_t * (*) (List_1_t695 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27720(__this, method) (( bool (*) (List_1_t695 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27721(__this, method) (( bool (*) (List_1_t695 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27722(__this, ___index, method) (( Object_t * (*) (List_1_t695 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27723(__this, ___index, ___value, method) (( void (*) (List_1_t695 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(T)
#define List_1_Add_m27724(__this, ___item, method) (( void (*) (List_1_t695 *, Object_t *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27725(__this, ___newCount, method) (( void (*) (List_1_t695 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27726(__this, ___idx, ___count, method) (( void (*) (List_1_t695 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27727(__this, ___collection, method) (( void (*) (List_1_t695 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27728(__this, ___enumerable, method) (( void (*) (List_1_t695 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27729(__this, ___collection, method) (( void (*) (List_1_t695 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::AsReadOnly()
#define List_1_AsReadOnly_m27730(__this, method) (( ReadOnlyCollection_1_t6063 * (*) (List_1_t695 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Clear()
#define List_1_Clear_m27731(__this, method) (( void (*) (List_1_t695 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::Contains(T)
#define List_1_Contains_m27732(__this, ___item, method) (( bool (*) (List_1_t695 *, Object_t *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27733(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t695 *, GoogleMobileAdBannerU5BU5D_t6050*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GoogleMobileAdBanner>::Find(System.Predicate`1<T>)
#define List_1_Find_m27734(__this, ___match, method) (( Object_t * (*) (List_1_t695 *, Predicate_1_t6064 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27735(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6064 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27736(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t695 *, int32_t, int32_t, Predicate_1_t6064 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetEnumerator()
#define List_1_GetEnumerator_m27737(__this, method) (( Enumerator_t6065  (*) (List_1_t695 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27738(__this, ___index, ___count, method) (( List_1_t695 * (*) (List_1_t695 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::IndexOf(T)
#define List_1_IndexOf_m27739(__this, ___item, method) (( int32_t (*) (List_1_t695 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27740(__this, ___start, ___delta, method) (( void (*) (List_1_t695 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27741(__this, ___index, method) (( void (*) (List_1_t695 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Insert(System.Int32,T)
#define List_1_Insert_m27742(__this, ___index, ___item, method) (( void (*) (List_1_t695 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27743(__this, ___collection, method) (( void (*) (List_1_t695 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27744(__this, ___index, ___collection, method) (( void (*) (List_1_t695 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27745(__this, ___index, ___collection, method) (( void (*) (List_1_t695 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27746(__this, ___index, ___enumerable, method) (( void (*) (List_1_t695 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::Remove(T)
#define List_1_Remove_m27747(__this, ___item, method) (( bool (*) (List_1_t695 *, Object_t *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27748(__this, ___match, method) (( int32_t (*) (List_1_t695 *, Predicate_1_t6064 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27749(__this, ___index, method) (( void (*) (List_1_t695 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27750(__this, ___index, ___count, method) (( void (*) (List_1_t695 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Reverse()
#define List_1_Reverse_m27751(__this, method) (( void (*) (List_1_t695 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort()
#define List_1_Sort_m27752(__this, method) (( void (*) (List_1_t695 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27753(__this, ___comparer, method) (( void (*) (List_1_t695 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27754(__this, ___comparison, method) (( void (*) (List_1_t695 *, Comparison_1_t6066 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GoogleMobileAdBanner>::ToArray()
#define List_1_ToArray_m27755(__this, method) (( GoogleMobileAdBannerU5BU5D_t6050* (*) (List_1_t695 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::TrimExcess()
#define List_1_TrimExcess_m27756(__this, method) (( void (*) (List_1_t695 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Capacity()
#define List_1_get_Capacity_m27757(__this, method) (( int32_t (*) (List_1_t695 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27758(__this, ___value, method) (( void (*) (List_1_t695 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Count()
#define List_1_get_Count_m27759(__this, method) (( int32_t (*) (List_1_t695 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Item(System.Int32)
#define List_1_get_Item_m27760(__this, ___index, method) (( Object_t * (*) (List_1_t695 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::set_Item(System.Int32,T)
#define List_1_set_Item_m27761(__this, ___index, ___value, method) (( void (*) (List_1_t695 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

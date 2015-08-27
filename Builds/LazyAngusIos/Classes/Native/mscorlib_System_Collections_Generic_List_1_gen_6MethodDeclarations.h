#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GoogleMobileAdBanner>
struct List_1_t682;
// System.Object
struct Object_t;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t140;
// System.Collections.Generic.IEnumerable`1<GoogleMobileAdBanner>
struct IEnumerable_1_t8786;
// GoogleMobileAdBanner[]
struct GoogleMobileAdBannerU5BU5D_t5501;
// System.Collections.Generic.IEnumerator`1<GoogleMobileAdBanner>
struct IEnumerator_1_t8780;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GoogleMobileAdBanner>
struct ICollection_1_t8775;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GoogleMobileAdBanner>
struct ReadOnlyCollection_1_t5514;
// System.Predicate`1<GoogleMobileAdBanner>
struct Predicate_1_t5515;
// System.Collections.Generic.IComparer`1<GoogleMobileAdBanner>
struct IComparer_1_t8787;
// System.Comparison`1<GoogleMobileAdBanner>
struct Comparison_1_t5517;
// System.Collections.Generic.List`1/Enumerator<GoogleMobileAdBanner>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3803(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1__ctor_m3728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23378(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1__ctor_m7491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(System.Int32)
#define List_1__ctor_m23379(__this, ___capacity, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1__ctor_m21589_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(T[],System.Int32)
#define List_1__ctor_m23380(__this, ___data, ___size, method) (( void (*) (List_1_t682 *, GoogleMobileAdBannerU5BU5D_t5501*, int32_t, const MethodInfo*))List_1__ctor_m21591_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.cctor()
#define List_1__cctor_m23381(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21593_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23382(__this, method) (( Object_t* (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23383(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t682 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23384(__this, method) (( Object_t * (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23385(__this, ___item, method) (( int32_t (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10372_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23386(__this, ___item, method) (( bool (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10374_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23387(__this, ___item, method) (( int32_t (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23388(__this, ___index, ___item, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10376_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23389(__this, ___item, method) (( void (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23390(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23391(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23392(__this, method) (( Object_t * (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23393(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23394(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23395(__this, ___index, method) (( Object_t * (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23396(__this, ___index, ___value, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(T)
#define List_1_Add_m23397(__this, ___item, method) (( void (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_Add_m10380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23398(__this, ___newCount, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21611_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m23399(__this, ___idx, ___count, method) (( void (*) (List_1_t682 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21613_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23400(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21615_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23401(__this, ___enumerable, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21617_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23402(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_AddRange_m21619_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::AsReadOnly()
#define List_1_AsReadOnly_m23403(__this, method) (( ReadOnlyCollection_1_t5514 * (*) (List_1_t682 *, const MethodInfo*))List_1_AsReadOnly_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Clear()
#define List_1_Clear_m23404(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::Contains(T)
#define List_1_Contains_m23405(__this, ___item, method) (( bool (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_Contains_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23406(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t682 *, GoogleMobileAdBannerU5BU5D_t5501*, int32_t, const MethodInfo*))List_1_CopyTo_m10382_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GoogleMobileAdBanner>::Find(System.Predicate`1<T>)
#define List_1_Find_m23407(__this, ___match, method) (( Object_t * (*) (List_1_t682 *, Predicate_1_t5515 *, const MethodInfo*))List_1_Find_m21626_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23408(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5515 *, const MethodInfo*))List_1_CheckMatch_m21628_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23409(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t682 *, int32_t, int32_t, Predicate_1_t5515 *, const MethodInfo*))List_1_GetIndex_m21630_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetEnumerator()
#define List_1_GetEnumerator_m23410(__this, method) (( Enumerator_t5516  (*) (List_1_t682 *, const MethodInfo*))List_1_GetEnumerator_m3884_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m23411(__this, ___index, ___count, method) (( List_1_t682 * (*) (List_1_t682 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::IndexOf(T)
#define List_1_IndexOf_m23412(__this, ___item, method) (( int32_t (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23413(__this, ___start, ___delta, method) (( void (*) (List_1_t682 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21635_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23414(__this, ___index, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Insert(System.Int32,T)
#define List_1_Insert_m23415(__this, ___index, ___item, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10386_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23416(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m23417(__this, ___index, ___collection, method) (( void (*) (List_1_t682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21642_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m23418(__this, ___index, ___collection, method) (( void (*) (List_1_t682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m23419(__this, ___index, ___enumerable, method) (( void (*) (List_1_t682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21646_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::Remove(T)
#define List_1_Remove_m23420(__this, ___item, method) (( bool (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_Remove_m10383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23421(__this, ___match, method) (( int32_t (*) (List_1_t682 *, Predicate_1_t5515 *, const MethodInfo*))List_1_RemoveAll_m21649_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23422(__this, ___index, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m23423(__this, ___index, ___count, method) (( void (*) (List_1_t682 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21652_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Reverse()
#define List_1_Reverse_m23424(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_Reverse_m21654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort()
#define List_1_Sort_m23425(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_Sort_m21656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23426(__this, ___comparer, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_Sort_m21658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23427(__this, ___comparison, method) (( void (*) (List_1_t682 *, Comparison_1_t5517 *, const MethodInfo*))List_1_Sort_m21660_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GoogleMobileAdBanner>::ToArray()
#define List_1_ToArray_m23428(__this, method) (( GoogleMobileAdBannerU5BU5D_t5501* (*) (List_1_t682 *, const MethodInfo*))List_1_ToArray_m21662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::TrimExcess()
#define List_1_TrimExcess_m23429(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_TrimExcess_m21664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Capacity()
#define List_1_get_Capacity_m23430(__this, method) (( int32_t (*) (List_1_t682 *, const MethodInfo*))List_1_get_Capacity_m21666_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23431(__this, ___value, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21668_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Count()
#define List_1_get_Count_m23432(__this, method) (( int32_t (*) (List_1_t682 *, const MethodInfo*))List_1_get_Count_m10364_gshared)(__this, method)
// T System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Item(System.Int32)
#define List_1_get_Item_m23433(__this, ___index, method) (( Object_t * (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::set_Item(System.Int32,T)
#define List_1_set_Item_m23434(__this, ___index, ___value, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)

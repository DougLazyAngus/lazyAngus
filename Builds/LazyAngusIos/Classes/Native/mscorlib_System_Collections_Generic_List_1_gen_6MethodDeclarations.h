#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GoogleMobileAdBanner>
struct List_1_t681;
// System.Object
struct Object_t;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t140;
// System.Collections.Generic.IEnumerable`1<GoogleMobileAdBanner>
struct IEnumerable_1_t8779;
// GoogleMobileAdBanner[]
struct GoogleMobileAdBannerU5BU5D_t5500;
// System.Collections.Generic.IEnumerator`1<GoogleMobileAdBanner>
struct IEnumerator_1_t8773;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GoogleMobileAdBanner>
struct ICollection_1_t8768;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GoogleMobileAdBanner>
struct ReadOnlyCollection_1_t5513;
// System.Predicate`1<GoogleMobileAdBanner>
struct Predicate_1_t5514;
// System.Collections.Generic.IComparer`1<GoogleMobileAdBanner>
struct IComparer_1_t8780;
// System.Comparison`1<GoogleMobileAdBanner>
struct Comparison_1_t5516;
// System.Collections.Generic.List`1/Enumerator<GoogleMobileAdBanner>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3785(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1__ctor_m3710_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23356(__this, ___collection, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1__ctor_m7469_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(System.Int32)
#define List_1__ctor_m23357(__this, ___capacity, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1__ctor_m21567_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(T[],System.Int32)
#define List_1__ctor_m23358(__this, ___data, ___size, method) (( void (*) (List_1_t681 *, GoogleMobileAdBannerU5BU5D_t5500*, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.cctor()
#define List_1__cctor_m23359(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21571_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23360(__this, method) (( Object_t* (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23361(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t681 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23362(__this, method) (( Object_t * (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23363(__this, ___item, method) (( int32_t (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10350_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23364(__this, ___item, method) (( bool (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10352_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23365(__this, ___item, method) (( int32_t (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23366(__this, ___index, ___item, method) (( void (*) (List_1_t681 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23367(__this, ___item, method) (( void (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10355_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23368(__this, method) (( bool (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23369(__this, method) (( bool (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10343_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23370(__this, method) (( Object_t * (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23371(__this, method) (( bool (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23372(__this, method) (( bool (*) (List_1_t681 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23373(__this, ___index, method) (( Object_t * (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10348_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23374(__this, ___index, ___value, method) (( void (*) (List_1_t681 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10349_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(T)
#define List_1_Add_m23375(__this, ___item, method) (( void (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_Add_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23376(__this, ___newCount, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21589_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m23377(__this, ___idx, ___count, method) (( void (*) (List_1_t681 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21591_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23378(__this, ___collection, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21593_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23379(__this, ___enumerable, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21595_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23380(__this, ___collection, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_AddRange_m21597_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::AsReadOnly()
#define List_1_AsReadOnly_m23381(__this, method) (( ReadOnlyCollection_1_t5513 * (*) (List_1_t681 *, const MethodInfo*))List_1_AsReadOnly_m21599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Clear()
#define List_1_Clear_m23382(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1_Clear_m10351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::Contains(T)
#define List_1_Contains_m23383(__this, ___item, method) (( bool (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_Contains_m10359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23384(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t681 *, GoogleMobileAdBannerU5BU5D_t5500*, int32_t, const MethodInfo*))List_1_CopyTo_m10360_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GoogleMobileAdBanner>::Find(System.Predicate`1<T>)
#define List_1_Find_m23385(__this, ___match, method) (( Object_t * (*) (List_1_t681 *, Predicate_1_t5514 *, const MethodInfo*))List_1_Find_m21604_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23386(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5514 *, const MethodInfo*))List_1_CheckMatch_m21606_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23387(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t681 *, int32_t, int32_t, Predicate_1_t5514 *, const MethodInfo*))List_1_GetIndex_m21608_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetEnumerator()
#define List_1_GetEnumerator_m23388(__this, method) (( Enumerator_t5515  (*) (List_1_t681 *, const MethodInfo*))List_1_GetEnumerator_m3866_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m23389(__this, ___index, ___count, method) (( List_1_t681 * (*) (List_1_t681 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21610_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::IndexOf(T)
#define List_1_IndexOf_m23390(__this, ___item, method) (( int32_t (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10363_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23391(__this, ___start, ___delta, method) (( void (*) (List_1_t681 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21613_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23392(__this, ___index, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21615_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Insert(System.Int32,T)
#define List_1_Insert_m23393(__this, ___index, ___item, method) (( void (*) (List_1_t681 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10364_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23394(__this, ___collection, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21618_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m23395(__this, ___index, ___collection, method) (( void (*) (List_1_t681 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21620_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m23396(__this, ___index, ___collection, method) (( void (*) (List_1_t681 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m23397(__this, ___index, ___enumerable, method) (( void (*) (List_1_t681 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21624_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::Remove(T)
#define List_1_Remove_m23398(__this, ___item, method) (( bool (*) (List_1_t681 *, Object_t *, const MethodInfo*))List_1_Remove_m10361_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23399(__this, ___match, method) (( int32_t (*) (List_1_t681 *, Predicate_1_t5514 *, const MethodInfo*))List_1_RemoveAll_m21627_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23400(__this, ___index, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m23401(__this, ___index, ___count, method) (( void (*) (List_1_t681 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21630_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Reverse()
#define List_1_Reverse_m23402(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1_Reverse_m21632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort()
#define List_1_Sort_m23403(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1_Sort_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23404(__this, ___comparer, method) (( void (*) (List_1_t681 *, Object_t*, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23405(__this, ___comparison, method) (( void (*) (List_1_t681 *, Comparison_1_t5516 *, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GoogleMobileAdBanner>::ToArray()
#define List_1_ToArray_m23406(__this, method) (( GoogleMobileAdBannerU5BU5D_t5500* (*) (List_1_t681 *, const MethodInfo*))List_1_ToArray_m21640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::TrimExcess()
#define List_1_TrimExcess_m23407(__this, method) (( void (*) (List_1_t681 *, const MethodInfo*))List_1_TrimExcess_m21642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Capacity()
#define List_1_get_Capacity_m23408(__this, method) (( int32_t (*) (List_1_t681 *, const MethodInfo*))List_1_get_Capacity_m21644_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23409(__this, ___value, method) (( void (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21646_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Count()
#define List_1_get_Count_m23410(__this, method) (( int32_t (*) (List_1_t681 *, const MethodInfo*))List_1_get_Count_m10342_gshared)(__this, method)
// T System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Item(System.Int32)
#define List_1_get_Item_m23411(__this, ___index, method) (( Object_t * (*) (List_1_t681 *, int32_t, const MethodInfo*))List_1_get_Item_m10365_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::set_Item(System.Int32,T)
#define List_1_set_Item_m23412(__this, ___index, ___value, method) (( void (*) (List_1_t681 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10366_gshared)(__this, ___index, ___value, method)

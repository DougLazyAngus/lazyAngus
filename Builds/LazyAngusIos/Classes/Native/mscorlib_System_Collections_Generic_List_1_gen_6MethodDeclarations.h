#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GoogleMobileAdBanner>
struct List_1_t635;
// System.Object
struct Object_t;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t140;
// System.Collections.Generic.IEnumerable`1<GoogleMobileAdBanner>
struct IEnumerable_1_t8708;
// GoogleMobileAdBanner[]
struct GoogleMobileAdBannerU5BU5D_t5455;
// System.Collections.Generic.IEnumerator`1<GoogleMobileAdBanner>
struct IEnumerator_1_t8702;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GoogleMobileAdBanner>
struct ICollection_1_t8697;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GoogleMobileAdBanner>
struct ReadOnlyCollection_1_t5468;
// System.Predicate`1<GoogleMobileAdBanner>
struct Predicate_1_t5469;
// System.Collections.Generic.IComparer`1<GoogleMobileAdBanner>
struct IComparer_1_t8709;
// System.Comparison`1<GoogleMobileAdBanner>
struct Comparison_1_t5471;
// System.Collections.Generic.List`1/Enumerator<GoogleMobileAdBanner>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3556(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1__ctor_m3481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23107(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1__ctor_m7218_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(System.Int32)
#define List_1__ctor_m23108(__this, ___capacity, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1__ctor_m21318_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.ctor(T[],System.Int32)
#define List_1__ctor_m23109(__this, ___data, ___size, method) (( void (*) (List_1_t635 *, GoogleMobileAdBannerU5BU5D_t5455*, int32_t, const MethodInfo*))List_1__ctor_m21320_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::.cctor()
#define List_1__cctor_m23110(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21322_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23111(__this, method) (( Object_t* (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23112(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t635 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10094_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23113(__this, method) (( Object_t * (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10090_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23114(__this, ___item, method) (( int32_t (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10099_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23115(__this, ___item, method) (( bool (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10101_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23116(__this, ___item, method) (( int32_t (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23117(__this, ___index, ___item, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10103_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23118(__this, ___item, method) (( void (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23119(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23120(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10092_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23121(__this, method) (( Object_t * (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10093_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23122(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23123(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10096_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23124(__this, ___index, method) (( Object_t * (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10097_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23125(__this, ___index, ___value, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10098_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Add(T)
#define List_1_Add_m23126(__this, ___item, method) (( void (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_Add_m10107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23127(__this, ___newCount, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21340_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m23128(__this, ___idx, ___count, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21342_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23129(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23130(__this, ___enumerable, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21346_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23131(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddRange_m21348_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::AsReadOnly()
#define List_1_AsReadOnly_m23132(__this, method) (( ReadOnlyCollection_1_t5468 * (*) (List_1_t635 *, const MethodInfo*))List_1_AsReadOnly_m21350_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Clear()
#define List_1_Clear_m23133(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Clear_m10100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::Contains(T)
#define List_1_Contains_m23134(__this, ___item, method) (( bool (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_Contains_m10108_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23135(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t635 *, GoogleMobileAdBannerU5BU5D_t5455*, int32_t, const MethodInfo*))List_1_CopyTo_m10109_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GoogleMobileAdBanner>::Find(System.Predicate`1<T>)
#define List_1_Find_m23136(__this, ___match, method) (( Object_t * (*) (List_1_t635 *, Predicate_1_t5469 *, const MethodInfo*))List_1_Find_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23137(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5469 *, const MethodInfo*))List_1_CheckMatch_m21357_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23138(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t635 *, int32_t, int32_t, Predicate_1_t5469 *, const MethodInfo*))List_1_GetIndex_m21359_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetEnumerator()
#define List_1_GetEnumerator_m23139(__this, method) (( Enumerator_t5470  (*) (List_1_t635 *, const MethodInfo*))List_1_GetEnumerator_m3637_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GoogleMobileAdBanner>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m23140(__this, ___index, ___count, method) (( List_1_t635 * (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21361_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::IndexOf(T)
#define List_1_IndexOf_m23141(__this, ___item, method) (( int32_t (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23142(__this, ___start, ___delta, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21364_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23143(__this, ___index, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21366_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Insert(System.Int32,T)
#define List_1_Insert_m23144(__this, ___index, ___item, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10113_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23145(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21369_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m23146(__this, ___index, ___collection, method) (( void (*) (List_1_t635 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21371_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m23147(__this, ___index, ___collection, method) (( void (*) (List_1_t635 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21373_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m23148(__this, ___index, ___enumerable, method) (( void (*) (List_1_t635 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21375_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GoogleMobileAdBanner>::Remove(T)
#define List_1_Remove_m23149(__this, ___item, method) (( bool (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_Remove_m10110_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23150(__this, ___match, method) (( int32_t (*) (List_1_t635 *, Predicate_1_t5469 *, const MethodInfo*))List_1_RemoveAll_m21378_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23151(__this, ___index, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m23152(__this, ___index, ___count, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21381_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Reverse()
#define List_1_Reverse_m23153(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Reverse_m21383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort()
#define List_1_Sort_m23154(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Sort_m21385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23155(__this, ___comparer, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_Sort_m21387_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23156(__this, ___comparison, method) (( void (*) (List_1_t635 *, Comparison_1_t5471 *, const MethodInfo*))List_1_Sort_m21389_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GoogleMobileAdBanner>::ToArray()
#define List_1_ToArray_m23157(__this, method) (( GoogleMobileAdBannerU5BU5D_t5455* (*) (List_1_t635 *, const MethodInfo*))List_1_ToArray_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::TrimExcess()
#define List_1_TrimExcess_m23158(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_TrimExcess_m21393_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Capacity()
#define List_1_get_Capacity_m23159(__this, method) (( int32_t (*) (List_1_t635 *, const MethodInfo*))List_1_get_Capacity_m21395_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23160(__this, ___value, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21397_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Count()
#define List_1_get_Count_m23161(__this, method) (( int32_t (*) (List_1_t635 *, const MethodInfo*))List_1_get_Count_m10091_gshared)(__this, method)
// T System.Collections.Generic.List`1<GoogleMobileAdBanner>::get_Item(System.Int32)
#define List_1_get_Item_m23162(__this, ___index, method) (( Object_t * (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_get_Item_m10114_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GoogleMobileAdBanner>::set_Item(System.Int32,T)
#define List_1_set_Item_m23163(__this, ___index, ___value, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10115_gshared)(__this, ___index, ___value, method)

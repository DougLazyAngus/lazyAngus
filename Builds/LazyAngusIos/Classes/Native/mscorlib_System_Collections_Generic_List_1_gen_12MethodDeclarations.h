#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FBLikeInfo>
struct List_1_t689;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t289;
// System.Collections.Generic.IEnumerable`1<FBLikeInfo>
struct IEnumerable_1_t8861;
// FBLikeInfo[]
struct FBLikeInfoU5BU5D_t5591;
// System.Collections.Generic.IEnumerator`1<FBLikeInfo>
struct IEnumerator_1_t8852;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<FBLikeInfo>
struct ICollection_1_t8854;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FBLikeInfo>
struct ReadOnlyCollection_1_t5601;
// System.Predicate`1<FBLikeInfo>
struct Predicate_1_t5602;
// System.Collections.Generic.IComparer`1<FBLikeInfo>
struct IComparer_1_t8862;
// System.Comparison`1<FBLikeInfo>
struct Comparison_1_t5604;
// System.Collections.Generic.List`1/Enumerator<FBLikeInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3875(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25116(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1__ctor_m7470_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(System.Int32)
#define List_1__ctor_m25117(__this, ___capacity, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1__ctor_m21569_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m25118(__this, ___data, ___size, method) (( void (*) (List_1_t689 *, FBLikeInfoU5BU5D_t5591*, int32_t, const MethodInfo*))List_1__ctor_m21571_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::.cctor()
#define List_1__cctor_m25119(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21573_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25120(__this, method) (( Object_t* (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25121(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t689 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10343_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25122(__this, method) (( Object_t * (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25123(__this, ___item, method) (( int32_t (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25124(__this, ___item, method) (( bool (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25125(__this, ___item, method) (( int32_t (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25126(__this, ___index, ___item, method) (( void (*) (List_1_t689 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25127(__this, ___item, method) (( void (*) (List_1_t689 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25128(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25129(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10341_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25130(__this, method) (( Object_t * (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10342_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25131(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10344_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25132(__this, method) (( bool (*) (List_1_t689 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10345_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25133(__this, ___index, method) (( Object_t * (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25134(__this, ___index, ___value, method) (( void (*) (List_1_t689 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10347_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Add(T)
#define List_1_Add_m25135(__this, ___item, method) (( void (*) (List_1_t689 *, FBLikeInfo_t289 *, const MethodInfo*))List_1_Add_m10356_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25136(__this, ___newCount, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21591_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25137(__this, ___idx, ___count, method) (( void (*) (List_1_t689 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21593_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25138(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21595_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25139(__this, ___enumerable, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21597_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25140(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_AddRange_m21599_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FBLikeInfo>::AsReadOnly()
#define List_1_AsReadOnly_m25141(__this, method) (( ReadOnlyCollection_1_t5601 * (*) (List_1_t689 *, const MethodInfo*))List_1_AsReadOnly_m21601_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Clear()
#define List_1_Clear_m25142(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_Clear_m10349_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Contains(T)
#define List_1_Contains_m25143(__this, ___item, method) (( bool (*) (List_1_t689 *, FBLikeInfo_t289 *, const MethodInfo*))List_1_Contains_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25144(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t689 *, FBLikeInfoU5BU5D_t5591*, int32_t, const MethodInfo*))List_1_CopyTo_m10358_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m25145(__this, ___match, method) (( FBLikeInfo_t289 * (*) (List_1_t689 *, Predicate_1_t5602 *, const MethodInfo*))List_1_Find_m21606_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25146(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5602 *, const MethodInfo*))List_1_CheckMatch_m21608_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25147(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t689 *, int32_t, int32_t, Predicate_1_t5602 *, const MethodInfo*))List_1_GetIndex_m21610_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FBLikeInfo>::GetEnumerator()
#define List_1_GetEnumerator_m25148(__this, method) (( Enumerator_t5603  (*) (List_1_t689 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FBLikeInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m25149(__this, ___index, ___count, method) (( List_1_t689 * (*) (List_1_t689 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21612_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::IndexOf(T)
#define List_1_IndexOf_m25150(__this, ___item, method) (( int32_t (*) (List_1_t689 *, FBLikeInfo_t289 *, const MethodInfo*))List_1_IndexOf_m10361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25151(__this, ___start, ___delta, method) (( void (*) (List_1_t689 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21615_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25152(__this, ___index, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Insert(System.Int32,T)
#define List_1_Insert_m25153(__this, ___index, ___item, method) (( void (*) (List_1_t689 *, int32_t, FBLikeInfo_t289 *, const MethodInfo*))List_1_Insert_m10362_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25154(__this, ___collection, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21620_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m25155(__this, ___index, ___collection, method) (( void (*) (List_1_t689 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21622_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25156(__this, ___index, ___collection, method) (( void (*) (List_1_t689 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21624_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25157(__this, ___index, ___enumerable, method) (( void (*) (List_1_t689 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21626_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FBLikeInfo>::Remove(T)
#define List_1_Remove_m25158(__this, ___item, method) (( bool (*) (List_1_t689 *, FBLikeInfo_t289 *, const MethodInfo*))List_1_Remove_m10359_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25159(__this, ___match, method) (( int32_t (*) (List_1_t689 *, Predicate_1_t5602 *, const MethodInfo*))List_1_RemoveAll_m21629_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25160(__this, ___index, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10354_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m25161(__this, ___index, ___count, method) (( void (*) (List_1_t689 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21632_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Reverse()
#define List_1_Reverse_m25162(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_Reverse_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort()
#define List_1_Sort_m25163(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_Sort_m21636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25164(__this, ___comparer, method) (( void (*) (List_1_t689 *, Object_t*, const MethodInfo*))List_1_Sort_m21638_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25165(__this, ___comparison, method) (( void (*) (List_1_t689 *, Comparison_1_t5604 *, const MethodInfo*))List_1_Sort_m21640_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FBLikeInfo>::ToArray()
#define List_1_ToArray_m25166(__this, method) (( FBLikeInfoU5BU5D_t5591* (*) (List_1_t689 *, const MethodInfo*))List_1_ToArray_m21642_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::TrimExcess()
#define List_1_TrimExcess_m25167(__this, method) (( void (*) (List_1_t689 *, const MethodInfo*))List_1_TrimExcess_m21644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Capacity()
#define List_1_get_Capacity_m25168(__this, method) (( int32_t (*) (List_1_t689 *, const MethodInfo*))List_1_get_Capacity_m21646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25169(__this, ___value, method) (( void (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21648_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FBLikeInfo>::get_Count()
#define List_1_get_Count_m25170(__this, method) (( int32_t (*) (List_1_t689 *, const MethodInfo*))List_1_get_Count_m10340_gshared)(__this, method)
// T System.Collections.Generic.List`1<FBLikeInfo>::get_Item(System.Int32)
#define List_1_get_Item_m25171(__this, ___index, method) (( FBLikeInfo_t289 * (*) (List_1_t689 *, int32_t, const MethodInfo*))List_1_get_Item_m10363_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FBLikeInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m25172(__this, ___index, ___value, method) (( void (*) (List_1_t689 *, int32_t, FBLikeInfo_t289 *, const MethodInfo*))List_1_set_Item_m10364_gshared)(__this, ___index, ___value, method)

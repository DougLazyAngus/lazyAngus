#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<GameAnalyticsSDK.Game>
struct List_1_t488;
// System.Object
struct Object_t;
// GameAnalyticsSDK.Game
struct Game_t490;
// System.Collections.Generic.IEnumerable`1<GameAnalyticsSDK.Game>
struct IEnumerable_1_t8952;
// GameAnalyticsSDK.Game[]
struct GameU5BU5D_t5715;
// System.Collections.Generic.IEnumerator`1<GameAnalyticsSDK.Game>
struct IEnumerator_1_t8953;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GameAnalyticsSDK.Game>
struct ICollection_1_t8954;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GameAnalyticsSDK.Game>
struct ReadOnlyCollection_1_t5717;
// System.Predicate`1<GameAnalyticsSDK.Game>
struct Predicate_1_t5718;
// System.Collections.Generic.IComparer`1<GameAnalyticsSDK.Game>
struct IComparer_1_t8955;
// System.Comparison`1<GameAnalyticsSDK.Game>
struct Comparison_1_t5720;
// System.Collections.Generic.List`1/Enumerator<GameAnalyticsSDK.Game>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m26859(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1__ctor_m3858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26860(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1__ctor_m7623_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(System.Int32)
#define List_1__ctor_m26861(__this, ___capacity, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1__ctor_m21718_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(T[],System.Int32)
#define List_1__ctor_m26862(__this, ___data, ___size, method) (( void (*) (List_1_t488 *, GameU5BU5D_t5715*, int32_t, const MethodInfo*))List_1__ctor_m21720_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.cctor()
#define List_1__cctor_m26863(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21722_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26864(__this, method) (( Object_t* (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26865(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t488 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10496_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26866(__this, method) (( Object_t * (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26867(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26868(__this, ___item, method) (( bool (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10503_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26869(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10504_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26870(__this, ___index, ___item, method) (( void (*) (List_1_t488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10505_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26871(__this, ___item, method) (( void (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10506_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26872(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26873(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10494_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26874(__this, method) (( Object_t * (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26875(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26876(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10498_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26877(__this, ___index, method) (( Object_t * (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26878(__this, ___index, ___value, method) (( void (*) (List_1_t488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10500_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Add(T)
#define List_1_Add_m26879(__this, ___item, method) (( void (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Add_m10509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26880(__this, ___newCount, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21740_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26881(__this, ___idx, ___count, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21742_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26882(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21744_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26883(__this, ___enumerable, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21746_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26884(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddRange_m21748_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AsReadOnly()
#define List_1_AsReadOnly_m26885(__this, method) (( ReadOnlyCollection_1_t5717 * (*) (List_1_t488 *, const MethodInfo*))List_1_AsReadOnly_m21750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Clear()
#define List_1_Clear_m26886(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Clear_m10502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Contains(T)
#define List_1_Contains_m26887(__this, ___item, method) (( bool (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Contains_m10510_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26888(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t488 *, GameU5BU5D_t5715*, int32_t, const MethodInfo*))List_1_CopyTo_m10511_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Find(System.Predicate`1<T>)
#define List_1_Find_m26889(__this, ___match, method) (( Game_t490 * (*) (List_1_t488 *, Predicate_1_t5718 *, const MethodInfo*))List_1_Find_m21755_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26890(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5718 *, const MethodInfo*))List_1_CheckMatch_m21757_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26891(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t488 *, int32_t, int32_t, Predicate_1_t5718 *, const MethodInfo*))List_1_GetIndex_m21759_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetEnumerator()
#define List_1_GetEnumerator_m26892(__this, method) (( Enumerator_t5719  (*) (List_1_t488 *, const MethodInfo*))List_1_GetEnumerator_m4014_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26893(__this, ___index, ___count, method) (( List_1_t488 * (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21761_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::IndexOf(T)
#define List_1_IndexOf_m26894(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_IndexOf_m10514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26895(__this, ___start, ___delta, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21764_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26896(__this, ___index, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Insert(System.Int32,T)
#define List_1_Insert_m26897(__this, ___index, ___item, method) (( void (*) (List_1_t488 *, int32_t, Game_t490 *, const MethodInfo*))List_1_Insert_m10515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26898(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21769_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26899(__this, ___index, ___collection, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26900(__this, ___index, ___collection, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21773_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26901(__this, ___index, ___enumerable, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21775_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Remove(T)
#define List_1_Remove_m26902(__this, ___item, method) (( bool (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Remove_m10512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26903(__this, ___match, method) (( int32_t (*) (List_1_t488 *, Predicate_1_t5718 *, const MethodInfo*))List_1_RemoveAll_m21778_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26904(__this, ___index, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26905(__this, ___index, ___count, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21781_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Reverse()
#define List_1_Reverse_m26906(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Reverse_m21783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort()
#define List_1_Sort_m26907(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Sort_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26908(__this, ___comparer, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_Sort_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26909(__this, ___comparison, method) (( void (*) (List_1_t488 *, Comparison_1_t5720 *, const MethodInfo*))List_1_Sort_m21789_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::ToArray()
#define List_1_ToArray_m26910(__this, method) (( GameU5BU5D_t5715* (*) (List_1_t488 *, const MethodInfo*))List_1_ToArray_m21791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::TrimExcess()
#define List_1_TrimExcess_m26911(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_TrimExcess_m21793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Capacity()
#define List_1_get_Capacity_m26912(__this, method) (( int32_t (*) (List_1_t488 *, const MethodInfo*))List_1_get_Capacity_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26913(__this, ___value, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21797_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Count()
#define List_1_get_Count_m26914(__this, method) (( int32_t (*) (List_1_t488 *, const MethodInfo*))List_1_get_Count_m10493_gshared)(__this, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Item(System.Int32)
#define List_1_get_Item_m26915(__this, ___index, method) (( Game_t490 * (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_get_Item_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::set_Item(System.Int32,T)
#define List_1_set_Item_m26916(__this, ___index, ___value, method) (( void (*) (List_1_t488 *, int32_t, Game_t490 *, const MethodInfo*))List_1_set_Item_m10517_gshared)(__this, ___index, ___value, method)

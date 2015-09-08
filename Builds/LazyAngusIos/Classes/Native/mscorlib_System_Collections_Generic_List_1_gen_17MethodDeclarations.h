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
struct IEnumerable_1_t9545;
// GameAnalyticsSDK.Game[]
struct GameU5BU5D_t6252;
// System.Collections.Generic.IEnumerator`1<GameAnalyticsSDK.Game>
struct IEnumerator_1_t9546;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<GameAnalyticsSDK.Game>
struct ICollection_1_t9547;
// System.Collections.ObjectModel.ReadOnlyCollection`1<GameAnalyticsSDK.Game>
struct ReadOnlyCollection_1_t6254;
// System.Predicate`1<GameAnalyticsSDK.Game>
struct Predicate_1_t6255;
// System.Collections.Generic.IComparer`1<GameAnalyticsSDK.Game>
struct IComparer_1_t9548;
// System.Comparison`1<GameAnalyticsSDK.Game>
struct Comparison_1_t6257;
// System.Collections.Generic.List`1/Enumerator<GameAnalyticsSDK.Game>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m31088(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m31089(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(System.Int32)
#define List_1__ctor_m31090(__this, ___capacity, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.ctor(T[],System.Int32)
#define List_1__ctor_m31091(__this, ___data, ___size, method) (( void (*) (List_1_t488 *, GameU5BU5D_t6252*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::.cctor()
#define List_1__cctor_m31092(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31093(__this, method) (( Object_t* (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m31094(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t488 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31095(__this, method) (( Object_t * (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m31096(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m31097(__this, ___item, method) (( bool (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m31098(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m31099(__this, ___index, ___item, method) (( void (*) (List_1_t488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m31100(__this, ___item, method) (( void (*) (List_1_t488 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31101(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31102(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m31103(__this, method) (( Object_t * (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m31104(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m31105(__this, method) (( bool (*) (List_1_t488 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m31106(__this, ___index, method) (( Object_t * (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m31107(__this, ___index, ___value, method) (( void (*) (List_1_t488 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Add(T)
#define List_1_Add_m31108(__this, ___item, method) (( void (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m31109(__this, ___newCount, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m31110(__this, ___idx, ___count, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m31111(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m31112(__this, ___enumerable, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m31113(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::AsReadOnly()
#define List_1_AsReadOnly_m31114(__this, method) (( ReadOnlyCollection_1_t6254 * (*) (List_1_t488 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Clear()
#define List_1_Clear_m31115(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Contains(T)
#define List_1_Contains_m31116(__this, ___item, method) (( bool (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m31117(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t488 *, GameU5BU5D_t6252*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Find(System.Predicate`1<T>)
#define List_1_Find_m31118(__this, ___match, method) (( Game_t490 * (*) (List_1_t488 *, Predicate_1_t6255 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m31119(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6255 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m31120(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t488 *, int32_t, int32_t, Predicate_1_t6255 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetEnumerator()
#define List_1_GetEnumerator_m31121(__this, method) (( Enumerator_t6256  (*) (List_1_t488 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m31122(__this, ___index, ___count, method) (( List_1_t488 * (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::IndexOf(T)
#define List_1_IndexOf_m31123(__this, ___item, method) (( int32_t (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m31124(__this, ___start, ___delta, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m31125(__this, ___index, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Insert(System.Int32,T)
#define List_1_Insert_m31126(__this, ___index, ___item, method) (( void (*) (List_1_t488 *, int32_t, Game_t490 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m31127(__this, ___collection, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m31128(__this, ___index, ___collection, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m31129(__this, ___index, ___collection, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m31130(__this, ___index, ___enumerable, method) (( void (*) (List_1_t488 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Remove(T)
#define List_1_Remove_m31131(__this, ___item, method) (( bool (*) (List_1_t488 *, Game_t490 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m31132(__this, ___match, method) (( int32_t (*) (List_1_t488 *, Predicate_1_t6255 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m31133(__this, ___index, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m31134(__this, ___index, ___count, method) (( void (*) (List_1_t488 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Reverse()
#define List_1_Reverse_m31135(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort()
#define List_1_Sort_m31136(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m31137(__this, ___comparer, method) (( void (*) (List_1_t488 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m31138(__this, ___comparison, method) (( void (*) (List_1_t488 *, Comparison_1_t6257 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::ToArray()
#define List_1_ToArray_m31139(__this, method) (( GameU5BU5D_t6252* (*) (List_1_t488 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::TrimExcess()
#define List_1_TrimExcess_m31140(__this, method) (( void (*) (List_1_t488 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Capacity()
#define List_1_get_Capacity_m31141(__this, method) (( int32_t (*) (List_1_t488 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m31142(__this, ___value, method) (( void (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Count()
#define List_1_get_Count_m31143(__this, method) (( int32_t (*) (List_1_t488 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Item(System.Int32)
#define List_1_get_Item_m31144(__this, ___index, method) (( Game_t490 * (*) (List_1_t488 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::set_Item(System.Int32,T)
#define List_1_set_Item_m31145(__this, ___index, ___value, method) (( void (*) (List_1_t488 *, int32_t, Game_t490 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t697;
// System.Object
struct Object_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t693;
// System.Collections.Generic.IEnumerable`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerable_1_t9380;
// UnionAssets.FLE.EventHandlerFunction[]
struct EventHandlerFunctionU5BU5D_t6032;
// System.Collections.Generic.IEnumerator`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerator_1_t9379;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ICollection_1_t9381;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ReadOnlyCollection_1_t6034;
// System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>
struct Predicate_1_t6035;
// System.Collections.Generic.IComparer`1<UnionAssets.FLE.EventHandlerFunction>
struct IComparer_1_t9382;
// System.Comparison`1<UnionAssets.FLE.EventHandlerFunction>
struct Comparison_1_t6037;
// System.Collections.Generic.List`1/Enumerator<UnionAssets.FLE.EventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3909(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27172(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Int32)
#define List_1__ctor_m27173(__this, ___capacity, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(T[],System.Int32)
#define List_1__ctor_m27174(__this, ___data, ___size, method) (( void (*) (List_1_t697 *, EventHandlerFunctionU5BU5D_t6032*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.cctor()
#define List_1__cctor_m27175(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27176(__this, method) (( Object_t* (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27177(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t697 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27178(__this, method) (( Object_t * (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27179(__this, ___item, method) (( int32_t (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27180(__this, ___item, method) (( bool (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27181(__this, ___item, method) (( int32_t (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27182(__this, ___index, ___item, method) (( void (*) (List_1_t697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27183(__this, ___item, method) (( void (*) (List_1_t697 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27184(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27185(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27186(__this, method) (( Object_t * (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27187(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27188(__this, method) (( bool (*) (List_1_t697 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27189(__this, ___index, method) (( Object_t * (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27190(__this, ___index, ___value, method) (( void (*) (List_1_t697 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(T)
#define List_1_Add_m27191(__this, ___item, method) (( void (*) (List_1_t697 *, EventHandlerFunction_t693 *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27192(__this, ___newCount, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27193(__this, ___idx, ___count, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27194(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27195(__this, ___enumerable, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27196(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AsReadOnly()
#define List_1_AsReadOnly_m27197(__this, method) (( ReadOnlyCollection_1_t6034 * (*) (List_1_t697 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Clear()
#define List_1_Clear_m27198(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Contains(T)
#define List_1_Contains_m27199(__this, ___item, method) (( bool (*) (List_1_t697 *, EventHandlerFunction_t693 *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27200(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t697 *, EventHandlerFunctionU5BU5D_t6032*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Find(System.Predicate`1<T>)
#define List_1_Find_m27201(__this, ___match, method) (( EventHandlerFunction_t693 * (*) (List_1_t697 *, Predicate_1_t6035 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27202(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6035 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27203(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t697 *, int32_t, int32_t, Predicate_1_t6035 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetEnumerator()
#define List_1_GetEnumerator_m27204(__this, method) (( Enumerator_t6036  (*) (List_1_t697 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27205(__this, ___index, ___count, method) (( List_1_t697 * (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::IndexOf(T)
#define List_1_IndexOf_m27206(__this, ___item, method) (( int32_t (*) (List_1_t697 *, EventHandlerFunction_t693 *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27207(__this, ___start, ___delta, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27208(__this, ___index, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Insert(System.Int32,T)
#define List_1_Insert_m27209(__this, ___index, ___item, method) (( void (*) (List_1_t697 *, int32_t, EventHandlerFunction_t693 *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27210(__this, ___collection, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27211(__this, ___index, ___collection, method) (( void (*) (List_1_t697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27212(__this, ___index, ___collection, method) (( void (*) (List_1_t697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27213(__this, ___index, ___enumerable, method) (( void (*) (List_1_t697 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(T)
#define List_1_Remove_m27214(__this, ___item, method) (( bool (*) (List_1_t697 *, EventHandlerFunction_t693 *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27215(__this, ___match, method) (( int32_t (*) (List_1_t697 *, Predicate_1_t6035 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27216(__this, ___index, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27217(__this, ___index, ___count, method) (( void (*) (List_1_t697 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Reverse()
#define List_1_Reverse_m27218(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort()
#define List_1_Sort_m27219(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27220(__this, ___comparer, method) (( void (*) (List_1_t697 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27221(__this, ___comparison, method) (( void (*) (List_1_t697 *, Comparison_1_t6037 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::ToArray()
#define List_1_ToArray_m27222(__this, method) (( EventHandlerFunctionU5BU5D_t6032* (*) (List_1_t697 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::TrimExcess()
#define List_1_TrimExcess_m27223(__this, method) (( void (*) (List_1_t697 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Capacity()
#define List_1_get_Capacity_m27224(__this, method) (( int32_t (*) (List_1_t697 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27225(__this, ___value, method) (( void (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count()
#define List_1_get_Count_m27226(__this, method) (( int32_t (*) (List_1_t697 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32)
#define List_1_get_Item_m27227(__this, ___index, method) (( EventHandlerFunction_t693 * (*) (List_1_t697 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Item(System.Int32,T)
#define List_1_set_Item_m27228(__this, ___index, ___value, method) (( void (*) (List_1_t697 *, int32_t, EventHandlerFunction_t693 *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)

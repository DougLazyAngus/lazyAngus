#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t635;
// System.Object
struct Object_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t631;
// System.Collections.Generic.IEnumerable`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerable_1_t8681;
// UnionAssets.FLE.EventHandlerFunction[]
struct EventHandlerFunctionU5BU5D_t5434;
// System.Collections.Generic.IEnumerator`1<UnionAssets.FLE.EventHandlerFunction>
struct IEnumerator_1_t8680;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ICollection_1_t8682;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnionAssets.FLE.EventHandlerFunction>
struct ReadOnlyCollection_1_t5436;
// System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>
struct Predicate_1_t5437;
// System.Collections.Generic.IComparer`1<UnionAssets.FLE.EventHandlerFunction>
struct IComparer_1_t8683;
// System.Comparison`1<UnionAssets.FLE.EventHandlerFunction>
struct Comparison_1_t5439;
// System.Collections.Generic.List`1/Enumerator<UnionAssets.FLE.EventHandlerFunction>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3522(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m22571(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Int32)
#define List_1__ctor_m22572(__this, ___capacity, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(T[],System.Int32)
#define List_1__ctor_m22573(__this, ___data, ___size, method) (( void (*) (List_1_t635 *, EventHandlerFunctionU5BU5D_t5434*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::.cctor()
#define List_1__cctor_m22574(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22575(__this, method) (( Object_t* (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m22576(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t635 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22577(__this, method) (( Object_t * (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m22578(__this, ___item, method) (( int32_t (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m22579(__this, ___item, method) (( bool (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m22580(__this, ___item, method) (( int32_t (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m22581(__this, ___index, ___item, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m22582(__this, ___item, method) (( void (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22583(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22584(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m22585(__this, method) (( Object_t * (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m22586(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m22587(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m22588(__this, ___index, method) (( Object_t * (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m22589(__this, ___index, ___value, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Add(T)
#define List_1_Add_m22590(__this, ___item, method) (( void (*) (List_1_t635 *, EventHandlerFunction_t631 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m22591(__this, ___newCount, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m22592(__this, ___idx, ___count, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m22593(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m22594(__this, ___enumerable, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m22595(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::AsReadOnly()
#define List_1_AsReadOnly_m22596(__this, method) (( ReadOnlyCollection_1_t5436 * (*) (List_1_t635 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Clear()
#define List_1_Clear_m22597(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Contains(T)
#define List_1_Contains_m22598(__this, ___item, method) (( bool (*) (List_1_t635 *, EventHandlerFunction_t631 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m22599(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t635 *, EventHandlerFunctionU5BU5D_t5434*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Find(System.Predicate`1<T>)
#define List_1_Find_m22600(__this, ___match, method) (( EventHandlerFunction_t631 * (*) (List_1_t635 *, Predicate_1_t5437 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m22601(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5437 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m22602(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t635 *, int32_t, int32_t, Predicate_1_t5437 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetEnumerator()
#define List_1_GetEnumerator_m22603(__this, method) (( Enumerator_t5438  (*) (List_1_t635 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m22604(__this, ___index, ___count, method) (( List_1_t635 * (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::IndexOf(T)
#define List_1_IndexOf_m22605(__this, ___item, method) (( int32_t (*) (List_1_t635 *, EventHandlerFunction_t631 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m22606(__this, ___start, ___delta, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m22607(__this, ___index, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Insert(System.Int32,T)
#define List_1_Insert_m22608(__this, ___index, ___item, method) (( void (*) (List_1_t635 *, int32_t, EventHandlerFunction_t631 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m22609(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m22610(__this, ___index, ___collection, method) (( void (*) (List_1_t635 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m22611(__this, ___index, ___collection, method) (( void (*) (List_1_t635 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m22612(__this, ___index, ___enumerable, method) (( void (*) (List_1_t635 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Remove(T)
#define List_1_Remove_m22613(__this, ___item, method) (( bool (*) (List_1_t635 *, EventHandlerFunction_t631 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m22614(__this, ___match, method) (( int32_t (*) (List_1_t635 *, Predicate_1_t5437 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m22615(__this, ___index, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m22616(__this, ___index, ___count, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Reverse()
#define List_1_Reverse_m22617(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort()
#define List_1_Sort_m22618(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m22619(__this, ___comparer, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m22620(__this, ___comparison, method) (( void (*) (List_1_t635 *, Comparison_1_t5439 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::ToArray()
#define List_1_ToArray_m22621(__this, method) (( EventHandlerFunctionU5BU5D_t5434* (*) (List_1_t635 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::TrimExcess()
#define List_1_TrimExcess_m22622(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Capacity()
#define List_1_get_Capacity_m22623(__this, method) (( int32_t (*) (List_1_t635 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m22624(__this, ___value, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Count()
#define List_1_get_Count_m22625(__this, method) (( int32_t (*) (List_1_t635 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::get_Item(System.Int32)
#define List_1_get_Item_m22626(__this, ___index, method) (( EventHandlerFunction_t631 * (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>::set_Item(System.Int32,T)
#define List_1_set_Item_m22627(__this, ___index, ___value, method) (( void (*) (List_1_t635 *, int32_t, EventHandlerFunction_t631 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

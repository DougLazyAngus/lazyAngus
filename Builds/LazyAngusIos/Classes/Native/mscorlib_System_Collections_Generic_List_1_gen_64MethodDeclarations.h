#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
struct List_1_t5751;
// System.Object
struct Object_t;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t985;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ICanvasElement>
struct IEnumerable_1_t8896;
// UnityEngine.UI.ICanvasElement[]
struct ICanvasElementU5BU5D_t5753;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
struct IEnumerator_1_t8895;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>
struct ICollection_1_t8897;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
struct ReadOnlyCollection_1_t8898;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t853;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.ICanvasElement>
struct IComparer_1_t8899;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t852;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_106.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m28052(__this, method) (( void (*) (List_1_t5751 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28053(__this, ___collection, method) (( void (*) (List_1_t5751 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Int32)
#define List_1__ctor_m28054(__this, ___capacity, method) (( void (*) (List_1_t5751 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(T[],System.Int32)
#define List_1__ctor_m28055(__this, ___data, ___size, method) (( void (*) (List_1_t5751 *, ICanvasElementU5BU5D_t5753*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.cctor()
#define List_1__cctor_m28056(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28057(__this, method) (( Object_t* (*) (List_1_t5751 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28058(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5751 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28059(__this, method) (( Object_t * (*) (List_1_t5751 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28060(__this, ___item, method) (( int32_t (*) (List_1_t5751 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28061(__this, ___item, method) (( bool (*) (List_1_t5751 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28062(__this, ___item, method) (( int32_t (*) (List_1_t5751 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28063(__this, ___index, ___item, method) (( void (*) (List_1_t5751 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28064(__this, ___item, method) (( void (*) (List_1_t5751 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28065(__this, method) (( bool (*) (List_1_t5751 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28066(__this, method) (( bool (*) (List_1_t5751 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28067(__this, method) (( Object_t * (*) (List_1_t5751 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28068(__this, method) (( bool (*) (List_1_t5751 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28069(__this, method) (( bool (*) (List_1_t5751 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28070(__this, ___index, method) (( Object_t * (*) (List_1_t5751 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28071(__this, ___index, ___value, method) (( void (*) (List_1_t5751 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Add(T)
#define List_1_Add_m28072(__this, ___item, method) (( void (*) (List_1_t5751 *, Object_t *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28073(__this, ___newCount, method) (( void (*) (List_1_t5751 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28074(__this, ___idx, ___count, method) (( void (*) (List_1_t5751 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28075(__this, ___collection, method) (( void (*) (List_1_t5751 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28076(__this, ___enumerable, method) (( void (*) (List_1_t5751 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28077(__this, ___collection, method) (( void (*) (List_1_t5751 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AsReadOnly()
#define List_1_AsReadOnly_m28078(__this, method) (( ReadOnlyCollection_1_t8898 * (*) (List_1_t5751 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Clear()
#define List_1_Clear_m28079(__this, method) (( void (*) (List_1_t5751 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Contains(T)
#define List_1_Contains_m28080(__this, ___item, method) (( bool (*) (List_1_t5751 *, Object_t *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28081(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5751 *, ICanvasElementU5BU5D_t5753*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Find(System.Predicate`1<T>)
#define List_1_Find_m28082(__this, ___match, method) (( Object_t * (*) (List_1_t5751 *, Predicate_1_t853 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28083(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t853 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28084(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5751 *, int32_t, int32_t, Predicate_1_t853 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#define List_1_GetEnumerator_m28085(__this, method) (( Enumerator_t8900  (*) (List_1_t5751 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28086(__this, ___index, ___count, method) (( List_1_t5751 * (*) (List_1_t5751 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
#define List_1_IndexOf_m28087(__this, ___item, method) (( int32_t (*) (List_1_t5751 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28088(__this, ___start, ___delta, method) (( void (*) (List_1_t5751 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28089(__this, ___index, method) (( void (*) (List_1_t5751 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
#define List_1_Insert_m28090(__this, ___index, ___item, method) (( void (*) (List_1_t5751 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28091(__this, ___collection, method) (( void (*) (List_1_t5751 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28092(__this, ___index, ___collection, method) (( void (*) (List_1_t5751 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28093(__this, ___index, ___collection, method) (( void (*) (List_1_t5751 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28094(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5751 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#define List_1_Remove_m28095(__this, ___item, method) (( bool (*) (List_1_t5751 *, Object_t *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28096(__this, ___match, method) (( int32_t (*) (List_1_t5751 *, Predicate_1_t853 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28097(__this, ___index, method) (( void (*) (List_1_t5751 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28098(__this, ___index, ___count, method) (( void (*) (List_1_t5751 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Reverse()
#define List_1_Reverse_m28099(__this, method) (( void (*) (List_1_t5751 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort()
#define List_1_Sort_m28100(__this, method) (( void (*) (List_1_t5751 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28101(__this, ___comparer, method) (( void (*) (List_1_t5751 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28102(__this, ___comparison, method) (( void (*) (List_1_t5751 *, Comparison_1_t852 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::ToArray()
#define List_1_ToArray_m28103(__this, method) (( ICanvasElementU5BU5D_t5753* (*) (List_1_t5751 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::TrimExcess()
#define List_1_TrimExcess_m28104(__this, method) (( void (*) (List_1_t5751 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Capacity()
#define List_1_get_Capacity_m28105(__this, method) (( int32_t (*) (List_1_t5751 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28106(__this, ___value, method) (( void (*) (List_1_t5751 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Count()
#define List_1_get_Count_m28107(__this, method) (( int32_t (*) (List_1_t5751 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
#define List_1_get_Item_m28108(__this, ___index, method) (( Object_t * (*) (List_1_t5751 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#define List_1_set_Item_m28109(__this, ___index, ___value, method) (( void (*) (List_1_t5751 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

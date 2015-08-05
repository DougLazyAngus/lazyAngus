#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t825;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t352;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t8881;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t467;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t8882;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.GameObject>
struct ICollection_1_t8883;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
struct ReadOnlyCollection_1_t5735;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t5736;
// System.Collections.Generic.IComparer`1<UnityEngine.GameObject>
struct IComparer_1_t8884;
// System.Comparison`1<UnityEngine.GameObject>
struct Comparison_1_t5738;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m5556(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27695(__this, ___collection, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define List_1__ctor_m27696(__this, ___capacity, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(T[],System.Int32)
#define List_1__ctor_m27697(__this, ___data, ___size, method) (( void (*) (List_1_t825 *, GameObjectU5BU5D_t467*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
#define List_1__cctor_m27698(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27699(__this, method) (( Object_t* (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27700(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t825 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27701(__this, method) (( Object_t * (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27702(__this, ___item, method) (( int32_t (*) (List_1_t825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27703(__this, ___item, method) (( bool (*) (List_1_t825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27704(__this, ___item, method) (( int32_t (*) (List_1_t825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27705(__this, ___index, ___item, method) (( void (*) (List_1_t825 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27706(__this, ___item, method) (( void (*) (List_1_t825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27707(__this, method) (( bool (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27708(__this, method) (( bool (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27709(__this, method) (( Object_t * (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27710(__this, method) (( bool (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27711(__this, method) (( bool (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27712(__this, ___index, method) (( Object_t * (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27713(__this, ___index, ___value, method) (( void (*) (List_1_t825 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
#define List_1_Add_m27714(__this, ___item, method) (( void (*) (List_1_t825 *, GameObject_t352 *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27715(__this, ___newCount, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27716(__this, ___idx, ___count, method) (( void (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27717(__this, ___collection, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27718(__this, ___enumerable, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27719(__this, ___collection, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::AsReadOnly()
#define List_1_AsReadOnly_m27720(__this, method) (( ReadOnlyCollection_1_t5735 * (*) (List_1_t825 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m27721(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
#define List_1_Contains_m27722(__this, ___item, method) (( bool (*) (List_1_t825 *, GameObject_t352 *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27723(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t825 *, GameObjectU5BU5D_t467*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::Find(System.Predicate`1<T>)
#define List_1_Find_m27724(__this, ___match, method) (( GameObject_t352 * (*) (List_1_t825 *, Predicate_1_t5736 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27725(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5736 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27726(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t825 *, int32_t, int32_t, Predicate_1_t5736 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m27727(__this, method) (( Enumerator_t5737  (*) (List_1_t825 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27728(__this, ___index, ___count, method) (( List_1_t825 * (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
#define List_1_IndexOf_m27729(__this, ___item, method) (( int32_t (*) (List_1_t825 *, GameObject_t352 *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27730(__this, ___start, ___delta, method) (( void (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27731(__this, ___index, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
#define List_1_Insert_m27732(__this, ___index, ___item, method) (( void (*) (List_1_t825 *, int32_t, GameObject_t352 *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27733(__this, ___collection, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27734(__this, ___index, ___collection, method) (( void (*) (List_1_t825 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27735(__this, ___index, ___collection, method) (( void (*) (List_1_t825 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27736(__this, ___index, ___enumerable, method) (( void (*) (List_1_t825 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
#define List_1_Remove_m27737(__this, ___item, method) (( bool (*) (List_1_t825 *, GameObject_t352 *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27738(__this, ___match, method) (( int32_t (*) (List_1_t825 *, Predicate_1_t5736 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27739(__this, ___index, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27740(__this, ___index, ___count, method) (( void (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Reverse()
#define List_1_Reverse_m27741(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort()
#define List_1_Sort_m27742(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27743(__this, ___comparer, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27744(__this, ___comparison, method) (( void (*) (List_1_t825 *, Comparison_1_t5738 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m27745(__this, method) (( GameObjectU5BU5D_t467* (*) (List_1_t825 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::TrimExcess()
#define List_1_TrimExcess_m27746(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m27747(__this, method) (( int32_t (*) (List_1_t825 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27748(__this, ___value, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m27749(__this, method) (( int32_t (*) (List_1_t825 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m27750(__this, ___index, method) (( GameObject_t352 * (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#define List_1_set_Item_m27751(__this, ___index, ___value, method) (( void (*) (List_1_t825 *, int32_t, GameObject_t352 *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
struct List_1_t3544;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<MouseHole/MouseHoleLocation>
struct IEnumerable_1_t4284;
// System.Collections.Generic.IEnumerator`1<MouseHole/MouseHoleLocation>
struct IEnumerator_1_t4285;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<MouseHole/MouseHoleLocation>
struct ICollection_1_t4286;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseHole/MouseHoleLocation>
struct ReadOnlyCollection_1_t4287;
// MouseHole/MouseHoleLocation[]
struct MouseHoleLocationU5BU5D_t592;
// System.Predicate`1<MouseHole/MouseHoleLocation>
struct Predicate_1_t4288;
// System.Collections.Generic.IComparer`1<MouseHole/MouseHoleLocation>
struct IComparer_1_t4289;
// System.Comparison`1<MouseHole/MouseHoleLocation>
struct Comparison_1_t4290;
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// System.Collections.Generic.List`1/Enumerator<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54.h"

// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor()
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_51MethodDeclarations.h"
#define List_1__ctor_m21036(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1__ctor_m20897_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21037(__this, ___collection, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1__ctor_m20898_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Int32)
#define List_1__ctor_m21038(__this, ___capacity, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1__ctor_m20899_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.cctor()
#define List_1__cctor_m21039(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20900_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21040(__this, method) (( Object_t* (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21041(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3544 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20902_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21042(__this, method) (( Object_t * (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20903_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21043(__this, ___item, method) (( int32_t (*) (List_1_t3544 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20904_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21044(__this, ___item, method) (( bool (*) (List_1_t3544 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20905_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21045(__this, ___item, method) (( int32_t (*) (List_1_t3544 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20906_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21046(__this, ___index, ___item, method) (( void (*) (List_1_t3544 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20907_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21047(__this, ___item, method) (( void (*) (List_1_t3544 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20908_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21048(__this, method) (( bool (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20909_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21049(__this, method) (( bool (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20910_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21050(__this, method) (( Object_t * (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20911_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21051(__this, method) (( bool (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20912_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21052(__this, method) (( bool (*) (List_1_t3544 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20913_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21053(__this, ___index, method) (( Object_t * (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20914_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21054(__this, ___index, ___value, method) (( void (*) (List_1_t3544 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20915_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(T)
#define List_1_Add_m21055(__this, ___item, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_Add_m20916_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21056(__this, ___newCount, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20917_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21057(__this, ___collection, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20918_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21058(__this, ___enumerable, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20919_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m21059(__this, ___collection, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_AddRange_m20920_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AsReadOnly()
#define List_1_AsReadOnly_m21060(__this, method) (( ReadOnlyCollection_1_t4287 * (*) (List_1_t3544 *, const MethodInfo*))List_1_AsReadOnly_m20921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Clear()
#define List_1_Clear_m21061(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1_Clear_m20922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Contains(T)
#define List_1_Contains_m21062(__this, ___item, method) (( bool (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_Contains_m20923_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21063(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3544 *, MouseHoleLocationU5BU5D_t592*, int32_t, const MethodInfo*))List_1_CopyTo_m20924_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Find(System.Predicate`1<T>)
#define List_1_Find_m21064(__this, ___match, method) (( int32_t (*) (List_1_t3544 *, Predicate_1_t4288 *, const MethodInfo*))List_1_Find_m20925_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21065(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4288 *, const MethodInfo*))List_1_CheckMatch_m20926_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21066(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3544 *, int32_t, int32_t, Predicate_1_t4288 *, const MethodInfo*))List_1_GetIndex_m20927_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetEnumerator()
#define List_1_GetEnumerator_m21067(__this, method) (( Enumerator_t4291  (*) (List_1_t3544 *, const MethodInfo*))List_1_GetEnumerator_m20928_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::IndexOf(T)
#define List_1_IndexOf_m21068(__this, ___item, method) (( int32_t (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_IndexOf_m20929_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21069(__this, ___start, ___delta, method) (( void (*) (List_1_t3544 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20930_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21070(__this, ___index, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20931_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Insert(System.Int32,T)
#define List_1_Insert_m21071(__this, ___index, ___item, method) (( void (*) (List_1_t3544 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m20932_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21072(__this, ___collection, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20933_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Remove(T)
#define List_1_Remove_m21073(__this, ___item, method) (( bool (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_Remove_m20934_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21074(__this, ___match, method) (( int32_t (*) (List_1_t3544 *, Predicate_1_t4288 *, const MethodInfo*))List_1_RemoveAll_m20935_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21075(__this, ___index, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20936_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Reverse()
#define List_1_Reverse_m21076(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1_Reverse_m20937_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort()
#define List_1_Sort_m21077(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1_Sort_m20938_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21078(__this, ___comparer, method) (( void (*) (List_1_t3544 *, Object_t*, const MethodInfo*))List_1_Sort_m20939_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21079(__this, ___comparison, method) (( void (*) (List_1_t3544 *, Comparison_1_t4290 *, const MethodInfo*))List_1_Sort_m20940_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::ToArray()
#define List_1_ToArray_m21080(__this, method) (( MouseHoleLocationU5BU5D_t592* (*) (List_1_t3544 *, const MethodInfo*))List_1_ToArray_m20941_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::TrimExcess()
#define List_1_TrimExcess_m21081(__this, method) (( void (*) (List_1_t3544 *, const MethodInfo*))List_1_TrimExcess_m20942_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Capacity()
#define List_1_get_Capacity_m21082(__this, method) (( int32_t (*) (List_1_t3544 *, const MethodInfo*))List_1_get_Capacity_m20943_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21083(__this, ___value, method) (( void (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20944_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Count()
#define List_1_get_Count_m21084(__this, method) (( int32_t (*) (List_1_t3544 *, const MethodInfo*))List_1_get_Count_m20945_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Item(System.Int32)
#define List_1_get_Item_m21085(__this, ___index, method) (( int32_t (*) (List_1_t3544 *, int32_t, const MethodInfo*))List_1_get_Item_m20946_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Item(System.Int32,T)
#define List_1_set_Item_m21086(__this, ___index, ___value, method) (( void (*) (List_1_t3544 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m20947_gshared)(__this, ___index, ___value, method)

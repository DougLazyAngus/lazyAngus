#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
struct List_1_t3568;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<MouseHole/MouseHoleLocation>
struct IEnumerable_1_t4308;
// System.Collections.Generic.IEnumerator`1<MouseHole/MouseHoleLocation>
struct IEnumerator_1_t4309;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<MouseHole/MouseHoleLocation>
struct ICollection_1_t4310;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseHole/MouseHoleLocation>
struct ReadOnlyCollection_1_t4311;
// MouseHole/MouseHoleLocation[]
struct MouseHoleLocationU5BU5D_t615;
// System.Predicate`1<MouseHole/MouseHoleLocation>
struct Predicate_1_t4312;
// System.Collections.Generic.IComparer`1<MouseHole/MouseHoleLocation>
struct IComparer_1_t4313;
// System.Comparison`1<MouseHole/MouseHoleLocation>
struct Comparison_1_t4314;
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// System.Collections.Generic.List`1/Enumerator<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54.h"

// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor()
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_51MethodDeclarations.h"
#define List_1__ctor_m21194(__this, method) (( void (*) (List_1_t3568 *, const MethodInfo*))List_1__ctor_m21055_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21195(__this, ___collection, method) (( void (*) (List_1_t3568 *, Object_t*, const MethodInfo*))List_1__ctor_m21056_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Int32)
#define List_1__ctor_m21196(__this, ___capacity, method) (( void (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1__ctor_m21057_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.cctor()
#define List_1__cctor_m21197(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21058_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21198(__this, method) (( Object_t* (*) (List_1_t3568 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21059_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21199(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3568 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21060_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21200(__this, method) (( Object_t * (*) (List_1_t3568 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21061_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21201(__this, ___item, method) (( int32_t (*) (List_1_t3568 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21062_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21202(__this, ___item, method) (( bool (*) (List_1_t3568 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21063_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21203(__this, ___item, method) (( int32_t (*) (List_1_t3568 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21064_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21204(__this, ___index, ___item, method) (( void (*) (List_1_t3568 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21065_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21205(__this, ___item, method) (( void (*) (List_1_t3568 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21066_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21206(__this, method) (( bool (*) (List_1_t3568 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21067_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21207(__this, method) (( bool (*) (List_1_t3568 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21068_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21208(__this, method) (( Object_t * (*) (List_1_t3568 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21069_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21209(__this, method) (( bool (*) (List_1_t3568 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21210(__this, method) (( bool (*) (List_1_t3568 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21071_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21211(__this, ___index, method) (( Object_t * (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21072_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21212(__this, ___index, ___value, method) (( void (*) (List_1_t3568 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21073_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(T)
#define List_1_Add_m21213(__this, ___item, method) (( void (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_Add_m21074_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21214(__this, ___newCount, method) (( void (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21075_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21215(__this, ___collection, method) (( void (*) (List_1_t3568 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21076_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21216(__this, ___enumerable, method) (( void (*) (List_1_t3568 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21077_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m21217(__this, ___collection, method) (( void (*) (List_1_t3568 *, Object_t*, const MethodInfo*))List_1_AddRange_m21078_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AsReadOnly()
#define List_1_AsReadOnly_m21218(__this, method) (( ReadOnlyCollection_1_t4311 * (*) (List_1_t3568 *, const MethodInfo*))List_1_AsReadOnly_m21079_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Clear()
#define List_1_Clear_m21219(__this, method) (( void (*) (List_1_t3568 *, const MethodInfo*))List_1_Clear_m21080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Contains(T)
#define List_1_Contains_m21220(__this, ___item, method) (( bool (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_Contains_m21081_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21221(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3568 *, MouseHoleLocationU5BU5D_t615*, int32_t, const MethodInfo*))List_1_CopyTo_m21082_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Find(System.Predicate`1<T>)
#define List_1_Find_m21222(__this, ___match, method) (( int32_t (*) (List_1_t3568 *, Predicate_1_t4312 *, const MethodInfo*))List_1_Find_m21083_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21223(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4312 *, const MethodInfo*))List_1_CheckMatch_m21084_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21224(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3568 *, int32_t, int32_t, Predicate_1_t4312 *, const MethodInfo*))List_1_GetIndex_m21085_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetEnumerator()
#define List_1_GetEnumerator_m21225(__this, method) (( Enumerator_t4315  (*) (List_1_t3568 *, const MethodInfo*))List_1_GetEnumerator_m21086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::IndexOf(T)
#define List_1_IndexOf_m21226(__this, ___item, method) (( int32_t (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_IndexOf_m21087_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21227(__this, ___start, ___delta, method) (( void (*) (List_1_t3568 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21088_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21228(__this, ___index, method) (( void (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21089_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Insert(System.Int32,T)
#define List_1_Insert_m21229(__this, ___index, ___item, method) (( void (*) (List_1_t3568 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m21090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21230(__this, ___collection, method) (( void (*) (List_1_t3568 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21091_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Remove(T)
#define List_1_Remove_m21231(__this, ___item, method) (( bool (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_Remove_m21092_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21232(__this, ___match, method) (( int32_t (*) (List_1_t3568 *, Predicate_1_t4312 *, const MethodInfo*))List_1_RemoveAll_m21093_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21233(__this, ___index, method) (( void (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21094_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Reverse()
#define List_1_Reverse_m21234(__this, method) (( void (*) (List_1_t3568 *, const MethodInfo*))List_1_Reverse_m21095_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort()
#define List_1_Sort_m21235(__this, method) (( void (*) (List_1_t3568 *, const MethodInfo*))List_1_Sort_m21096_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21236(__this, ___comparer, method) (( void (*) (List_1_t3568 *, Object_t*, const MethodInfo*))List_1_Sort_m21097_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21237(__this, ___comparison, method) (( void (*) (List_1_t3568 *, Comparison_1_t4314 *, const MethodInfo*))List_1_Sort_m21098_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::ToArray()
#define List_1_ToArray_m21238(__this, method) (( MouseHoleLocationU5BU5D_t615* (*) (List_1_t3568 *, const MethodInfo*))List_1_ToArray_m21099_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::TrimExcess()
#define List_1_TrimExcess_m21239(__this, method) (( void (*) (List_1_t3568 *, const MethodInfo*))List_1_TrimExcess_m21100_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Capacity()
#define List_1_get_Capacity_m21240(__this, method) (( int32_t (*) (List_1_t3568 *, const MethodInfo*))List_1_get_Capacity_m21101_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21241(__this, ___value, method) (( void (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21102_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Count()
#define List_1_get_Count_m21242(__this, method) (( int32_t (*) (List_1_t3568 *, const MethodInfo*))List_1_get_Count_m21103_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Item(System.Int32)
#define List_1_get_Item_m21243(__this, ___index, method) (( int32_t (*) (List_1_t3568 *, int32_t, const MethodInfo*))List_1_get_Item_m21104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Item(System.Int32,T)
#define List_1_set_Item_m21244(__this, ___index, ___value, method) (( void (*) (List_1_t3568 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m21105_gshared)(__this, ___index, ___value, method)

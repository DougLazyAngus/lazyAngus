#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>
struct List_1_t798;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<MouseHole/MouseHoleLocation>
struct IEnumerable_1_t8928;
// MouseHole/MouseHoleLocation[]
struct MouseHoleLocationU5BU5D_t5725;
// System.Collections.Generic.IEnumerator`1<MouseHole/MouseHoleLocation>
struct IEnumerator_1_t8929;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<MouseHole/MouseHoleLocation>
struct ICollection_1_t8930;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MouseHole/MouseHoleLocation>
struct ReadOnlyCollection_1_t5746;
// System.Predicate`1<MouseHole/MouseHoleLocation>
struct Predicate_1_t5747;
// System.Collections.Generic.IComparer`1<MouseHole/MouseHoleLocation>
struct IComparer_1_t8931;
// System.Comparison`1<MouseHole/MouseHoleLocation>
struct Comparison_1_t5749;
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// System.Collections.Generic.List`1/Enumerator<MouseHole/MouseHoleLocation>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor()
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"
#define List_1__ctor_m4261(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1__ctor_m4263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27100(__this, ___collection, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1__ctor_m26457_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(System.Int32)
#define List_1__ctor_m27101(__this, ___capacity, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1__ctor_m26459_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.ctor(T[],System.Int32)
#define List_1__ctor_m27102(__this, ___data, ___size, method) (( void (*) (List_1_t798 *, MouseHoleLocationU5BU5D_t5725*, int32_t, const MethodInfo*))List_1__ctor_m26461_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::.cctor()
#define List_1__cctor_m27103(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26463_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27104(__this, method) (( Object_t* (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26465_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27105(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t798 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26467_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27106(__this, method) (( Object_t * (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26469_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27107(__this, ___item, method) (( int32_t (*) (List_1_t798 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26471_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27108(__this, ___item, method) (( bool (*) (List_1_t798 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26473_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27109(__this, ___item, method) (( int32_t (*) (List_1_t798 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27110(__this, ___index, ___item, method) (( void (*) (List_1_t798 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26477_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27111(__this, ___item, method) (( void (*) (List_1_t798 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26479_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27112(__this, method) (( bool (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26481_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27113(__this, method) (( bool (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26483_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27114(__this, method) (( Object_t * (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26485_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27115(__this, method) (( bool (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26487_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27116(__this, method) (( bool (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26489_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27117(__this, ___index, method) (( Object_t * (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26491_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27118(__this, ___index, ___value, method) (( void (*) (List_1_t798 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26493_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Add(T)
#define List_1_Add_m27119(__this, ___item, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_Add_m26495_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27120(__this, ___newCount, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26497_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27121(__this, ___idx, ___count, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26499_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27122(__this, ___collection, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26501_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27123(__this, ___enumerable, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26503_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27124(__this, ___collection, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_AddRange_m26505_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::AsReadOnly()
#define List_1_AsReadOnly_m27125(__this, method) (( ReadOnlyCollection_1_t5746 * (*) (List_1_t798 *, const MethodInfo*))List_1_AsReadOnly_m26507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Clear()
#define List_1_Clear_m27126(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1_Clear_m26509_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Contains(T)
#define List_1_Contains_m27127(__this, ___item, method) (( bool (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_Contains_m26511_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27128(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t798 *, MouseHoleLocationU5BU5D_t5725*, int32_t, const MethodInfo*))List_1_CopyTo_m26513_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Find(System.Predicate`1<T>)
#define List_1_Find_m27129(__this, ___match, method) (( int32_t (*) (List_1_t798 *, Predicate_1_t5747 *, const MethodInfo*))List_1_Find_m26515_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27130(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5747 *, const MethodInfo*))List_1_CheckMatch_m26517_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27131(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t798 *, int32_t, int32_t, Predicate_1_t5747 *, const MethodInfo*))List_1_GetIndex_m26519_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetEnumerator()
#define List_1_GetEnumerator_m27132(__this, method) (( Enumerator_t5748  (*) (List_1_t798 *, const MethodInfo*))List_1_GetEnumerator_m26521_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27133(__this, ___index, ___count, method) (( List_1_t798 * (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26523_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::IndexOf(T)
#define List_1_IndexOf_m27134(__this, ___item, method) (( int32_t (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_IndexOf_m26525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27135(__this, ___start, ___delta, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26527_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27136(__this, ___index, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26529_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Insert(System.Int32,T)
#define List_1_Insert_m27137(__this, ___index, ___item, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m26531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27138(__this, ___collection, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26533_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27139(__this, ___index, ___collection, method) (( void (*) (List_1_t798 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26535_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27140(__this, ___index, ___collection, method) (( void (*) (List_1_t798 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26537_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27141(__this, ___index, ___enumerable, method) (( void (*) (List_1_t798 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26539_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Remove(T)
#define List_1_Remove_m27142(__this, ___item, method) (( bool (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_Remove_m26541_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27143(__this, ___match, method) (( int32_t (*) (List_1_t798 *, Predicate_1_t5747 *, const MethodInfo*))List_1_RemoveAll_m26543_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27144(__this, ___index, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26545_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27145(__this, ___index, ___count, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26547_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Reverse()
#define List_1_Reverse_m27146(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1_Reverse_m26549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort()
#define List_1_Sort_m27147(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1_Sort_m26551_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27148(__this, ___comparer, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_Sort_m26553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27149(__this, ___comparison, method) (( void (*) (List_1_t798 *, Comparison_1_t5749 *, const MethodInfo*))List_1_Sort_m26555_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::ToArray()
#define List_1_ToArray_m27150(__this, method) (( MouseHoleLocationU5BU5D_t5725* (*) (List_1_t798 *, const MethodInfo*))List_1_ToArray_m26557_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::TrimExcess()
#define List_1_TrimExcess_m27151(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1_TrimExcess_m26559_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Capacity()
#define List_1_get_Capacity_m27152(__this, method) (( int32_t (*) (List_1_t798 *, const MethodInfo*))List_1_get_Capacity_m26561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27153(__this, ___value, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26563_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Count()
#define List_1_get_Count_m27154(__this, method) (( int32_t (*) (List_1_t798 *, const MethodInfo*))List_1_get_Count_m26565_gshared)(__this, method)
// T System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::get_Item(System.Int32)
#define List_1_get_Item_m27155(__this, ___index, method) (( int32_t (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_get_Item_m26567_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MouseHole/MouseHoleLocation>::set_Item(System.Int32,T)
#define List_1_set_Item_m27156(__this, ___index, ___value, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m26569_gshared)(__this, ___index, ___value, method)

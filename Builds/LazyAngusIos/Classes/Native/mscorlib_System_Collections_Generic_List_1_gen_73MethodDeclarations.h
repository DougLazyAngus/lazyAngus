#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t6591;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2241;
// System.Collections.Generic.IEnumerable`1<System.WeakReference>
struct IEnumerable_1_t9710;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t6590;
// System.Collections.Generic.IEnumerator`1<System.WeakReference>
struct IEnumerator_1_t9711;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.WeakReference>
struct ICollection_1_t9712;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.WeakReference>
struct ReadOnlyCollection_1_t6592;
// System.Predicate`1<System.WeakReference>
struct Predicate_1_t6593;
// System.Collections.Generic.IComparer`1<System.WeakReference>
struct IComparer_1_t9713;
// System.Comparison`1<System.WeakReference>
struct Comparison_1_t6595;
// System.Collections.Generic.List`1/Enumerator<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54.h"

// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m35912(__this, method) (( void (*) (List_1_t6591 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m35913(__this, ___collection, method) (( void (*) (List_1_t6591 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(System.Int32)
#define List_1__ctor_m35914(__this, ___capacity, method) (( void (*) (List_1_t6591 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor(T[],System.Int32)
#define List_1__ctor_m35915(__this, ___data, ___size, method) (( void (*) (List_1_t6591 *, WeakReferenceU5BU5D_t6590*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.cctor()
#define List_1__cctor_m35916(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35917(__this, method) (( Object_t* (*) (List_1_t6591 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m35918(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6591 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m35919(__this, method) (( Object_t * (*) (List_1_t6591 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m35920(__this, ___item, method) (( int32_t (*) (List_1_t6591 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m35921(__this, ___item, method) (( bool (*) (List_1_t6591 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m35922(__this, ___item, method) (( int32_t (*) (List_1_t6591 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m35923(__this, ___index, ___item, method) (( void (*) (List_1_t6591 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m35924(__this, ___item, method) (( void (*) (List_1_t6591 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35925(__this, method) (( bool (*) (List_1_t6591 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m35926(__this, method) (( bool (*) (List_1_t6591 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m35927(__this, method) (( Object_t * (*) (List_1_t6591 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m35928(__this, method) (( bool (*) (List_1_t6591 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m35929(__this, method) (( bool (*) (List_1_t6591 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m35930(__this, ___index, method) (( Object_t * (*) (List_1_t6591 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m35931(__this, ___index, ___value, method) (( void (*) (List_1_t6591 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(T)
#define List_1_Add_m35932(__this, ___item, method) (( void (*) (List_1_t6591 *, WeakReference_t2241 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m35933(__this, ___newCount, method) (( void (*) (List_1_t6591 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m35934(__this, ___idx, ___count, method) (( void (*) (List_1_t6591 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m35935(__this, ___collection, method) (( void (*) (List_1_t6591 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m35936(__this, ___enumerable, method) (( void (*) (List_1_t6591 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m35937(__this, ___collection, method) (( void (*) (List_1_t6591 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.WeakReference>::AsReadOnly()
#define List_1_AsReadOnly_m35938(__this, method) (( ReadOnlyCollection_1_t6592 * (*) (List_1_t6591 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Clear()
#define List_1_Clear_m35939(__this, method) (( void (*) (List_1_t6591 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Contains(T)
#define List_1_Contains_m35940(__this, ___item, method) (( bool (*) (List_1_t6591 *, WeakReference_t2241 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m35941(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6591 *, WeakReferenceU5BU5D_t6590*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.WeakReference>::Find(System.Predicate`1<T>)
#define List_1_Find_m35942(__this, ___match, method) (( WeakReference_t2241 * (*) (List_1_t6591 *, Predicate_1_t6593 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m35943(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6593 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m35944(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6591 *, int32_t, int32_t, Predicate_1_t6593 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
#define List_1_GetEnumerator_m35945(__this, method) (( Enumerator_t6594  (*) (List_1_t6591 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.WeakReference>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m35946(__this, ___index, ___count, method) (( List_1_t6591 * (*) (List_1_t6591 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::IndexOf(T)
#define List_1_IndexOf_m35947(__this, ___item, method) (( int32_t (*) (List_1_t6591 *, WeakReference_t2241 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m35948(__this, ___start, ___delta, method) (( void (*) (List_1_t6591 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m35949(__this, ___index, method) (( void (*) (List_1_t6591 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Insert(System.Int32,T)
#define List_1_Insert_m35950(__this, ___index, ___item, method) (( void (*) (List_1_t6591 *, int32_t, WeakReference_t2241 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m35951(__this, ___collection, method) (( void (*) (List_1_t6591 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m35952(__this, ___index, ___collection, method) (( void (*) (List_1_t6591 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m35953(__this, ___index, ___collection, method) (( void (*) (List_1_t6591 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m35954(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6591 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(T)
#define List_1_Remove_m35955(__this, ___item, method) (( bool (*) (List_1_t6591 *, WeakReference_t2241 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m35956(__this, ___match, method) (( int32_t (*) (List_1_t6591 *, Predicate_1_t6593 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m35957(__this, ___index, method) (( void (*) (List_1_t6591 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m35958(__this, ___index, ___count, method) (( void (*) (List_1_t6591 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Reverse()
#define List_1_Reverse_m35959(__this, method) (( void (*) (List_1_t6591 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort()
#define List_1_Sort_m35960(__this, method) (( void (*) (List_1_t6591 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m35961(__this, ___comparer, method) (( void (*) (List_1_t6591 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m35962(__this, ___comparison, method) (( void (*) (List_1_t6591 *, Comparison_1_t6595 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.WeakReference>::ToArray()
#define List_1_ToArray_m35963(__this, method) (( WeakReferenceU5BU5D_t6590* (*) (List_1_t6591 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::TrimExcess()
#define List_1_TrimExcess_m35964(__this, method) (( void (*) (List_1_t6591 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Capacity()
#define List_1_get_Capacity_m35965(__this, method) (( int32_t (*) (List_1_t6591 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m35966(__this, ___value, method) (( void (*) (List_1_t6591 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.WeakReference>::get_Count()
#define List_1_get_Count_m35967(__this, method) (( int32_t (*) (List_1_t6591 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.WeakReference>::get_Item(System.Int32)
#define List_1_get_Item_m35968(__this, ___index, method) (( WeakReference_t2241 * (*) (List_1_t6591 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.WeakReference>::set_Item(System.Int32,T)
#define List_1_set_Item_m35969(__this, ___index, ___value, method) (( void (*) (List_1_t6591 *, int32_t, WeakReference_t2241 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

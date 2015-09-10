#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t7508;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t9889;
// System.Boolean[]
struct BooleanU5BU5D_t487;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t9786;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t9781;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Boolean>
struct ReadOnlyCollection_1_t7509;
// System.Predicate`1<System.Boolean>
struct Predicate_1_t7510;
// System.Collections.Generic.IComparer`1<System.Boolean>
struct IComparer_1_t9890;
// System.Comparison`1<System.Boolean>
struct Comparison_1_t7512;
// System.Collections.Generic.List`1/Enumerator<System.Boolean>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_71.h"

// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
// System.Collections.Generic.List`1<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_gen_78MethodDeclarations.h"
#define List_1__ctor_m47627(__this, method) (( void (*) (List_1_t7508 *, const MethodInfo*))List_1__ctor_m40409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m47628(__this, ___collection, method) (( void (*) (List_1_t7508 *, Object_t*, const MethodInfo*))List_1__ctor_m40410_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Int32)
#define List_1__ctor_m47629(__this, ___capacity, method) (( void (*) (List_1_t7508 *, int32_t, const MethodInfo*))List_1__ctor_m40411_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(T[],System.Int32)
#define List_1__ctor_m47630(__this, ___data, ___size, method) (( void (*) (List_1_t7508 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1__ctor_m40412_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.cctor()
#define List_1__cctor_m47631(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m40413_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47632(__this, method) (( Object_t* (*) (List_1_t7508 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40414_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m47633(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7508 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m40415_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47634(__this, method) (( Object_t * (*) (List_1_t7508 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m40416_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m47635(__this, ___item, method) (( int32_t (*) (List_1_t7508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m40417_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m47636(__this, ___item, method) (( bool (*) (List_1_t7508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m40418_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m47637(__this, ___item, method) (( int32_t (*) (List_1_t7508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m40419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m47638(__this, ___index, ___item, method) (( void (*) (List_1_t7508 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m40420_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m47639(__this, ___item, method) (( void (*) (List_1_t7508 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m40421_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47640(__this, method) (( bool (*) (List_1_t7508 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47641(__this, method) (( bool (*) (List_1_t7508 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m40423_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m47642(__this, method) (( Object_t * (*) (List_1_t7508 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m40424_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m47643(__this, method) (( bool (*) (List_1_t7508 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m40425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m47644(__this, method) (( bool (*) (List_1_t7508 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m40426_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m47645(__this, ___index, method) (( Object_t * (*) (List_1_t7508 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m40427_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m47646(__this, ___index, ___value, method) (( void (*) (List_1_t7508 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m40428_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
#define List_1_Add_m47647(__this, ___item, method) (( void (*) (List_1_t7508 *, bool, const MethodInfo*))List_1_Add_m40429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m47648(__this, ___newCount, method) (( void (*) (List_1_t7508 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m40430_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m47649(__this, ___idx, ___count, method) (( void (*) (List_1_t7508 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m40431_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m47650(__this, ___collection, method) (( void (*) (List_1_t7508 *, Object_t*, const MethodInfo*))List_1_AddCollection_m40432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m47651(__this, ___enumerable, method) (( void (*) (List_1_t7508 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m40433_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m47652(__this, ___collection, method) (( void (*) (List_1_t7508 *, Object_t*, const MethodInfo*))List_1_AddRange_m40434_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Boolean>::AsReadOnly()
#define List_1_AsReadOnly_m47653(__this, method) (( ReadOnlyCollection_1_t7509 * (*) (List_1_t7508 *, const MethodInfo*))List_1_AsReadOnly_m40435_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Clear()
#define List_1_Clear_m47654(__this, method) (( void (*) (List_1_t7508 *, const MethodInfo*))List_1_Clear_m40436_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(T)
#define List_1_Contains_m47655(__this, ___item, method) (( bool (*) (List_1_t7508 *, bool, const MethodInfo*))List_1_Contains_m40437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m47656(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7508 *, BooleanU5BU5D_t487*, int32_t, const MethodInfo*))List_1_CopyTo_m40438_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Boolean>::Find(System.Predicate`1<T>)
#define List_1_Find_m47657(__this, ___match, method) (( bool (*) (List_1_t7508 *, Predicate_1_t7510 *, const MethodInfo*))List_1_Find_m40439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m47658(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7510 *, const MethodInfo*))List_1_CheckMatch_m40440_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m47659(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7508 *, int32_t, int32_t, Predicate_1_t7510 *, const MethodInfo*))List_1_GetIndex_m40441_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Boolean>::GetEnumerator()
#define List_1_GetEnumerator_m47660(__this, method) (( Enumerator_t7511  (*) (List_1_t7508 *, const MethodInfo*))List_1_GetEnumerator_m40442_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Boolean>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m47661(__this, ___index, ___count, method) (( List_1_t7508 * (*) (List_1_t7508 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m40443_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::IndexOf(T)
#define List_1_IndexOf_m47662(__this, ___item, method) (( int32_t (*) (List_1_t7508 *, bool, const MethodInfo*))List_1_IndexOf_m40444_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m47663(__this, ___start, ___delta, method) (( void (*) (List_1_t7508 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m40445_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m47664(__this, ___index, method) (( void (*) (List_1_t7508 *, int32_t, const MethodInfo*))List_1_CheckIndex_m40446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Insert(System.Int32,T)
#define List_1_Insert_m47665(__this, ___index, ___item, method) (( void (*) (List_1_t7508 *, int32_t, bool, const MethodInfo*))List_1_Insert_m40447_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m47666(__this, ___collection, method) (( void (*) (List_1_t7508 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m40448_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m47667(__this, ___index, ___collection, method) (( void (*) (List_1_t7508 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m40449_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m47668(__this, ___index, ___collection, method) (( void (*) (List_1_t7508 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m40450_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m47669(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7508 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m40451_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Remove(T)
#define List_1_Remove_m47670(__this, ___item, method) (( bool (*) (List_1_t7508 *, bool, const MethodInfo*))List_1_Remove_m40452_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m47671(__this, ___match, method) (( int32_t (*) (List_1_t7508 *, Predicate_1_t7510 *, const MethodInfo*))List_1_RemoveAll_m40453_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m47672(__this, ___index, method) (( void (*) (List_1_t7508 *, int32_t, const MethodInfo*))List_1_RemoveAt_m40454_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m47673(__this, ___index, ___count, method) (( void (*) (List_1_t7508 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m40455_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Reverse()
#define List_1_Reverse_m47674(__this, method) (( void (*) (List_1_t7508 *, const MethodInfo*))List_1_Reverse_m40456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort()
#define List_1_Sort_m47675(__this, method) (( void (*) (List_1_t7508 *, const MethodInfo*))List_1_Sort_m40457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m47676(__this, ___comparer, method) (( void (*) (List_1_t7508 *, Object_t*, const MethodInfo*))List_1_Sort_m40458_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m47677(__this, ___comparison, method) (( void (*) (List_1_t7508 *, Comparison_1_t7512 *, const MethodInfo*))List_1_Sort_m40459_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
#define List_1_ToArray_m47678(__this, method) (( BooleanU5BU5D_t487* (*) (List_1_t7508 *, const MethodInfo*))List_1_ToArray_m40460_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::TrimExcess()
#define List_1_TrimExcess_m47679(__this, method) (( void (*) (List_1_t7508 *, const MethodInfo*))List_1_TrimExcess_m40461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Capacity()
#define List_1_get_Capacity_m47680(__this, method) (( int32_t (*) (List_1_t7508 *, const MethodInfo*))List_1_get_Capacity_m40462_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m47681(__this, ___value, method) (( void (*) (List_1_t7508 *, int32_t, const MethodInfo*))List_1_set_Capacity_m40463_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
#define List_1_get_Count_m47682(__this, method) (( int32_t (*) (List_1_t7508 *, const MethodInfo*))List_1_get_Count_m40464_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
#define List_1_get_Item_m47683(__this, ___index, method) (( bool (*) (List_1_t7508 *, int32_t, const MethodInfo*))List_1_get_Item_m40465_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,T)
#define List_1_set_Item_m47684(__this, ___index, ___value, method) (( void (*) (List_1_t7508 *, int32_t, bool, const MethodInfo*))List_1_set_Item_m40466_gshared)(__this, ___index, ___value, method)

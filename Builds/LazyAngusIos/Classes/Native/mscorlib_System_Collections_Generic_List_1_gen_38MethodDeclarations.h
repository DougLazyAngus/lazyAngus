#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t940;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t938;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
struct IEnumerable_1_t9650;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t6431;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t9651;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t1085;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
struct ReadOnlyCollection_1_t6432;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t6433;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Graphic>
struct IComparer_1_t9652;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t941;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6090(__this, method) (( void (*) (List_1_t940 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m34013(__this, ___collection, method) (( void (*) (List_1_t940 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Int32)
#define List_1__ctor_m34014(__this, ___capacity, method) (( void (*) (List_1_t940 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(T[],System.Int32)
#define List_1__ctor_m34015(__this, ___data, ___size, method) (( void (*) (List_1_t940 *, GraphicU5BU5D_t6431*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.cctor()
#define List_1__cctor_m34016(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34017(__this, method) (( Object_t* (*) (List_1_t940 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m34018(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t940 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m34019(__this, method) (( Object_t * (*) (List_1_t940 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m34020(__this, ___item, method) (( int32_t (*) (List_1_t940 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m34021(__this, ___item, method) (( bool (*) (List_1_t940 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m34022(__this, ___item, method) (( int32_t (*) (List_1_t940 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m34023(__this, ___index, ___item, method) (( void (*) (List_1_t940 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m34024(__this, ___item, method) (( void (*) (List_1_t940 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34025(__this, method) (( bool (*) (List_1_t940 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m34026(__this, method) (( bool (*) (List_1_t940 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m34027(__this, method) (( Object_t * (*) (List_1_t940 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m34028(__this, method) (( bool (*) (List_1_t940 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m34029(__this, method) (( bool (*) (List_1_t940 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m34030(__this, ___index, method) (( Object_t * (*) (List_1_t940 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m34031(__this, ___index, ___value, method) (( void (*) (List_1_t940 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Add(T)
#define List_1_Add_m34032(__this, ___item, method) (( void (*) (List_1_t940 *, Graphic_t938 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m34033(__this, ___newCount, method) (( void (*) (List_1_t940 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m34034(__this, ___idx, ___count, method) (( void (*) (List_1_t940 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m34035(__this, ___collection, method) (( void (*) (List_1_t940 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m34036(__this, ___enumerable, method) (( void (*) (List_1_t940 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m34037(__this, ___collection, method) (( void (*) (List_1_t940 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AsReadOnly()
#define List_1_AsReadOnly_m34038(__this, method) (( ReadOnlyCollection_1_t6432 * (*) (List_1_t940 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Clear()
#define List_1_Clear_m34039(__this, method) (( void (*) (List_1_t940 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Contains(T)
#define List_1_Contains_m34040(__this, ___item, method) (( bool (*) (List_1_t940 *, Graphic_t938 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m34041(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t940 *, GraphicU5BU5D_t6431*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Find(System.Predicate`1<T>)
#define List_1_Find_m34042(__this, ___match, method) (( Graphic_t938 * (*) (List_1_t940 *, Predicate_1_t6433 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m34043(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6433 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m34044(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t940 *, int32_t, int32_t, Predicate_1_t6433 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define List_1_GetEnumerator_m34045(__this, method) (( Enumerator_t6434  (*) (List_1_t940 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m34046(__this, ___index, ___count, method) (( List_1_t940 * (*) (List_1_t940 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define List_1_IndexOf_m34047(__this, ___item, method) (( int32_t (*) (List_1_t940 *, Graphic_t938 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m34048(__this, ___start, ___delta, method) (( void (*) (List_1_t940 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m34049(__this, ___index, method) (( void (*) (List_1_t940 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define List_1_Insert_m34050(__this, ___index, ___item, method) (( void (*) (List_1_t940 *, int32_t, Graphic_t938 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m34051(__this, ___collection, method) (( void (*) (List_1_t940 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m34052(__this, ___index, ___collection, method) (( void (*) (List_1_t940 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m34053(__this, ___index, ___collection, method) (( void (*) (List_1_t940 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m34054(__this, ___index, ___enumerable, method) (( void (*) (List_1_t940 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Remove(T)
#define List_1_Remove_m34055(__this, ___item, method) (( bool (*) (List_1_t940 *, Graphic_t938 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m34056(__this, ___match, method) (( int32_t (*) (List_1_t940 *, Predicate_1_t6433 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m34057(__this, ___index, method) (( void (*) (List_1_t940 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m34058(__this, ___index, ___count, method) (( void (*) (List_1_t940 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Reverse()
#define List_1_Reverse_m34059(__this, method) (( void (*) (List_1_t940 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort()
#define List_1_Sort_m34060(__this, method) (( void (*) (List_1_t940 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m34061(__this, ___comparer, method) (( void (*) (List_1_t940 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m6102(__this, ___comparison, method) (( void (*) (List_1_t940 *, Comparison_1_t941 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::ToArray()
#define List_1_ToArray_m34062(__this, method) (( GraphicU5BU5D_t6431* (*) (List_1_t940 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::TrimExcess()
#define List_1_TrimExcess_m34063(__this, method) (( void (*) (List_1_t940 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Capacity()
#define List_1_get_Capacity_m34064(__this, method) (( int32_t (*) (List_1_t940 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m34065(__this, ___value, method) (( void (*) (List_1_t940 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Count()
#define List_1_get_Count_m34066(__this, method) (( int32_t (*) (List_1_t940 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define List_1_get_Item_m34067(__this, ___index, method) (( Graphic_t938 * (*) (List_1_t940 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define List_1_set_Item_m34068(__this, ___index, ___value, method) (( void (*) (List_1_t940 *, int32_t, Graphic_t938 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

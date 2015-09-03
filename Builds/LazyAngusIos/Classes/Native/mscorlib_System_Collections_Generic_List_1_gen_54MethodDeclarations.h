#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t2785;
// System.Object
struct Object_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t2786;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rigidbody2D>
struct IEnumerable_1_t10238;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t8990;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Rigidbody2D>
struct IEnumerator_1_t10239;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>
struct ICollection_1_t10240;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
struct ReadOnlyCollection_1_t8992;
// System.Predicate`1<UnityEngine.Rigidbody2D>
struct Predicate_1_t8993;
// System.Collections.Generic.IComparer`1<UnityEngine.Rigidbody2D>
struct IComparer_1_t10241;
// System.Comparison`1<UnityEngine.Rigidbody2D>
struct Comparison_1_t8995;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_103.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m10272(__this, method) (( void (*) (List_1_t2785 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m65345(__this, ___collection, method) (( void (*) (List_1_t2785 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Int32)
#define List_1__ctor_m65346(__this, ___capacity, method) (( void (*) (List_1_t2785 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(T[],System.Int32)
#define List_1__ctor_m65347(__this, ___data, ___size, method) (( void (*) (List_1_t2785 *, Rigidbody2DU5BU5D_t8990*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.cctor()
#define List_1__cctor_m65348(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m65349(__this, method) (( Object_t* (*) (List_1_t2785 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m65350(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2785 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m65351(__this, method) (( Object_t * (*) (List_1_t2785 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m65352(__this, ___item, method) (( int32_t (*) (List_1_t2785 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m65353(__this, ___item, method) (( bool (*) (List_1_t2785 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m65354(__this, ___item, method) (( int32_t (*) (List_1_t2785 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m65355(__this, ___index, ___item, method) (( void (*) (List_1_t2785 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m65356(__this, ___item, method) (( void (*) (List_1_t2785 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m65357(__this, method) (( bool (*) (List_1_t2785 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m65358(__this, method) (( bool (*) (List_1_t2785 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m65359(__this, method) (( Object_t * (*) (List_1_t2785 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m65360(__this, method) (( bool (*) (List_1_t2785 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m65361(__this, method) (( bool (*) (List_1_t2785 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m65362(__this, ___index, method) (( Object_t * (*) (List_1_t2785 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m65363(__this, ___index, ___value, method) (( void (*) (List_1_t2785 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Add(T)
#define List_1_Add_m65364(__this, ___item, method) (( void (*) (List_1_t2785 *, Rigidbody2D_t2786 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m65365(__this, ___newCount, method) (( void (*) (List_1_t2785 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m65366(__this, ___idx, ___count, method) (( void (*) (List_1_t2785 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m65367(__this, ___collection, method) (( void (*) (List_1_t2785 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m65368(__this, ___enumerable, method) (( void (*) (List_1_t2785 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m65369(__this, ___collection, method) (( void (*) (List_1_t2785 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AsReadOnly()
#define List_1_AsReadOnly_m65370(__this, method) (( ReadOnlyCollection_1_t8992 * (*) (List_1_t2785 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Clear()
#define List_1_Clear_m65371(__this, method) (( void (*) (List_1_t2785 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Contains(T)
#define List_1_Contains_m65372(__this, ___item, method) (( bool (*) (List_1_t2785 *, Rigidbody2D_t2786 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m65373(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2785 *, Rigidbody2DU5BU5D_t8990*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Find(System.Predicate`1<T>)
#define List_1_Find_m65374(__this, ___match, method) (( Rigidbody2D_t2786 * (*) (List_1_t2785 *, Predicate_1_t8993 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m65375(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8993 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m65376(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2785 *, int32_t, int32_t, Predicate_1_t8993 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetEnumerator()
#define List_1_GetEnumerator_m65377(__this, method) (( Enumerator_t8994  (*) (List_1_t2785 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m65378(__this, ___index, ___count, method) (( List_1_t2785 * (*) (List_1_t2785 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::IndexOf(T)
#define List_1_IndexOf_m65379(__this, ___item, method) (( int32_t (*) (List_1_t2785 *, Rigidbody2D_t2786 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m65380(__this, ___start, ___delta, method) (( void (*) (List_1_t2785 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m65381(__this, ___index, method) (( void (*) (List_1_t2785 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
#define List_1_Insert_m65382(__this, ___index, ___item, method) (( void (*) (List_1_t2785 *, int32_t, Rigidbody2D_t2786 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m65383(__this, ___collection, method) (( void (*) (List_1_t2785 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m65384(__this, ___index, ___collection, method) (( void (*) (List_1_t2785 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m65385(__this, ___index, ___collection, method) (( void (*) (List_1_t2785 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m65386(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2785 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Remove(T)
#define List_1_Remove_m65387(__this, ___item, method) (( bool (*) (List_1_t2785 *, Rigidbody2D_t2786 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m65388(__this, ___match, method) (( int32_t (*) (List_1_t2785 *, Predicate_1_t8993 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m65389(__this, ___index, method) (( void (*) (List_1_t2785 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m65390(__this, ___index, ___count, method) (( void (*) (List_1_t2785 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Reverse()
#define List_1_Reverse_m65391(__this, method) (( void (*) (List_1_t2785 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort()
#define List_1_Sort_m65392(__this, method) (( void (*) (List_1_t2785 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m65393(__this, ___comparer, method) (( void (*) (List_1_t2785 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m65394(__this, ___comparison, method) (( void (*) (List_1_t2785 *, Comparison_1_t8995 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::ToArray()
#define List_1_ToArray_m65395(__this, method) (( Rigidbody2DU5BU5D_t8990* (*) (List_1_t2785 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::TrimExcess()
#define List_1_TrimExcess_m65396(__this, method) (( void (*) (List_1_t2785 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Capacity()
#define List_1_get_Capacity_m65397(__this, method) (( int32_t (*) (List_1_t2785 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m65398(__this, ___value, method) (( void (*) (List_1_t2785 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Count()
#define List_1_get_Count_m65399(__this, method) (( int32_t (*) (List_1_t2785 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
#define List_1_get_Item_m65400(__this, ___index, method) (( Rigidbody2D_t2786 * (*) (List_1_t2785 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
#define List_1_set_Item_m65401(__this, ___index, ___value, method) (( void (*) (List_1_t2785 *, int32_t, Rigidbody2D_t2786 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

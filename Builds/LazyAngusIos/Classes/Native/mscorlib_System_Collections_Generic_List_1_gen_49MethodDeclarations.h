#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Exception>
struct List_1_t2164;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t1430;
// System.Exception[]
struct ExceptionU5BU5D_t8903;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t2165;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Exception>
struct ICollection_1_t10205;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t1354;
// System.Predicate`1<System.Exception>
struct Predicate_1_t8904;
// System.Collections.Generic.IComparer`1<System.Exception>
struct IComparer_1_t10206;
// System.Comparison`1<System.Exception>
struct Comparison_1_t8906;
// System.Collections.Generic.List`1/Enumerator<System.Exception>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_100.h"

// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m7949(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m64288(__this, ___collection, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
#define List_1__ctor_m64289(__this, ___capacity, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(T[],System.Int32)
#define List_1__ctor_m64290(__this, ___data, ___size, method) (( void (*) (List_1_t2164 *, ExceptionU5BU5D_t8903*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.cctor()
#define List_1__cctor_m64291(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m64292(__this, method) (( Object_t* (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m64293(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2164 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Exception>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m64294(__this, method) (( Object_t * (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m64295(__this, ___item, method) (( int32_t (*) (List_1_t2164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m64296(__this, ___item, method) (( bool (*) (List_1_t2164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m64297(__this, ___item, method) (( int32_t (*) (List_1_t2164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m64298(__this, ___index, ___item, method) (( void (*) (List_1_t2164 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m64299(__this, ___item, method) (( void (*) (List_1_t2164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m64300(__this, method) (( bool (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m64301(__this, method) (( bool (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m64302(__this, method) (( Object_t * (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m64303(__this, method) (( bool (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m64304(__this, method) (( bool (*) (List_1_t2164 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m64305(__this, ___index, method) (( Object_t * (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m64306(__this, ___index, ___value, method) (( void (*) (List_1_t2164 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
#define List_1_Add_m64307(__this, ___item, method) (( void (*) (List_1_t2164 *, Exception_t57 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m64308(__this, ___newCount, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m64309(__this, ___idx, ___count, method) (( void (*) (List_1_t2164 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m64310(__this, ___collection, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m64311(__this, ___enumerable, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m7950(__this, ___collection, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Exception>::AsReadOnly()
#define List_1_AsReadOnly_m64312(__this, method) (( ReadOnlyCollection_1_t1354 * (*) (List_1_t2164 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
#define List_1_Clear_m64313(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Contains(T)
#define List_1_Contains_m64314(__this, ___item, method) (( bool (*) (List_1_t2164 *, Exception_t57 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m64315(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2164 *, ExceptionU5BU5D_t8903*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Exception>::Find(System.Predicate`1<T>)
#define List_1_Find_m64316(__this, ___match, method) (( Exception_t57 * (*) (List_1_t2164 *, Predicate_1_t8904 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m64317(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8904 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m64318(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2164 *, int32_t, int32_t, Predicate_1_t8904 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Exception>::GetEnumerator()
#define List_1_GetEnumerator_m64319(__this, method) (( Enumerator_t8905  (*) (List_1_t2164 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m64320(__this, ___index, ___count, method) (( List_1_t2164 * (*) (List_1_t2164 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::IndexOf(T)
#define List_1_IndexOf_m64321(__this, ___item, method) (( int32_t (*) (List_1_t2164 *, Exception_t57 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m64322(__this, ___start, ___delta, method) (( void (*) (List_1_t2164 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m64323(__this, ___index, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Insert(System.Int32,T)
#define List_1_Insert_m64324(__this, ___index, ___item, method) (( void (*) (List_1_t2164 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m64325(__this, ___collection, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m64326(__this, ___index, ___collection, method) (( void (*) (List_1_t2164 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m64327(__this, ___index, ___collection, method) (( void (*) (List_1_t2164 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m64328(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2164 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Remove(T)
#define List_1_Remove_m64329(__this, ___item, method) (( bool (*) (List_1_t2164 *, Exception_t57 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m64330(__this, ___match, method) (( int32_t (*) (List_1_t2164 *, Predicate_1_t8904 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m64331(__this, ___index, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m64332(__this, ___index, ___count, method) (( void (*) (List_1_t2164 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Reverse()
#define List_1_Reverse_m64333(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort()
#define List_1_Sort_m64334(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m64335(__this, ___comparer, method) (( void (*) (List_1_t2164 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m64336(__this, ___comparison, method) (( void (*) (List_1_t2164 *, Comparison_1_t8906 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
#define List_1_ToArray_m64337(__this, method) (( ExceptionU5BU5D_t8903* (*) (List_1_t2164 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::TrimExcess()
#define List_1_TrimExcess_m64338(__this, method) (( void (*) (List_1_t2164 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Capacity()
#define List_1_get_Capacity_m64339(__this, method) (( int32_t (*) (List_1_t2164 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m64340(__this, ___value, method) (( void (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
#define List_1_get_Count_m64341(__this, method) (( int32_t (*) (List_1_t2164 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
#define List_1_get_Item_m64342(__this, ___index, method) (( Exception_t57 * (*) (List_1_t2164 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Item(System.Int32,T)
#define List_1_set_Item_m64343(__this, ___index, ___value, method) (( void (*) (List_1_t2164 *, int32_t, Exception_t57 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

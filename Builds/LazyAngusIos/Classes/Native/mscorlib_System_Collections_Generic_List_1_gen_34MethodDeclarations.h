#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t1077;
// System.Object
struct Object_t;
// UnityEngine.UI.Text
struct Text_t502;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
struct IEnumerable_1_t9634;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t6403;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>
struct IEnumerator_1_t9633;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
struct ICollection_1_t9635;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
struct ReadOnlyCollection_1_t6405;
// System.Predicate`1<UnityEngine.UI.Text>
struct Predicate_1_t6406;
// System.Collections.Generic.IComparer`1<UnityEngine.UI.Text>
struct IComparer_1_t9636;
// System.Comparison`1<UnityEngine.UI.Text>
struct Comparison_1_t6408;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m6054(__this, method) (( void (*) (List_1_t1077 *, const MethodInfo*))List_1__ctor_m3861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m33620(__this, ___collection, method) (( void (*) (List_1_t1077 *, Object_t*, const MethodInfo*))List_1__ctor_m7627_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Int32)
#define List_1__ctor_m33621(__this, ___capacity, method) (( void (*) (List_1_t1077 *, int32_t, const MethodInfo*))List_1__ctor_m25907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(T[],System.Int32)
#define List_1__ctor_m33622(__this, ___data, ___size, method) (( void (*) (List_1_t1077 *, TextU5BU5D_t6403*, int32_t, const MethodInfo*))List_1__ctor_m25909_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.cctor()
#define List_1__cctor_m33623(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25911_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33624(__this, method) (( Object_t* (*) (List_1_t1077 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10516_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m33625(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1077 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33626(__this, method) (( Object_t * (*) (List_1_t1077 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m33627(__this, ___item, method) (( int32_t (*) (List_1_t1077 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m33628(__this, ___item, method) (( bool (*) (List_1_t1077 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m33629(__this, ___item, method) (( int32_t (*) (List_1_t1077 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m33630(__this, ___index, ___item, method) (( void (*) (List_1_t1077 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m33631(__this, ___item, method) (( void (*) (List_1_t1077 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33632(__this, method) (( bool (*) (List_1_t1077 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33633(__this, method) (( bool (*) (List_1_t1077 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m33634(__this, method) (( Object_t * (*) (List_1_t1077 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m33635(__this, method) (( bool (*) (List_1_t1077 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10500_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m33636(__this, method) (( bool (*) (List_1_t1077 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10501_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m33637(__this, ___index, method) (( Object_t * (*) (List_1_t1077 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10502_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m33638(__this, ___index, ___value, method) (( void (*) (List_1_t1077 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10503_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
#define List_1_Add_m33639(__this, ___item, method) (( void (*) (List_1_t1077 *, Text_t502 *, const MethodInfo*))List_1_Add_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m33640(__this, ___newCount, method) (( void (*) (List_1_t1077 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m33641(__this, ___idx, ___count, method) (( void (*) (List_1_t1077 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25931_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m33642(__this, ___collection, method) (( void (*) (List_1_t1077 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25933_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m33643(__this, ___enumerable, method) (( void (*) (List_1_t1077 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25935_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m33644(__this, ___collection, method) (( void (*) (List_1_t1077 *, Object_t*, const MethodInfo*))List_1_AddRange_m25937_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::AsReadOnly()
#define List_1_AsReadOnly_m33645(__this, method) (( ReadOnlyCollection_1_t6405 * (*) (List_1_t1077 *, const MethodInfo*))List_1_AsReadOnly_m25939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
#define List_1_Clear_m33646(__this, method) (( void (*) (List_1_t1077 *, const MethodInfo*))List_1_Clear_m10505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Contains(T)
#define List_1_Contains_m33647(__this, ___item, method) (( bool (*) (List_1_t1077 *, Text_t502 *, const MethodInfo*))List_1_Contains_m10513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m33648(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1077 *, TextU5BU5D_t6403*, int32_t, const MethodInfo*))List_1_CopyTo_m10514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::Find(System.Predicate`1<T>)
#define List_1_Find_m33649(__this, ___match, method) (( Text_t502 * (*) (List_1_t1077 *, Predicate_1_t6406 *, const MethodInfo*))List_1_Find_m25944_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m33650(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6406 *, const MethodInfo*))List_1_CheckMatch_m25946_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m33651(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1077 *, int32_t, int32_t, Predicate_1_t6406 *, const MethodInfo*))List_1_GetIndex_m25948_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
#define List_1_GetEnumerator_m33652(__this, method) (( Enumerator_t6407  (*) (List_1_t1077 *, const MethodInfo*))List_1_GetEnumerator_m4017_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m33653(__this, ___index, ___count, method) (( List_1_t1077 * (*) (List_1_t1077 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25950_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::IndexOf(T)
#define List_1_IndexOf_m33654(__this, ___item, method) (( int32_t (*) (List_1_t1077 *, Text_t502 *, const MethodInfo*))List_1_IndexOf_m10517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m33655(__this, ___start, ___delta, method) (( void (*) (List_1_t1077 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m33656(__this, ___index, method) (( void (*) (List_1_t1077 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25955_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
#define List_1_Insert_m33657(__this, ___index, ___item, method) (( void (*) (List_1_t1077 *, int32_t, Text_t502 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m33658(__this, ___collection, method) (( void (*) (List_1_t1077 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25958_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m33659(__this, ___index, ___collection, method) (( void (*) (List_1_t1077 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m33660(__this, ___index, ___collection, method) (( void (*) (List_1_t1077 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m33661(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1077 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Remove(T)
#define List_1_Remove_m33662(__this, ___item, method) (( bool (*) (List_1_t1077 *, Text_t502 *, const MethodInfo*))List_1_Remove_m10515_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m33663(__this, ___match, method) (( int32_t (*) (List_1_t1077 *, Predicate_1_t6406 *, const MethodInfo*))List_1_RemoveAll_m25967_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m33664(__this, ___index, method) (( void (*) (List_1_t1077 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m33665(__this, ___index, ___count, method) (( void (*) (List_1_t1077 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Reverse()
#define List_1_Reverse_m33666(__this, method) (( void (*) (List_1_t1077 *, const MethodInfo*))List_1_Reverse_m25972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort()
#define List_1_Sort_m33667(__this, method) (( void (*) (List_1_t1077 *, const MethodInfo*))List_1_Sort_m25974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m33668(__this, ___comparer, method) (( void (*) (List_1_t1077 *, Object_t*, const MethodInfo*))List_1_Sort_m25976_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m33669(__this, ___comparison, method) (( void (*) (List_1_t1077 *, Comparison_1_t6408 *, const MethodInfo*))List_1_Sort_m25978_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Text>::ToArray()
#define List_1_ToArray_m33670(__this, method) (( TextU5BU5D_t6403* (*) (List_1_t1077 *, const MethodInfo*))List_1_ToArray_m25980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::TrimExcess()
#define List_1_TrimExcess_m33671(__this, method) (( void (*) (List_1_t1077 *, const MethodInfo*))List_1_TrimExcess_m25982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Capacity()
#define List_1_get_Capacity_m33672(__this, method) (( int32_t (*) (List_1_t1077 *, const MethodInfo*))List_1_get_Capacity_m25984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m33673(__this, ___value, method) (( void (*) (List_1_t1077 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25986_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
#define List_1_get_Count_m33674(__this, method) (( int32_t (*) (List_1_t1077 *, const MethodInfo*))List_1_get_Count_m10496_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
#define List_1_get_Item_m33675(__this, ___index, method) (( Text_t502 * (*) (List_1_t1077 *, int32_t, const MethodInfo*))List_1_get_Item_m10519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#define List_1_set_Item_m33676(__this, ___index, ___value, method) (( void (*) (List_1_t1077 *, int32_t, Text_t502 *, const MethodInfo*))List_1_set_Item_m10520_gshared)(__this, ___index, ___value, method)

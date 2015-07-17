#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t841;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t4514;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t4511;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t976;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t3788;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t838;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3789;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t4515;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3791;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m5377_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1__ctor_m5377(__this, method) (( void (*) (List_1_t841 *, const MethodInfo*))List_1__ctor_m5377_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m24296_gshared (List_1_t841 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m24296(__this, ___collection, method) (( void (*) (List_1_t841 *, Object_t*, const MethodInfo*))List_1__ctor_m24296_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m7157_gshared (List_1_t841 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m7157(__this, ___capacity, method) (( void (*) (List_1_t841 *, int32_t, const MethodInfo*))List_1__ctor_m7157_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m24297_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m24297(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24297_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24298_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24298(__this, method) (( Object_t* (*) (List_1_t841 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24298_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m24299_gshared (List_1_t841 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m24299(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t841 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m24299_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m24300_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24300(__this, method) (( Object_t * (*) (List_1_t841 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m24300_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m24301_gshared (List_1_t841 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m24301(__this, ___item, method) (( int32_t (*) (List_1_t841 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m24301_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m24302_gshared (List_1_t841 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m24302(__this, ___item, method) (( bool (*) (List_1_t841 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m24302_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m24303_gshared (List_1_t841 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m24303(__this, ___item, method) (( int32_t (*) (List_1_t841 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m24303_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m24304_gshared (List_1_t841 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m24304(__this, ___index, ___item, method) (( void (*) (List_1_t841 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m24304_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m24305_gshared (List_1_t841 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m24305(__this, ___item, method) (( void (*) (List_1_t841 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m24305_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24306_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24306(__this, method) (( bool (*) (List_1_t841 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24306_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m24307_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24307(__this, method) (( bool (*) (List_1_t841 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m24307_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m24308_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m24308(__this, method) (( Object_t * (*) (List_1_t841 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m24308_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m24309_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m24309(__this, method) (( bool (*) (List_1_t841 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m24309_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m24310_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m24310(__this, method) (( bool (*) (List_1_t841 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m24310_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m24311_gshared (List_1_t841 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m24311(__this, ___index, method) (( Object_t * (*) (List_1_t841 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m24311_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m24312_gshared (List_1_t841 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m24312(__this, ___index, ___value, method) (( void (*) (List_1_t841 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m24312_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m24313_gshared (List_1_t841 * __this, UIVertex_t839  ___item, const MethodInfo* method);
#define List_1_Add_m24313(__this, ___item, method) (( void (*) (List_1_t841 *, UIVertex_t839 , const MethodInfo*))List_1_Add_m24313_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m24314_gshared (List_1_t841 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m24314(__this, ___newCount, method) (( void (*) (List_1_t841 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24314_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m24315_gshared (List_1_t841 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m24315(__this, ___collection, method) (( void (*) (List_1_t841 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24315_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m24316_gshared (List_1_t841 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m24316(__this, ___enumerable, method) (( void (*) (List_1_t841 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24316_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m24317_gshared (List_1_t841 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m24317(__this, ___collection, method) (( void (*) (List_1_t841 *, Object_t*, const MethodInfo*))List_1_AddRange_m24317_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3788 * List_1_AsReadOnly_m24318_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m24318(__this, method) (( ReadOnlyCollection_1_t3788 * (*) (List_1_t841 *, const MethodInfo*))List_1_AsReadOnly_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m24319_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_Clear_m24319(__this, method) (( void (*) (List_1_t841 *, const MethodInfo*))List_1_Clear_m24319_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m24320_gshared (List_1_t841 * __this, UIVertex_t839  ___item, const MethodInfo* method);
#define List_1_Contains_m24320(__this, ___item, method) (( bool (*) (List_1_t841 *, UIVertex_t839 , const MethodInfo*))List_1_Contains_m24320_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m24321_gshared (List_1_t841 * __this, UIVertexU5BU5D_t838* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m24321(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t841 *, UIVertexU5BU5D_t838*, int32_t, const MethodInfo*))List_1_CopyTo_m24321_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t839  List_1_Find_m24322_gshared (List_1_t841 * __this, Predicate_1_t3789 * ___match, const MethodInfo* method);
#define List_1_Find_m24322(__this, ___match, method) (( UIVertex_t839  (*) (List_1_t841 *, Predicate_1_t3789 *, const MethodInfo*))List_1_Find_m24322_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m24323_gshared (Object_t * __this /* static, unused */, Predicate_1_t3789 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m24323(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3789 *, const MethodInfo*))List_1_CheckMatch_m24323_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m24324_gshared (List_1_t841 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3789 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m24324(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t841 *, int32_t, int32_t, Predicate_1_t3789 *, const MethodInfo*))List_1_GetIndex_m24324_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t3790  List_1_GetEnumerator_m24325_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m24325(__this, method) (( Enumerator_t3790  (*) (List_1_t841 *, const MethodInfo*))List_1_GetEnumerator_m24325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m24326_gshared (List_1_t841 * __this, UIVertex_t839  ___item, const MethodInfo* method);
#define List_1_IndexOf_m24326(__this, ___item, method) (( int32_t (*) (List_1_t841 *, UIVertex_t839 , const MethodInfo*))List_1_IndexOf_m24326_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m24327_gshared (List_1_t841 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m24327(__this, ___start, ___delta, method) (( void (*) (List_1_t841 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24327_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m24328_gshared (List_1_t841 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m24328(__this, ___index, method) (( void (*) (List_1_t841 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m24329_gshared (List_1_t841 * __this, int32_t ___index, UIVertex_t839  ___item, const MethodInfo* method);
#define List_1_Insert_m24329(__this, ___index, ___item, method) (( void (*) (List_1_t841 *, int32_t, UIVertex_t839 , const MethodInfo*))List_1_Insert_m24329_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m24330_gshared (List_1_t841 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m24330(__this, ___collection, method) (( void (*) (List_1_t841 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24330_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m24331_gshared (List_1_t841 * __this, UIVertex_t839  ___item, const MethodInfo* method);
#define List_1_Remove_m24331(__this, ___item, method) (( bool (*) (List_1_t841 *, UIVertex_t839 , const MethodInfo*))List_1_Remove_m24331_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m24332_gshared (List_1_t841 * __this, Predicate_1_t3789 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m24332(__this, ___match, method) (( int32_t (*) (List_1_t841 *, Predicate_1_t3789 *, const MethodInfo*))List_1_RemoveAll_m24332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m24333_gshared (List_1_t841 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m24333(__this, ___index, method) (( void (*) (List_1_t841 *, int32_t, const MethodInfo*))List_1_RemoveAt_m24333_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m24334_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_Reverse_m24334(__this, method) (( void (*) (List_1_t841 *, const MethodInfo*))List_1_Reverse_m24334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m24335_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_Sort_m24335(__this, method) (( void (*) (List_1_t841 *, const MethodInfo*))List_1_Sort_m24335_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m24336_gshared (List_1_t841 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m24336(__this, ___comparer, method) (( void (*) (List_1_t841 *, Object_t*, const MethodInfo*))List_1_Sort_m24336_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m24337_gshared (List_1_t841 * __this, Comparison_1_t3791 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m24337(__this, ___comparison, method) (( void (*) (List_1_t841 *, Comparison_1_t3791 *, const MethodInfo*))List_1_Sort_m24337_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t838* List_1_ToArray_m5421_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_ToArray_m5421(__this, method) (( UIVertexU5BU5D_t838* (*) (List_1_t841 *, const MethodInfo*))List_1_ToArray_m5421_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m24338_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m24338(__this, method) (( void (*) (List_1_t841 *, const MethodInfo*))List_1_TrimExcess_m24338_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m5297_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m5297(__this, method) (( int32_t (*) (List_1_t841 *, const MethodInfo*))List_1_get_Capacity_m5297_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m5298_gshared (List_1_t841 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m5298(__this, ___value, method) (( void (*) (List_1_t841 *, int32_t, const MethodInfo*))List_1_set_Capacity_m5298_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m24339_gshared (List_1_t841 * __this, const MethodInfo* method);
#define List_1_get_Count_m24339(__this, method) (( int32_t (*) (List_1_t841 *, const MethodInfo*))List_1_get_Count_m24339_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t839  List_1_get_Item_m24340_gshared (List_1_t841 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m24340(__this, ___index, method) (( UIVertex_t839  (*) (List_1_t841 *, int32_t, const MethodInfo*))List_1_get_Item_m24340_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m24341_gshared (List_1_t841 * __this, int32_t ___index, UIVertex_t839  ___value, const MethodInfo* method);
#define List_1_set_Item_m24341(__this, ___index, ___value, method) (( void (*) (List_1_t841 *, int32_t, UIVertex_t839 , const MethodInfo*))List_1_set_Item_m24341_gshared)(__this, ___index, ___value, method)

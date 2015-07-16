#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1117;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t4498;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t4499;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t924;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t3867;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1240;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3871;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t4500;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3874;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m25254_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1__ctor_m25254(__this, method) (( void (*) (List_1_t1117 *, const MethodInfo*))List_1__ctor_m25254_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m25255_gshared (List_1_t1117 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m25255(__this, ___collection, method) (( void (*) (List_1_t1117 *, Object_t*, const MethodInfo*))List_1__ctor_m25255_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6619_gshared (List_1_t1117 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6619(__this, ___capacity, method) (( void (*) (List_1_t1117 *, int32_t, const MethodInfo*))List_1__ctor_m6619_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m25256_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25256(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25256_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25257_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25257(__this, method) (( Object_t* (*) (List_1_t1117 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25257_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m25258_gshared (List_1_t1117 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m25258(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1117 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m25258_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m25259_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25259(__this, method) (( Object_t * (*) (List_1_t1117 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m25259_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m25260_gshared (List_1_t1117 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m25260(__this, ___item, method) (( int32_t (*) (List_1_t1117 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m25260_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m25261_gshared (List_1_t1117 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m25261(__this, ___item, method) (( bool (*) (List_1_t1117 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m25261_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m25262_gshared (List_1_t1117 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m25262(__this, ___item, method) (( int32_t (*) (List_1_t1117 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m25262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m25263_gshared (List_1_t1117 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m25263(__this, ___index, ___item, method) (( void (*) (List_1_t1117 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m25263_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m25264_gshared (List_1_t1117 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m25264(__this, ___item, method) (( void (*) (List_1_t1117 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m25264_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25265_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25265(__this, method) (( bool (*) (List_1_t1117 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25265_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m25266_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25266(__this, method) (( bool (*) (List_1_t1117 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m25266_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m25267_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m25267(__this, method) (( Object_t * (*) (List_1_t1117 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m25267_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m25268_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m25268(__this, method) (( bool (*) (List_1_t1117 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m25268_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m25269_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m25269(__this, method) (( bool (*) (List_1_t1117 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m25269_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m25270_gshared (List_1_t1117 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m25270(__this, ___index, method) (( Object_t * (*) (List_1_t1117 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m25270_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m25271_gshared (List_1_t1117 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m25271(__this, ___index, ___value, method) (( void (*) (List_1_t1117 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m25271_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m25272_gshared (List_1_t1117 * __this, UILineInfo_t920  ___item, const MethodInfo* method);
#define List_1_Add_m25272(__this, ___item, method) (( void (*) (List_1_t1117 *, UILineInfo_t920 , const MethodInfo*))List_1_Add_m25272_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25273_gshared (List_1_t1117 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25273(__this, ___newCount, method) (( void (*) (List_1_t1117 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25273_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25274_gshared (List_1_t1117 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25274(__this, ___collection, method) (( void (*) (List_1_t1117 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25275_gshared (List_1_t1117 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25275(__this, ___enumerable, method) (( void (*) (List_1_t1117 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25275_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25276_gshared (List_1_t1117 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25276(__this, ___collection, method) (( void (*) (List_1_t1117 *, Object_t*, const MethodInfo*))List_1_AddRange_m25276_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3867 * List_1_AsReadOnly_m25277_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25277(__this, method) (( ReadOnlyCollection_1_t3867 * (*) (List_1_t1117 *, const MethodInfo*))List_1_AsReadOnly_m25277_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m25278_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_Clear_m25278(__this, method) (( void (*) (List_1_t1117 *, const MethodInfo*))List_1_Clear_m25278_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m25279_gshared (List_1_t1117 * __this, UILineInfo_t920  ___item, const MethodInfo* method);
#define List_1_Contains_m25279(__this, ___item, method) (( bool (*) (List_1_t1117 *, UILineInfo_t920 , const MethodInfo*))List_1_Contains_m25279_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m25280_gshared (List_1_t1117 * __this, UILineInfoU5BU5D_t1240* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m25280(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1117 *, UILineInfoU5BU5D_t1240*, int32_t, const MethodInfo*))List_1_CopyTo_m25280_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t920  List_1_Find_m25281_gshared (List_1_t1117 * __this, Predicate_1_t3871 * ___match, const MethodInfo* method);
#define List_1_Find_m25281(__this, ___match, method) (( UILineInfo_t920  (*) (List_1_t1117 *, Predicate_1_t3871 *, const MethodInfo*))List_1_Find_m25281_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25282_gshared (Object_t * __this /* static, unused */, Predicate_1_t3871 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25282(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3871 *, const MethodInfo*))List_1_CheckMatch_m25282_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25283_gshared (List_1_t1117 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3871 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25283(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1117 *, int32_t, int32_t, Predicate_1_t3871 *, const MethodInfo*))List_1_GetIndex_m25283_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t3866  List_1_GetEnumerator_m25284_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m25284(__this, method) (( Enumerator_t3866  (*) (List_1_t1117 *, const MethodInfo*))List_1_GetEnumerator_m25284_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m25285_gshared (List_1_t1117 * __this, UILineInfo_t920  ___item, const MethodInfo* method);
#define List_1_IndexOf_m25285(__this, ___item, method) (( int32_t (*) (List_1_t1117 *, UILineInfo_t920 , const MethodInfo*))List_1_IndexOf_m25285_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25286_gshared (List_1_t1117 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25286(__this, ___start, ___delta, method) (( void (*) (List_1_t1117 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25286_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25287_gshared (List_1_t1117 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25287(__this, ___index, method) (( void (*) (List_1_t1117 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25287_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m25288_gshared (List_1_t1117 * __this, int32_t ___index, UILineInfo_t920  ___item, const MethodInfo* method);
#define List_1_Insert_m25288(__this, ___index, ___item, method) (( void (*) (List_1_t1117 *, int32_t, UILineInfo_t920 , const MethodInfo*))List_1_Insert_m25288_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25289_gshared (List_1_t1117 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25289(__this, ___collection, method) (( void (*) (List_1_t1117 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25289_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m25290_gshared (List_1_t1117 * __this, UILineInfo_t920  ___item, const MethodInfo* method);
#define List_1_Remove_m25290(__this, ___item, method) (( bool (*) (List_1_t1117 *, UILineInfo_t920 , const MethodInfo*))List_1_Remove_m25290_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25291_gshared (List_1_t1117 * __this, Predicate_1_t3871 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25291(__this, ___match, method) (( int32_t (*) (List_1_t1117 *, Predicate_1_t3871 *, const MethodInfo*))List_1_RemoveAll_m25291_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m25292_gshared (List_1_t1117 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m25292(__this, ___index, method) (( void (*) (List_1_t1117 *, int32_t, const MethodInfo*))List_1_RemoveAt_m25292_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m25293_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_Reverse_m25293(__this, method) (( void (*) (List_1_t1117 *, const MethodInfo*))List_1_Reverse_m25293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m25294_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_Sort_m25294(__this, method) (( void (*) (List_1_t1117 *, const MethodInfo*))List_1_Sort_m25294_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25295_gshared (List_1_t1117 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25295(__this, ___comparer, method) (( void (*) (List_1_t1117 *, Object_t*, const MethodInfo*))List_1_Sort_m25295_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25296_gshared (List_1_t1117 * __this, Comparison_1_t3874 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25296(__this, ___comparison, method) (( void (*) (List_1_t1117 *, Comparison_1_t3874 *, const MethodInfo*))List_1_Sort_m25296_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t1240* List_1_ToArray_m25297_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_ToArray_m25297(__this, method) (( UILineInfoU5BU5D_t1240* (*) (List_1_t1117 *, const MethodInfo*))List_1_ToArray_m25297_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m25298_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25298(__this, method) (( void (*) (List_1_t1117 *, const MethodInfo*))List_1_TrimExcess_m25298_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25299_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25299(__this, method) (( int32_t (*) (List_1_t1117 *, const MethodInfo*))List_1_get_Capacity_m25299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25300_gshared (List_1_t1117 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25300(__this, ___value, method) (( void (*) (List_1_t1117 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25300_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m25301_gshared (List_1_t1117 * __this, const MethodInfo* method);
#define List_1_get_Count_m25301(__this, method) (( int32_t (*) (List_1_t1117 *, const MethodInfo*))List_1_get_Count_m25301_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t920  List_1_get_Item_m25302_gshared (List_1_t1117 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m25302(__this, ___index, method) (( UILineInfo_t920  (*) (List_1_t1117 *, int32_t, const MethodInfo*))List_1_get_Item_m25302_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m25303_gshared (List_1_t1117 * __this, int32_t ___index, UILineInfo_t920  ___value, const MethodInfo* method);
#define List_1_set_Item_m25303(__this, ___index, ___value, method) (( void (*) (List_1_t1117 *, int32_t, UILineInfo_t920 , const MethodInfo*))List_1_set_Item_m25303_gshared)(__this, ___index, ___value, method)

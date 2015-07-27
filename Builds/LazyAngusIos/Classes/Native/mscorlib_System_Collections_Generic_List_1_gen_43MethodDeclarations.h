#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1164;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t4595;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t4596;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t972;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t3934;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1286;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3938;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t4597;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3941;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_48.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m26287_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1__ctor_m26287(__this, method) (( void (*) (List_1_t1164 *, const MethodInfo*))List_1__ctor_m26287_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26288_gshared (List_1_t1164 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26288(__this, ___collection, method) (( void (*) (List_1_t1164 *, Object_t*, const MethodInfo*))List_1__ctor_m26288_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m7170_gshared (List_1_t1164 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m7170(__this, ___capacity, method) (( void (*) (List_1_t1164 *, int32_t, const MethodInfo*))List_1__ctor_m7170_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m26289_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26289(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26289_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26290_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26290(__this, method) (( Object_t* (*) (List_1_t1164 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26290_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26291_gshared (List_1_t1164 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26291(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1164 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26291_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26292_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26292(__this, method) (( Object_t * (*) (List_1_t1164 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26292_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26293_gshared (List_1_t1164 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26293(__this, ___item, method) (( int32_t (*) (List_1_t1164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26293_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26294_gshared (List_1_t1164 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26294(__this, ___item, method) (( bool (*) (List_1_t1164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26294_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26295_gshared (List_1_t1164 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26295(__this, ___item, method) (( int32_t (*) (List_1_t1164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26295_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26296_gshared (List_1_t1164 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26296(__this, ___index, ___item, method) (( void (*) (List_1_t1164 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26296_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26297_gshared (List_1_t1164 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26297(__this, ___item, method) (( void (*) (List_1_t1164 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26297_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26298_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26298(__this, method) (( bool (*) (List_1_t1164 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26298_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26299_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26299(__this, method) (( bool (*) (List_1_t1164 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26299_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26300_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26300(__this, method) (( Object_t * (*) (List_1_t1164 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26300_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26301_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26301(__this, method) (( bool (*) (List_1_t1164 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26301_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26302_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26302(__this, method) (( bool (*) (List_1_t1164 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26302_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26303_gshared (List_1_t1164 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26303(__this, ___index, method) (( Object_t * (*) (List_1_t1164 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26303_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26304_gshared (List_1_t1164 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26304(__this, ___index, ___value, method) (( void (*) (List_1_t1164 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26304_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m26305_gshared (List_1_t1164 * __this, UILineInfo_t968  ___item, const MethodInfo* method);
#define List_1_Add_m26305(__this, ___item, method) (( void (*) (List_1_t1164 *, UILineInfo_t968 , const MethodInfo*))List_1_Add_m26305_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26306_gshared (List_1_t1164 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26306(__this, ___newCount, method) (( void (*) (List_1_t1164 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26306_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26307_gshared (List_1_t1164 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26307(__this, ___collection, method) (( void (*) (List_1_t1164 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26307_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26308_gshared (List_1_t1164 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26308(__this, ___enumerable, method) (( void (*) (List_1_t1164 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26308_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26309_gshared (List_1_t1164 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26309(__this, ___collection, method) (( void (*) (List_1_t1164 *, Object_t*, const MethodInfo*))List_1_AddRange_m26309_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3934 * List_1_AsReadOnly_m26310_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26310(__this, method) (( ReadOnlyCollection_1_t3934 * (*) (List_1_t1164 *, const MethodInfo*))List_1_AsReadOnly_m26310_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m26311_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_Clear_m26311(__this, method) (( void (*) (List_1_t1164 *, const MethodInfo*))List_1_Clear_m26311_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m26312_gshared (List_1_t1164 * __this, UILineInfo_t968  ___item, const MethodInfo* method);
#define List_1_Contains_m26312(__this, ___item, method) (( bool (*) (List_1_t1164 *, UILineInfo_t968 , const MethodInfo*))List_1_Contains_m26312_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26313_gshared (List_1_t1164 * __this, UILineInfoU5BU5D_t1286* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26313(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1164 *, UILineInfoU5BU5D_t1286*, int32_t, const MethodInfo*))List_1_CopyTo_m26313_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t968  List_1_Find_m26314_gshared (List_1_t1164 * __this, Predicate_1_t3938 * ___match, const MethodInfo* method);
#define List_1_Find_m26314(__this, ___match, method) (( UILineInfo_t968  (*) (List_1_t1164 *, Predicate_1_t3938 *, const MethodInfo*))List_1_Find_m26314_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26315_gshared (Object_t * __this /* static, unused */, Predicate_1_t3938 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26315(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3938 *, const MethodInfo*))List_1_CheckMatch_m26315_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26316_gshared (List_1_t1164 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3938 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26316(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1164 *, int32_t, int32_t, Predicate_1_t3938 *, const MethodInfo*))List_1_GetIndex_m26316_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t3933  List_1_GetEnumerator_m26317_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26317(__this, method) (( Enumerator_t3933  (*) (List_1_t1164 *, const MethodInfo*))List_1_GetEnumerator_m26317_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26318_gshared (List_1_t1164 * __this, UILineInfo_t968  ___item, const MethodInfo* method);
#define List_1_IndexOf_m26318(__this, ___item, method) (( int32_t (*) (List_1_t1164 *, UILineInfo_t968 , const MethodInfo*))List_1_IndexOf_m26318_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26319_gshared (List_1_t1164 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26319(__this, ___start, ___delta, method) (( void (*) (List_1_t1164 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26319_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26320_gshared (List_1_t1164 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26320(__this, ___index, method) (( void (*) (List_1_t1164 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26320_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26321_gshared (List_1_t1164 * __this, int32_t ___index, UILineInfo_t968  ___item, const MethodInfo* method);
#define List_1_Insert_m26321(__this, ___index, ___item, method) (( void (*) (List_1_t1164 *, int32_t, UILineInfo_t968 , const MethodInfo*))List_1_Insert_m26321_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26322_gshared (List_1_t1164 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26322(__this, ___collection, method) (( void (*) (List_1_t1164 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26322_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m26323_gshared (List_1_t1164 * __this, UILineInfo_t968  ___item, const MethodInfo* method);
#define List_1_Remove_m26323(__this, ___item, method) (( bool (*) (List_1_t1164 *, UILineInfo_t968 , const MethodInfo*))List_1_Remove_m26323_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26324_gshared (List_1_t1164 * __this, Predicate_1_t3938 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26324(__this, ___match, method) (( int32_t (*) (List_1_t1164 *, Predicate_1_t3938 *, const MethodInfo*))List_1_RemoveAll_m26324_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26325_gshared (List_1_t1164 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26325(__this, ___index, method) (( void (*) (List_1_t1164 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26325_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m26326_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_Reverse_m26326(__this, method) (( void (*) (List_1_t1164 *, const MethodInfo*))List_1_Reverse_m26326_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m26327_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_Sort_m26327(__this, method) (( void (*) (List_1_t1164 *, const MethodInfo*))List_1_Sort_m26327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26328_gshared (List_1_t1164 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26328(__this, ___comparer, method) (( void (*) (List_1_t1164 *, Object_t*, const MethodInfo*))List_1_Sort_m26328_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26329_gshared (List_1_t1164 * __this, Comparison_1_t3941 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26329(__this, ___comparison, method) (( void (*) (List_1_t1164 *, Comparison_1_t3941 *, const MethodInfo*))List_1_Sort_m26329_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t1286* List_1_ToArray_m26330_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_ToArray_m26330(__this, method) (( UILineInfoU5BU5D_t1286* (*) (List_1_t1164 *, const MethodInfo*))List_1_ToArray_m26330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m26331_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26331(__this, method) (( void (*) (List_1_t1164 *, const MethodInfo*))List_1_TrimExcess_m26331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26332_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26332(__this, method) (( int32_t (*) (List_1_t1164 *, const MethodInfo*))List_1_get_Capacity_m26332_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26333_gshared (List_1_t1164 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26333(__this, ___value, method) (( void (*) (List_1_t1164 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26333_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m26334_gshared (List_1_t1164 * __this, const MethodInfo* method);
#define List_1_get_Count_m26334(__this, method) (( int32_t (*) (List_1_t1164 *, const MethodInfo*))List_1_get_Count_m26334_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t968  List_1_get_Item_m26335_gshared (List_1_t1164 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26335(__this, ___index, method) (( UILineInfo_t968  (*) (List_1_t1164 *, int32_t, const MethodInfo*))List_1_get_Item_m26335_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26336_gshared (List_1_t1164 * __this, int32_t ___index, UILineInfo_t968  ___value, const MethodInfo* method);
#define List_1_set_Item_m26336(__this, ___index, ___value, method) (( void (*) (List_1_t1164 *, int32_t, UILineInfo_t968 , const MethodInfo*))List_1_set_Item_m26336_gshared)(__this, ___index, ___value, method)

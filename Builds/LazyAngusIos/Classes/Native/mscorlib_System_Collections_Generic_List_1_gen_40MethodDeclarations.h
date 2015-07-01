#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1062;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t4462;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t4463;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t869;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t3815;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1183;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3819;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t4464;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3822;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m24999_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1__ctor_m24999(__this, method) (( void (*) (List_1_t1062 *, const MethodInfo*))List_1__ctor_m24999_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m25000_gshared (List_1_t1062 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m25000(__this, ___collection, method) (( void (*) (List_1_t1062 *, Object_t*, const MethodInfo*))List_1__ctor_m25000_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6261_gshared (List_1_t1062 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6261(__this, ___capacity, method) (( void (*) (List_1_t1062 *, int32_t, const MethodInfo*))List_1__ctor_m6261_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m25001_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25001(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25001_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25002_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25002(__this, method) (( Object_t* (*) (List_1_t1062 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25002_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m25003_gshared (List_1_t1062 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m25003(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1062 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m25003_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m25004_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25004(__this, method) (( Object_t * (*) (List_1_t1062 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m25004_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m25005_gshared (List_1_t1062 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m25005(__this, ___item, method) (( int32_t (*) (List_1_t1062 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m25005_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m25006_gshared (List_1_t1062 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m25006(__this, ___item, method) (( bool (*) (List_1_t1062 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m25006_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m25007_gshared (List_1_t1062 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m25007(__this, ___item, method) (( int32_t (*) (List_1_t1062 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m25007_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m25008_gshared (List_1_t1062 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m25008(__this, ___index, ___item, method) (( void (*) (List_1_t1062 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m25008_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m25009_gshared (List_1_t1062 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m25009(__this, ___item, method) (( void (*) (List_1_t1062 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m25009_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25010_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25010(__this, method) (( bool (*) (List_1_t1062 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25010_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m25011_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25011(__this, method) (( bool (*) (List_1_t1062 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m25011_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m25012_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m25012(__this, method) (( Object_t * (*) (List_1_t1062 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m25012_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m25013_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m25013(__this, method) (( bool (*) (List_1_t1062 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m25013_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m25014_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m25014(__this, method) (( bool (*) (List_1_t1062 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m25014_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m25015_gshared (List_1_t1062 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m25015(__this, ___index, method) (( Object_t * (*) (List_1_t1062 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m25015_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m25016_gshared (List_1_t1062 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m25016(__this, ___index, ___value, method) (( void (*) (List_1_t1062 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m25016_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m25017_gshared (List_1_t1062 * __this, UILineInfo_t865  ___item, const MethodInfo* method);
#define List_1_Add_m25017(__this, ___item, method) (( void (*) (List_1_t1062 *, UILineInfo_t865 , const MethodInfo*))List_1_Add_m25017_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25018_gshared (List_1_t1062 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25018(__this, ___newCount, method) (( void (*) (List_1_t1062 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25018_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25019_gshared (List_1_t1062 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25019(__this, ___collection, method) (( void (*) (List_1_t1062 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25019_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25020_gshared (List_1_t1062 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25020(__this, ___enumerable, method) (( void (*) (List_1_t1062 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25020_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25021_gshared (List_1_t1062 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25021(__this, ___collection, method) (( void (*) (List_1_t1062 *, Object_t*, const MethodInfo*))List_1_AddRange_m25021_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3815 * List_1_AsReadOnly_m25022_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25022(__this, method) (( ReadOnlyCollection_1_t3815 * (*) (List_1_t1062 *, const MethodInfo*))List_1_AsReadOnly_m25022_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m25023_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_Clear_m25023(__this, method) (( void (*) (List_1_t1062 *, const MethodInfo*))List_1_Clear_m25023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m25024_gshared (List_1_t1062 * __this, UILineInfo_t865  ___item, const MethodInfo* method);
#define List_1_Contains_m25024(__this, ___item, method) (( bool (*) (List_1_t1062 *, UILineInfo_t865 , const MethodInfo*))List_1_Contains_m25024_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m25025_gshared (List_1_t1062 * __this, UILineInfoU5BU5D_t1183* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m25025(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1062 *, UILineInfoU5BU5D_t1183*, int32_t, const MethodInfo*))List_1_CopyTo_m25025_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t865  List_1_Find_m25026_gshared (List_1_t1062 * __this, Predicate_1_t3819 * ___match, const MethodInfo* method);
#define List_1_Find_m25026(__this, ___match, method) (( UILineInfo_t865  (*) (List_1_t1062 *, Predicate_1_t3819 *, const MethodInfo*))List_1_Find_m25026_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25027_gshared (Object_t * __this /* static, unused */, Predicate_1_t3819 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25027(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3819 *, const MethodInfo*))List_1_CheckMatch_m25027_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25028_gshared (List_1_t1062 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3819 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25028(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1062 *, int32_t, int32_t, Predicate_1_t3819 *, const MethodInfo*))List_1_GetIndex_m25028_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t3814  List_1_GetEnumerator_m25029_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m25029(__this, method) (( Enumerator_t3814  (*) (List_1_t1062 *, const MethodInfo*))List_1_GetEnumerator_m25029_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m25030_gshared (List_1_t1062 * __this, UILineInfo_t865  ___item, const MethodInfo* method);
#define List_1_IndexOf_m25030(__this, ___item, method) (( int32_t (*) (List_1_t1062 *, UILineInfo_t865 , const MethodInfo*))List_1_IndexOf_m25030_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25031_gshared (List_1_t1062 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25031(__this, ___start, ___delta, method) (( void (*) (List_1_t1062 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25031_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25032_gshared (List_1_t1062 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25032(__this, ___index, method) (( void (*) (List_1_t1062 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25032_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m25033_gshared (List_1_t1062 * __this, int32_t ___index, UILineInfo_t865  ___item, const MethodInfo* method);
#define List_1_Insert_m25033(__this, ___index, ___item, method) (( void (*) (List_1_t1062 *, int32_t, UILineInfo_t865 , const MethodInfo*))List_1_Insert_m25033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25034_gshared (List_1_t1062 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25034(__this, ___collection, method) (( void (*) (List_1_t1062 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25034_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m25035_gshared (List_1_t1062 * __this, UILineInfo_t865  ___item, const MethodInfo* method);
#define List_1_Remove_m25035(__this, ___item, method) (( bool (*) (List_1_t1062 *, UILineInfo_t865 , const MethodInfo*))List_1_Remove_m25035_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25036_gshared (List_1_t1062 * __this, Predicate_1_t3819 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25036(__this, ___match, method) (( int32_t (*) (List_1_t1062 *, Predicate_1_t3819 *, const MethodInfo*))List_1_RemoveAll_m25036_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m25037_gshared (List_1_t1062 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m25037(__this, ___index, method) (( void (*) (List_1_t1062 *, int32_t, const MethodInfo*))List_1_RemoveAt_m25037_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m25038_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_Reverse_m25038(__this, method) (( void (*) (List_1_t1062 *, const MethodInfo*))List_1_Reverse_m25038_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m25039_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_Sort_m25039(__this, method) (( void (*) (List_1_t1062 *, const MethodInfo*))List_1_Sort_m25039_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25040_gshared (List_1_t1062 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25040(__this, ___comparer, method) (( void (*) (List_1_t1062 *, Object_t*, const MethodInfo*))List_1_Sort_m25040_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25041_gshared (List_1_t1062 * __this, Comparison_1_t3822 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25041(__this, ___comparison, method) (( void (*) (List_1_t1062 *, Comparison_1_t3822 *, const MethodInfo*))List_1_Sort_m25041_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t1183* List_1_ToArray_m25042_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_ToArray_m25042(__this, method) (( UILineInfoU5BU5D_t1183* (*) (List_1_t1062 *, const MethodInfo*))List_1_ToArray_m25042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m25043_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25043(__this, method) (( void (*) (List_1_t1062 *, const MethodInfo*))List_1_TrimExcess_m25043_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25044_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25044(__this, method) (( int32_t (*) (List_1_t1062 *, const MethodInfo*))List_1_get_Capacity_m25044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25045_gshared (List_1_t1062 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25045(__this, ___value, method) (( void (*) (List_1_t1062 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25045_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m25046_gshared (List_1_t1062 * __this, const MethodInfo* method);
#define List_1_get_Count_m25046(__this, method) (( int32_t (*) (List_1_t1062 *, const MethodInfo*))List_1_get_Count_m25046_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t865  List_1_get_Item_m25047_gshared (List_1_t1062 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m25047(__this, ___index, method) (( UILineInfo_t865  (*) (List_1_t1062 *, int32_t, const MethodInfo*))List_1_get_Item_m25047_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m25048_gshared (List_1_t1062 * __this, int32_t ___index, UILineInfo_t865  ___value, const MethodInfo* method);
#define List_1_set_Item_m25048(__this, ___index, ___value, method) (( void (*) (List_1_t1062 *, int32_t, UILineInfo_t865 , const MethodInfo*))List_1_set_Item_m25048_gshared)(__this, ___index, ___value, method)

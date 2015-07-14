#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1106;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t4483;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t4484;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t4485;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t3847;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t1229;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3851;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t4486;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3854;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_46.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m25044_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1__ctor_m25044(__this, method) (( void (*) (List_1_t1106 *, const MethodInfo*))List_1__ctor_m25044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m25045_gshared (List_1_t1106 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m25045(__this, ___collection, method) (( void (*) (List_1_t1106 *, Object_t*, const MethodInfo*))List_1__ctor_m25045_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6555_gshared (List_1_t1106 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6555(__this, ___capacity, method) (( void (*) (List_1_t1106 *, int32_t, const MethodInfo*))List_1__ctor_m6555_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m25046_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25046(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25046_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25047_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25047(__this, method) (( Object_t* (*) (List_1_t1106 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25047_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m25048_gshared (List_1_t1106 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m25048(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1106 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m25048_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m25049_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25049(__this, method) (( Object_t * (*) (List_1_t1106 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m25049_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m25050_gshared (List_1_t1106 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m25050(__this, ___item, method) (( int32_t (*) (List_1_t1106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m25050_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m25051_gshared (List_1_t1106 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m25051(__this, ___item, method) (( bool (*) (List_1_t1106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m25051_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m25052_gshared (List_1_t1106 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m25052(__this, ___item, method) (( int32_t (*) (List_1_t1106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m25052_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m25053_gshared (List_1_t1106 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m25053(__this, ___index, ___item, method) (( void (*) (List_1_t1106 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m25053_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m25054_gshared (List_1_t1106 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m25054(__this, ___item, method) (( void (*) (List_1_t1106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m25054_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25055_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25055(__this, method) (( bool (*) (List_1_t1106 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25055_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m25056_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25056(__this, method) (( bool (*) (List_1_t1106 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m25056_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m25057_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m25057(__this, method) (( Object_t * (*) (List_1_t1106 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m25057_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m25058_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m25058(__this, method) (( bool (*) (List_1_t1106 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m25058_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m25059_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m25059(__this, method) (( bool (*) (List_1_t1106 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m25059_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m25060_gshared (List_1_t1106 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m25060(__this, ___index, method) (( Object_t * (*) (List_1_t1106 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m25060_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m25061_gshared (List_1_t1106 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m25061(__this, ___index, ___value, method) (( void (*) (List_1_t1106 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m25061_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m25062_gshared (List_1_t1106 * __this, UICharInfo_t913  ___item, const MethodInfo* method);
#define List_1_Add_m25062(__this, ___item, method) (( void (*) (List_1_t1106 *, UICharInfo_t913 , const MethodInfo*))List_1_Add_m25062_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25063_gshared (List_1_t1106 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25063(__this, ___newCount, method) (( void (*) (List_1_t1106 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25063_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25064_gshared (List_1_t1106 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25064(__this, ___collection, method) (( void (*) (List_1_t1106 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25064_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25065_gshared (List_1_t1106 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25065(__this, ___enumerable, method) (( void (*) (List_1_t1106 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25065_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25066_gshared (List_1_t1106 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25066(__this, ___collection, method) (( void (*) (List_1_t1106 *, Object_t*, const MethodInfo*))List_1_AddRange_m25066_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3847 * List_1_AsReadOnly_m25067_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25067(__this, method) (( ReadOnlyCollection_1_t3847 * (*) (List_1_t1106 *, const MethodInfo*))List_1_AsReadOnly_m25067_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m25068_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_Clear_m25068(__this, method) (( void (*) (List_1_t1106 *, const MethodInfo*))List_1_Clear_m25068_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m25069_gshared (List_1_t1106 * __this, UICharInfo_t913  ___item, const MethodInfo* method);
#define List_1_Contains_m25069(__this, ___item, method) (( bool (*) (List_1_t1106 *, UICharInfo_t913 , const MethodInfo*))List_1_Contains_m25069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m25070_gshared (List_1_t1106 * __this, UICharInfoU5BU5D_t1229* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m25070(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1106 *, UICharInfoU5BU5D_t1229*, int32_t, const MethodInfo*))List_1_CopyTo_m25070_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t913  List_1_Find_m25071_gshared (List_1_t1106 * __this, Predicate_1_t3851 * ___match, const MethodInfo* method);
#define List_1_Find_m25071(__this, ___match, method) (( UICharInfo_t913  (*) (List_1_t1106 *, Predicate_1_t3851 *, const MethodInfo*))List_1_Find_m25071_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25072_gshared (Object_t * __this /* static, unused */, Predicate_1_t3851 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25072(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3851 *, const MethodInfo*))List_1_CheckMatch_m25072_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25073_gshared (List_1_t1106 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3851 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25073(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1106 *, int32_t, int32_t, Predicate_1_t3851 *, const MethodInfo*))List_1_GetIndex_m25073_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t3846  List_1_GetEnumerator_m25074_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m25074(__this, method) (( Enumerator_t3846  (*) (List_1_t1106 *, const MethodInfo*))List_1_GetEnumerator_m25074_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m25075_gshared (List_1_t1106 * __this, UICharInfo_t913  ___item, const MethodInfo* method);
#define List_1_IndexOf_m25075(__this, ___item, method) (( int32_t (*) (List_1_t1106 *, UICharInfo_t913 , const MethodInfo*))List_1_IndexOf_m25075_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25076_gshared (List_1_t1106 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25076(__this, ___start, ___delta, method) (( void (*) (List_1_t1106 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25076_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25077_gshared (List_1_t1106 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25077(__this, ___index, method) (( void (*) (List_1_t1106 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25077_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m25078_gshared (List_1_t1106 * __this, int32_t ___index, UICharInfo_t913  ___item, const MethodInfo* method);
#define List_1_Insert_m25078(__this, ___index, ___item, method) (( void (*) (List_1_t1106 *, int32_t, UICharInfo_t913 , const MethodInfo*))List_1_Insert_m25078_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25079_gshared (List_1_t1106 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25079(__this, ___collection, method) (( void (*) (List_1_t1106 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25079_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m25080_gshared (List_1_t1106 * __this, UICharInfo_t913  ___item, const MethodInfo* method);
#define List_1_Remove_m25080(__this, ___item, method) (( bool (*) (List_1_t1106 *, UICharInfo_t913 , const MethodInfo*))List_1_Remove_m25080_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25081_gshared (List_1_t1106 * __this, Predicate_1_t3851 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25081(__this, ___match, method) (( int32_t (*) (List_1_t1106 *, Predicate_1_t3851 *, const MethodInfo*))List_1_RemoveAll_m25081_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m25082_gshared (List_1_t1106 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m25082(__this, ___index, method) (( void (*) (List_1_t1106 *, int32_t, const MethodInfo*))List_1_RemoveAt_m25082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m25083_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_Reverse_m25083(__this, method) (( void (*) (List_1_t1106 *, const MethodInfo*))List_1_Reverse_m25083_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m25084_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_Sort_m25084(__this, method) (( void (*) (List_1_t1106 *, const MethodInfo*))List_1_Sort_m25084_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25085_gshared (List_1_t1106 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25085(__this, ___comparer, method) (( void (*) (List_1_t1106 *, Object_t*, const MethodInfo*))List_1_Sort_m25085_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25086_gshared (List_1_t1106 * __this, Comparison_1_t3854 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25086(__this, ___comparison, method) (( void (*) (List_1_t1106 *, Comparison_1_t3854 *, const MethodInfo*))List_1_Sort_m25086_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t1229* List_1_ToArray_m25087_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_ToArray_m25087(__this, method) (( UICharInfoU5BU5D_t1229* (*) (List_1_t1106 *, const MethodInfo*))List_1_ToArray_m25087_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m25088_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25088(__this, method) (( void (*) (List_1_t1106 *, const MethodInfo*))List_1_TrimExcess_m25088_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25089_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25089(__this, method) (( int32_t (*) (List_1_t1106 *, const MethodInfo*))List_1_get_Capacity_m25089_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25090_gshared (List_1_t1106 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25090(__this, ___value, method) (( void (*) (List_1_t1106 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25090_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m25091_gshared (List_1_t1106 * __this, const MethodInfo* method);
#define List_1_get_Count_m25091(__this, method) (( int32_t (*) (List_1_t1106 *, const MethodInfo*))List_1_get_Count_m25091_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t913  List_1_get_Item_m25092_gshared (List_1_t1106 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m25092(__this, ___index, method) (( UICharInfo_t913  (*) (List_1_t1106 *, int32_t, const MethodInfo*))List_1_get_Item_m25092_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m25093_gshared (List_1_t1106 * __this, int32_t ___index, UICharInfo_t913  ___value, const MethodInfo* method);
#define List_1_set_Item_m25093(__this, ___index, ___value, method) (( void (*) (List_1_t1106 *, int32_t, UICharInfo_t913 , const MethodInfo*))List_1_set_Item_m25093_gshared)(__this, ___index, ___value, method)

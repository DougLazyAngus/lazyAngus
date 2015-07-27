#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1162;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t4590;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t4591;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t4592;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t3924;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t1284;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3928;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t4593;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3931;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m26140_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1__ctor_m26140(__this, method) (( void (*) (List_1_t1162 *, const MethodInfo*))List_1__ctor_m26140_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26141_gshared (List_1_t1162 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26141(__this, ___collection, method) (( void (*) (List_1_t1162 *, Object_t*, const MethodInfo*))List_1__ctor_m26141_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m7166_gshared (List_1_t1162 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m7166(__this, ___capacity, method) (( void (*) (List_1_t1162 *, int32_t, const MethodInfo*))List_1__ctor_m7166_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m26142_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26142(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26142_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26143_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26143(__this, method) (( Object_t* (*) (List_1_t1162 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26144_gshared (List_1_t1162 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26144(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1162 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26144_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26145_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26145(__this, method) (( Object_t * (*) (List_1_t1162 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26145_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26146_gshared (List_1_t1162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26146(__this, ___item, method) (( int32_t (*) (List_1_t1162 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26146_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26147_gshared (List_1_t1162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26147(__this, ___item, method) (( bool (*) (List_1_t1162 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26147_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26148_gshared (List_1_t1162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26148(__this, ___item, method) (( int32_t (*) (List_1_t1162 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26148_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26149_gshared (List_1_t1162 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26149(__this, ___index, ___item, method) (( void (*) (List_1_t1162 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26149_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26150_gshared (List_1_t1162 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26150(__this, ___item, method) (( void (*) (List_1_t1162 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26150_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26151_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26151(__this, method) (( bool (*) (List_1_t1162 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26151_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26152_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26152(__this, method) (( bool (*) (List_1_t1162 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26152_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26153_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26153(__this, method) (( Object_t * (*) (List_1_t1162 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26154_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26154(__this, method) (( bool (*) (List_1_t1162 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26154_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26155_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26155(__this, method) (( bool (*) (List_1_t1162 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26155_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26156_gshared (List_1_t1162 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26156(__this, ___index, method) (( Object_t * (*) (List_1_t1162 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26156_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26157_gshared (List_1_t1162 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26157(__this, ___index, ___value, method) (( void (*) (List_1_t1162 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26157_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m26158_gshared (List_1_t1162 * __this, UICharInfo_t969  ___item, const MethodInfo* method);
#define List_1_Add_m26158(__this, ___item, method) (( void (*) (List_1_t1162 *, UICharInfo_t969 , const MethodInfo*))List_1_Add_m26158_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26159_gshared (List_1_t1162 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26159(__this, ___newCount, method) (( void (*) (List_1_t1162 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26159_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26160_gshared (List_1_t1162 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26160(__this, ___collection, method) (( void (*) (List_1_t1162 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26160_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26161_gshared (List_1_t1162 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26161(__this, ___enumerable, method) (( void (*) (List_1_t1162 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26161_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26162_gshared (List_1_t1162 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26162(__this, ___collection, method) (( void (*) (List_1_t1162 *, Object_t*, const MethodInfo*))List_1_AddRange_m26162_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3924 * List_1_AsReadOnly_m26163_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26163(__this, method) (( ReadOnlyCollection_1_t3924 * (*) (List_1_t1162 *, const MethodInfo*))List_1_AsReadOnly_m26163_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m26164_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_Clear_m26164(__this, method) (( void (*) (List_1_t1162 *, const MethodInfo*))List_1_Clear_m26164_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m26165_gshared (List_1_t1162 * __this, UICharInfo_t969  ___item, const MethodInfo* method);
#define List_1_Contains_m26165(__this, ___item, method) (( bool (*) (List_1_t1162 *, UICharInfo_t969 , const MethodInfo*))List_1_Contains_m26165_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26166_gshared (List_1_t1162 * __this, UICharInfoU5BU5D_t1284* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26166(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1162 *, UICharInfoU5BU5D_t1284*, int32_t, const MethodInfo*))List_1_CopyTo_m26166_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t969  List_1_Find_m26167_gshared (List_1_t1162 * __this, Predicate_1_t3928 * ___match, const MethodInfo* method);
#define List_1_Find_m26167(__this, ___match, method) (( UICharInfo_t969  (*) (List_1_t1162 *, Predicate_1_t3928 *, const MethodInfo*))List_1_Find_m26167_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26168_gshared (Object_t * __this /* static, unused */, Predicate_1_t3928 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26168(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3928 *, const MethodInfo*))List_1_CheckMatch_m26168_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26169_gshared (List_1_t1162 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3928 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26169(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1162 *, int32_t, int32_t, Predicate_1_t3928 *, const MethodInfo*))List_1_GetIndex_m26169_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t3923  List_1_GetEnumerator_m26170_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26170(__this, method) (( Enumerator_t3923  (*) (List_1_t1162 *, const MethodInfo*))List_1_GetEnumerator_m26170_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26171_gshared (List_1_t1162 * __this, UICharInfo_t969  ___item, const MethodInfo* method);
#define List_1_IndexOf_m26171(__this, ___item, method) (( int32_t (*) (List_1_t1162 *, UICharInfo_t969 , const MethodInfo*))List_1_IndexOf_m26171_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26172_gshared (List_1_t1162 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26172(__this, ___start, ___delta, method) (( void (*) (List_1_t1162 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26172_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26173_gshared (List_1_t1162 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26173(__this, ___index, method) (( void (*) (List_1_t1162 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26174_gshared (List_1_t1162 * __this, int32_t ___index, UICharInfo_t969  ___item, const MethodInfo* method);
#define List_1_Insert_m26174(__this, ___index, ___item, method) (( void (*) (List_1_t1162 *, int32_t, UICharInfo_t969 , const MethodInfo*))List_1_Insert_m26174_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26175_gshared (List_1_t1162 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26175(__this, ___collection, method) (( void (*) (List_1_t1162 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26175_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m26176_gshared (List_1_t1162 * __this, UICharInfo_t969  ___item, const MethodInfo* method);
#define List_1_Remove_m26176(__this, ___item, method) (( bool (*) (List_1_t1162 *, UICharInfo_t969 , const MethodInfo*))List_1_Remove_m26176_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26177_gshared (List_1_t1162 * __this, Predicate_1_t3928 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26177(__this, ___match, method) (( int32_t (*) (List_1_t1162 *, Predicate_1_t3928 *, const MethodInfo*))List_1_RemoveAll_m26177_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26178_gshared (List_1_t1162 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26178(__this, ___index, method) (( void (*) (List_1_t1162 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26178_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m26179_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_Reverse_m26179(__this, method) (( void (*) (List_1_t1162 *, const MethodInfo*))List_1_Reverse_m26179_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m26180_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_Sort_m26180(__this, method) (( void (*) (List_1_t1162 *, const MethodInfo*))List_1_Sort_m26180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26181_gshared (List_1_t1162 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26181(__this, ___comparer, method) (( void (*) (List_1_t1162 *, Object_t*, const MethodInfo*))List_1_Sort_m26181_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26182_gshared (List_1_t1162 * __this, Comparison_1_t3931 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26182(__this, ___comparison, method) (( void (*) (List_1_t1162 *, Comparison_1_t3931 *, const MethodInfo*))List_1_Sort_m26182_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t1284* List_1_ToArray_m26183_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_ToArray_m26183(__this, method) (( UICharInfoU5BU5D_t1284* (*) (List_1_t1162 *, const MethodInfo*))List_1_ToArray_m26183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m26184_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26184(__this, method) (( void (*) (List_1_t1162 *, const MethodInfo*))List_1_TrimExcess_m26184_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26185_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26185(__this, method) (( int32_t (*) (List_1_t1162 *, const MethodInfo*))List_1_get_Capacity_m26185_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26186_gshared (List_1_t1162 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26186(__this, ___value, method) (( void (*) (List_1_t1162 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26186_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m26187_gshared (List_1_t1162 * __this, const MethodInfo* method);
#define List_1_get_Count_m26187(__this, method) (( int32_t (*) (List_1_t1162 *, const MethodInfo*))List_1_get_Count_m26187_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t969  List_1_get_Item_m26188_gshared (List_1_t1162 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26188(__this, ___index, method) (( UICharInfo_t969  (*) (List_1_t1162 *, int32_t, const MethodInfo*))List_1_get_Item_m26188_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26189_gshared (List_1_t1162 * __this, int32_t ___index, UICharInfo_t969  ___value, const MethodInfo* method);
#define List_1_set_Item_m26189(__this, ___index, ___value, method) (( void (*) (List_1_t1162 *, int32_t, UICharInfo_t969 , const MethodInfo*))List_1_set_Item_m26189_gshared)(__this, ___index, ___value, method)

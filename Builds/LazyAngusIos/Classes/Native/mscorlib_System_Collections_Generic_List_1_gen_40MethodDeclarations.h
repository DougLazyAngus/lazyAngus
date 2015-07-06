#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1084;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t4486;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t4487;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t891;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t3839;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1205;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3843;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t4488;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3846;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m25157_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1__ctor_m25157(__this, method) (( void (*) (List_1_t1084 *, const MethodInfo*))List_1__ctor_m25157_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m25158_gshared (List_1_t1084 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m25158(__this, ___collection, method) (( void (*) (List_1_t1084 *, Object_t*, const MethodInfo*))List_1__ctor_m25158_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6409_gshared (List_1_t1084 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6409(__this, ___capacity, method) (( void (*) (List_1_t1084 *, int32_t, const MethodInfo*))List_1__ctor_m6409_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m25159_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25159(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25159_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25160_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25160(__this, method) (( Object_t* (*) (List_1_t1084 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25160_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m25161_gshared (List_1_t1084 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m25161(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1084 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m25161_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m25162_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25162(__this, method) (( Object_t * (*) (List_1_t1084 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m25162_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m25163_gshared (List_1_t1084 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m25163(__this, ___item, method) (( int32_t (*) (List_1_t1084 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m25163_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m25164_gshared (List_1_t1084 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m25164(__this, ___item, method) (( bool (*) (List_1_t1084 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m25164_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m25165_gshared (List_1_t1084 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m25165(__this, ___item, method) (( int32_t (*) (List_1_t1084 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m25165_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m25166_gshared (List_1_t1084 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m25166(__this, ___index, ___item, method) (( void (*) (List_1_t1084 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m25166_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m25167_gshared (List_1_t1084 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m25167(__this, ___item, method) (( void (*) (List_1_t1084 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m25167_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25168_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25168(__this, method) (( bool (*) (List_1_t1084 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m25169_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25169(__this, method) (( bool (*) (List_1_t1084 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m25169_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m25170_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m25170(__this, method) (( Object_t * (*) (List_1_t1084 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m25170_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m25171_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m25171(__this, method) (( bool (*) (List_1_t1084 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m25171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m25172_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m25172(__this, method) (( bool (*) (List_1_t1084 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m25172_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m25173_gshared (List_1_t1084 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m25173(__this, ___index, method) (( Object_t * (*) (List_1_t1084 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m25173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m25174_gshared (List_1_t1084 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m25174(__this, ___index, ___value, method) (( void (*) (List_1_t1084 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m25174_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m25175_gshared (List_1_t1084 * __this, UILineInfo_t887  ___item, const MethodInfo* method);
#define List_1_Add_m25175(__this, ___item, method) (( void (*) (List_1_t1084 *, UILineInfo_t887 , const MethodInfo*))List_1_Add_m25175_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25176_gshared (List_1_t1084 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25176(__this, ___newCount, method) (( void (*) (List_1_t1084 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25176_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25177_gshared (List_1_t1084 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25177(__this, ___collection, method) (( void (*) (List_1_t1084 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25177_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25178_gshared (List_1_t1084 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25178(__this, ___enumerable, method) (( void (*) (List_1_t1084 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25178_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25179_gshared (List_1_t1084 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25179(__this, ___collection, method) (( void (*) (List_1_t1084 *, Object_t*, const MethodInfo*))List_1_AddRange_m25179_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3839 * List_1_AsReadOnly_m25180_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25180(__this, method) (( ReadOnlyCollection_1_t3839 * (*) (List_1_t1084 *, const MethodInfo*))List_1_AsReadOnly_m25180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m25181_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_Clear_m25181(__this, method) (( void (*) (List_1_t1084 *, const MethodInfo*))List_1_Clear_m25181_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m25182_gshared (List_1_t1084 * __this, UILineInfo_t887  ___item, const MethodInfo* method);
#define List_1_Contains_m25182(__this, ___item, method) (( bool (*) (List_1_t1084 *, UILineInfo_t887 , const MethodInfo*))List_1_Contains_m25182_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m25183_gshared (List_1_t1084 * __this, UILineInfoU5BU5D_t1205* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m25183(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1084 *, UILineInfoU5BU5D_t1205*, int32_t, const MethodInfo*))List_1_CopyTo_m25183_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t887  List_1_Find_m25184_gshared (List_1_t1084 * __this, Predicate_1_t3843 * ___match, const MethodInfo* method);
#define List_1_Find_m25184(__this, ___match, method) (( UILineInfo_t887  (*) (List_1_t1084 *, Predicate_1_t3843 *, const MethodInfo*))List_1_Find_m25184_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25185_gshared (Object_t * __this /* static, unused */, Predicate_1_t3843 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25185(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3843 *, const MethodInfo*))List_1_CheckMatch_m25185_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25186_gshared (List_1_t1084 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3843 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25186(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1084 *, int32_t, int32_t, Predicate_1_t3843 *, const MethodInfo*))List_1_GetIndex_m25186_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t3838  List_1_GetEnumerator_m25187_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m25187(__this, method) (( Enumerator_t3838  (*) (List_1_t1084 *, const MethodInfo*))List_1_GetEnumerator_m25187_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m25188_gshared (List_1_t1084 * __this, UILineInfo_t887  ___item, const MethodInfo* method);
#define List_1_IndexOf_m25188(__this, ___item, method) (( int32_t (*) (List_1_t1084 *, UILineInfo_t887 , const MethodInfo*))List_1_IndexOf_m25188_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25189_gshared (List_1_t1084 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25189(__this, ___start, ___delta, method) (( void (*) (List_1_t1084 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25189_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25190_gshared (List_1_t1084 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25190(__this, ___index, method) (( void (*) (List_1_t1084 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25190_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m25191_gshared (List_1_t1084 * __this, int32_t ___index, UILineInfo_t887  ___item, const MethodInfo* method);
#define List_1_Insert_m25191(__this, ___index, ___item, method) (( void (*) (List_1_t1084 *, int32_t, UILineInfo_t887 , const MethodInfo*))List_1_Insert_m25191_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25192_gshared (List_1_t1084 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25192(__this, ___collection, method) (( void (*) (List_1_t1084 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25192_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m25193_gshared (List_1_t1084 * __this, UILineInfo_t887  ___item, const MethodInfo* method);
#define List_1_Remove_m25193(__this, ___item, method) (( bool (*) (List_1_t1084 *, UILineInfo_t887 , const MethodInfo*))List_1_Remove_m25193_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25194_gshared (List_1_t1084 * __this, Predicate_1_t3843 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25194(__this, ___match, method) (( int32_t (*) (List_1_t1084 *, Predicate_1_t3843 *, const MethodInfo*))List_1_RemoveAll_m25194_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m25195_gshared (List_1_t1084 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m25195(__this, ___index, method) (( void (*) (List_1_t1084 *, int32_t, const MethodInfo*))List_1_RemoveAt_m25195_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m25196_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_Reverse_m25196(__this, method) (( void (*) (List_1_t1084 *, const MethodInfo*))List_1_Reverse_m25196_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m25197_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_Sort_m25197(__this, method) (( void (*) (List_1_t1084 *, const MethodInfo*))List_1_Sort_m25197_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25198_gshared (List_1_t1084 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25198(__this, ___comparer, method) (( void (*) (List_1_t1084 *, Object_t*, const MethodInfo*))List_1_Sort_m25198_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25199_gshared (List_1_t1084 * __this, Comparison_1_t3846 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25199(__this, ___comparison, method) (( void (*) (List_1_t1084 *, Comparison_1_t3846 *, const MethodInfo*))List_1_Sort_m25199_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t1205* List_1_ToArray_m25200_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_ToArray_m25200(__this, method) (( UILineInfoU5BU5D_t1205* (*) (List_1_t1084 *, const MethodInfo*))List_1_ToArray_m25200_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m25201_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25201(__this, method) (( void (*) (List_1_t1084 *, const MethodInfo*))List_1_TrimExcess_m25201_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25202_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25202(__this, method) (( int32_t (*) (List_1_t1084 *, const MethodInfo*))List_1_get_Capacity_m25202_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25203_gshared (List_1_t1084 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25203(__this, ___value, method) (( void (*) (List_1_t1084 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25203_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m25204_gshared (List_1_t1084 * __this, const MethodInfo* method);
#define List_1_get_Count_m25204(__this, method) (( int32_t (*) (List_1_t1084 *, const MethodInfo*))List_1_get_Count_m25204_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t887  List_1_get_Item_m25205_gshared (List_1_t1084 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m25205(__this, ___index, method) (( UILineInfo_t887  (*) (List_1_t1084 *, int32_t, const MethodInfo*))List_1_get_Item_m25205_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m25206_gshared (List_1_t1084 * __this, int32_t ___index, UILineInfo_t887  ___value, const MethodInfo* method);
#define List_1_set_Item_m25206(__this, ___index, ___value, method) (( void (*) (List_1_t1084 *, int32_t, UILineInfo_t887 , const MethodInfo*))List_1_set_Item_m25206_gshared)(__this, ___index, ___value, method)

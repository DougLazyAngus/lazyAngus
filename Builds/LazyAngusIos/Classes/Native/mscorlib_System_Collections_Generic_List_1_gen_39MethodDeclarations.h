#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1061;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t4458;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t4459;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t4460;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t3806;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t1182;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3810;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t4461;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3813;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_46.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m24855_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1__ctor_m24855(__this, method) (( void (*) (List_1_t1061 *, const MethodInfo*))List_1__ctor_m24855_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m24856_gshared (List_1_t1061 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m24856(__this, ___collection, method) (( void (*) (List_1_t1061 *, Object_t*, const MethodInfo*))List_1__ctor_m24856_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6260_gshared (List_1_t1061 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6260(__this, ___capacity, method) (( void (*) (List_1_t1061 *, int32_t, const MethodInfo*))List_1__ctor_m6260_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m24857_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m24857(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24857_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24858_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24858(__this, method) (( Object_t* (*) (List_1_t1061 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m24859_gshared (List_1_t1061 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m24859(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1061 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m24859_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m24860_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24860(__this, method) (( Object_t * (*) (List_1_t1061 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m24860_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m24861_gshared (List_1_t1061 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m24861(__this, ___item, method) (( int32_t (*) (List_1_t1061 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m24861_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m24862_gshared (List_1_t1061 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m24862(__this, ___item, method) (( bool (*) (List_1_t1061 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m24862_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m24863_gshared (List_1_t1061 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m24863(__this, ___item, method) (( int32_t (*) (List_1_t1061 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m24863_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m24864_gshared (List_1_t1061 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m24864(__this, ___index, ___item, method) (( void (*) (List_1_t1061 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m24864_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m24865_gshared (List_1_t1061 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m24865(__this, ___item, method) (( void (*) (List_1_t1061 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m24865_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24866_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24866(__this, method) (( bool (*) (List_1_t1061 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24866_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m24867_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24867(__this, method) (( bool (*) (List_1_t1061 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m24867_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m24868_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m24868(__this, method) (( Object_t * (*) (List_1_t1061 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m24868_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m24869_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m24869(__this, method) (( bool (*) (List_1_t1061 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m24869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m24870_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m24870(__this, method) (( bool (*) (List_1_t1061 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m24870_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m24871_gshared (List_1_t1061 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m24871(__this, ___index, method) (( Object_t * (*) (List_1_t1061 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m24871_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m24872_gshared (List_1_t1061 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m24872(__this, ___index, ___value, method) (( void (*) (List_1_t1061 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m24872_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m24873_gshared (List_1_t1061 * __this, UICharInfo_t867  ___item, const MethodInfo* method);
#define List_1_Add_m24873(__this, ___item, method) (( void (*) (List_1_t1061 *, UICharInfo_t867 , const MethodInfo*))List_1_Add_m24873_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m24874_gshared (List_1_t1061 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m24874(__this, ___newCount, method) (( void (*) (List_1_t1061 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24874_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m24875_gshared (List_1_t1061 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m24875(__this, ___collection, method) (( void (*) (List_1_t1061 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24875_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m24876_gshared (List_1_t1061 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m24876(__this, ___enumerable, method) (( void (*) (List_1_t1061 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24876_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m24877_gshared (List_1_t1061 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m24877(__this, ___collection, method) (( void (*) (List_1_t1061 *, Object_t*, const MethodInfo*))List_1_AddRange_m24877_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3806 * List_1_AsReadOnly_m24878_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m24878(__this, method) (( ReadOnlyCollection_1_t3806 * (*) (List_1_t1061 *, const MethodInfo*))List_1_AsReadOnly_m24878_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m24879_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_Clear_m24879(__this, method) (( void (*) (List_1_t1061 *, const MethodInfo*))List_1_Clear_m24879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m24880_gshared (List_1_t1061 * __this, UICharInfo_t867  ___item, const MethodInfo* method);
#define List_1_Contains_m24880(__this, ___item, method) (( bool (*) (List_1_t1061 *, UICharInfo_t867 , const MethodInfo*))List_1_Contains_m24880_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m24881_gshared (List_1_t1061 * __this, UICharInfoU5BU5D_t1182* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m24881(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1061 *, UICharInfoU5BU5D_t1182*, int32_t, const MethodInfo*))List_1_CopyTo_m24881_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t867  List_1_Find_m24882_gshared (List_1_t1061 * __this, Predicate_1_t3810 * ___match, const MethodInfo* method);
#define List_1_Find_m24882(__this, ___match, method) (( UICharInfo_t867  (*) (List_1_t1061 *, Predicate_1_t3810 *, const MethodInfo*))List_1_Find_m24882_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m24883_gshared (Object_t * __this /* static, unused */, Predicate_1_t3810 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m24883(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3810 *, const MethodInfo*))List_1_CheckMatch_m24883_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m24884_gshared (List_1_t1061 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3810 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m24884(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1061 *, int32_t, int32_t, Predicate_1_t3810 *, const MethodInfo*))List_1_GetIndex_m24884_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t3805  List_1_GetEnumerator_m24885_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m24885(__this, method) (( Enumerator_t3805  (*) (List_1_t1061 *, const MethodInfo*))List_1_GetEnumerator_m24885_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m24886_gshared (List_1_t1061 * __this, UICharInfo_t867  ___item, const MethodInfo* method);
#define List_1_IndexOf_m24886(__this, ___item, method) (( int32_t (*) (List_1_t1061 *, UICharInfo_t867 , const MethodInfo*))List_1_IndexOf_m24886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m24887_gshared (List_1_t1061 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m24887(__this, ___start, ___delta, method) (( void (*) (List_1_t1061 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24887_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m24888_gshared (List_1_t1061 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m24888(__this, ___index, method) (( void (*) (List_1_t1061 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24888_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m24889_gshared (List_1_t1061 * __this, int32_t ___index, UICharInfo_t867  ___item, const MethodInfo* method);
#define List_1_Insert_m24889(__this, ___index, ___item, method) (( void (*) (List_1_t1061 *, int32_t, UICharInfo_t867 , const MethodInfo*))List_1_Insert_m24889_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m24890_gshared (List_1_t1061 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m24890(__this, ___collection, method) (( void (*) (List_1_t1061 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24890_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m24891_gshared (List_1_t1061 * __this, UICharInfo_t867  ___item, const MethodInfo* method);
#define List_1_Remove_m24891(__this, ___item, method) (( bool (*) (List_1_t1061 *, UICharInfo_t867 , const MethodInfo*))List_1_Remove_m24891_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m24892_gshared (List_1_t1061 * __this, Predicate_1_t3810 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m24892(__this, ___match, method) (( int32_t (*) (List_1_t1061 *, Predicate_1_t3810 *, const MethodInfo*))List_1_RemoveAll_m24892_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m24893_gshared (List_1_t1061 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m24893(__this, ___index, method) (( void (*) (List_1_t1061 *, int32_t, const MethodInfo*))List_1_RemoveAt_m24893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m24894_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_Reverse_m24894(__this, method) (( void (*) (List_1_t1061 *, const MethodInfo*))List_1_Reverse_m24894_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m24895_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_Sort_m24895(__this, method) (( void (*) (List_1_t1061 *, const MethodInfo*))List_1_Sort_m24895_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m24896_gshared (List_1_t1061 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m24896(__this, ___comparer, method) (( void (*) (List_1_t1061 *, Object_t*, const MethodInfo*))List_1_Sort_m24896_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m24897_gshared (List_1_t1061 * __this, Comparison_1_t3813 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m24897(__this, ___comparison, method) (( void (*) (List_1_t1061 *, Comparison_1_t3813 *, const MethodInfo*))List_1_Sort_m24897_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t1182* List_1_ToArray_m24898_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_ToArray_m24898(__this, method) (( UICharInfoU5BU5D_t1182* (*) (List_1_t1061 *, const MethodInfo*))List_1_ToArray_m24898_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m24899_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m24899(__this, method) (( void (*) (List_1_t1061 *, const MethodInfo*))List_1_TrimExcess_m24899_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m24900_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m24900(__this, method) (( int32_t (*) (List_1_t1061 *, const MethodInfo*))List_1_get_Capacity_m24900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m24901_gshared (List_1_t1061 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m24901(__this, ___value, method) (( void (*) (List_1_t1061 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24901_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m24902_gshared (List_1_t1061 * __this, const MethodInfo* method);
#define List_1_get_Count_m24902(__this, method) (( int32_t (*) (List_1_t1061 *, const MethodInfo*))List_1_get_Count_m24902_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t867  List_1_get_Item_m24903_gshared (List_1_t1061 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m24903(__this, ___index, method) (( UICharInfo_t867  (*) (List_1_t1061 *, int32_t, const MethodInfo*))List_1_get_Item_m24903_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m24904_gshared (List_1_t1061 * __this, int32_t ___index, UICharInfo_t867  ___value, const MethodInfo* method);
#define List_1_set_Item_m24904(__this, ___index, ___value, method) (( void (*) (List_1_t1061 *, int32_t, UICharInfo_t867 , const MethodInfo*))List_1_set_Item_m24904_gshared)(__this, ___index, ___value, method)

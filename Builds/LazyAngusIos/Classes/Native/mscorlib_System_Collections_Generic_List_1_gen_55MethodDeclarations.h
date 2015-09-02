#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2806;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t9655;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2926;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t9656;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t9657;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t8463;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t8467;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t9658;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t8470;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_103.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m61188_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1__ctor_m61188(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1__ctor_m61188_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m61189_gshared (List_1_t2806 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m61189(__this, ___collection, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1__ctor_m61189_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10271_gshared (List_1_t2806 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10271(__this, ___capacity, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1__ctor_m10271_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m61190_gshared (List_1_t2806 * __this, UICharInfoU5BU5D_t2926* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m61190(__this, ___data, ___size, method) (( void (*) (List_1_t2806 *, UICharInfoU5BU5D_t2926*, int32_t, const MethodInfo*))List_1__ctor_m61190_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m61191_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m61191(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m61191_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61192_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61192(__this, method) (( Object_t* (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61192_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m61193_gshared (List_1_t2806 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m61193(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2806 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m61193_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m61194_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m61194(__this, method) (( Object_t * (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m61194_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m61195_gshared (List_1_t2806 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m61195(__this, ___item, method) (( int32_t (*) (List_1_t2806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m61195_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m61196_gshared (List_1_t2806 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m61196(__this, ___item, method) (( bool (*) (List_1_t2806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m61196_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m61197_gshared (List_1_t2806 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m61197(__this, ___item, method) (( int32_t (*) (List_1_t2806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m61197_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m61198_gshared (List_1_t2806 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m61198(__this, ___index, ___item, method) (( void (*) (List_1_t2806 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m61198_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m61199_gshared (List_1_t2806 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m61199(__this, ___item, method) (( void (*) (List_1_t2806 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m61199_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61200_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61200(__this, method) (( bool (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61200_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m61201_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m61201(__this, method) (( bool (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m61201_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m61202_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m61202(__this, method) (( Object_t * (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m61202_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m61203_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m61203(__this, method) (( bool (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m61203_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m61204_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m61204(__this, method) (( bool (*) (List_1_t2806 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m61204_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m61205_gshared (List_1_t2806 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m61205(__this, ___index, method) (( Object_t * (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m61205_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m61206_gshared (List_1_t2806 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m61206(__this, ___index, ___value, method) (( void (*) (List_1_t2806 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m61206_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m61207_gshared (List_1_t2806 * __this, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_Add_m61207(__this, ___item, method) (( void (*) (List_1_t2806 *, UICharInfo_t1095 , const MethodInfo*))List_1_Add_m61207_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m61208_gshared (List_1_t2806 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m61208(__this, ___newCount, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m61208_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m61209_gshared (List_1_t2806 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m61209(__this, ___idx, ___count, method) (( void (*) (List_1_t2806 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m61209_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m61210_gshared (List_1_t2806 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m61210(__this, ___collection, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_AddCollection_m61210_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m61211_gshared (List_1_t2806 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m61211(__this, ___enumerable, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m61211_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m61212_gshared (List_1_t2806 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m61212(__this, ___collection, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_AddRange_m61212_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8463 * List_1_AsReadOnly_m61213_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m61213(__this, method) (( ReadOnlyCollection_1_t8463 * (*) (List_1_t2806 *, const MethodInfo*))List_1_AsReadOnly_m61213_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m61214_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_Clear_m61214(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1_Clear_m61214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m61215_gshared (List_1_t2806 * __this, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_Contains_m61215(__this, ___item, method) (( bool (*) (List_1_t2806 *, UICharInfo_t1095 , const MethodInfo*))List_1_Contains_m61215_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m61216_gshared (List_1_t2806 * __this, UICharInfoU5BU5D_t2926* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m61216(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2806 *, UICharInfoU5BU5D_t2926*, int32_t, const MethodInfo*))List_1_CopyTo_m61216_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t1095  List_1_Find_m61217_gshared (List_1_t2806 * __this, Predicate_1_t8467 * ___match, const MethodInfo* method);
#define List_1_Find_m61217(__this, ___match, method) (( UICharInfo_t1095  (*) (List_1_t2806 *, Predicate_1_t8467 *, const MethodInfo*))List_1_Find_m61217_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m61218_gshared (Object_t * __this /* static, unused */, Predicate_1_t8467 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m61218(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8467 *, const MethodInfo*))List_1_CheckMatch_m61218_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m61219_gshared (List_1_t2806 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8467 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m61219(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2806 *, int32_t, int32_t, Predicate_1_t8467 *, const MethodInfo*))List_1_GetIndex_m61219_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t8462  List_1_GetEnumerator_m61220_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m61220(__this, method) (( Enumerator_t8462  (*) (List_1_t2806 *, const MethodInfo*))List_1_GetEnumerator_m61220_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2806 * List_1_GetRange_m61221_gshared (List_1_t2806 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m61221(__this, ___index, ___count, method) (( List_1_t2806 * (*) (List_1_t2806 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m61221_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m61222_gshared (List_1_t2806 * __this, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_IndexOf_m61222(__this, ___item, method) (( int32_t (*) (List_1_t2806 *, UICharInfo_t1095 , const MethodInfo*))List_1_IndexOf_m61222_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m61223_gshared (List_1_t2806 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m61223(__this, ___start, ___delta, method) (( void (*) (List_1_t2806 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m61223_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m61224_gshared (List_1_t2806 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m61224(__this, ___index, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_CheckIndex_m61224_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m61225_gshared (List_1_t2806 * __this, int32_t ___index, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_Insert_m61225(__this, ___index, ___item, method) (( void (*) (List_1_t2806 *, int32_t, UICharInfo_t1095 , const MethodInfo*))List_1_Insert_m61225_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m61226_gshared (List_1_t2806 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m61226(__this, ___collection, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m61226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m61227_gshared (List_1_t2806 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m61227(__this, ___index, ___collection, method) (( void (*) (List_1_t2806 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m61227_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m61228_gshared (List_1_t2806 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m61228(__this, ___index, ___collection, method) (( void (*) (List_1_t2806 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m61228_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m61229_gshared (List_1_t2806 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m61229(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2806 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m61229_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m61230_gshared (List_1_t2806 * __this, UICharInfo_t1095  ___item, const MethodInfo* method);
#define List_1_Remove_m61230(__this, ___item, method) (( bool (*) (List_1_t2806 *, UICharInfo_t1095 , const MethodInfo*))List_1_Remove_m61230_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m61231_gshared (List_1_t2806 * __this, Predicate_1_t8467 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m61231(__this, ___match, method) (( int32_t (*) (List_1_t2806 *, Predicate_1_t8467 *, const MethodInfo*))List_1_RemoveAll_m61231_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m61232_gshared (List_1_t2806 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m61232(__this, ___index, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_RemoveAt_m61232_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m61233_gshared (List_1_t2806 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m61233(__this, ___index, ___count, method) (( void (*) (List_1_t2806 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m61233_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m61234_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_Reverse_m61234(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1_Reverse_m61234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m61235_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_Sort_m61235(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1_Sort_m61235_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m61236_gshared (List_1_t2806 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m61236(__this, ___comparer, method) (( void (*) (List_1_t2806 *, Object_t*, const MethodInfo*))List_1_Sort_m61236_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m61237_gshared (List_1_t2806 * __this, Comparison_1_t8470 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m61237(__this, ___comparison, method) (( void (*) (List_1_t2806 *, Comparison_1_t8470 *, const MethodInfo*))List_1_Sort_m61237_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2926* List_1_ToArray_m61238_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_ToArray_m61238(__this, method) (( UICharInfoU5BU5D_t2926* (*) (List_1_t2806 *, const MethodInfo*))List_1_ToArray_m61238_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m61239_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m61239(__this, method) (( void (*) (List_1_t2806 *, const MethodInfo*))List_1_TrimExcess_m61239_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m61240_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m61240(__this, method) (( int32_t (*) (List_1_t2806 *, const MethodInfo*))List_1_get_Capacity_m61240_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m61241_gshared (List_1_t2806 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m61241(__this, ___value, method) (( void (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_set_Capacity_m61241_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m61242_gshared (List_1_t2806 * __this, const MethodInfo* method);
#define List_1_get_Count_m61242(__this, method) (( int32_t (*) (List_1_t2806 *, const MethodInfo*))List_1_get_Count_m61242_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t1095  List_1_get_Item_m61243_gshared (List_1_t2806 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m61243(__this, ___index, method) (( UICharInfo_t1095  (*) (List_1_t2806 *, int32_t, const MethodInfo*))List_1_get_Item_m61243_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m61244_gshared (List_1_t2806 * __this, int32_t ___index, UICharInfo_t1095  ___value, const MethodInfo* method);
#define List_1_set_Item_m61244(__this, ___index, ___value, method) (( void (*) (List_1_t2806 *, int32_t, UICharInfo_t1095 , const MethodInfo*))List_1_set_Item_m61244_gshared)(__this, ___index, ___value, method)

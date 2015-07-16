#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1116;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t4494;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t4495;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t4496;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t3858;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t1239;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3862;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t4497;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3865;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_46.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m25110_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1__ctor_m25110(__this, method) (( void (*) (List_1_t1116 *, const MethodInfo*))List_1__ctor_m25110_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m25111_gshared (List_1_t1116 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m25111(__this, ___collection, method) (( void (*) (List_1_t1116 *, Object_t*, const MethodInfo*))List_1__ctor_m25111_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m6618_gshared (List_1_t1116 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m6618(__this, ___capacity, method) (( void (*) (List_1_t1116 *, int32_t, const MethodInfo*))List_1__ctor_m6618_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m25112_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25112(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25112_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25113_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25113(__this, method) (( Object_t* (*) (List_1_t1116 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25113_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m25114_gshared (List_1_t1116 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m25114(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1116 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m25114_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m25115_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25115(__this, method) (( Object_t * (*) (List_1_t1116 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m25115_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m25116_gshared (List_1_t1116 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m25116(__this, ___item, method) (( int32_t (*) (List_1_t1116 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m25116_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m25117_gshared (List_1_t1116 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m25117(__this, ___item, method) (( bool (*) (List_1_t1116 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m25117_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m25118_gshared (List_1_t1116 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m25118(__this, ___item, method) (( int32_t (*) (List_1_t1116 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m25118_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m25119_gshared (List_1_t1116 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m25119(__this, ___index, ___item, method) (( void (*) (List_1_t1116 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m25119_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m25120_gshared (List_1_t1116 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m25120(__this, ___item, method) (( void (*) (List_1_t1116 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m25120_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25121_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25121(__this, method) (( bool (*) (List_1_t1116 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m25122_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25122(__this, method) (( bool (*) (List_1_t1116 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m25122_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m25123_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m25123(__this, method) (( Object_t * (*) (List_1_t1116 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m25123_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m25124_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m25124(__this, method) (( bool (*) (List_1_t1116 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m25124_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m25125_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m25125(__this, method) (( bool (*) (List_1_t1116 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m25125_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m25126_gshared (List_1_t1116 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m25126(__this, ___index, method) (( Object_t * (*) (List_1_t1116 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m25126_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m25127_gshared (List_1_t1116 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m25127(__this, ___index, ___value, method) (( void (*) (List_1_t1116 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m25127_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m25128_gshared (List_1_t1116 * __this, UICharInfo_t922  ___item, const MethodInfo* method);
#define List_1_Add_m25128(__this, ___item, method) (( void (*) (List_1_t1116 *, UICharInfo_t922 , const MethodInfo*))List_1_Add_m25128_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25129_gshared (List_1_t1116 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25129(__this, ___newCount, method) (( void (*) (List_1_t1116 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25129_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25130_gshared (List_1_t1116 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25130(__this, ___collection, method) (( void (*) (List_1_t1116 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25130_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25131_gshared (List_1_t1116 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25131(__this, ___enumerable, method) (( void (*) (List_1_t1116 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25131_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25132_gshared (List_1_t1116 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25132(__this, ___collection, method) (( void (*) (List_1_t1116 *, Object_t*, const MethodInfo*))List_1_AddRange_m25132_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3858 * List_1_AsReadOnly_m25133_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25133(__this, method) (( ReadOnlyCollection_1_t3858 * (*) (List_1_t1116 *, const MethodInfo*))List_1_AsReadOnly_m25133_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m25134_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_Clear_m25134(__this, method) (( void (*) (List_1_t1116 *, const MethodInfo*))List_1_Clear_m25134_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m25135_gshared (List_1_t1116 * __this, UICharInfo_t922  ___item, const MethodInfo* method);
#define List_1_Contains_m25135(__this, ___item, method) (( bool (*) (List_1_t1116 *, UICharInfo_t922 , const MethodInfo*))List_1_Contains_m25135_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m25136_gshared (List_1_t1116 * __this, UICharInfoU5BU5D_t1239* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m25136(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1116 *, UICharInfoU5BU5D_t1239*, int32_t, const MethodInfo*))List_1_CopyTo_m25136_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t922  List_1_Find_m25137_gshared (List_1_t1116 * __this, Predicate_1_t3862 * ___match, const MethodInfo* method);
#define List_1_Find_m25137(__this, ___match, method) (( UICharInfo_t922  (*) (List_1_t1116 *, Predicate_1_t3862 *, const MethodInfo*))List_1_Find_m25137_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25138_gshared (Object_t * __this /* static, unused */, Predicate_1_t3862 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25138(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3862 *, const MethodInfo*))List_1_CheckMatch_m25138_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25139_gshared (List_1_t1116 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3862 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25139(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1116 *, int32_t, int32_t, Predicate_1_t3862 *, const MethodInfo*))List_1_GetIndex_m25139_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t3857  List_1_GetEnumerator_m25140_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m25140(__this, method) (( Enumerator_t3857  (*) (List_1_t1116 *, const MethodInfo*))List_1_GetEnumerator_m25140_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m25141_gshared (List_1_t1116 * __this, UICharInfo_t922  ___item, const MethodInfo* method);
#define List_1_IndexOf_m25141(__this, ___item, method) (( int32_t (*) (List_1_t1116 *, UICharInfo_t922 , const MethodInfo*))List_1_IndexOf_m25141_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25142_gshared (List_1_t1116 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25142(__this, ___start, ___delta, method) (( void (*) (List_1_t1116 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25142_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25143_gshared (List_1_t1116 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25143(__this, ___index, method) (( void (*) (List_1_t1116 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25143_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m25144_gshared (List_1_t1116 * __this, int32_t ___index, UICharInfo_t922  ___item, const MethodInfo* method);
#define List_1_Insert_m25144(__this, ___index, ___item, method) (( void (*) (List_1_t1116 *, int32_t, UICharInfo_t922 , const MethodInfo*))List_1_Insert_m25144_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25145_gshared (List_1_t1116 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25145(__this, ___collection, method) (( void (*) (List_1_t1116 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25145_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m25146_gshared (List_1_t1116 * __this, UICharInfo_t922  ___item, const MethodInfo* method);
#define List_1_Remove_m25146(__this, ___item, method) (( bool (*) (List_1_t1116 *, UICharInfo_t922 , const MethodInfo*))List_1_Remove_m25146_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25147_gshared (List_1_t1116 * __this, Predicate_1_t3862 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25147(__this, ___match, method) (( int32_t (*) (List_1_t1116 *, Predicate_1_t3862 *, const MethodInfo*))List_1_RemoveAll_m25147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m25148_gshared (List_1_t1116 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m25148(__this, ___index, method) (( void (*) (List_1_t1116 *, int32_t, const MethodInfo*))List_1_RemoveAt_m25148_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m25149_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_Reverse_m25149(__this, method) (( void (*) (List_1_t1116 *, const MethodInfo*))List_1_Reverse_m25149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m25150_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_Sort_m25150(__this, method) (( void (*) (List_1_t1116 *, const MethodInfo*))List_1_Sort_m25150_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25151_gshared (List_1_t1116 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25151(__this, ___comparer, method) (( void (*) (List_1_t1116 *, Object_t*, const MethodInfo*))List_1_Sort_m25151_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25152_gshared (List_1_t1116 * __this, Comparison_1_t3865 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25152(__this, ___comparison, method) (( void (*) (List_1_t1116 *, Comparison_1_t3865 *, const MethodInfo*))List_1_Sort_m25152_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t1239* List_1_ToArray_m25153_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_ToArray_m25153(__this, method) (( UICharInfoU5BU5D_t1239* (*) (List_1_t1116 *, const MethodInfo*))List_1_ToArray_m25153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m25154_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25154(__this, method) (( void (*) (List_1_t1116 *, const MethodInfo*))List_1_TrimExcess_m25154_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25155_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25155(__this, method) (( int32_t (*) (List_1_t1116 *, const MethodInfo*))List_1_get_Capacity_m25155_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25156_gshared (List_1_t1116 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25156(__this, ___value, method) (( void (*) (List_1_t1116 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25156_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m25157_gshared (List_1_t1116 * __this, const MethodInfo* method);
#define List_1_get_Count_m25157(__this, method) (( int32_t (*) (List_1_t1116 *, const MethodInfo*))List_1_get_Count_m25157_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t922  List_1_get_Item_m25158_gshared (List_1_t1116 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m25158(__this, ___index, method) (( UICharInfo_t922  (*) (List_1_t1116 *, int32_t, const MethodInfo*))List_1_get_Item_m25158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m25159_gshared (List_1_t1116 * __this, int32_t ___index, UICharInfo_t922  ___value, const MethodInfo* method);
#define List_1_set_Item_m25159(__this, ___index, ___value, method) (( void (*) (List_1_t1116 *, int32_t, UICharInfo_t922 , const MethodInfo*))List_1_set_Item_m25159_gshared)(__this, ___index, ___value, method)

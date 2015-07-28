#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t817;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t8855;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t5692;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t8856;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t8857;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t5696;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t5700;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>
struct IComparer_1_t8858;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t777;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m5484_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1__ctor_m5484(__this, method) (( void (*) (List_1_t817 *, const MethodInfo*))List_1__ctor_m5484_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27095_gshared (List_1_t817 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m27095(__this, ___collection, method) (( void (*) (List_1_t817 *, Object_t*, const MethodInfo*))List_1__ctor_m27095_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m27096_gshared (List_1_t817 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m27096(__this, ___capacity, method) (( void (*) (List_1_t817 *, int32_t, const MethodInfo*))List_1__ctor_m27096_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m27097_gshared (List_1_t817 * __this, RaycastResultU5BU5D_t5692* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m27097(__this, ___data, ___size, method) (( void (*) (List_1_t817 *, RaycastResultU5BU5D_t5692*, int32_t, const MethodInfo*))List_1__ctor_m27097_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m27098_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m27098(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m27098_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27099_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27099(__this, method) (( Object_t* (*) (List_1_t817 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27099_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27100_gshared (List_1_t817 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m27100(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t817 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m27100_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m27101_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27101(__this, method) (( Object_t * (*) (List_1_t817 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m27101_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m27102_gshared (List_1_t817 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m27102(__this, ___item, method) (( int32_t (*) (List_1_t817 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m27102_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m27103_gshared (List_1_t817 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m27103(__this, ___item, method) (( bool (*) (List_1_t817 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m27103_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m27104_gshared (List_1_t817 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m27104(__this, ___item, method) (( int32_t (*) (List_1_t817 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m27104_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m27105_gshared (List_1_t817 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m27105(__this, ___index, ___item, method) (( void (*) (List_1_t817 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m27105_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m27106_gshared (List_1_t817 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m27106(__this, ___item, method) (( void (*) (List_1_t817 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m27106_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27107_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27107(__this, method) (( bool (*) (List_1_t817 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m27108_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27108(__this, method) (( bool (*) (List_1_t817 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m27108_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m27109_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m27109(__this, method) (( Object_t * (*) (List_1_t817 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m27109_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m27110_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m27110(__this, method) (( bool (*) (List_1_t817 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m27110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m27111_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m27111(__this, method) (( bool (*) (List_1_t817 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m27111_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m27112_gshared (List_1_t817 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m27112(__this, ___index, method) (( Object_t * (*) (List_1_t817 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m27112_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m27113_gshared (List_1_t817 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m27113(__this, ___index, ___value, method) (( void (*) (List_1_t817 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m27113_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m27114_gshared (List_1_t817 * __this, RaycastResult_t811  ___item, const MethodInfo* method);
#define List_1_Add_m27114(__this, ___item, method) (( void (*) (List_1_t817 *, RaycastResult_t811 , const MethodInfo*))List_1_Add_m27114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m27115_gshared (List_1_t817 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m27115(__this, ___newCount, method) (( void (*) (List_1_t817 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m27115_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m27116_gshared (List_1_t817 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m27116(__this, ___idx, ___count, method) (( void (*) (List_1_t817 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m27116_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m27117_gshared (List_1_t817 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m27117(__this, ___collection, method) (( void (*) (List_1_t817 *, Object_t*, const MethodInfo*))List_1_AddCollection_m27117_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m27118_gshared (List_1_t817 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m27118(__this, ___enumerable, method) (( void (*) (List_1_t817 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m27118_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m27119_gshared (List_1_t817 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m27119(__this, ___collection, method) (( void (*) (List_1_t817 *, Object_t*, const MethodInfo*))List_1_AddRange_m27119_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5696 * List_1_AsReadOnly_m27120_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m27120(__this, method) (( ReadOnlyCollection_1_t5696 * (*) (List_1_t817 *, const MethodInfo*))List_1_AsReadOnly_m27120_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m27121_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_Clear_m27121(__this, method) (( void (*) (List_1_t817 *, const MethodInfo*))List_1_Clear_m27121_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m27122_gshared (List_1_t817 * __this, RaycastResult_t811  ___item, const MethodInfo* method);
#define List_1_Contains_m27122(__this, ___item, method) (( bool (*) (List_1_t817 *, RaycastResult_t811 , const MethodInfo*))List_1_Contains_m27122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m27123_gshared (List_1_t817 * __this, RaycastResultU5BU5D_t5692* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m27123(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t817 *, RaycastResultU5BU5D_t5692*, int32_t, const MethodInfo*))List_1_CopyTo_m27123_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t811  List_1_Find_m27124_gshared (List_1_t817 * __this, Predicate_1_t5700 * ___match, const MethodInfo* method);
#define List_1_Find_m27124(__this, ___match, method) (( RaycastResult_t811  (*) (List_1_t817 *, Predicate_1_t5700 *, const MethodInfo*))List_1_Find_m27124_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m27125_gshared (Object_t * __this /* static, unused */, Predicate_1_t5700 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m27125(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5700 *, const MethodInfo*))List_1_CheckMatch_m27125_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m27126_gshared (List_1_t817 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5700 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m27126(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t817 *, int32_t, int32_t, Predicate_1_t5700 *, const MethodInfo*))List_1_GetIndex_m27126_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t5694  List_1_GetEnumerator_m27127_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m27127(__this, method) (( Enumerator_t5694  (*) (List_1_t817 *, const MethodInfo*))List_1_GetEnumerator_m27127_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t817 * List_1_GetRange_m27128_gshared (List_1_t817 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m27128(__this, ___index, ___count, method) (( List_1_t817 * (*) (List_1_t817 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m27128_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m27129_gshared (List_1_t817 * __this, RaycastResult_t811  ___item, const MethodInfo* method);
#define List_1_IndexOf_m27129(__this, ___item, method) (( int32_t (*) (List_1_t817 *, RaycastResult_t811 , const MethodInfo*))List_1_IndexOf_m27129_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m27130_gshared (List_1_t817 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m27130(__this, ___start, ___delta, method) (( void (*) (List_1_t817 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m27130_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m27131_gshared (List_1_t817 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m27131(__this, ___index, method) (( void (*) (List_1_t817 *, int32_t, const MethodInfo*))List_1_CheckIndex_m27131_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m27132_gshared (List_1_t817 * __this, int32_t ___index, RaycastResult_t811  ___item, const MethodInfo* method);
#define List_1_Insert_m27132(__this, ___index, ___item, method) (( void (*) (List_1_t817 *, int32_t, RaycastResult_t811 , const MethodInfo*))List_1_Insert_m27132_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m27133_gshared (List_1_t817 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m27133(__this, ___collection, method) (( void (*) (List_1_t817 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m27133_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m27134_gshared (List_1_t817 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m27134(__this, ___index, ___collection, method) (( void (*) (List_1_t817 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m27134_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m27135_gshared (List_1_t817 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m27135(__this, ___index, ___collection, method) (( void (*) (List_1_t817 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m27135_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m27136_gshared (List_1_t817 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m27136(__this, ___index, ___enumerable, method) (( void (*) (List_1_t817 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m27136_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m27137_gshared (List_1_t817 * __this, RaycastResult_t811  ___item, const MethodInfo* method);
#define List_1_Remove_m27137(__this, ___item, method) (( bool (*) (List_1_t817 *, RaycastResult_t811 , const MethodInfo*))List_1_Remove_m27137_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m27138_gshared (List_1_t817 * __this, Predicate_1_t5700 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m27138(__this, ___match, method) (( int32_t (*) (List_1_t817 *, Predicate_1_t5700 *, const MethodInfo*))List_1_RemoveAll_m27138_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m27139_gshared (List_1_t817 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m27139(__this, ___index, method) (( void (*) (List_1_t817 *, int32_t, const MethodInfo*))List_1_RemoveAt_m27139_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m27140_gshared (List_1_t817 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m27140(__this, ___index, ___count, method) (( void (*) (List_1_t817 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m27140_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m27141_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_Reverse_m27141(__this, method) (( void (*) (List_1_t817 *, const MethodInfo*))List_1_Reverse_m27141_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m27142_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_Sort_m27142(__this, method) (( void (*) (List_1_t817 *, const MethodInfo*))List_1_Sort_m27142_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m27143_gshared (List_1_t817 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m27143(__this, ___comparer, method) (( void (*) (List_1_t817 *, Object_t*, const MethodInfo*))List_1_Sort_m27143_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m5445_gshared (List_1_t817 * __this, Comparison_1_t777 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m5445(__this, ___comparison, method) (( void (*) (List_1_t817 *, Comparison_1_t777 *, const MethodInfo*))List_1_Sort_m5445_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t5692* List_1_ToArray_m27144_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_ToArray_m27144(__this, method) (( RaycastResultU5BU5D_t5692* (*) (List_1_t817 *, const MethodInfo*))List_1_ToArray_m27144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m27145_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m27145(__this, method) (( void (*) (List_1_t817 *, const MethodInfo*))List_1_TrimExcess_m27145_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m27146_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m27146(__this, method) (( int32_t (*) (List_1_t817 *, const MethodInfo*))List_1_get_Capacity_m27146_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m27147_gshared (List_1_t817 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m27147(__this, ___value, method) (( void (*) (List_1_t817 *, int32_t, const MethodInfo*))List_1_set_Capacity_m27147_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m27148_gshared (List_1_t817 * __this, const MethodInfo* method);
#define List_1_get_Count_m27148(__this, method) (( int32_t (*) (List_1_t817 *, const MethodInfo*))List_1_get_Count_m27148_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t811  List_1_get_Item_m27149_gshared (List_1_t817 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m27149(__this, ___index, method) (( RaycastResult_t811  (*) (List_1_t817 *, int32_t, const MethodInfo*))List_1_get_Item_m27149_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m27150_gshared (List_1_t817 * __this, int32_t ___index, RaycastResult_t811  ___value, const MethodInfo* method);
#define List_1_set_Item_m27150(__this, ___index, ___value, method) (( void (*) (List_1_t817 *, int32_t, RaycastResult_t811 , const MethodInfo*))List_1_set_Item_m27150_gshared)(__this, ___index, ___value, method)

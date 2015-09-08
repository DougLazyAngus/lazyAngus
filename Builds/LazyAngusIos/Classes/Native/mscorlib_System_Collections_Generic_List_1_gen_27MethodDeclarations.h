#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t904;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t9596;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t6354;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t9597;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t9598;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t6358;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t6362;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>
struct IComparer_1_t9599;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t864;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m5985_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1__ctor_m5985(__this, method) (( void (*) (List_1_t904 *, const MethodInfo*))List_1__ctor_m5985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m32568_gshared (List_1_t904 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m32568(__this, ___collection, method) (( void (*) (List_1_t904 *, Object_t*, const MethodInfo*))List_1__ctor_m32568_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m32569_gshared (List_1_t904 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m32569(__this, ___capacity, method) (( void (*) (List_1_t904 *, int32_t, const MethodInfo*))List_1__ctor_m32569_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m32570_gshared (List_1_t904 * __this, RaycastResultU5BU5D_t6354* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m32570(__this, ___data, ___size, method) (( void (*) (List_1_t904 *, RaycastResultU5BU5D_t6354*, int32_t, const MethodInfo*))List_1__ctor_m32570_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m32571_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m32571(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m32571_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32572_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32572(__this, method) (( Object_t* (*) (List_1_t904 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32572_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m32573_gshared (List_1_t904 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m32573(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t904 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m32573_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m32574_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32574(__this, method) (( Object_t * (*) (List_1_t904 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m32574_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m32575_gshared (List_1_t904 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m32575(__this, ___item, method) (( int32_t (*) (List_1_t904 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m32575_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m32576_gshared (List_1_t904 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m32576(__this, ___item, method) (( bool (*) (List_1_t904 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m32576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m32577_gshared (List_1_t904 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m32577(__this, ___item, method) (( int32_t (*) (List_1_t904 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m32577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m32578_gshared (List_1_t904 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m32578(__this, ___index, ___item, method) (( void (*) (List_1_t904 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m32578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m32579_gshared (List_1_t904 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m32579(__this, ___item, method) (( void (*) (List_1_t904 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m32579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32580_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32580(__this, method) (( bool (*) (List_1_t904 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32580_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m32581_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32581(__this, method) (( bool (*) (List_1_t904 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m32581_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m32582_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m32582(__this, method) (( Object_t * (*) (List_1_t904 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m32582_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m32583_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m32583(__this, method) (( bool (*) (List_1_t904 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m32583_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m32584_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m32584(__this, method) (( bool (*) (List_1_t904 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m32584_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m32585_gshared (List_1_t904 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m32585(__this, ___index, method) (( Object_t * (*) (List_1_t904 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m32585_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m32586_gshared (List_1_t904 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m32586(__this, ___index, ___value, method) (( void (*) (List_1_t904 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m32586_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m32587_gshared (List_1_t904 * __this, RaycastResult_t898  ___item, const MethodInfo* method);
#define List_1_Add_m32587(__this, ___item, method) (( void (*) (List_1_t904 *, RaycastResult_t898 , const MethodInfo*))List_1_Add_m32587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m32588_gshared (List_1_t904 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m32588(__this, ___newCount, method) (( void (*) (List_1_t904 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m32588_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m32589_gshared (List_1_t904 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m32589(__this, ___idx, ___count, method) (( void (*) (List_1_t904 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m32589_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m32590_gshared (List_1_t904 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m32590(__this, ___collection, method) (( void (*) (List_1_t904 *, Object_t*, const MethodInfo*))List_1_AddCollection_m32590_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m32591_gshared (List_1_t904 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m32591(__this, ___enumerable, method) (( void (*) (List_1_t904 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m32591_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m32592_gshared (List_1_t904 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m32592(__this, ___collection, method) (( void (*) (List_1_t904 *, Object_t*, const MethodInfo*))List_1_AddRange_m32592_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6358 * List_1_AsReadOnly_m32593_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m32593(__this, method) (( ReadOnlyCollection_1_t6358 * (*) (List_1_t904 *, const MethodInfo*))List_1_AsReadOnly_m32593_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m32594_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_Clear_m32594(__this, method) (( void (*) (List_1_t904 *, const MethodInfo*))List_1_Clear_m32594_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m32595_gshared (List_1_t904 * __this, RaycastResult_t898  ___item, const MethodInfo* method);
#define List_1_Contains_m32595(__this, ___item, method) (( bool (*) (List_1_t904 *, RaycastResult_t898 , const MethodInfo*))List_1_Contains_m32595_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m32596_gshared (List_1_t904 * __this, RaycastResultU5BU5D_t6354* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m32596(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t904 *, RaycastResultU5BU5D_t6354*, int32_t, const MethodInfo*))List_1_CopyTo_m32596_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t898  List_1_Find_m32597_gshared (List_1_t904 * __this, Predicate_1_t6362 * ___match, const MethodInfo* method);
#define List_1_Find_m32597(__this, ___match, method) (( RaycastResult_t898  (*) (List_1_t904 *, Predicate_1_t6362 *, const MethodInfo*))List_1_Find_m32597_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m32598_gshared (Object_t * __this /* static, unused */, Predicate_1_t6362 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m32598(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6362 *, const MethodInfo*))List_1_CheckMatch_m32598_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m32599_gshared (List_1_t904 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6362 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m32599(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t904 *, int32_t, int32_t, Predicate_1_t6362 *, const MethodInfo*))List_1_GetIndex_m32599_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t6356  List_1_GetEnumerator_m32600_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m32600(__this, method) (( Enumerator_t6356  (*) (List_1_t904 *, const MethodInfo*))List_1_GetEnumerator_m32600_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t904 * List_1_GetRange_m32601_gshared (List_1_t904 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m32601(__this, ___index, ___count, method) (( List_1_t904 * (*) (List_1_t904 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m32601_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m32602_gshared (List_1_t904 * __this, RaycastResult_t898  ___item, const MethodInfo* method);
#define List_1_IndexOf_m32602(__this, ___item, method) (( int32_t (*) (List_1_t904 *, RaycastResult_t898 , const MethodInfo*))List_1_IndexOf_m32602_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m32603_gshared (List_1_t904 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m32603(__this, ___start, ___delta, method) (( void (*) (List_1_t904 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m32603_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m32604_gshared (List_1_t904 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m32604(__this, ___index, method) (( void (*) (List_1_t904 *, int32_t, const MethodInfo*))List_1_CheckIndex_m32604_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m32605_gshared (List_1_t904 * __this, int32_t ___index, RaycastResult_t898  ___item, const MethodInfo* method);
#define List_1_Insert_m32605(__this, ___index, ___item, method) (( void (*) (List_1_t904 *, int32_t, RaycastResult_t898 , const MethodInfo*))List_1_Insert_m32605_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m32606_gshared (List_1_t904 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m32606(__this, ___collection, method) (( void (*) (List_1_t904 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m32606_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m32607_gshared (List_1_t904 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m32607(__this, ___index, ___collection, method) (( void (*) (List_1_t904 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m32607_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m32608_gshared (List_1_t904 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m32608(__this, ___index, ___collection, method) (( void (*) (List_1_t904 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m32608_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m32609_gshared (List_1_t904 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m32609(__this, ___index, ___enumerable, method) (( void (*) (List_1_t904 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m32609_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m32610_gshared (List_1_t904 * __this, RaycastResult_t898  ___item, const MethodInfo* method);
#define List_1_Remove_m32610(__this, ___item, method) (( bool (*) (List_1_t904 *, RaycastResult_t898 , const MethodInfo*))List_1_Remove_m32610_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m32611_gshared (List_1_t904 * __this, Predicate_1_t6362 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m32611(__this, ___match, method) (( int32_t (*) (List_1_t904 *, Predicate_1_t6362 *, const MethodInfo*))List_1_RemoveAll_m32611_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m32612_gshared (List_1_t904 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m32612(__this, ___index, method) (( void (*) (List_1_t904 *, int32_t, const MethodInfo*))List_1_RemoveAt_m32612_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m32613_gshared (List_1_t904 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m32613(__this, ___index, ___count, method) (( void (*) (List_1_t904 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m32613_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m32614_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_Reverse_m32614(__this, method) (( void (*) (List_1_t904 *, const MethodInfo*))List_1_Reverse_m32614_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m32615_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_Sort_m32615(__this, method) (( void (*) (List_1_t904 *, const MethodInfo*))List_1_Sort_m32615_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m32616_gshared (List_1_t904 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m32616(__this, ___comparer, method) (( void (*) (List_1_t904 *, Object_t*, const MethodInfo*))List_1_Sort_m32616_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m5946_gshared (List_1_t904 * __this, Comparison_1_t864 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m5946(__this, ___comparison, method) (( void (*) (List_1_t904 *, Comparison_1_t864 *, const MethodInfo*))List_1_Sort_m5946_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t6354* List_1_ToArray_m32617_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_ToArray_m32617(__this, method) (( RaycastResultU5BU5D_t6354* (*) (List_1_t904 *, const MethodInfo*))List_1_ToArray_m32617_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m32618_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m32618(__this, method) (( void (*) (List_1_t904 *, const MethodInfo*))List_1_TrimExcess_m32618_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m32619_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m32619(__this, method) (( int32_t (*) (List_1_t904 *, const MethodInfo*))List_1_get_Capacity_m32619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m32620_gshared (List_1_t904 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m32620(__this, ___value, method) (( void (*) (List_1_t904 *, int32_t, const MethodInfo*))List_1_set_Capacity_m32620_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m32621_gshared (List_1_t904 * __this, const MethodInfo* method);
#define List_1_get_Count_m32621(__this, method) (( int32_t (*) (List_1_t904 *, const MethodInfo*))List_1_get_Count_m32621_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t898  List_1_get_Item_m32622_gshared (List_1_t904 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m32622(__this, ___index, method) (( RaycastResult_t898  (*) (List_1_t904 *, int32_t, const MethodInfo*))List_1_get_Item_m32622_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m32623_gshared (List_1_t904 * __this, int32_t ___index, RaycastResult_t898  ___value, const MethodInfo* method);
#define List_1_set_Item_m32623(__this, ___index, ___value, method) (( void (*) (List_1_t904 *, int32_t, RaycastResult_t898 , const MethodInfo*))List_1_set_Item_m32623_gshared)(__this, ___index, ___value, method)
